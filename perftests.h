#ifndef __PERFTESTS_H
#define __PERFTESTS_H

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
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace util { 
class Random;
} } 
template<class TPMGL(K), class TPMGL(V)> class CHashMap;
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Box;
} } 
class perftests : public x10::lang::Object   {
    public:
    RTT_H_DECLS_CLASS
    
    static void main(x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > args);
    virtual x10aux::ref<perftests> perftests____perftests__this();
    void _constructor();
    
    static x10aux::ref<perftests> _make();
    
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10aux::ref<x10::lang::Reference> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
#endif // PERFTESTS_H

class perftests;

#ifndef PERFTESTS_H_NODEPS
#define PERFTESTS_H_NODEPS
#ifndef PERFTESTS_H_GENERICS
#define PERFTESTS_H_GENERICS
#endif // PERFTESTS_H_GENERICS
#endif // __PERFTESTS_H_NODEPS
