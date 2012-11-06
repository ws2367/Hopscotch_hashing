/*
*
* Concurrent HashMap
* by Daniel Perlmutter <dperlmut@gmail.com>, Joaquin Ruales <joaqo182@gmail.com>, and Wen-Hsiang Shaw <wenhshiang.Shaw@gmail.com>
*
*/

import x10.io.Console;
import x10.util.concurrent.Lock;
import x10.util.Timer;
import x10.util.Random;

public class CHashMap[K, V] {
  private static val DEFAULT_NUM_BUCKETS = 128;
  private static val MAX_SEGMENTS = 1000000;
  private static val RESIZE_FACTOR = 2;
  static val NEIGHBORHOOD_SIZE = 4;
	
  //========= instance variables =========
  private var buckets:Rail[CEntry[K, V]];
  private var numSegments:Int = 1;
  private var rand:Random = new Random(System.nanoTime());
  private var offset:Int = 0;
  static val isDebugging = false; 
  
  //========= class methods =========
  public def this() {
    buckets = new Rail[CEntry[K,V]](DEFAULT_NUM_BUCKETS);
  }  

  //Returns the smallest positive value that is congruent to m modulo n
  private def posMod(m:Int ,n:Int) {
    var modVal:Int = m % n;
    if (modVal < 0) {
      modVal += n;
    }
    return modVal;
  }

  //Given a key computes which bucket to put it in	
  private def getBucketIndexFromKey(key:K):Int {
    var hash:Int = posMod((key.hashCode() + offset), buckets.size);
    var segment:Int = posMod(hash, numSegments);
    val bucket<:Int = hash / numSegments;
    return DEFAULT_NUM_BUCKETS * segment + bucket;
  }

  //A bucket is considered empty if it has no entry or the entry has a null key
  //A bucket is also considered empty if the virtual bucket associated with its key does not indicate this bucket to be filled in its bitmap
  //The value of a bucket is irrelevant if it is empty
  private def empty(bucket:Int):Boolean {
    return empty(bucket, buckets);
  }

  //See above
  private def empty(bucket:Int, currentBuckets:Rail[CEntry[K, V]]):Boolean {
    return (currentBuckets(bucket) == null || currentBuckets(bucket).isNull);
  }

  //Moves the value in the new bucket to the empty bucket and updates the virtual bucket's bitmap
  private def swap(newBucket:Int, emptyBucket:Int) {
    if(isDebugging) Console.OUT.print("SWAPPING " + newBucket + " AND " + emptyBucket + "...");
    val key<:K = buckets(newBucket).getKey();
    val value<:V = buckets(newBucket).getValue();
    buckets(emptyBucket) = new CEntry[K,V](key, value);
    val virtualBucket<:Int = getBucketIndexFromKey(key);
    buckets(virtualBucket).setBit(emptyBucket - virtualBucket, true);
    buckets(virtualBucket).setBit(newBucket - virtualBucket, false);
    buckets(newBucket).isNull = true;
    if(isDebugging) Console.OUT.print("SWAP DONE ");
  }

  //Hops the empty bucket back to be closer to the desired bucket
  //Returns the index of the new empty bucket of -1 if the empty bucket could not be hopped back
  //Hops the empty bucket back to be closer to the desired bucket
  //Returns the index of the new empty bucket of -1 if the empty bucket could not be hopped back
  private def hop(desiredBucket:Int, emptyBucket:Int):Int {
    if(isDebugging) Console.OUT.print("HOPPING " + emptyBucket + " BACK TO " + desiredBucket + "...");
    if (emptyBucket < getBucketIndexFromKey(buckets(desiredBucket).getKey()) + NEIGHBORHOOD_SIZE) {
      swap(desiredBucket, emptyBucket);
      if(isDebugging) Console.OUT.println("HOP DONE");
      return desiredBucket;
    } else {
      var newBucket:Int = emptyBucket;
      for (var index:Int = emptyBucket - NEIGHBORHOOD_SIZE + 1; index < emptyBucket; index++) {
        if (empty(index)) {
          newBucket = index;
          break;
        } else {
          val delta<:Int = buckets(index).getFirstEntry();
          if (delta >= 0  && (index + delta) < emptyBucket) {
            newBucket = index + delta;
            break;
          }
        }
      } 
      if (newBucket < emptyBucket) { 
        if (!empty(newBucket)) {
          swap(newBucket, emptyBucket);
        }
        return newBucket;
      } else {
        if(isDebugging) Console.OUT.println("FAILED");
        return -1;
      }
    }
  }

