/*************************************************/
/* START of functests */
#include <functests.h>

#include <x10/lang/Object.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/util/Random.h>
#include <x10/util/Timer.h>
#include <x10/lang/Long.h>
#include <CHashMap.h>
#include <x10/util/Pair.h>
#include <x10/array/Region.h>
#include <x10/array/RectRegion1D.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/Throwable.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/util/Box.h>
#include <x10/lang/Any.h>
#ifndef FUNCTESTS__CLOSURE__1_CLOSURE
#define FUNCTESTS__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class functests__closure__1 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<functests__closure__1> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 61 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.For_c
        {
            x10_int i;
            for (
                 //#line 61 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
                 i = ((x10_int)0); ((i) < (nAdds)); 
                                                    //#line 61 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                                                    i = ((x10_int) ((i) + (((x10_int)1)))))
            {
                
                //#line 62 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                functests::doRandomAdd(rand, hashTable2, inputs2,
                                       i, uniqueKeys2);
            }
        }
        
    }
    
    // captured environment
    x10_int nAdds;
    x10aux::ref<x10::util::Random> rand;
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable2;
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs2;
    x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nAdds);
        buf.write(this->rand);
        buf.write(this->hashTable2);
        buf.write(this->inputs2);
        buf.write(this->uniqueKeys2);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        functests__closure__1* storage = x10aux::alloc<functests__closure__1>();
        buf.record_reference(x10aux::ref<functests__closure__1>(storage));
        x10_int that_nAdds = buf.read<x10_int>();
        x10aux::ref<x10::util::Random> that_rand = buf.read<x10aux::ref<x10::util::Random> >();
        x10aux::ref<CHashMap<x10_int, x10_int> > that_hashTable2 = buf.read<x10aux::ref<CHashMap<x10_int, x10_int> > >();
        x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > that_inputs2 = buf.read<x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > >();
        x10aux::ref<x10::util::HashMap<x10_int, x10_int> > that_uniqueKeys2 = buf.read<x10aux::ref<x10::util::HashMap<x10_int, x10_int> > >();
        x10aux::ref<functests__closure__1> this_ = new (storage) functests__closure__1(that_nAdds, that_rand, that_hashTable2, that_inputs2, that_uniqueKeys2);
        return this_;
    }
    
    functests__closure__1(x10_int nAdds, x10aux::ref<x10::util::Random> rand, x10aux::ref<CHashMap<x10_int, x10_int> > hashTable2, x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs2, x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys2) : nAdds(nAdds), rand(rand), hashTable2(hashTable2), inputs2(inputs2), uniqueKeys2(uniqueKeys2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10aux::string_utils::lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10:60-64";
    }

};

#endif // FUNCTESTS__CLOSURE__1_CLOSURE
#ifndef FUNCTESTS__CLOSURE__2_CLOSURE
#define FUNCTESTS__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class functests__closure__2 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<functests__closure__2> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.For_c
        {
            x10_int i;
            for (
                 //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
                 i = ((x10_int)0); ((i) < (nRemoves)); 
                                                       //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                                                       i = ((x10_int) ((i) + (((x10_int)1)))))
            {
                
                //#line 69 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                functests::doRandomRemove(rand, hashTable2, inputs2,
                                          uniqueKeys2, flags2, false);
            }
        }
        
    }
    
    // captured environment
    x10_int nRemoves;
    x10aux::ref<x10::util::Random> rand;
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable2;
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs2;
    x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys2;
    x10aux::ref<x10::array::Array<x10_boolean> > flags2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->nRemoves);
        buf.write(this->rand);
        buf.write(this->hashTable2);
        buf.write(this->inputs2);
        buf.write(this->uniqueKeys2);
        buf.write(this->flags2);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        functests__closure__2* storage = x10aux::alloc<functests__closure__2>();
        buf.record_reference(x10aux::ref<functests__closure__2>(storage));
        x10_int that_nRemoves = buf.read<x10_int>();
        x10aux::ref<x10::util::Random> that_rand = buf.read<x10aux::ref<x10::util::Random> >();
        x10aux::ref<CHashMap<x10_int, x10_int> > that_hashTable2 = buf.read<x10aux::ref<CHashMap<x10_int, x10_int> > >();
        x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > that_inputs2 = buf.read<x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > >();
        x10aux::ref<x10::util::HashMap<x10_int, x10_int> > that_uniqueKeys2 = buf.read<x10aux::ref<x10::util::HashMap<x10_int, x10_int> > >();
        x10aux::ref<x10::array::Array<x10_boolean> > that_flags2 = buf.read<x10aux::ref<x10::array::Array<x10_boolean> > >();
        x10aux::ref<functests__closure__2> this_ = new (storage) functests__closure__2(that_nRemoves, that_rand, that_hashTable2, that_inputs2, that_uniqueKeys2, that_flags2);
        return this_;
    }
    
    functests__closure__2(x10_int nRemoves, x10aux::ref<x10::util::Random> rand, x10aux::ref<CHashMap<x10_int, x10_int> > hashTable2, x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs2, x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys2, x10aux::ref<x10::array::Array<x10_boolean> > flags2) : nRemoves(nRemoves), rand(rand), hashTable2(hashTable2), inputs2(inputs2), uniqueKeys2(uniqueKeys2), flags2(flags2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10aux::string_utils::lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10:67-71";
    }

};

