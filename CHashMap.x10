/*
* Concurrent HashMap
* by Daniel Perlmutter <dperlmut@gmail.com>, Joaquin Ruales <joaqo182@gmail.com>, and Wen-Hsiang Shaw <wenhshiang.Shaw@gmail.com>
*
*
*/

import x10.io.Console;

public class CHashMap[K, V] {
  private static val DEFAULT_NUM_BUCKETS = 128;
  private static val MAX_SEGMENTS = 1000000;
  private static val RESIZE_FACTOR = 2;
  static val NEIGHBORHOOD_SIZE = 4;
	
  //========= instance variables =========
  private var buckets:Rail[CEntry[K, V]];
  private var numSegments:Int = 1;
  static val isDebugging = false; 
  //var nullEntry:CEntry[K, V];
  
  //========= class methods =========
  public def this() {
    buckets = new Rail[CEntry[K,V]](DEFAULT_NUM_BUCKETS);
    //nullEntry = new CEntry[K, V]();
    //nullEntry.isNull = true;
  }  

  //Given a key computes which bucket to put it in	
  private def getBucketIndexFromKey(key:K):Int {
    return getBucketIndexFromKey(key, numSegments);
  }

  //See above
  private def getBucketIndexFromKey(key:K, oldNumSegments:Int):Int {
    var hash:Int = (key.hashCode() % buckets.size);
    if (hash < 0) {
      hash += buckets.size;
    }
    var segment:Int = hash % oldNumSegments;
    if (segment < 0) {
      segment += oldNumSegments;
    }
    val bucket = hash / oldNumSegments;
    return DEFAULT_NUM_BUCKETS * segment + bucket;
  }

  //A bucket is considered empty if it has no entry or the entry has a null key
  //A bucket is also considered empty if the virtual bucket associated with its key does not indicate this bucket to be filled in its bitmap
  //The value of a bucket is irrelevant if it is empty
  private def empty(bucket:Int):Boolean {
    return empty(bucket, buckets, numSegments);
  }

  //See above
  private def empty(bucket:Int, oldBuckets:Rail[CEntry[K, V]], oldNumSegments:Int):Boolean {
    return (oldBuckets(bucket) == null || oldBuckets(bucket).isNull);
  }

  //Moves the value in the new bucket to the empty bucket and updates the virtual bucket's bitmap
  private def swap(newBucket:Int, emptyBucket:Int) {
    if(isDebugging) Console.OUT.print("SWAPPING " + newBucket + " AND " + emptyBucket + "...");
    val key = buckets(newBucket).getKey();
    val value = buckets(newBucket).getValue();
    buckets(emptyBucket) = new CEntry[K,V](key, value);
    val virtualBucket = getBucketIndexFromKey(key);
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
          val delta = buckets(index).getFirstEntry();
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
  //Console.OUT.println();

    val bucket = getBucketIndexFromKey(key);
    var currentBucket:Int = bucket;
    if(isDebugging) Console.OUT.println("TRYING TO ADD TO BUCKET " + bucket + " VALUE " + value);
    
    
    //Check if key is already in the HashMap, then replace value if it is
    val actualBucketOrSomething = getActualBucket(key);
    if(actualBucketOrSomething!=-1){
      buckets(actualBucketOrSomething).setValue(value);
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

  //Returns the actual bucket associated with a given key of -1 if the key is not in the hash map 
  public def getActualBucket(key:K):Int {
    val virtualBucket = getBucketIndexFromKey(key);
    for (var offset:Int = 0; offset < NEIGHBORHOOD_SIZE; offset++) {
      val testBucket = virtualBucket + offset;
    if(testBucket>=0 && testBucket<buckets.size )
      if (!empty(testBucket))
        if(buckets(testBucket).getKey().equals(key)) {
            return testBucket;
      }
    }
    return -1;
  }

  //Returns the value associated with the given key, or null if nonexistent
  public def get(key:K) {
    val actualBucket<:Int = getActualBucket(key);
    return (actualBucket==-1)?null:buckets(actualBucket).getValue();
  }

  //Removes the entry with the given key from the hash table.
  //Returns the value associated with the removed key or null if no entry has the given key
  public def remove(key:K) {
    val virtualBucket = getBucketIndexFromKey(key);
    //if(isDebugging) Console.OUT.println("virtual bucket:"+virtualBucket + " "+((buckets(virtualBucket)==null)?"OMG virtual bucket's null yo!":""));
    if(isDebugging) Console.OUT.println("TRYING TO REMOVE KEY " + key);
    val actualBucket = getActualBucket(key);
    if(actualBucket ==-1){
    	if(isDebugging) Console.OUT.println("KEY NOT FOUND");
      return null;
    } else {
      //if(isDebugging) Console.OUT.println("actual bucket:"+actualBucket + " "+((buckets(actualBucket)==null)?"OMG actual bucket's null yo!":""));
      buckets(virtualBucket).setBit(actualBucket - virtualBucket, false);
      val value = buckets(actualBucket).getValue();
      buckets(actualBucket).isNull = true;
      if(isDebugging) Console.OUT.println("KEY REMOVED");
      return value;
    }
  }

  private def shrink() {
    val old = buckets;
    buckets = new Rail[CEntry[K,V]](buckets.size/RESIZE_FACTOR);
    //TODO it might be better, instead of storing old buckets and segments here, to overload add letting it take the buckets to add too.  That way we can do something like newBuckets = new Rail.... and then do all this code without passing the old values and finally say buckets = newBuckets at the end.  The same can be done for grow.
    val oldNumSegments = numSegments;
    numSegments /= RESIZE_FACTOR;
    //rehashing
    for(var i:Int = 0; i<old.size; i++){
      if( !empty(i, old, oldNumSegments) )
        add(old(i).getKey(), old(i).getValue());
    }
  }
	
  private def grow() {
    if(isDebugging) Console.OUT.println("GROWING HASH MAP");
    val old = buckets;
    buckets = new Rail[CEntry[K,V]](buckets.size*RESIZE_FACTOR);
    val oldNumSegments = numSegments;
    numSegments *= RESIZE_FACTOR;
    if (numSegments > CHashMap.MAX_SEGMENTS) {
      throw new RuntimeException("Too many items hash to the same value.  Increase the neighborhood size.");
    }
    //rehashing
    for(var i:Int = 0; i< old.size; i++){
      if( !empty(i, old, oldNumSegments) )
        add( old(i).getKey(), old(i).getValue());
    }
  }
}

class CEntry[K, V] {
  //========= instance variables =========
  private var key:K;
  private var value:V;
  private var bitmap:Rail[Boolean];
  public var isNull:Boolean = false;

  //========= class methods =========
  

  public def this(_key:K, _value:V) {
    key = _key;
    value = _value;
    bitmap = new Rail[Boolean](CHashMap.NEIGHBORHOOD_SIZE);
    for (var index:Int = 0; index < CHashMap.NEIGHBORHOOD_SIZE; index++) {
      bitmap(index) = false;
    }
  }

  public def getKey():K {
    if(isNull){
      //throw exception
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
      //throw exception
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

  public def getFirstEntry() {
    for (var index:Int = 0; index < CHashMap.NEIGHBORHOOD_SIZE; index++) {
      if (bitmap(index)) {
        return index;
      }
    }
    return -1;
  }
}
