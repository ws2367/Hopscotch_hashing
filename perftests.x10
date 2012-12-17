import CHashMap;
import x10.lang.Rail;
import x10.util.Random;
import x10.io.Console;
import x10.util.Pair;
import x10.util.Timer;
import x10.util.HashMap;



public class perftests {
  public static def main(args: Array[String]) {
        
    val argc:Int = args.size;
    if(argc<3){
      Console.ERR.println("Usage: perftests <num operations> <% adds> <% removes>");
      return;
    }
    
    // get all important input variables
    val nOperations<:Int = Int.parse(args(0));
    val nAdds<:Int       = (nOperations*Double.parse(args(1))) as Int; 
    val nRemoves<:Int    = (nOperations*Double.parse(args(2))) as Int;
    val nLookups<:Int    = nOperations-nAdds-nRemoves;
    val nNeighbors<:Int  = 32;
    val nElements<:Int   = 128;
    
    val seed<:Long = System.nanoTime();
    
    
    //================================Testing for our own CHashMap==============
    
    var rand:Random = new Random(seed);
    	
    	
    val hashMap = new CHashMap[Int,Int](nNeighbors, nElements);
    	
    var keys:Rail[Int] = new Rail[Int](nAdds);
    var values:Rail[Int] = new Rail[Int](nAdds);
    	
    //Initialize random keys-values pairs to be inserted into our Hashmap
    // All keys and values will be integers
    
    for(var i:Int = 0; i<nAdds; i++){
      keys(i) = rand.nextInt();
      values(i) = rand.nextInt();
    }
    
    var start:Long;
    var end:Long;
    var addTime:Long;
    var lookupTime:Long;
    var deleteTime:Long;
    var lookupTime2:Long;
    
    //=====================Insertion Test=======================
    start = Timer.milliTime();
    for(var i:Int = 0; i<nAdds; i++){
      hashMap.add(keys(i), values(i));
    }
    end = Timer.milliTime();
    addTime = end-start;
    
    
    //=====================Lookup Test=======================
    start = Timer.milliTime();
    for(var i:Int=0; i<nLookups; i++ ){
      val r = rand.nextInt(keys.size);
      val key = keys(r);
      hashMap.get(key);
    }
    end = Timer.milliTime();
    lookupTime = end-start;
    
    var beenRemoved:Array[Boolean] = new Array[Boolean](keys.size, false);
    var controlBeenRemoved:Array[Boolean] = new Array[Boolean](keys.size, false);
    
    //=====================Deletion Test=======================
    start = Timer.milliTime();
    for (var i:Int = 0; i<nRemoves; i++){
      val r = rand.nextInt(keys.size);
      val key = keys(r);
      hashMap.remove(key);
      beenRemoved(r) = true;
    }
    end = Timer.milliTime();
    deleteTime = end-start;
    
    //=====================Lookup Test Once More=======================
    start = Timer.milliTime();
    for(var i:Int=0; i<nLookups; i++ ){
    	val r = rand.nextInt(keys.size);
    	val key = keys(r);
    	hashMap.get(key);
    }
    end = Timer.milliTime();
    lookupTime2 = end-start;
    
    Console.OUT.println("Time for our CHashMap:");
    Console.OUT.println(addTime+"ms for "+nAdds+" insertions.");
    Console.OUT.println(lookupTime+"ms for "+nLookups+" random lookups before any deletion.");
    Console.OUT.println(deleteTime+"ms for "+nRemoves+" random deletions.");
    Console.OUT.println(lookupTime2+"ms for "+nLookups+" random lookups after deletions.");
    
    
    
    
    
    //================================Testing for Built-in HashMap==============
    
    rand = new Random(seed);
    	
    	
    val oldHashMap = new HashMap[Int,Int](128);
    	
    keys = new Rail[Int](nAdds);
    values = new Rail[Int](nAdds);
    	
    //Initialize random keys-values pairs to be inserted into our Hashmap
    // All keys and values will be integers
    for(var i:Int = 0; i<nAdds; i++){
      keys(i) = rand.nextInt();
      values(i) = rand.nextInt();
    }
    
    
    //=====================Insertion Test=======================
    start = Timer.milliTime();
    for(var i:Int = 0; i<nAdds; i++){
      oldHashMap.put(keys(i), values(i));
    }
    end = Timer.milliTime();
    addTime = end-start;
    
    //=====================Lookup Test=======================
    start = Timer.milliTime();
    for(var i:Int=0; i<nLookups; i++ ){
      val r = rand.nextInt(keys.size);
      val key = keys(r);
      oldHashMap.get(key);
    }
    end = Timer.milliTime();
    lookupTime = end-start;
    
    beenRemoved = new Array[Boolean](keys.size, false);
    controlBeenRemoved = new Array[Boolean](keys.size, false);
    
    //=====================Deletion Test=======================
    start = Timer.milliTime();
    for (var i:Int = 0; i<nRemoves; i++){
      val r = rand.nextInt(keys.size);
      val key = keys(r);
      oldHashMap.remove(key);
      beenRemoved(r) = true;
    }
    end = Timer.milliTime();
    deleteTime = end-start;
    
    //=====================Lookup Test Once More=======================
    start = Timer.milliTime();
    for(var i:Int=0; i<nLookups; i++ ){
    	val r = rand.nextInt(keys.size);
    	val key = keys(r);
    	oldHashMap.get(key);
    }
    end = Timer.milliTime();
    lookupTime2 = end-start;
    
    Console.OUT.println("Time for Built-in HashMap:");
    Console.OUT.println(addTime+"ms for "+nAdds+" insertions.");
    Console.OUT.println(lookupTime+"ms for "+nLookups+" random lookups before any deletion.");
    Console.OUT.println(deleteTime+"ms for "+nRemoves+" random deletions.");
    Console.OUT.println(lookupTime2+"ms for "+nLookups+" random lookups after deletions.");
    
    
    
    
  }
}
