#ifndef __CHASHMAP_H
#define __CHASHMAP_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
template<class TPMGL(K), class TPMGL(V)> class CEntry;
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Throwable;
} } 
namespace x10 { namespace lang { 
class Runtime;
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
class RuntimeException;
} } 
template<class TPMGL(K), class TPMGL(V)> class CHashMap;
template <> class CHashMap<void, void>;
template<class TPMGL(K), class TPMGL(V)> class CHashMap : public x10::lang::Object
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >
      FMGL(buckets);
    
    x10_int FMGL(numSegments);
    
    void _constructor();
    
    static x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > _make();
    
    x10_int getBucketIndexFromKey(TPMGL(K) key);
    x10_int getBucketIndexFromKey(TPMGL(K) key, x10_int oldNumSegments);
    x10_boolean empty(x10_int bucket);
    x10_boolean empty(x10_int bucket, x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > oldBuckets,
                      x10_int oldNumSegments);
    void swap(x10_int newBucket, x10_int emptyBucket);
    x10_int hop(x10_int desiredBucket, x10_int emptyBucket);
    virtual void add(TPMGL(K) key, TPMGL(V) value);
    virtual x10_int getActualBucket(TPMGL(K) key);
    virtual x10aux::ref<x10::lang::Any> get(TPMGL(K) key);
    virtual x10aux::ref<x10::lang::Any> remove(TPMGL(K) key);
    void shrink();
    void grow();
    virtual x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > CHashMap____CHashMap__this(
      );
    virtual void __fieldInitializers7704();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10aux::ref<x10::lang::Reference> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
template <> class CHashMap<void, void> : public x10::lang::Object
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    static x10_int FMGL(DEFAULT_NUM_BUCKETS);
    
    static x10_int FMGL(MAX_SEGMENTS);
    
    static x10_int FMGL(RESIZE_FACTOR);
    
    static x10_int FMGL(NEIGHBORHOOD_SIZE);
    
    static x10_boolean FMGL(isDebugging);
    
    static x10_int FMGL(DEFAULT_NUM_BUCKETS__get)();
    static x10_int FMGL(MAX_SEGMENTS__get)();
    static x10_int FMGL(RESIZE_FACTOR__get)();
    static x10_int FMGL(NEIGHBORHOOD_SIZE__get)();
    static x10_boolean FMGL(isDebugging__get)();
    
};
#endif // CHASHMAP_H

template<class TPMGL(K), class TPMGL(V)> class CHashMap;

#ifndef CHASHMAP_H_NODEPS
#define CHASHMAP_H_NODEPS
#include <x10/lang/Object.h>
#include <x10/lang/Int.h>
#include <x10/array/Array.h>
#include <CEntry.h>
#include <x10/lang/Boolean.h>
#include <x10/array/Region.h>
#include <x10/array/RectRegion1D.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Any.h>
#include <x10/lang/Throwable.h>
#include <x10/lang/Runtime.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/RuntimeException.h>
#ifndef CHASHMAP_H_GENERICS
#define CHASHMAP_H_GENERICS
inline x10_int CHashMap<void, void>::FMGL(DEFAULT_NUM_BUCKETS__get)() {
    return CHashMap<void, void>::FMGL(DEFAULT_NUM_BUCKETS);
}

inline x10_int CHashMap<void, void>::FMGL(MAX_SEGMENTS__get)() {
    return CHashMap<void, void>::FMGL(MAX_SEGMENTS);
}

inline x10_int CHashMap<void, void>::FMGL(RESIZE_FACTOR__get)() {
    return CHashMap<void, void>::FMGL(RESIZE_FACTOR);
}

inline x10_int CHashMap<void, void>::FMGL(NEIGHBORHOOD_SIZE__get)() {
    return CHashMap<void, void>::FMGL(NEIGHBORHOOD_SIZE);
}

inline x10_boolean CHashMap<void, void>::FMGL(isDebugging__get)() {
    return CHashMap<void, void>::FMGL(isDebugging);
}