  //Adds a given key and value to the hash table
  public def add(key:K, value:V) {
    atomic {
      val bucket<:Int = getBucketIndexFromKey(key);
      var currentBucket:Int = bucket;
      if(isDebugging) Console.OUT.println("TRYING TO ADD TO BUCKET " + bucket + " VALUE " + value);
    
    
      //Check if key is already in the HashMap, then replace value if it is
      val actualBucket<:Int = getActualBucket(key);
      if(actualBucket != -1){
        buckets(actualBucket).setValue(value);
        return;
      }

      //Find an empty bucket
      while (currentBucket < buckets.size && !empty(currentBucket)) {
        currentBucket++;
      }

      //Hop the empty bucket back and place the new entry in it
      if (currentBucket >= buckets.size) {
        grow();
        add(key, value);
      } else if (currentBucket < bucket + NEIGHBORHOOD_SIZE) {
        buckets(currentBucket) = new CEntry[K,V](key, value);
        buckets(bucket).setBit(currentBucket - bucket, true);
        if(isDebugging) Console.OUT.println("ADDED TO " + currentBucket + " with value " + buckets(currentBucket).getValue());
      } else {
        while(currentBucket != bucket) {
          currentBucket = hop(bucket, currentBucket);
          if (currentBucket == -1) {
            grow();
            add(key, value);
            return;
            //currentBucket = bucket;
          }
        }
        buckets(bucket).setKey(key);
        buckets(bucket).setValue(value);
        buckets(bucket).setBit(0, true);
        if(isDebugging) Console.OUT.println("ADDED TOO " + bucket + " with value "+ buckets(bucket).getValue());
      }
    }                      
  }

  //Returns the actual bucket associated with a given key of -1 if the key is not in the hash map 
  public def getActualBucket(key:K):Int {
    val virtualBucket<:Int = getBucketIndexFromKey(key);
    for (var offset:Int = 0; offset < NEIGHBORHOOD_SIZE; offset++) {
      val testBucket = virtualBucket + offset;
    if(testBucket >=0 && testBucket < buckets.size )
      if (!empty(testBucket))
        if(buckets(testBucket).getKey().equals(key)) {
            return testBucket;
        }
    }
    return -1;
  }

  //Returns the value associated with the given key, or null if nonexistent
  public def get(key:K) {
    atomic {
      val actualBucket<:Int = getActualBucket(key);
      return (actualBucket == -1) ? null : buckets(actualBucket).getValue();
    }
  }

  //Removes the entry with the given key from the hash table.
  //Returns the value associated with the removed key or null if no entry has the given key
  public def remove(key:K) {
    val virtualBucket<:Int = getBucketIndexFromKey(key);
    
    //No add function has new the entry yet. 
    //Therefore, there is no such key that corresponds to this hash code(virtualBucket).
    if(buckets(virtualBucket)==null) return null;
    else buckets(virtualBucket).getLock();   
     
    if(isDebugging) 
      Console.OUT.println("TRYING TO REMOVE KEY " + key);

    val actualBucket<:Int = getActualBucket(key);
    
    if(actualBucket == -1){
      if(isDebugging) Console.OUT.println("KEY NOT FOUND");
      buckets(virtualBucket).releaseLock();
      return null;
    } else {
      buckets(virtualBucket).setTimestamp();//To warn get() function that the bucket has been changed.
      buckets(virtualBucket).setBit(actualBucket - virtualBucket, false);
      val value = buckets(actualBucket).getValue();
      buckets(actualBucket).isNull = true;
      buckets(virtualBucket).releaseLock();
      if(isDebugging) Console.OUT.println("KEY REMOVED");
      return value;
    }
    
  }
  
