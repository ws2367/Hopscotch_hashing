import CHashMap;
import x10.util.Random;
import x10.io.Console;
import x10.util.Pair;
import x10.util.HashMap;

public class functests{

  public static def main(args:Rail[String]){

    val argc:Int = args.size;
    if(argc != 2){
      Console.ERR.println("Usage: functests <num adds> <num removes>");
      return;
    }
    val nAdds<:Int = Int.parse(args(0)); 
    val nRemoves<:Int = Int.parse(args(1));

    val rand<:Random = new Random(System.nanoTime());

    /******************Part 1: Deterministic tests**************/ 
    val hashTable = new CHashMap[Int,Int]();
    
    // inputs is an array that holds the key-value pairs we'll add to our hash table
    val inputs<:Rail[Pair[Int, Int]] = new Rail[Pair[Int, Int]](nAdds);
    
    // add values to our CHashMap while at the same time populating the inputs array with those same key-value pairs
    val uniqueKeys = new HashMap[Int, Int]();
 
    finish for(var i:Int = 0; i<nAdds; i++){
      doRandomAdd(rand, hashTable, inputs, i, uniqueKeys);
    }
	
    // array of flags indicating which values have been removed:
    val flags = new Rail[Boolean](inputs.size, false);
    
    //===================removal tests==========================
    finish for (var i:Int = 0; i<nRemoves; i++){
      doRandomRemove(rand, hashTable, inputs, uniqueKeys, flags, true);
    }
    
    //=========================lookup/existence/nonexistence tests========================
    //Where we make sure we can look up things we added and can't look up things we didn't
    //(we look up EVERY value we originally inserted, checking if it is in the table if it wasn't removed or if it isn't if it was removed.)
    finish for(var i:Int=0; i<inputs.size; i++ ){
      doLookup(hashTable, inputs, i, uniqueKeys, flags, true);
    }
     
    /******************Part 2: Non-Deterministic tests**************/ 
    val hashTable2 = new CHashMap[Int,Int]();
    
    // inputs is an array that holds the key-value pairs we'll add to our hash table
    val inputs2<:Rail[Pair[Int, Int]] = new Rail[Pair[Int, Int]](nAdds);
    
    // add values to our CHashMap while at the same time populating the inputs array with those same key-value pairs
    val uniqueKeys2 = new HashMap[Int, Int]();
    val flags2 = new Rail[Boolean](inputs.size, false);
 
    finish {
      async {
        for(var i:Int = 0; i<nAdds; i++){
          doRandomAdd(rand, hashTable2, inputs2, i, uniqueKeys2);
        }
      }
	
      //===================removal tests==========================
      async {
        for (var i:Int = 0; i<nRemoves; i++){
          doRandomRemove(rand, hashTable2, inputs2, uniqueKeys2, flags2, false);
        }
      }
    
      //=========================lookup/existence/nonexistence tests========================
      //Since the lookups are done in parallel to the adds and removes there is no guarentee that the items will be present when we look them up
      async {
        for(var i:Int=0; i<inputs.size; i++ ){
          doLookup(hashTable2, inputs2, i, uniqueKeys2, flags2, false);
        }
      }
    }
  }

  private static def doRandomAdd(rand:Random, hashTable:CHashMap[Int,Int], inputs:Rail[Pair[Int,Int]], index:Int, uniqueKeys:HashMap[Int,Int]) { 
      var thisKey:Int = rand.nextInt();
      while( uniqueKeys.get(thisKey)!=null){
      	thisKey = rand.nextInt();
      }
      
      val finalKey = thisKey;
      val thisValue<:Int = rand.nextInt();
      inputs(index)=new Pair[Int, Int](thisKey, thisValue);
      async { hashTable.add(finalKey, thisValue); }
      uniqueKeys.put(thisKey, thisValue);
  }

  
  private static def doRandomRemove(rand:Random, hashTable:CHashMap[Int,Int], inputs:Rail[Pair[Int,Int]], uniqueKeys:HashMap[Int,Int], flags:Rail[Boolean], determinate:Boolean) {
      val r = rand.nextInt(inputs.size);
      val key = inputs(r).first;
      async { 
        val res = hashTable.remove(key);
        if (determinate) {
          if ((res!=null)&&(res!=inputs(r).second)) {
            Console.OUT.println("Wrong value removed. Expected value: " + inputs(r).second + " Actual value removed: "+ res);
          } else if ((res==null)!=(flags(r))) {
            Console.OUT.print("Invalid result for remove: remove(" + key + ") " + ((res==null) ? "shouldn't" : "should") + " have been null");
          }
        } else {
          //TODO does this matter  
        }
        flags(r) = true;
      }
  }
 
  private static def doLookup(hashTable:CHashMap[Int,Int], inputs:Rail[Pair[Int,Int]], index:Int, uniqueKeys:HashMap[Int,Int], flags:Rail[Boolean], determinate:Boolean) { 
      async {  
        val isRemoved = flags(index);
        val res = hashTable.get(inputs(index).first);
      
        if (determinate) {
          if(!isRemoved){
            if( res==null ) {
              Console.OUT.println("Key (" + inputs(index).first + ") was not found when it should've been." );
      	    } else if( (res!=null) && (res!=inputs(index).second )) 
              Console.OUT.println("Wrong value returned. Expected value: " + inputs(index).second + " Actual value removed: "+ res);
          } else if(res!=null){
            Console.OUT.print("Invalid result for lookup: lookup(" + inputs(index).first  + ") should have been null");
          }
        } else {
          //TOD does this matter
        }
      }
  }
}