#endif // CHASHMAP_H_GENERICS
#ifndef CHASHMAP_H_IMPLEMENTATION
#define CHASHMAP_H_IMPLEMENTATION
#include <CHashMap.h>


//#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 14 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 15 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 16 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 19 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 20 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 25 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           ) {
    
    //#line 25 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
    (((x10aux::ref<x10::lang::Object>)this))->::x10::lang::Object::_constructor();
    
    //#line 25 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10545 = x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
    
    //#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this10545)->FMGL(buckets) = X10_NULL;
    
    //#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this10545)->FMGL(numSegments) = ((x10_int)1);
    
    //#line 26 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(buckets) =
      (__extension__ ({
        
        //#line 26 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > alloc8327 =
           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >((new (memset(x10aux::alloc<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >(), 0, sizeof(x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >))) x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >()))
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc8327)->::x10::lang::Object::_constructor();
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10546 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10547 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10547)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((((x10_int)128)) - (((x10_int)1)))));
            alloc10547;
        }))
        );
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(region) = myReg10546;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(rank) = ((x10_int)1);
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(rect) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(zeroBased) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(rail) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(size) = ((x10_int)128);
        
        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(layout_min0) = alloc8327->FMGL(layout_stride1) =
          alloc8327->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(layout) = X10_NULL;
        
        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8327->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >(((x10_int)128), 8, false, true);
        alloc8327;
    }))
    ;
}
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > CHashMap<TPMGL(K), TPMGL(V)>::_make(
                                           ) {
    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this_ = new (memset(x10aux::alloc<CHashMap<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CHashMap<TPMGL(K), TPMGL(V)>))) CHashMap<TPMGL(K), TPMGL(V)>();
    this_->_constructor();
    return this_;
}



//#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::getBucketIndexFromKey(
  TPMGL(K) key) {
    
    //#line 33 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getBucketIndexFromKey(
             key, ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                    FMGL(numSegments));
    
}

//#line 37 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::getBucketIndexFromKey(
  TPMGL(K) key, x10_int oldNumSegments) {
    
    //#line 38 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int hash = ((x10_int) ((x10aux::hash_code(key)) % x10aux::zeroCheck(x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                                                FMGL(buckets))->
                                                                              FMGL(size))));
    
    //#line 39 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((hash) < (((x10_int)0)))) {
        
        //#line 40 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
        hash = ((x10_int) ((hash) + (x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                         FMGL(buckets))->
                                       FMGL(size))));
    }
    
    //#line 42 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int segment = ((x10_int) ((hash) % x10aux::zeroCheck(oldNumSegments)));
    
    //#line 43 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((segment) < (((x10_int)0)))) {
        
        //#line 44 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
        segment = ((x10_int) ((segment) + (oldNumSegments)));
    }
    
    //#line 46 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int bucket = ((x10_int) ((hash) / x10aux::zeroCheck(oldNumSegments)));
    
    //#line 47 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10_int) ((((x10_int) ((((x10_int)128)) * (segment)))) + (bucket)));
    
}

//#line 53 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_boolean CHashMap<TPMGL(K), TPMGL(V)>::empty(
  x10_int bucket) {
    
    //#line 54 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
             bucket, ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                       FMGL(buckets), ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                        FMGL(numSegments));
    
}

//#line 58 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_boolean CHashMap<TPMGL(K), TPMGL(V)>::empty(
  x10_int bucket, x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > oldBuckets,
  x10_int oldNumSegments) {
    
    //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((__extension__ ({
                                      
                                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                      x10_int i10409 = bucket;
                                      
                                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                      x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10410;
                                      
                                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                      ret10410 = (x10aux::nullCheck(oldBuckets)->
                                                    FMGL(raw))->__apply(i10409);
                                      ret10410;
                                  }))
                                  , X10_NULL)) || x10aux::nullCheck((__extension__ ({
                                                      
                                                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i10412 =
                                                        bucket;
                                                      
                                                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                      x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10413;
                                                      
                                                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret10413 =
                                                        (x10aux::nullCheck(oldBuckets)->
                                                           FMGL(raw))->__apply(i10412);
                                                      ret10413;
                                                  }))
                                                  )->FMGL(isNull);
    
}

