import CHashMap;
import x10.util.Random;
import x10.io.Console;
import x10.util.Pair;
import x10.util.HashMap;

public class functests{

  public static def main(args:Rail[String]){

    val argc:Int = args.size;
    if(argc < 2 || argc > 3){
      Console.ERR.println("Usage: functests <num adds> <num removes> (<num repitions>)");
      return;
    }
    val nAdds<:Int = Int.parse(args(0)); 
    val nRemoves<:Int = Int.parse(args(1));
    var nRepititions:Int = 1;
    if (argc == 3) {
      nRepititions = Int.parse(args(2));
    }

    for (var repitition:Int = 1; repitition <= nRepititions; repitition++) {
      val rand<:Random = new Random(System.nanoTime());

      /******************Part 1: Deterministic tests**************/ 
      val hashTable = new CHashMap[Int, Int]();
    
      // inputs is an array that holds the key-value pairs we'll add to our hash table
      val inputs<:Rail[Pair[Int, Int]] = new Rail[Pair[Int, Int]](nAdds);
      
      // All the keys for this test are unique and backup up in x10's default hash map
      val uniqueKeys = new HashMap[Int, Int]();
 
      // add values to our CHashMap while at the same time populating the inputs array with those same key-value pairs
      finish for(var i:Int = 0; i < nAdds; i++) {
        doRandomAdd(rand, hashTable, inputs, i, uniqueKeys);
      }
	
      // array of flags indicating which values have been removed:
      val flags = new Rail[Boolean](inputs.size, false);

      //===================removal tests==========================
      finish for (var i:Int = 0; i < nRemoves; i++) {
        doRandomRemove(rand, hashTable, inputs, flags, true);
      }

      //=========================lookup/existence/nonexistence tests========================
      //Where we make sure we can look up things we added and can't look up things we didn't
      //(we look up EVERY value we originally inserted, checking if it is in the table if it wasn't removed or if it isn't if it was removed.)
      finish for(var i:Int=0; i < inputs.size; i++) {
        doLookup(hashTable, inputs, i, flags, true);
      }
      Console.OUT.println("Complete deterministic tests for repititon " + repitition + " of " + nRepititions + ".");
     
      /******************Part 2: Duplicate key tests**************/ 
      val hashTable2 = new CHashMap[Int, Int]();

      // inputs is an array that holds the key-value pairs we'll add to our hash table
      val inputs2<:Rail[Pair[Int, Int]] = new Rail[Pair[Int, Int]](nAdds);

      //no values are removed in this test
      val flags2 = new Rail[Boolean](inputs.size, false);
 
      // add duplicate keys to our CHashMap while at the same time populating the inputs array with those same key-value pairs
      for(var i:Int = 0; i < nAdds; i++) {
        val thisKey = rand.nextInt();
        val thisValue1 = rand.nextInt();
        finish { doAdd(thisKey, thisValue1, hashTable2, inputs2, i); }
        val thisValue2 = rand.nextInt();
        finish { doAdd(thisKey, thisValue2, hashTable2, inputs2, i); }
      }

      //=========================lookup/existence/nonexistence tests========================
      finish for (var i:Int=0; i < inputs2.size; i++) {
        doLookup(hashTable2, inputs2, i, flags2, true);
      }


      //===================removal tests==========================
      for (var i:Int = 0; i < nRemoves; i++) {
        var r:Int = rand.nextInt(inputs2.size);
        while (flags2(r) == true) {
          r = rand.nextInt(inputs2.size);
        }
        val key = inputs2(r).first;
        doSequentialRemove(r, key, hashTable2, inputs2, flags2);
        doSequentialRemove(r, key, hashTable2, inputs2, flags2);
      }
      Console.OUT.println("Complete duplicate key tests for repitition " + repitition + " of " + nRepititions + ".");

      
      /******************Part 3: Non-Deterministic tests**************/ 
      val hashTable3 = new CHashMap[Int, Int]();

      // inputs is an array that holds the key-value pairs we'll add to our hash table
      val inputs3<:Rail[Pair[Int, Int]] = new Rail[Pair[Int, Int]](nAdds);
    
      // add values to our CHashMap while at the same time populating the inputs array with those same key-value pairs
      val uniqueKeys3 = new HashMap[Int, Int]();
      val flags3 = new Rail[Boolean](inputs.size, false);

      finish {
        async {
          for(var i:Int = 0; i < nAdds; i++) {
            doRandomAdd(rand, hashTable3, inputs3, i, uniqueKeys3);
          }
        }
	
        //===================removal tests==========================
        async {
          for (var i:Int = 0; i < nRemoves; i++) {
            doRandomRemove(rand, hashTable2, inputs2, flags3, false);
          }
        }

        //=========================lookup/existence/nonexistence tests========================
        //Since the lookups are done in parallel to the adds and removes there is no guarentee that the items will be present when we look them up
        async {
          for(var i:Int=0; i < inputs3.size; i++) {
            doLookup(hashTable2, inputs2, i, flags2, false);
          }
        }
      }
      Console.OUT.println("Complete non-deterministic tests for repitition " + repitition + " of " + nRepititions + ".");
    }
  }