#endif // FUNCTESTS__CLOSURE__2_CLOSURE
#ifndef FUNCTESTS__CLOSURE__3_CLOSURE
#define FUNCTESTS__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class functests__closure__3 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<functests__closure__3> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 76 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.For_c
        {
            x10_int i;
            for (
                 //#line 76 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
                 i = ((x10_int)0); ((i) < (inputs->FMGL(size))); 
                                                                 //#line 76 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                                                                 i = ((x10_int) ((i) + (((x10_int)1)))))
            {
                
                //#line 77 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                functests::doLookup(hashTable2, inputs2, i, uniqueKeys2,
                                    flags2, false);
            }
        }
        
    }
    
    // captured environment
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs;
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable2;
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs2;
    x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys2;
    x10aux::ref<x10::array::Array<x10_boolean> > flags2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->inputs);
        buf.write(this->hashTable2);
        buf.write(this->inputs2);
        buf.write(this->uniqueKeys2);
        buf.write(this->flags2);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        functests__closure__3* storage = x10aux::alloc<functests__closure__3>();
        buf.record_reference(x10aux::ref<functests__closure__3>(storage));
        x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > that_inputs = buf.read<x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > >();
        x10aux::ref<CHashMap<x10_int, x10_int> > that_hashTable2 = buf.read<x10aux::ref<CHashMap<x10_int, x10_int> > >();
        x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > that_inputs2 = buf.read<x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > >();
        x10aux::ref<x10::util::HashMap<x10_int, x10_int> > that_uniqueKeys2 = buf.read<x10aux::ref<x10::util::HashMap<x10_int, x10_int> > >();
        x10aux::ref<x10::array::Array<x10_boolean> > that_flags2 = buf.read<x10aux::ref<x10::array::Array<x10_boolean> > >();
        x10aux::ref<functests__closure__3> this_ = new (storage) functests__closure__3(that_inputs, that_hashTable2, that_inputs2, that_uniqueKeys2, that_flags2);
        return this_;
    }
    
    functests__closure__3(x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs, x10aux::ref<CHashMap<x10_int, x10_int> > hashTable2, x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs2, x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys2, x10aux::ref<x10::array::Array<x10_boolean> > flags2) : inputs(inputs), hashTable2(hashTable2), inputs2(inputs2), uniqueKeys2(uniqueKeys2), flags2(flags2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10aux::string_utils::lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10:75-79";
    }

};

#endif // FUNCTESTS__CLOSURE__3_CLOSURE
#ifndef FUNCTESTS__CLOSURE__4_CLOSURE
#define FUNCTESTS__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class functests__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<functests__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 92 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
        x10aux::nullCheck(hashTable)->add(finalKey, thisValue);
    }
    
    // captured environment
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable;
    x10_int finalKey;
    x10_int thisValue;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->hashTable);
        buf.write(this->finalKey);
        buf.write(this->thisValue);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        functests__closure__4* storage = x10aux::alloc<functests__closure__4>();
        buf.record_reference(x10aux::ref<functests__closure__4>(storage));
        x10aux::ref<CHashMap<x10_int, x10_int> > that_hashTable = buf.read<x10aux::ref<CHashMap<x10_int, x10_int> > >();
        x10_int that_finalKey = buf.read<x10_int>();
        x10_int that_thisValue = buf.read<x10_int>();
        x10aux::ref<functests__closure__4> this_ = new (storage) functests__closure__4(that_hashTable, that_finalKey, that_thisValue);
        return this_;
    }
    
    functests__closure__4(x10aux::ref<CHashMap<x10_int, x10_int> > hashTable, x10_int finalKey, x10_int thisValue) : hashTable(hashTable), finalKey(finalKey), thisValue(thisValue) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10aux::string_utils::lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10:92";
    }

};