//#line 63 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::swap(
  x10_int newBucket, x10_int emptyBucket) {
    
    //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    TPMGL(K) key = x10aux::nullCheck((__extension__ ({
                       
                       //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                       x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10416 =
                         ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                           FMGL(buckets);
                       
                       //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                       x10_int i10415 = newBucket;
                       
                       //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                       x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10417;
                       
                       //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                       ret10417 = (x10aux::nullCheck(this10416)->
                                     FMGL(raw))->__apply(i10415);
                       ret10417;
                   }))
                   )->getKey();
    
    //#line 66 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    TPMGL(V) value = x10aux::nullCheck((__extension__ ({
                         
                         //#line 66 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                         x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10420 =
                           ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                             FMGL(buckets);
                         
                         //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i10419 = newBucket;
                         
                         //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10421;
                         
                         //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret10421 = (x10aux::nullCheck(this10420)->
                                       FMGL(raw))->__apply(i10419);
                         ret10421;
                     }))
                     )->getValue();
    
    //#line 67 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10548 =
      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
        FMGL(buckets);
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i10549 = emptyBucket;
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > v10550 = (__extension__ ({
        
        //#line 67 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > alloc10551 =
           x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >((new (memset(x10aux::alloc<CEntry<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CEntry<TPMGL(K), TPMGL(V)>))) CEntry<TPMGL(K), TPMGL(V)>()))
        ;
        
        //#line 67 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
        (alloc10551)->::CEntry<TPMGL(K), TPMGL(V)>::_constructor(
          key, value);
        alloc10551;
    }))
    ;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10552;
    
    //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
    (x10aux::nullCheck(this10548)->FMGL(raw))->__set(i10549, v10550);
    
    //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
    ret10552 = v10550;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
    ret10552;
    
    //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int virtualBucket = (__extension__ ({
        
        //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10429 =
          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        TPMGL(K) key10428 = key;
        x10aux::nullCheck(this10429)->getBucketIndexFromKey(
          key10428, x10aux::nullCheck(this10429)->FMGL(numSegments));
    }))
    ;
    
    //#line 69 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        
        //#line 69 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10431 =
          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
            FMGL(buckets);
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i10430 = virtualBucket;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10432;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret10432 = (x10aux::nullCheck(this10431)->FMGL(raw))->__apply(i10430);
        ret10432;
    }))
    )->setBit(((x10_int) ((emptyBucket) - (virtualBucket))),
              true);
    
    //#line 70 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        
        //#line 70 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10435 =
          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
            FMGL(buckets);
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i10434 = virtualBucket;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10436;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret10436 = (x10aux::nullCheck(this10435)->FMGL(raw))->__apply(i10434);
        ret10436;
    }))
    )->setBit(((x10_int) ((newBucket) - (virtualBucket))),
              false);
    
    //#line 71 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck((__extension__ ({
        
        //#line 71 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10439 =
          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
            FMGL(buckets);
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i10438 = newBucket;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10440;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret10440 = (x10aux::nullCheck(this10439)->FMGL(raw))->__apply(i10438);
        ret10440;
    }))
    )->FMGL(isNull) = true;
}