  private def getLocksOfAllNeighbors(virtualBucket:Int){
    for (var offset:Int = 0; offset < NEIGHBORHOOD_SIZE; offset++) {
      val testBucket = virtualBucket + offset;
      if(testBucket >=0 && testBucket < buckets.size )
        if (!empty(testBucket)) 
        //We don't allow add() to add the key which is supposed to be removed while we are executing remove(). 
        //So we acquire all the locks in the neighborhood, even if it is an empty bucket.
        buckets(testBucket).getLock();
    }
  }
  
  private def releaseLocksOfAllNeighbors(virtualBucket:Int){
    for (var offset:Int = 0; offset < NEIGHBORHOOD_SIZE; offset++) {
      val testBucket = virtualBucket + offset;
      if(testBucket >=0 && testBucket < buckets.size )
        if (!empty(testBucket)) 
          buckets(testBucket).releaseLock();
    }
  }
  //Reshash all the from the old backing array
  private def rehash(oldBuckets:Rail[CEntry[K,V]]) {
    offset = rand.nextInt();
    for(var i:Int = 0; i < oldBuckets.size; i++) {
      if(!empty(i, oldBuckets)) {
        add(oldBuckets(i).getKey(), oldBuckets(i).getValue());
      }
    }
  }

  //Shrink the backing array by the resize factor
  private def shrink() { 
    if(isDebugging) {
      Console.OUT.println("SHRINKING HASH MAP");
    }

    atomic {
      val oldBuckets<:Rail[CEntry[K,V]] = buckets;
      buckets = new Rail[CEntry[K,V]](buckets.size / RESIZE_FACTOR);
      numSegments /= RESIZE_FACTOR;
      rehash(oldBuckets);
    }
  }
	
  //Grow the backing array by the resive factor
  private def grow() {
    if(isDebugging) {
      Console.OUT.println("GROWING HASH MAP");
    }

    atomic {
      val oldBuckets<:Rail[CEntry[K,V]] = buckets;
      buckets = new Rail[CEntry[K,V]](buckets.size * RESIZE_FACTOR);
      numSegments *= RESIZE_FACTOR;
      if (numSegments > CHashMap.MAX_SEGMENTS) {
        throw new RuntimeException("Too many items hash to the same value.  Increase the neighborhood size or maximum number of segments.");
      }
      rehash(oldBuckets);
    }
  }
}

class CEntry[K, V] {
  //========= instance variables =========
  private var key:K;
  private var value:V;
  private var bitmap:Rail[Boolean];
  private var lock:Lock = new Lock();
  private var timestamp:Long;
  public var isNull:Boolean = false;
  public var isBusy:Boolean = false;

  //========= class methods =========
  public def this(_key:K, _value:V) {
    key = _key;
    value = _value;
    bitmap = new Rail[Boolean](CHashMap.NEIGHBORHOOD_SIZE);
    for (var index:Int = 0; index < CHashMap.NEIGHBORHOOD_SIZE; index++) {
      bitmap(index) = false;
    }
    timestamp = Timer.nanoTime();
  }

  public def getKey():K {
    if(isNull){
      throw new RuntimeException("Accessing key of a null entry");
    }
    return key;
  }
  public def setKey(_key:K){
    isNull = false;
    key = _key;
  }	

  public def getValue():V {
    if(isNull){
      throw new RuntimeException("Accessing value of a null entry");
    }
    return value;
  }
  public def setValue(_value:V){
    value = _value;
  }

  public def getBitmap():Rail[Boolean] {
    return bitmap;
  }

  public def setBit(index:Int, bit:Boolean) {
    bitmap(index) = bit; 
  }

  public def getLock(){
    lock.lock();
  }
  
  public def tryLock():Boolean{
    return lock.tryLock();
  }
  
  public def releaseLock(){
    lock.unlock();
  }
  
  public def setTimestamp(){
    timestamp = Timer.nanoTime();
  }
  
  public def getTimestamp():Long{
    return timestamp;
  }
  
  //Returns the offset of the closest actual bucket mapped to this virtual bucket or -1 if nothing is mapped to this virtual bucket
  public def getFirstEntry() {
    for (var index:Int = 0; index < CHashMap.NEIGHBORHOOD_SIZE; index++) {
      if (bitmap(index)) {
        return index;
      }
    }
    return -1;
  }
}