#endif // FUNCTESTS__CLOSURE__4_CLOSURE
#ifndef FUNCTESTS__CLOSURE__5_CLOSURE
#define FUNCTESTS__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class functests__closure__5 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<functests__closure__5> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 101 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Any> res = x10aux::nullCheck(hashTable)->remove(
                                            key);
        
        //#line 102 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
        if (determinate) {
            
            //#line 103 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(res, X10_NULL)) && (!x10aux::struct_equals(res,
                                                                                   (__extension__ ({
                                                                                       
                                                                                       //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                       x10_int i10210 =
                                                                                         r;
                                                                                       
                                                                                       //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                       x10::util::Pair<x10_int, x10_int> ret10211;
                                                                                       
                                                                                       //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                       ret10211 =
                                                                                         (x10aux::nullCheck(inputs)->
                                                                                            FMGL(raw))->__apply(i10210);
                                                                                       ret10211;
                                                                                   }))
                                                                                   ->
                                                                                     FMGL(second))))
            {
                
                //#line 104 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
                  ((((((x10aux::string_utils::lit("Wrong value removed. Expected value: ")) + ((__extension__ ({
                                                                                                   
                                                                                                   //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                                   x10_int i10213 =
                                                                                                     r;
                                                                                                   
                                                                                                   //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                                   x10::util::Pair<x10_int, x10_int> ret10214;
                                                                                                   
                                                                                                   //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                   ret10214 =
                                                                                                     (x10aux::nullCheck(inputs)->
                                                                                                        FMGL(raw))->__apply(i10213);
                                                                                                   ret10214;
                                                                                               }))
                                                                                               ->
                                                                                                 FMGL(second)))) + (x10aux::string_utils::lit(" Actual value removed: ")))) + (res)));
            } else 
            //#line 105 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals((x10aux::struct_equals(res,
                                                               X10_NULL)),
                                        (__extension__ ({
                                            
                                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                            x10_int i10313 =
                                              r;
                                            
                                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                            x10_boolean ret10314;
                                            
                                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                            ret10314 = (x10aux::nullCheck(flags)->
                                                          FMGL(raw))->__apply(i10313);
                                            ret10314;
                                        }))
                                        ))) {
                
                //#line 106 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT)->print(((((((((x10aux::string_utils::lit("Invalid result for remove: remove(")) + (key))) + (x10aux::string_utils::lit(") ")))) + ((x10aux::struct_equals(res,
                                                                                                                                                                                                      X10_NULL))
                                                     ? (x10aux::string_utils::lit("shouldn\'t"))
                                                     : (x10aux::string_utils::lit("should"))))) + (x10aux::string_utils::lit(" have been null"))));
            }
            
        } else {
         
        }
        
        //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i10373 = r;
        
        //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_boolean ret10374;
        
        //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
        (x10aux::nullCheck(flags)->FMGL(raw))->__set(i10373, true);
        
        //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret10374 = true;
        
        //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
        ret10374;
    }
    
    // captured environment
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable;
    x10_int key;
    x10_boolean determinate;
    x10_int r;
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs;
    x10aux::ref<x10::array::Array<x10_boolean> > flags;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->hashTable);
        buf.write(this->key);
        buf.write(this->determinate);
        buf.write(this->r);
        buf.write(this->inputs);
        buf.write(this->flags);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        functests__closure__5* storage = x10aux::alloc<functests__closure__5>();
        buf.record_reference(x10aux::ref<functests__closure__5>(storage));
        x10aux::ref<CHashMap<x10_int, x10_int> > that_hashTable = buf.read<x10aux::ref<CHashMap<x10_int, x10_int> > >();
        x10_int that_key = buf.read<x10_int>();
        x10_boolean that_determinate = buf.read<x10_boolean>();
        x10_int that_r = buf.read<x10_int>();
        x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > that_inputs = buf.read<x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > >();
        x10aux::ref<x10::array::Array<x10_boolean> > that_flags = buf.read<x10aux::ref<x10::array::Array<x10_boolean> > >();
        x10aux::ref<functests__closure__5> this_ = new (storage) functests__closure__5(that_hashTable, that_key, that_determinate, that_r, that_inputs, that_flags);
        return this_;
    }
    
    functests__closure__5(x10aux::ref<CHashMap<x10_int, x10_int> > hashTable, x10_int key, x10_boolean determinate, x10_int r, x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs, x10aux::ref<x10::array::Array<x10_boolean> > flags) : hashTable(hashTable), key(key), determinate(determinate), r(r), inputs(inputs), flags(flags) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10aux::string_utils::lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10:100-112";
    }

};