//#line 79 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::hop(
  x10_int desiredBucket, x10_int emptyBucket) {
    
    //#line 81 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((emptyBucket) < (((x10_int) (((__extension__ ({
            
            //#line 81 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10447 =
              x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
            
            //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            TPMGL(K) key10446 = x10aux::nullCheck((__extension__ ({
                                    
                                    //#line 81 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10443 =
                                      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                        FMGL(buckets);
                                    
                                    //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10_int i10442 = desiredBucket;
                                    
                                    //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                    x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10444;
                                    
                                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret10444 = (x10aux::nullCheck(this10443)->
                                                  FMGL(raw))->__apply(i10442);
                                    ret10444;
                                }))
                                )->getKey();
            x10aux::nullCheck(this10447)->getBucketIndexFromKey(
              key10446, x10aux::nullCheck(this10447)->FMGL(numSegments));
        }))
        ) + (((x10_int)4))))))) {
        
        //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
        ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->swap(
          desiredBucket, emptyBucket);
        
        //#line 84 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
        return desiredBucket;
        
    } else {
        
        //#line 86 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int newBucket = emptyBucket;
        
        //#line 87 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
        {
            x10_int index;
            for (
                 //#line 87 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                 index = ((x10_int) ((((x10_int) ((emptyBucket) - (((x10_int)4))))) + (((x10_int)1))));
                 ((index) < (emptyBucket)); 
                                            //#line 87 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                            index = ((x10_int) ((index) + (((x10_int)1)))))
            {
                
                //#line 88 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                if (((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
                      index)) {
                    
                    //#line 89 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    newBucket = index;
                    
                    //#line 90 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Branch_c
                    break;
                } else {
                    
                    //#line 92 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int delta = x10aux::nullCheck((__extension__ ({
                                        
                                        //#line 92 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10449 =
                                          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                            FMGL(buckets);
                                        
                                        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10_int i10448 = index;
                                        
                                        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10450;
                                        
                                        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret10450 = (x10aux::nullCheck(this10449)->
                                                      FMGL(raw))->__apply(i10448);
                                        ret10450;
                                    }))
                                    )->getFirstEntry();
                    
                    //#line 93 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (((delta) >= (((x10_int)0))) && ((((x10_int) ((index) + (delta)))) < (emptyBucket)))
                    {
                        
                        //#line 94 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        newBucket = ((x10_int) ((index) + (delta)));
                        
                        //#line 95 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Branch_c
                        break;
                    }
                    
                }
                
            }
        }
        
        //#line 99 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (((newBucket) < (emptyBucket))) {
            
            //#line 100 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
                    newBucket))) {
                
                //#line 101 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->swap(
                  newBucket, emptyBucket);
            }
            
            //#line 103 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
            return newBucket;
            
        } else {
            
            //#line 106 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
            return ((x10_int)-1);
            
        }
        
    }
    
}