  private static def doRandomAdd(rand:Random, hashTable:CHashMap[Int, Int], inputs:Rail[Pair[Int, Int]], index:Int, uniqueKeys:HashMap[Int, Int]) { 
      var thisKey:Int = rand.nextInt();
      while( uniqueKeys.get(thisKey) != null) {
        thisKey = rand.nextInt();
      }
    
      val thisValue = rand.nextInt();
      doAdd(thisKey, thisValue, hashTable, inputs, index);
      uniqueKeys.put(thisKey, thisValue);
  }

 
  private static def doAdd(thisKey:Int, thisValue:Int, hashTable:CHashMap[Int, Int], inputs:Rail[Pair[Int, Int]], index:Int) { 
      inputs(index) = new Pair[Int, Int](thisKey, thisValue);
      async { hashTable.add(thisKey, thisValue); }
  }
 
  private static def doRandomRemove(rand:Random, hashTable:CHashMap[Int, Int], inputs:Rail[Pair[Int, Int]], flags:Rail[Boolean], determinate:Boolean) {
    var r:Int = 0;
    var key: Int = 0;
    atomic {
      r = rand.nextInt(inputs.size);
      while (flags(r) == true) {
        r = rand.nextInt(inputs.size);
      }
      flags(r) = true;     
      key = inputs(r).first;
    }

    val finalR = r;
    val finalKey = key;      
    async { 
      val res = hashTable.remove(finalKey);
      if (determinate) {
        if (res != inputs(finalR).second) {
          Console.OUT.println("Wrong value for key " + finalKey + " removed. Expected value: " + inputs(finalR).second + " Actual value removed: "+ res);
        }
      }
    }
  }
 
  private static def doSequentialRemove(r:Int, key:Int, hashTable:CHashMap[Int, Int], inputs:Rail[Pair[Int, Int]], flags:Rail[Boolean]) {
    val res = hashTable.remove(key);
    if (flags(r)) {
      if (res != null) {
        Console.OUT.println("Wrong value for key " + key + " removed. Expected value: null Actual value removed: "+ res);
      }
    } else if (res != inputs(r).second) {
      Console.OUT.println("Wrong value for key " + key + " removed. Expected value: " + inputs(r).second + " Actual value removed: "+ res);
    }
    flags(r) = true;
  }
 

  private static def doLookup(hashTable:CHashMap[Int, Int], inputs:Rail[Pair[Int, Int]], index:Int, flags:Rail[Boolean], determinate:Boolean) { 
    async {  
      val isRemoved = flags(index);
      val res = hashTable.get(inputs(index).first);
      
      if (determinate) {
        if(!isRemoved){
          if(res == null) {
            Console.OUT.println("Key (" + inputs(index).first + ") was not found when it should've been." );
      	  } else if (res != inputs(index).second) { 
            Console.OUT.println("Wrong value for key " + inputs(index).first + " returned. Expected value: " + inputs(index).second + " Actual value: "+ res);
          }
        } else if(res != null) {
          Console.OUT.print("Invalid result for lookup: lookup(" + inputs(index).first  + ") should have been null");
        }
      }
    }
  }
}