#endif // FUNCTESTS__CLOSURE__5_CLOSURE
#ifndef FUNCTESTS__CLOSURE__6_CLOSURE
#define FUNCTESTS__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class functests__closure__6 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_0::itable<functests__closure__6> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 117 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10_boolean isRemoved = (__extension__ ({
            
            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10320 = index;
            
            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret10321;
            
            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret10321 = (x10aux::nullCheck(flags)->FMGL(raw))->__apply(i10320);
            ret10321;
        }))
        ;
        
        //#line 118 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Any> res = x10aux::nullCheck(hashTable)->get(
                                            (__extension__ ({
                                                
                                                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10_int i10323 = index;
                                                
                                                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                x10::util::Pair<x10_int, x10_int> ret10324;
                                                
                                                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                ret10324 = (x10aux::nullCheck(inputs)->
                                                              FMGL(raw))->__apply(i10323);
                                                ret10324;
                                            }))
                                            ->FMGL(first));
        
        //#line 120 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
        if (determinate) {
            
            //#line 121 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if (!(isRemoved)) {
                
                //#line 122 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(res, X10_NULL))) {
                    
                    //#line 123 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
                      ((((x10aux::string_utils::lit("Key (")) + ((__extension__ ({
                                                                     
                                                                     //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                     x10_int i10335 =
                                                                       index;
                                                                     
                                                                     //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                     x10::util::Pair<x10_int, x10_int> ret10336;
                                                                     
                                                                     //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                     ret10336 =
                                                                       (x10aux::nullCheck(inputs)->
                                                                          FMGL(raw))->__apply(i10335);
                                                                     ret10336;
                                                                 }))
                                                                 ->
                                                                   FMGL(first)))) + (x10aux::string_utils::lit(") was not found when it should\'ve been."))));
                } else 
                //#line 124 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(res, X10_NULL)) &&
                    (!x10aux::struct_equals(res, (__extension__ ({
                                                     
                                                     //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                     x10_int i10338 =
                                                       index;
                                                     
                                                     //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                     x10::util::Pair<x10_int, x10_int> ret10339;
                                                     
                                                     //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                     ret10339 =
                                                       (x10aux::nullCheck(inputs)->
                                                          FMGL(raw))->__apply(i10338);
                                                     ret10339;
                                                 }))
                                                 ->FMGL(second))))
                {
                    
                    //#line 125 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
                      ((((((x10aux::string_utils::lit("Wrong value returned. Expected value: ")) + ((__extension__ ({
                                                                                                        
                                                                                                        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                                        x10_int i10341 =
                                                                                                          index;
                                                                                                        
                                                                                                        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                                        x10::util::Pair<x10_int, x10_int> ret10342;
                                                                                                        
                                                                                                        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                        ret10342 =
                                                                                                          (x10aux::nullCheck(inputs)->
                                                                                                             FMGL(raw))->__apply(i10341);
                                                                                                        ret10342;
                                                                                                    }))
                                                                                                    ->
                                                                                                      FMGL(second)))) + (x10aux::string_utils::lit(" Actual value removed: ")))) + (res)));
                }
                
            } else 
            //#line 126 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(res, X10_NULL))) {
                
                //#line 127 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::io::Console::FMGL(OUT)->print(((((x10aux::string_utils::lit("Invalid result for lookup: lookup(")) + ((__extension__ ({
                                                                                                                               
                                                                                                                               //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                                                               x10_int i10344 =
                                                                                                                                 index;
                                                                                                                               
                                                                                                                               //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                                                               x10::util::Pair<x10_int, x10_int> ret10345;
                                                                                                                               
                                                                                                                               //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                                                               ret10345 =
                                                                                                                                 (x10aux::nullCheck(inputs)->
                                                                                                                                    FMGL(raw))->__apply(i10344);
                                                                                                                               ret10345;
                                                                                                                           }))
                                                                                                                           ->
                                                                                                                             FMGL(first)))) + (x10aux::string_utils::lit(") should have been null"))));
            }
            
        } else {
         
        }
        
    }
    
    // captured environment
    x10_int index;
    x10aux::ref<x10::array::Array<x10_boolean> > flags;
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable;
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs;
    x10_boolean determinate;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->index);
        buf.write(this->flags);
        buf.write(this->hashTable);
        buf.write(this->inputs);
        buf.write(this->determinate);
    }
    
    template<class __T> static x10aux::ref<__T> _deserialize(x10aux::deserialization_buffer &buf) {
        functests__closure__6* storage = x10aux::alloc<functests__closure__6>();
        buf.record_reference(x10aux::ref<functests__closure__6>(storage));
        x10_int that_index = buf.read<x10_int>();
        x10aux::ref<x10::array::Array<x10_boolean> > that_flags = buf.read<x10aux::ref<x10::array::Array<x10_boolean> > >();
        x10aux::ref<CHashMap<x10_int, x10_int> > that_hashTable = buf.read<x10aux::ref<CHashMap<x10_int, x10_int> > >();
        x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > that_inputs = buf.read<x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > >();
        x10_boolean that_determinate = buf.read<x10_boolean>();
        x10aux::ref<functests__closure__6> this_ = new (storage) functests__closure__6(that_index, that_flags, that_hashTable, that_inputs, that_determinate);
        return this_;
    }
    
    functests__closure__6(x10_int index, x10aux::ref<x10::array::Array<x10_boolean> > flags, x10aux::ref<CHashMap<x10_int, x10_int> > hashTable, x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs, x10_boolean determinate) : index(index), flags(flags), hashTable(hashTable), inputs(inputs), determinate(determinate) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10aux::ref<x10::lang::String> toString() {
        return x10aux::string_utils::lit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10:116-132";
    }

};

#endif // FUNCTESTS__CLOSURE__6_CLOSURE