//#line 112 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::add(
  TPMGL(K) key, TPMGL(V) value) {
    {
        
        //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10575 =
          X10_NULL;
        
        //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 115 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int bucket = (__extension__ ({
                        
                        //#line 115 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10453 =
                          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
                        
                        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        TPMGL(K) key10452 = key;
                        x10aux::nullCheck(this10453)->getBucketIndexFromKey(
                          key10452, x10aux::nullCheck(this10453)->
                                      FMGL(numSegments));
                    }))
                    ;
                    
                    //#line 116 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int currentBucket = bucket;
                    
                    //#line 121 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int actualBucketOrSomething = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getActualBucket(
                                                        key);
                    
                    //#line 122 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(actualBucketOrSomething,
                                                ((x10_int)-1))))
                    {
                        
                        //#line 123 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 123 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10455 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10454 = actualBucketOrSomething;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10456;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10456 = (x10aux::nullCheck(this10455)->
                                          FMGL(raw))->__apply(i10454);
                            ret10456;
                        }))
                        )->setValue(value);
                        
                        //#line 124 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::throwReturn();
                    }
                    
                    //#line 128 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10While_c
                    while (((currentBucket) < (x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                   FMGL(buckets))->
                                                 FMGL(size))) &&
                           !(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
                               currentBucket))) {
                        
                        //#line 129 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        currentBucket = ((x10_int) ((currentBucket) + (((x10_int)1))));
                    }
                    
                    //#line 133 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (((currentBucket) >= (x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                 FMGL(buckets))->
                                               FMGL(size))))
                    {
                        
                        //#line 134 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->grow();
                        
                        //#line 135 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->add(
                          key, value);
                    } else 
                    //#line 136 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (((currentBucket) < (((x10_int) ((bucket) + (((x10_int)4)))))))
                    {
                        
                        //#line 137 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10553 =
                          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                            FMGL(buckets);
                        
                        //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i10554 = currentBucket;
                        
                        //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > v10555 =
                          (__extension__ ({
                            
                            //#line 137 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > alloc10556 =
                               x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >((new (memset(x10aux::alloc<CEntry<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CEntry<TPMGL(K), TPMGL(V)>))) CEntry<TPMGL(K), TPMGL(V)>()))
                            ;
                            
                            //#line 137 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
                            (alloc10556)->::CEntry<TPMGL(K), TPMGL(V)>::_constructor(
                              key, value);
                            alloc10556;
                        }))
                        ;
                        
                        //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10557;
                        
                        //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        (x10aux::nullCheck(this10553)->FMGL(raw))->__set(i10554, v10555);
                        
                        //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret10557 = v10555;
                        
                        //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                        ret10557;
                        
                        //#line 138 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 138 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10464 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10463 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10465;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10465 = (x10aux::nullCheck(this10464)->
                                          FMGL(raw))->__apply(i10463);
                            ret10465;
                        }))
                        )->setBit(((x10_int) ((currentBucket) - (bucket))),
                                  true);
                    } else {
                        
                        //#line 141 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10While_c
                        while ((!x10aux::struct_equals(currentBucket,
                                                       bucket)))
                        {
                            
                            //#line 142 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                            currentBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->hop(
                                              bucket, currentBucket);
                            
                            //#line 143 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                            if ((x10aux::struct_equals(currentBucket,
                                                       ((x10_int)-1))))
                            {
                                
                                //#line 144 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->grow();
                                
                                //#line 145 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->add(
                                  key, value);
                                
                                //#line 146 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                                x10::compiler::Finalization::throwReturn();
                            }
                            
                        }
                        
                        //#line 150 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 150 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10468 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10467 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10469;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10469 = (x10aux::nullCheck(this10468)->
                                          FMGL(raw))->__apply(i10467);
                            ret10469;
                        }))
                        )->setKey(key);
                        
                        //#line 151 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 151 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10472 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10471 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10473;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10473 = (x10aux::nullCheck(this10472)->
                                          FMGL(raw))->__apply(i10471);
                            ret10473;
                        }))
                        )->setValue(value);
                        
                        //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10476 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10475 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10477;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10477 = (x10aux::nullCheck(this10476)->
                                          FMGL(raw))->__apply(i10475);
                            ret10477;
                        }))
                        )->setBit(((x10_int)0), true);
                    }
                    
                }
            }
            
            //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__20) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__20 = (x10aux::ref<x10::lang::Throwable>&)__ref__20;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10576 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__20);
                {
                    
                    //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10575 = formal10576;
                }
            } else
            throw;
        }
        
        //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10575)))
        {
            
            //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10575))
            {
                
                //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10575));
            }
            
        }
        
        //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10575)))
        {
            
            //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10575)))
            {
                
                //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10575));
            }
            
            //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::compiler::Finalization> fin10577 =
              x10aux::class_cast_unchecked<x10aux::ref<x10::compiler::Finalization> >(throwable10575);
            
            //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(fin10577)->FMGL(isReturn))
            {
                
                //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                return;
            }
            
        }
        
    }
}

