#ifndef __FUNCTESTS_H
#define __FUNCTESTS_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace util { 
class Random;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
template<class TPMGL(K), class TPMGL(V)> class CHashMap;
namespace x10 { namespace util { 
template<class TPMGL(T), class TPMGL(U)> class Pair;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Throwable;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
class functests : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > args);
    static void doRandomAdd(x10aux::ref<x10::util::Random> rand, x10aux::ref<CHashMap<x10_int, x10_int> > hashTable,
                            x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs,
                            x10_int index, x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys);
    static void doRandomRemove(x10aux::ref<x10::util::Random> rand,
                               x10aux::ref<CHashMap<x10_int, x10_int> > hashTable,
                               x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs,
                               x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys,
                               x10aux::ref<x10::array::Array<x10_boolean> > flags,
                               x10_boolean determinate);
    static void doLookup(x10aux::ref<CHashMap<x10_int, x10_int> > hashTable,
                         x10aux::ref<x10::array::Array<x10::util::Pair<x10_int, x10_int> > > inputs,
                         x10_int index, x10aux::ref<x10::util::HashMap<x10_int, x10_int> > uniqueKeys,
                         x10aux::ref<x10::array::Array<x10_boolean> > flags,
                         x10_boolean determinate);
    virtual x10aux::ref<functests> functests____functests__this(
      );
    void _constructor();
    
    static x10aux::ref<functests> _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10aux::ref<x10::lang::Reference> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
#endif // FUNCTESTS_H

class functests;

#ifndef FUNCTESTS_H_NODEPS
#define FUNCTESTS_H_NODEPS
#ifndef FUNCTESTS_H_GENERICS
#define FUNCTESTS_H_GENERICS
#endif // FUNCTESTS_H_GENERICS
#endif // __FUNCTESTS_H_NODEPS