//#line 9 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10MethodDecl_c
void functests::main(x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > args) {
    
    //#line 11 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int argc = x10aux::nullCheck(args)->FMGL(size);
    
    //#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(argc, ((x10_int)2)))) {
        
        //#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR)->x10::io::Printer::println(x10aux::string_utils::lit("Usage: functests <num adds> <num removes>"));
        
        //#line 14 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 16 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int nAdds = x10aux::int_utils::parseInt((__extension__ ({
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::String> ret6453;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret6453 = (x10aux::nullCheck(args)->FMGL(raw))->__apply(((x10_int)0));
        ret6453;
    }))
    );
    
    //#line 17 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int nRemoves = x10aux::int_utils::parseInt((__extension__ ({
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::String> ret6474;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret6474 = (x10aux::nullCheck(args)->FMGL(raw))->__apply(((x10_int)1));
        ret6474;
    }))
    );
    
    //#line 19 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::Random> rand =  x10aux::ref<x10::util::Random>((new (memset(x10aux::alloc<x10::util::Random>(), 0, sizeof(x10::util::Random))) x10::util::Random()))
    ;
    
    //#line 19 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10ConstructorCall_c
    (rand)->::x10::util::Random::_constructor((__extension__ ({
                                                  x10aux::system_utils::nanoTime();
                                              }))
                                              );
    
    //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable =  x10aux::ref<CHashMap<x10_int, x10_int> >((new (memset(x10aux::alloc<CHashMap<x10_int, x10_int> >(), 0, sizeof(CHashMap<x10_int, x10_int>))) CHashMap<x10_int, x10_int>()))
    ;
    
    //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10ConstructorCall_c
    (hashTable)->::CHashMap<x10_int, x10_int>::_constructor();
    
    //#line 25 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs =
       x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > >((new (memset(x10aux::alloc<x10::array::Array<x10::util::Pair<x10_int, x10_int> > >(), 0, sizeof(x10::array::Array<x10::util::Pair<x10_int, x10_int> >))) x10::array::Array<x10::util::Pair<x10_int, x10_int> >()))
    ;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10363 = nAdds;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (inputs)->::x10::lang::Object::_constructor();
    
    //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10347 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10348 =  x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10348)->::x10::array::RectRegion1D::_constructor(((x10_int)0),
                                                               ((x10_int) ((size10363) - (((x10_int)1)))));
        alloc10348;
    }))
    );
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(region) = myReg10347;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(rank) = ((x10_int)1);
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(rect) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(zeroBased) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(rail) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(size) = size10363;
    
    //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(layout_min0) = inputs->FMGL(layout_stride1) = inputs->FMGL(layout_min1) =
      ((x10_int)0);
    
    //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(layout) = X10_NULL;
    
    //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::util::Pair<x10_int, x10_int> >(size10363, 8, false, true);
    
    //#line 28 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys =
       x10aux::ref<x10::util::HashMap<x10_int, x10_int> >((new (memset(x10aux::alloc<x10::util::HashMap<x10_int, x10_int> >(), 0, sizeof(x10::util::HashMap<x10_int, x10_int>))) x10::util::HashMap<x10_int, x10_int>()))
    ;
    
    //#line 28 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10ConstructorCall_c
    (uniqueKeys)->::x10::util::HashMap<x10_int, x10_int>::_constructor();
    {
        
        //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::FinishState> x10____var0 = x10::lang::Runtime::startFinish();
        {
            
            //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::lang::Throwable> throwable10390 = X10_NULL;
            
            //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
            try {
                
                //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.For_c
                        {
                            x10_int i;
                            for (
                                 //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
                                 i = ((x10_int)0); ((i) < (nAdds));
                                 
                                 //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                                 i = ((x10_int) ((i) + (((x10_int)1)))))
                            {
                                
                                //#line 31 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                                functests::doRandomAdd(rand, hashTable,
                                                       inputs, i,
                                                       uniqueKeys);
                            }
                        }
                        
                    }
                }
                catch (x10aux::__ref& __ref__1) {
                    x10aux::ref<x10::lang::Throwable>& __exc__ref__1 = (x10aux::ref<x10::lang::Throwable>&)__ref__1;
                    if (true) {
                        x10aux::ref<x10::lang::Throwable> __lowerer__var__0__ =
                          static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__1);
                        {
                            
                            //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(__lowerer__var__0__);
                            
                            //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10aux::__ref& __ref__2) {
                x10aux::ref<x10::lang::Throwable>& __exc__ref__2 = (x10aux::ref<x10::lang::Throwable>&)__ref__2;
                if (true) {
                    x10aux::ref<x10::lang::Throwable> formal10391 =
                      static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__2);
                    {
                        
                        //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable10390 = formal10391;
                    }
                } else
                throw;
            }
            
            //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10390)))
            {
                
                //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10390))
                {
                    
                    //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10390));
                }
                
            }
            
            //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var0);
            }
            
            //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10390)))
            {
                
                //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10390)))
                {
                    
                    //#line 30 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10390));
                }
                
            }
            
        }
    }
    
    //#line 35 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10_boolean> > flags = 
    x10aux::ref<x10::array::Array<x10_boolean> >((new (memset(x10aux::alloc<x10::array::Array<x10_boolean> >(), 0, sizeof(x10::array::Array<x10_boolean>))) x10::array::Array<x10_boolean>()))
    ;
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10364 = inputs->FMGL(size);
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (flags)->::x10::lang::Object::_constructor();
    
    //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10352 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10353 =
           x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10353)->::x10::array::RectRegion1D::_constructor(
          ((x10_int)0), ((x10_int) ((size10364) - (((x10_int)1)))));
        alloc10353;
    }))
    );
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(region) = myReg10352;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(rank) = ((x10_int)1);
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(rect) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(zeroBased) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(rail) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(size) = size10364;
    
    //#line 303 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(layout_min0) = flags->FMGL(layout_stride1) =
      flags->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 304 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(layout) = X10_NULL;
    
    //#line 305 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<x10_boolean > r10354 = x10::util::IndexedMemoryChunk<void>::allocate<x10_boolean >(size10364, 8, false, false);
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i6327max10349 = ((x10_int) ((size10364) - (((x10_int)1))));
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i10350;
        for (
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i10350 = ((x10_int)0); ((i10350) <= (i6327max10349));
             
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i10350 = ((x10_int) ((i10350) + (((x10_int)1)))))
        {
            
            //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10351 = i10350;
            
            //#line 307 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r10354)->__set(i10351, false);
        }
    }
    
    //#line 309 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags->FMGL(raw) = r10354;
    {
        
        //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::FinishState> x10____var1 =
          x10::lang::Runtime::startFinish();
        {
            
            //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::lang::Throwable> throwable10393 =
              X10_NULL;
            
            //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
            try {
                
                //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.For_c
                        {
                            x10_int i;
                            for (
                                 //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
                                 i = ((x10_int)0); ((i) < (nRemoves));
                                 
                                 //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                                 i = ((x10_int) ((i) + (((x10_int)1)))))
                            {
                                
                                //#line 39 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                                functests::doRandomRemove(
                                  rand, hashTable, inputs,
                                  uniqueKeys, flags, true);
                            }
                        }
                        
                    }
                }
                catch (x10aux::__ref& __ref__3) {
                    x10aux::ref<x10::lang::Throwable>& __exc__ref__3 = (x10aux::ref<x10::lang::Throwable>&)__ref__3;
                    if (true) {
                        x10aux::ref<x10::lang::Throwable> __lowerer__var__1__ =
                          static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__3);
                        {
                            
                            //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__1__);
                            
                            //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10aux::__ref& __ref__4) {
                x10aux::ref<x10::lang::Throwable>& __exc__ref__4 = (x10aux::ref<x10::lang::Throwable>&)__ref__4;
                if (true) {
                    x10aux::ref<x10::lang::Throwable> formal10394 =
                      static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__4);
                    {
                        
                        //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable10393 = formal10394;
                    }
                } else
                throw;
            }
            
            //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10393)))
            {
                
                //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10393))
                {
                    
                    //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10393));
                }
                
            }
            
            //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var1);
            }
            
            //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10393)))
            {
                
                //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10393)))
                {
                    
                    //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10393));
                }
                
            }
            
        }
    }
    {
        
        //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::FinishState> x10____var2 =
          x10::lang::Runtime::startFinish();
        {
            
            //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::lang::Throwable> throwable10396 =
              X10_NULL;
            
            //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
            try {
                
                //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.For_c
                        {
                            x10_int i;
                            for (
                                 //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
                                 i = ((x10_int)0); ((i) < (inputs->
                                                             FMGL(size)));
                                 
                                 //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                                 i = ((x10_int) ((i) + (((x10_int)1)))))
                            {
                                
                                //#line 46 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                                functests::doLookup(hashTable,
                                                    inputs,
                                                    i, uniqueKeys,
                                                    flags,
                                                    true);
                            }
                        }
                        
                    }
                }
                catch (x10aux::__ref& __ref__5) {
                    x10aux::ref<x10::lang::Throwable>& __exc__ref__5 = (x10aux::ref<x10::lang::Throwable>&)__ref__5;
                    if (true) {
                        x10aux::ref<x10::lang::Throwable> __lowerer__var__2__ =
                          static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__5);
                        {
                            
                            //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__2__);
                            
                            //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10aux::__ref& __ref__6) {
                x10aux::ref<x10::lang::Throwable>& __exc__ref__6 = (x10aux::ref<x10::lang::Throwable>&)__ref__6;
                if (true) {
                    x10aux::ref<x10::lang::Throwable> formal10397 =
                      static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__6);
                    {
                        
                        //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable10396 = formal10397;
                    }
                } else
                throw;
            }
            
            //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10396)))
            {
                
                //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10396))
                {
                    
                    //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10396));
                }
                
            }
            
            //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var2);
            }
            
            //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10396)))
            {
                
                //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10396)))
                {
                    
                    //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10396));
                }
                
            }
            
        }
    }
    
    //#line 50 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CHashMap<x10_int, x10_int> > hashTable2 =
       x10aux::ref<CHashMap<x10_int, x10_int> >((new (memset(x10aux::alloc<CHashMap<x10_int, x10_int> >(), 0, sizeof(CHashMap<x10_int, x10_int>))) CHashMap<x10_int, x10_int>()))
    ;
    
    //#line 50 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10ConstructorCall_c
    (hashTable2)->::CHashMap<x10_int, x10_int>::_constructor();
    
    //#line 53 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs2 =
       x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > >((new (memset(x10aux::alloc<x10::array::Array<x10::util::Pair<x10_int, x10_int> > >(), 0, sizeof(x10::array::Array<x10::util::Pair<x10_int, x10_int> >))) x10::array::Array<x10::util::Pair<x10_int, x10_int> >()))
    ;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10365 = nAdds;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (inputs2)->::x10::lang::Object::_constructor();
    
    //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10355 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10356 =
           x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10356)->::x10::array::RectRegion1D::_constructor(
          ((x10_int)0), ((x10_int) ((size10365) - (((x10_int)1)))));
        alloc10356;
    }))
    );
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(region) = myReg10355;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(rank) = ((x10_int)1);
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(rect) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(zeroBased) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(rail) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(size) = size10365;
    
    //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(layout_min0) = inputs2->FMGL(layout_stride1) =
      inputs2->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(layout) = X10_NULL;
    
    //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    inputs2->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::util::Pair<x10_int, x10_int> >(size10365, 8, false, true);
    
    //#line 56 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys2 =
       x10aux::ref<x10::util::HashMap<x10_int, x10_int> >((new (memset(x10aux::alloc<x10::util::HashMap<x10_int, x10_int> >(), 0, sizeof(x10::util::HashMap<x10_int, x10_int>))) x10::util::HashMap<x10_int, x10_int>()))
    ;
    
    //#line 56 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10ConstructorCall_c
    (uniqueKeys2)->::x10::util::HashMap<x10_int, x10_int>::_constructor();
    
    //#line 57 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10_boolean> > flags2 =
       x10aux::ref<x10::array::Array<x10_boolean> >((new (memset(x10aux::alloc<x10::array::Array<x10_boolean> >(), 0, sizeof(x10::array::Array<x10_boolean>))) x10::array::Array<x10_boolean>()))
    ;
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10366 = inputs->FMGL(size);
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (flags2)->::x10::lang::Object::_constructor();
    
    //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10360 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10361 =
           x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10361)->::x10::array::RectRegion1D::_constructor(
          ((x10_int)0), ((x10_int) ((size10366) - (((x10_int)1)))));
        alloc10361;
    }))
    );
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(region) = myReg10360;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(rank) = ((x10_int)1);
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(rect) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(zeroBased) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(rail) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(size) = size10366;
    
    //#line 303 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(layout_min0) = flags2->FMGL(layout_stride1) =
      flags2->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 304 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(layout) = X10_NULL;
    
    //#line 305 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<x10_boolean > r10362 = x10::util::IndexedMemoryChunk<void>::allocate<x10_boolean >(size10366, 8, false, false);
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i6327max10357 = ((x10_int) ((size10366) - (((x10_int)1))));
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i10358;
        for (
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i10358 = ((x10_int)0); ((i10358) <= (i6327max10357));
             
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i10358 = ((x10_int) ((i10358) + (((x10_int)1)))))
        {
            
            //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10359 = i10358;
            
            //#line 307 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r10362)->__set(i10359, false);
        }
    }
    
    //#line 309 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    flags2->FMGL(raw) = r10362;
    {
        
        //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::FinishState> x10____var3 =
          x10::lang::Runtime::startFinish();
        {
            
            //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::lang::Throwable> throwable10399 =
              X10_NULL;
            
            //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
            try {
                
                //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 60 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::runAsync(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<functests__closure__1>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(functests__closure__1)))functests__closure__1(nAdds, rand, hashTable2, inputs2, uniqueKeys2))));
                        
                        //#line 67 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::runAsync(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<functests__closure__2>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(functests__closure__2)))functests__closure__2(nRemoves, rand, hashTable2, inputs2, uniqueKeys2, flags2))));
                        
                        //#line 75 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::runAsync(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<functests__closure__3>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(functests__closure__3)))functests__closure__3(inputs, hashTable2, inputs2, uniqueKeys2, flags2))));
                    }
                }
                catch (x10aux::__ref& __ref__7) {
                    x10aux::ref<x10::lang::Throwable>& __exc__ref__7 = (x10aux::ref<x10::lang::Throwable>&)__ref__7;
                    if (true) {
                        x10aux::ref<x10::lang::Throwable> __lowerer__var__3__ =
                          static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__7);
                        {
                            
                            //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__3__);
                            
                            //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10aux::__ref& __ref__8) {
                x10aux::ref<x10::lang::Throwable>& __exc__ref__8 = (x10aux::ref<x10::lang::Throwable>&)__ref__8;
                if (true) {
                    x10aux::ref<x10::lang::Throwable> formal10400 =
                      static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__8);
                    {
                        
                        //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable10399 = formal10400;
                    }
                } else
                throw;
            }
            
            //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10399)))
            {
                
                //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10399))
                {
                    
                    //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10399));
                }
                
            }
            
            //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var3);
            }
            
            //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable10399)))
            {
                
                //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10399)))
                {
                    
                    //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable10399));
                }
                
            }
            
        }
    }
}