//#line 159 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::getActualBucket(
  TPMGL(K) key) {
    
    //#line 160 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int virtualBucket = (__extension__ ({
        
        //#line 160 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10480 =
          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        TPMGL(K) key10479 = key;
        x10aux::nullCheck(this10480)->getBucketIndexFromKey(
          key10479, x10aux::nullCheck(this10480)->FMGL(numSegments));
    }))
    ;
    
    //#line 161 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
    {
        x10_int offset;
        for (
             //#line 161 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
             offset = ((x10_int)0); ((offset) < (((x10_int)4)));
             
             //#line 161 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
             offset = ((x10_int) ((offset) + (((x10_int)1)))))
        {
            
            //#line 162 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10_int testBucket = ((x10_int) ((virtualBucket) + (offset)));
            
            //#line 163 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (((testBucket) >= (((x10_int)0))) && ((testBucket) < (x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                                         FMGL(buckets))->
                                                                       FMGL(size))))
            {
                
                //#line 164 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                if (!(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
                        testBucket))) {
                    
                    //#line 165 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (x10aux::equals(x10aux::nullCheck((__extension__ ({
                                           
                                           //#line 165 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10482 =
                                             ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                               FMGL(buckets);
                                           
                                           //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                           x10_int i10481 =
                                             testBucket;
                                           
                                           //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                           x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10483;
                                           
                                           //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret10483 = (x10aux::nullCheck(this10482)->
                                                         FMGL(raw))->__apply(i10481);
                                           ret10483;
                                       }))
                                       )->getKey(),x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(key)))
                    {
                        
                        //#line 166 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                        return testBucket;
                        
                    }
                    
                }
                
            }
            
        }
    }
    
    //#line 169 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10_int)-1);
    
}

//#line 173 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<x10::lang::Any>
  CHashMap<TPMGL(K), TPMGL(V)>::get(TPMGL(K) key) {
    {
        
        //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10579 =
          X10_NULL;
        
        //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 175 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int actualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getActualBucket(
                                             key);
                    
                    //#line 176 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::throwReturn(
                      (x10aux::struct_equals(actualBucket,
                                             ((x10_int)-1)))
                        ? ((x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(X10_NULL)))
                        : ((x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(x10aux::nullCheck((__extension__ ({
                                                                                           
                                                                                           //#line 176 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                                                                           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10486 =
                                                                                             ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                                               FMGL(buckets);
                                                                                           
                                                                                           //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                           x10_int i10485 =
                                                                                             actualBucket;
                                                                                           
                                                                                           //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                           x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10487;
                                                                                           
                                                                                           //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                           ret10487 =
                                                                                             (x10aux::nullCheck(this10486)->
                                                                                                FMGL(raw))->__apply(i10485);
                                                                                           ret10487;
                                                                                       }))
                                                                                       )->getValue()))));
                }
            }
            
            //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__23) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__23 = (x10aux::ref<x10::lang::Throwable>&)__ref__23;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10580 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__23);
                {
                    
                    //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10579 = formal10580;
                }
            } else
            throw;
        }
        
        //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10579)))
        {
            
            //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10579))
            {
                
                //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10579));
            }
            
        }
        
        //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10579)))
        {
            
            //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10579)))
            {
                
                //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10579));
            }
            
            //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::compiler::Finalization> fin10581 =
              x10aux::class_cast_unchecked<x10aux::ref<x10::compiler::Finalization> >(throwable10579);
            
            //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(fin10581)->FMGL(isReturn))
            {
                
                //#line 174 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                return x10aux::nullCheck(fin10581)->FMGL(value);
                
            }
            
        }
        
    }
}

