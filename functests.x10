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


    val hashTable = new CHashMap[Int,Int]();
    
    // inputs is an array that holds the key-value pairs we'll add to our hash table
    val inputs<:Rail[Pair[Int, Int]] = new Rail[Pair[Int, Int]](nAdds);
    
    //add values to our CHashMap while at the same time populating the inputs array with those same key-value pairs
    val uniqueKeys = new HashMap[Int, Int]();
    
    for(var i:Int = 0; i<nAdds; i++){
      var thisKey:Int = rand.nextInt();
      var loopCount:Int = 0;
      while( uniqueKeys.get(thisKey)!=null){
      	thisKey = rand.nextInt();
      }
      
      val thisValue<:Int = rand.nextInt();
      inputs(i)=new Pair[Int, Int](thisKey, thisValue);
      hashTable.add(thisKey, thisValue);
      uniqueKeys.put(thisKey, thisValue);
    }
	
	// array of flags indicating which values have been removed:
    val flags = new Rail[Boolean](inputs.size, false);
    
    // ==================removal tests==========================
    for (var i:Int = 0; i<nRemoves; i++){
      val r = rand.nextInt(inputs.size);
      val key = inputs(r).first;
      val res = hashTable.remove(key);
      if ( (res!=null)&&(res!=inputs(r).second) ) Console.OUT.println("Wrong value removed. Expected value: " + inputs(r).second + " Actual value removed: "+ res);
      else if ((res==null)!=(flags(r))) {
        Console.OUT.print("Invalid result for remove: remove(" + key + ") " + ((res==null) ? "shouldn't" : "should") + " have been null");
      }
      flags(r) = true;
    }
    
    //=========================lookup/existence/nonexistence tests========================
    //Where we make sure we can look up things we added and can't look up things we didn't
    //(we look up EVERY value we originally inserted, checking if it is in the table if it wasn't removed or if it isn't if it was removed.)
    for(var i:Int=0; i<inputs.size; i++ ){
      val isRemoved = flags(i);
      val res = hashTable.get(inputs(i).first);
      
      if(!isRemoved){
        if( res==null ) Console.OUT.println("Key (" + inputs(i).first + ") was not found when it should've been." );
      	else if( (res!=null) && (res!=inputs(i).second )) Console.OUT.println("Wrong value returned. Expected value: " + inputs(i).second + " Actual value removed: "+ res);
      }
      else if(res!=null){
        Console.OUT.print("Invalid result for lookup: lookup(" + inputs(i).first  + ") should have been null");
      }
    }
    
  }//end of main
}