//#line 83 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10MethodDecl_c
void functests::doRandomAdd(x10aux::ref<x10::util::Random> rand,
                            x10aux::ref<CHashMap<x10_int, x10_int> > hashTable,
                            x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs,
                            x10_int index, x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys) {
    
    //#line 84 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int thisKey = x10aux::nullCheck(rand)->nextInt();
    
    //#line 85 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10While_c
    while ((!x10aux::struct_equals(x10aux::nullCheck(uniqueKeys)->get(
                                     thisKey), X10_NULL)))
    {
        
        //#line 86 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10LocalAssign_c
        thisKey = x10aux::nullCheck(rand)->nextInt();
    }
    
    //#line 89 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int finalKey = thisKey;
    
    //#line 90 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int thisValue = x10aux::nullCheck(rand)->nextInt();
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i10369 = index;
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::Pair<x10_int, x10_int> v10370 = (__extension__ ({
        
        //#line 91 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
        x10::util::Pair<x10_int, x10_int> alloc10371 =  x10::util::Pair<x10_int, x10_int>::_alloc();
        
        //#line 21 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": x10.ast.X10LocalDecl_c
        x10_int first10367 = thisKey;
        
        //#line 21 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": x10.ast.X10LocalDecl_c
        x10_int second10368 = thisValue;
        
        //#line 22 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": Eval of x10.ast.X10FieldAssign_c
        alloc10371->FMGL(first) = first10367;
        
        //#line 23 "/opt/x10/stdlib/x10.jar:x10/util/Pair.x10": Eval of x10.ast.X10FieldAssign_c
        alloc10371->FMGL(second) = second10368;
        alloc10371;
    }))
    ;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::Pair<x10_int, x10_int> ret10372;
    
    //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
    (x10aux::nullCheck(inputs)->FMGL(raw))->__set(i10369, v10370);
    
    //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
    ret10372 = v10370;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
    ret10372;
    
    //#line 92 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::runAsync(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<functests__closure__4>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(functests__closure__4)))functests__closure__4(hashTable, finalKey, thisValue))));
    
    //#line 93 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(uniqueKeys)->put(thisKey, thisValue);
}