//#line 182 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<x10::lang::Any>
  CHashMap<TPMGL(K), TPMGL(V)>::remove(TPMGL(K) key) {
    {
        
        //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10584 =
          X10_NULL;
        
        //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 184 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int virtualBucket = (__extension__ ({
                        
                        //#line 184 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10490 =
                          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
                        
                        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        TPMGL(K) key10489 = key;
                        x10aux::nullCheck(this10490)->getBucketIndexFromKey(
                          key10489, x10aux::nullCheck(this10490)->
                                      FMGL(numSegments));
                    }))
                    ;
                    
                    //#line 186 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int actualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getActualBucket(
                                             key);
                    
                    //#line 187 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if ((x10aux::struct_equals(actualBucket,
                                               ((x10_int)-1))))
                    {
                        
                        //#line 189 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::throwReturn(
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(X10_NULL));
                    } else {
                        
                        //#line 191 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 191 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10492 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10491 = virtualBucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10493;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10493 = (x10aux::nullCheck(this10492)->
                                          FMGL(raw))->__apply(i10491);
                            ret10493;
                        }))
                        )->setBit(((x10_int) ((actualBucket) - (virtualBucket))),
                                  false);
                        
                        //#line 192 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        TPMGL(V) value = x10aux::nullCheck((__extension__ ({
                                             
                                             //#line 192 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                             x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10496 =
                                               ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                 FMGL(buckets);
                                             
                                             //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10_int i10495 =
                                               actualBucket;
                                             
                                             //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10497;
                                             
                                             //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret10497 = (x10aux::nullCheck(this10496)->
                                                           FMGL(raw))->__apply(i10495);
                                             ret10497;
                                         }))
                                         )->getValue();
                        
                        //#line 193 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 193 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10500 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10499 = actualBucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10501;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10501 = (x10aux::nullCheck(this10500)->
                                          FMGL(raw))->__apply(i10499);
                            ret10501;
                        }))
                        )->FMGL(isNull) = true;
                        
                        //#line 195 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::throwReturn(
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(value));
                    }
                    
                }
            }
            
            //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__25) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__25 = (x10aux::ref<x10::lang::Throwable>&)__ref__25;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10585 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__25);
                {
                    
                    //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10584 = formal10585;
                }
            } else
            throw;
        }
        
        //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10584)))
        {
            
            //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10584))
            {
                
                //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10584));
            }
            
        }
        
        //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10584)))
        {
            
            //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10584)))
            {
                
                //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10584));
            }
            
            //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::compiler::Finalization> fin10586 =
              x10aux::class_cast_unchecked<x10aux::ref<x10::compiler::Finalization> >(throwable10584);
            
            //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(fin10586)->FMGL(isReturn))
            {
                
                //#line 183 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                return x10aux::nullCheck(fin10586)->FMGL(value);
                
            }
            
        }
        
    }
}

//#line 200 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::shrink(
  ) {
    
    //#line 201 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > old =
      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
        FMGL(buckets);
    
    //#line 202 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(buckets) =
      (__extension__ ({
        
        //#line 202 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > alloc8330 =
           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >((new (memset(x10aux::alloc<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >(), 0, sizeof(x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >))) x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >()))
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size10560 = ((x10_int) ((x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                             FMGL(buckets))->
                                           FMGL(size)) / x10aux::zeroCheck(((x10_int)2))));
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc8330)->::x10::lang::Object::_constructor();
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10558 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10559 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10559)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((size10560) - (((x10_int)1)))));
            alloc10559;
        }))
        );
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(region) = myReg10558;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(rank) = ((x10_int)1);
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(rect) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(zeroBased) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(rail) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(size) = size10560;
        
        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(layout_min0) = alloc8330->FMGL(layout_stride1) =
          alloc8330->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(layout) = X10_NULL;
        
        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8330->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >(size10560, 8, false, true);
        alloc8330;
    }))
    ;
    
    //#line 204 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int oldNumSegments = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                               FMGL(numSegments);
    
    //#line 205 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > x10561 = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this);
    
    //#line 205 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x10561)->FMGL(numSegments) = ((x10_int) ((x10aux::nullCheck(x10561)->
                                                                  FMGL(numSegments)) / x10aux::zeroCheck(((x10_int)2))));
    
    //#line 207 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 207 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (x10aux::nullCheck(old)->
                                         FMGL(size))); 
                                                       //#line 207 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                                       i =
                                                         ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 208 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
                    i, old, oldNumSegments))) {
                
                //#line 209 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->add(
                  x10aux::nullCheck((__extension__ ({
                      
                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int i10509 = i;
                      
                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10510;
                      
                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                      ret10510 = (x10aux::nullCheck(old)->
                                    FMGL(raw))->__apply(i10509);
                      ret10510;
                  }))
                  )->getKey(), x10aux::nullCheck((__extension__ ({
                                   
                                   //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10_int i10512 = i;
                                   
                                   //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10513;
                                   
                                   //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                   ret10513 = (x10aux::nullCheck(old)->
                                                 FMGL(raw))->__apply(i10512);
                                   ret10513;
                               }))
                               )->getValue());
            }
            
        }
    }
    
}

