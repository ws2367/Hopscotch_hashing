import CHashMap;
import x10.lang.Rail;
import x10.util.Random;
import x10.io.Console;
import x10.util.Pair;
import x10.util.Timer;
import x10.util.HashMap;



public class ntests {
  public static def main(args: Array[String]) {
        
    val argc:Int = args.size;
    if(argc<5){
      Console.ERR.println("Usage: perftests <num threads> <num operations> <% adds> <% removes><num repitition>");
      return;
    }
    
    // get all important input variables
    val nThreads          = Int.parse(args(0));
    val nOperations<:Int  = Int.parse(args(1));
    val nAdds<:Int        = (nOperations*Double.parse(args(2))) as Int; 
    val nRemoves<:Int     = (nOperations*Double.parse(args(3))) as Int;
    val nRepititions<:Int = Int.parse(args(4));
    val nLookups<:Int     = nOperations-nAdds-nRemoves;
    val maxNeighbors<:Int = 128;
    val minNeighbors<:Int = 4;
    val nElements<:Int    = nAdds<128 ? 128 : nAdds;
    
    val seed<:Long = System.nanoTime();
    val numNeighborhoodsize = Math.log2(maxNeighbors/minNeighbors)+1;
 
    val isDebug = false;   
    //================================Testing for our own CHashMap==============
    var rand:Random = new Random(seed);	
    var keys:Rail[Int];
    var values:Rail[Int];
   
    var start:Long;
    var end:Long;
    val addTime     = new Array[Long](numNeighborhoodsize,0L);
    val lookupTime  = new Array[Long](numNeighborhoodsize,0L);
    val deleteTime  = new Array[Long](numNeighborhoodsize,0L);
    val lookupTime2 = new Array[Long](numNeighborhoodsize,0L);
    val totalTime   = new Array[Long](numNeighborhoodsize,0L);
 
  for (var repitition:Int = 0; repitition < nRepititions; repitition++) {
  
    if(isDebug) Console.OUT.println("num repitition: "+repitition);
    keys   = new Rail[Int](nAdds);
    values = new Rail[Int](nAdds);
     
    //Initialize random keys-values pairs to be inserted into our Hashmap
    // All keys and values will be integers
    for(var i:Int = 0; i<nAdds; i++){
      keys(i) = rand.nextInt();
      values(i) = rand.nextInt();
    }
  
    for (var nNeighbors:Int = minNeighbors; nNeighbors <= maxNeighbors; nNeighbors*=2) {
 
      if(isDebug) Console.OUT.println("num neighbors: "+nNeighbors);
      val k = Math.log2(nNeighbors/minNeighbors);

    val hashMap = new CHashMap[Int,Int](nNeighbors, nElements);
            
    //=====================Insertion Test=======================
    start = Timer.milliTime();
    if(isDebug) Console.OUT.println("insertion");
    finish {
      for (var threadNum:Int = 0; threadNum < nThreads; threadNum++) {
        val threadId = threadNum;
        val lower    = threadId*(nAdds/nThreads);
        val upper    = (threadId+1)*(nAdds/nThreads);
        async {
          for(var i:Int = lower; i <upper; i++){
            hashMap.add(keys(i), values(i));
          }
        }
      }
    }
    end = Timer.milliTime();
    addTime(k) += end-start;
    
    //=====================Lookup Test=======================
    if(isDebug) Console.OUT.println("lookup 1");
    start = Timer.milliTime();
    finish {
      for (var threadNum:Int = 0; threadNum < nThreads; threadNum++) {
        async {
          for(var i:Int=0; i < nLookups / nThreads; i++){
            val r = rand.nextInt(keys.size);
            val key = keys(r);
            hashMap.get(key);
          }
        }
      }
    }
    end = Timer.milliTime();
    lookupTime(k) += end-start;
    
    //=====================Deletion Test=======================
    if(isDebug) Console.OUT.println("deletion");
    start = Timer.milliTime();
    finish {
      for (var threadNum:Int = 0; threadNum < nThreads; threadNum++) {
        async {
          for (var i:Int = 0; i < nRemoves / nThreads; i++){
            val r = rand.nextInt(keys.size);
            val key = keys(r);
            hashMap.remove(key);
          }
        }
      }
    }
    end = Timer.milliTime();
    deleteTime(k) += end-start;
    
    //=====================Lookup Test Once More=======================
    if(isDebug) Console.OUT.println("lookup 2");
    start = Timer.milliTime();
    finish {
      for (var threadNum:Int = 0; threadNum < nThreads; threadNum++) {
        async {
          for(var i:Int=0; i < nLookups / nThreads; i++){
    	    val r = rand.nextInt(keys.size);
    	    val key = keys(r);
    	    hashMap.get(key);
          }
        }
      }
    }
    end = Timer.milliTime();
    lookupTime2(k) += end-start;
    }//end of neighborhood size loop
  }//end of repitition loop

  for (var i:Int = 0; i <numNeighborhoodsize; i++) {
    addTime(i)     /= nRepititions;
    lookupTime(i)  /= nRepititions;
    deleteTime(i)  /= nRepititions;
    lookupTime2(i) /= nRepititions;
    totalTime(i)    = addTime(i)+lookupTime(i)+deleteTime(i)+lookupTime2(i);
  }
  
    val powminNeighbors = Math.log2(minNeighbors);
    Console.OUT.println(nAdds+" insertions:");
    for (var i:Int = 0; i <numNeighborhoodsize; i++) 
      Console.OUT.println(addTime(i)+"ms for neighborhood size of " + Math.pow2(i+powminNeighbors) );
    
    Console.OUT.println(nLookups+" lookups before any deletion:");
    for (var i:Int = 0; i <numNeighborhoodsize; i++) 
      Console.OUT.println(lookupTime(i)+"ms for neighborhood size of " + Math.pow2(i+powminNeighbors) );
    
    Console.OUT.println(nRemoves+" deletions:");
    for (var i:Int = 0; i <numNeighborhoodsize; i++) 
      Console.OUT.println(deleteTime(i)+"ms for neighborhood size of " + Math.pow2(i+powminNeighbors) );
    
    Console.OUT.println(nLookups+" lookups after deletions:");
    for (var i:Int = 0; i <numNeighborhoodsize; i++) 
      Console.OUT.println(lookupTime2(i)+"ms for neighborhood size of " + Math.pow2(i+powminNeighbors) );

    Console.OUT.println(nOperations+" total operations:");
    for (var i:Int = 0; i <numNeighborhoodsize; i++) 
      Console.OUT.println(totalTime(i)+"ms for neighborhood size of " + Math.pow2(i+powminNeighbors) );

   Console.OUT.println("end of the test.");
  }
}