//#line 97 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10MethodDecl_c
void functests::doRandomRemove(x10aux::ref<x10::util::Random> rand,
                               x10aux::ref<CHashMap<x10_int, x10_int> > hashTable,
                               x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs,
                               x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys,
                               x10aux::ref<x10::array::Array<x10_boolean> > flags,
                               x10_boolean determinate) {
    
    //#line 98 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int r = x10aux::nullCheck(rand)->nextInt(x10aux::nullCheck(inputs)->
                                                   FMGL(size));
    
    //#line 99 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10LocalDecl_c
    x10_int key = (__extension__ ({
                      
                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int i10207 = r;
                      
                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10::util::Pair<x10_int, x10_int> ret10208;
                      
                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                      ret10208 = (x10aux::nullCheck(inputs)->
                                    FMGL(raw))->__apply(i10207);
                      ret10208;
                  }))
                  ->FMGL(first);
    
    //#line 100 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::runAsync(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<functests__closure__5>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(functests__closure__5)))functests__closure__5(hashTable, key, determinate, r, inputs, flags))));
}

//#line 115 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10MethodDecl_c
void functests::doLookup(x10aux::ref<CHashMap<x10_int, x10_int> > hashTable,
                         x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs,
                         x10_int index, x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys,
                         x10aux::ref<x10::array::Array<x10_boolean> > flags,
                         x10_boolean determinate) {
    
    //#line 116 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::runAsync(x10aux::ref<x10::lang::VoidFun_0_0>(x10aux::ref<functests__closure__6>(new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(functests__closure__6)))functests__closure__6(index, flags, hashTable, inputs, determinate))));
}