//#line 213 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::grow(
  ) {
    
    //#line 215 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > old =
      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
        FMGL(buckets);
    
    //#line 216 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(buckets) =
      (__extension__ ({
        
        //#line 216 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > alloc8331 =
           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >((new (memset(x10aux::alloc<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >(), 0, sizeof(x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >))) x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >()))
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size10564 = ((x10_int) ((x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                             FMGL(buckets))->
                                           FMGL(size)) * (((x10_int)2))));
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc8331)->::x10::lang::Object::_constructor();
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10562 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10563 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10563)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((size10564) - (((x10_int)1)))));
            alloc10563;
        }))
        );
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(region) = myReg10562;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(rank) = ((x10_int)1);
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(rect) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(zeroBased) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(rail) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(size) = size10564;
        
        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(layout_min0) = alloc8331->FMGL(layout_stride1) =
          alloc8331->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(layout) = X10_NULL;
        
        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8331->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >(size10564, 8, false, true);
        alloc8331;
    }))
    ;
    
    //#line 217 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int oldNumSegments = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                               FMGL(numSegments);
    
    //#line 218 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > x10565 = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this);
    
    //#line 218 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x10565)->FMGL(numSegments) = ((x10_int) ((x10aux::nullCheck(x10565)->
                                                                  FMGL(numSegments)) * (((x10_int)2))));
    
    //#line 219 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
            FMGL(numSegments)) > (((x10_int)1000000)))) {
        
        //#line 220 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::RuntimeException::_make(x10aux::string_utils::lit("Too many items hash to the same value.  Increase the neighborhood size."))));
    }
    
    //#line 223 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 223 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (x10aux::nullCheck(old)->
                                         FMGL(size))); 
                                                       //#line 223 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                                       i =
                                                         ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 224 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
                    i, old, oldNumSegments))) {
                
                //#line 225 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->add(
                  x10aux::nullCheck((__extension__ ({
                      
                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int i10521 = i;
                      
                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10522;
                      
                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                      ret10522 = (x10aux::nullCheck(old)->
                                    FMGL(raw))->__apply(i10521);
                      ret10522;
                  }))
                  )->getKey(), x10aux::nullCheck((__extension__ ({
                                   
                                   //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10_int i10524 = i;
                                   
                                   //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10525;
                                   
                                   //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                   ret10525 = (x10aux::nullCheck(old)->
                                                 FMGL(raw))->__apply(i10524);
                                   ret10525;
                               }))
                               )->getValue());
            }
            
        }
    }
    
}

//#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >
  CHashMap<TPMGL(K), TPMGL(V)>::CHashMap____CHashMap__this(
  ) {
    
    //#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this);
    
}

//#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers7704(
  ) {
    
    //#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(buckets) =
      X10_NULL;
    
    //#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(numSegments) =
      ((x10_int)1);
}
template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t CHashMap<TPMGL(K), TPMGL(V)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(CHashMap<TPMGL(K), TPMGL(V)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    buf.write(this->FMGL(buckets));
    buf.write(this->FMGL(numSegments));
    
}

template<class TPMGL(K), class TPMGL(V)> x10aux::ref<x10::lang::Reference> CHashMap<TPMGL(K), TPMGL(V)>::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this_ = new (memset(x10aux::alloc<CHashMap<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CHashMap<TPMGL(K), TPMGL(V)>))) CHashMap<TPMGL(K), TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    FMGL(buckets) = buf.read<x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > >();
    FMGL(numSegments) = buf.read<x10_int>();
    
}

template<class TPMGL(K), class TPMGL(V)> x10aux::RuntimeType CHashMap<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<CHashMap<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(K)>(), x10aux::getRTT<TPMGL(V)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "CHashMap";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}
#endif // CHASHMAP_H_IMPLEMENTATION
#endif // __CHASHMAP_H_NODEPS