//#line 7 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10MethodDecl_c
x10aux::ref<functests> functests::functests____functests__this(
  ) {
    
    //#line 7 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10Return_c
    return ((x10aux::ref<functests>)this);
    
}

//#line 7 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10ConstructorDecl_c
void functests::_constructor() {
    
    //#line 7 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.X10ConstructorCall_c
    (((x10aux::ref<x10::lang::Object>)this))->::x10::lang::Object::_constructor();
    
    //#line 7 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/functests.x10": x10.ast.AssignPropertyCall_c
    
}
x10aux::ref<functests> functests::_make() {
    x10aux::ref<functests> this_ = new (memset(x10aux::alloc<functests>(), 0, sizeof(functests))) functests();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t functests::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(functests::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void functests::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    
}

x10aux::ref<x10::lang::Reference> functests::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<functests> this_ = new (memset(x10aux::alloc<functests>(), 0, sizeof(functests))) functests();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void functests::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    
}

x10aux::RuntimeType functests::rtt;
void functests::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    rtt.initStageTwo("functests",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}
x10::lang::VoidFun_0_0::itable<functests__closure__1>functests__closure__1::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &functests__closure__1::__apply, &functests__closure__1::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry functests__closure__1::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &functests__closure__1::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t functests__closure__1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(functests__closure__1::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<functests__closure__2>functests__closure__2::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &functests__closure__2::__apply, &functests__closure__2::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry functests__closure__2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &functests__closure__2::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t functests__closure__2::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(functests__closure__2::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<functests__closure__3>functests__closure__3::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &functests__closure__3::__apply, &functests__closure__3::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry functests__closure__3::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &functests__closure__3::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t functests__closure__3::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(functests__closure__3::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<functests__closure__4>functests__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &functests__closure__4::__apply, &functests__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry functests__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &functests__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t functests__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(functests__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<functests__closure__5>functests__closure__5::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &functests__closure__5::__apply, &functests__closure__5::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry functests__closure__5::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &functests__closure__5::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t functests__closure__5::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(functests__closure__5::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

x10::lang::VoidFun_0_0::itable<functests__closure__6>functests__closure__6::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &functests__closure__6::__apply, &functests__closure__6::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry functests__closure__6::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &functests__closure__6::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t functests__closure__6::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(functests__closure__6::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

/* END of functests */
/*************************************************/
