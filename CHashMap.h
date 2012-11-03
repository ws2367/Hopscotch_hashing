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
namespace x10 { namespace util { 
class Random;
} } 
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
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Long;
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
    
    x10aux::ref<x10::util::Random> FMGL(rand);
    
    x10_int FMGL(offset);
    
    void _constructor();
    
    static x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > _make();
    
    x10_int posMod(x10_int m, x10_int n);
    x10_int getBucketIndexFromKey(TPMGL(K) key);
    x10_boolean empty(x10_int bucket);
    x10_boolean empty(x10_int bucket, x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > currentBuckets);
    void swap(x10_int newBucket, x10_int emptyBucket);
    x10_int hop(x10_int desiredBucket, x10_int emptyBucket);
    virtual void add(TPMGL(K) key, TPMGL(V) value);
    virtual x10_int getActualBucket(TPMGL(K) key);
    virtual x10aux::ref<x10::lang::Any> get(TPMGL(K) key);
    virtual x10aux::ref<x10::lang::Any> remove(TPMGL(K) key);
    void rehash(x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > oldBuckets);
    void shrink();
    void grow();
    virtual x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > CHashMap____CHashMap__this(
      );
    virtual void __fieldInitializers7688();
    
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
#include <x10/util/Random.h>
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
#include <x10/util/Timer.h>
#include <x10/lang/Long.h>
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


//#line 14 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 15 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 16 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 17 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 20 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 24 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 27 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::_constructor(
                                           ) {
    
    //#line 27 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
    (((x10aux::ref<x10::lang::Object>)this))->::x10::lang::Object::_constructor();
    
    //#line 27 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->CHashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers7688();
    
    //#line 28 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(buckets) =
      (__extension__ ({
        
        //#line 28 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > alloc8292 =
           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >((new (memset(x10aux::alloc<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >(), 0, sizeof(x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >))) x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >()))
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc8292)->::x10::lang::Object::_constructor();
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10512 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10513 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10513)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((((x10_int)128)) - (((x10_int)1)))));
            alloc10513;
        }))
        );
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(region) = myReg10512;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(rank) = ((x10_int)1);
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(rect) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(zeroBased) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(rail) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(size) = ((x10_int)128);
        
        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(layout_min0) = alloc8292->FMGL(layout_stride1) =
          alloc8292->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(layout) = X10_NULL;
        
        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8292->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >(((x10_int)128), 8, false, true);
        alloc8292;
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
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::posMod(
  x10_int m, x10_int n) {
    
    //#line 33 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int modVal = ((x10_int) ((m) % x10aux::zeroCheck(n)));
    
    //#line 34 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((modVal) < (((x10_int)0)))) {
        
        //#line 35 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
        modVal = ((x10_int) ((modVal) + (n)));
    }
    
    //#line 37 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return modVal;
    
}

//#line 41 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::getBucketIndexFromKey(
  TPMGL(K) key) {
    
    //#line 42 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int hash = (__extension__ ({
        
        //#line 42 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10375 =
          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int m10372 = ((x10_int) ((x10aux::hash_code(key)) + (((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                   FMGL(offset))));
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int n10373 = x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                             FMGL(buckets))->
                           FMGL(size);
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int ret10376;
        
        //#line 33 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int modVal10514 = ((x10_int) ((m10372) % x10aux::zeroCheck(n10373)));
        
        //#line 34 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (((modVal10514) < (((x10_int)0)))) {
            
            //#line 35 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
            modVal10514 = ((x10_int) ((modVal10514) + (n10373)));
        }
        
        //#line 37 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
        ret10376 = modVal10514;
        ret10376;
    }))
    ;
    
    //#line 43 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int segment = (__extension__ ({
        
        //#line 43 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10381 =
          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int m10378 = hash;
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int n10379 = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                           FMGL(numSegments);
        
        //#line 32 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int ret10382;
        
        //#line 33 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int modVal10515 = ((x10_int) ((m10378) % x10aux::zeroCheck(n10379)));
        
        //#line 34 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (((modVal10515) < (((x10_int)0)))) {
            
            //#line 35 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
            modVal10515 = ((x10_int) ((modVal10515) + (n10379)));
        }
        
        //#line 37 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
        ret10382 = modVal10515;
        ret10382;
    }))
    ;
    
    //#line 44 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int bucket = ((x10_int) ((hash) / x10aux::zeroCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                              FMGL(numSegments))));
    
    //#line 45 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10_int) ((((x10_int) ((((x10_int)128)) * (segment)))) + (bucket)));
    
}

//#line 51 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_boolean CHashMap<TPMGL(K), TPMGL(V)>::empty(
  x10_int bucket) {
    
    //#line 52 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
             bucket, ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                       FMGL(buckets));
    
}

//#line 56 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_boolean CHashMap<TPMGL(K), TPMGL(V)>::empty(
  x10_int bucket, x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > currentBuckets) {
    
    //#line 57 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((__extension__ ({
                                      
                                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                      x10_int i10384 = bucket;
                                      
                                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                      x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10385;
                                      
                                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                      ret10385 = (x10aux::nullCheck(currentBuckets)->
                                                    FMGL(raw))->__apply(i10384);
                                      ret10385;
                                  }))
                                  , X10_NULL)) || x10aux::nullCheck((__extension__ ({
                                                      
                                                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                      x10_int i10387 =
                                                        bucket;
                                                      
                                                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                      x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10388;
                                                      
                                                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                      ret10388 =
                                                        (x10aux::nullCheck(currentBuckets)->
                                                           FMGL(raw))->__apply(i10387);
                                                      ret10388;
                                                  }))
                                                  )->FMGL(isNull);
    
}

//#line 61 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::swap(
  x10_int newBucket, x10_int emptyBucket) {
    
    //#line 63 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    TPMGL(K) key = x10aux::nullCheck((__extension__ ({
                       
                       //#line 63 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                       x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10391 =
                         ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                           FMGL(buckets);
                       
                       //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                       x10_int i10390 = newBucket;
                       
                       //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                       x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10392;
                       
                       //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                       ret10392 = (x10aux::nullCheck(this10391)->
                                     FMGL(raw))->__apply(i10390);
                       ret10392;
                   }))
                   )->getKey();
    
    //#line 64 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    TPMGL(V) value = x10aux::nullCheck((__extension__ ({
                         
                         //#line 64 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                         x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10395 =
                           ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                             FMGL(buckets);
                         
                         //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10_int i10394 = newBucket;
                         
                         //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                         x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10396;
                         
                         //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                         ret10396 = (x10aux::nullCheck(this10395)->
                                       FMGL(raw))->__apply(i10394);
                         ret10396;
                     }))
                     )->getValue();
    
    //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10516 =
      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
        FMGL(buckets);
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i10517 = emptyBucket;
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > v10518 = (__extension__ ({
        
        //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > alloc10519 =
           x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >((new (memset(x10aux::alloc<CEntry<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CEntry<TPMGL(K), TPMGL(V)>))) CEntry<TPMGL(K), TPMGL(V)>()))
        ;
        
        //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
        (alloc10519)->::CEntry<TPMGL(K), TPMGL(V)>::_constructor(
          key, value);
        alloc10519;
    }))
    ;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10520;
    
    //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
    (x10aux::nullCheck(this10516)->FMGL(raw))->__set(i10517, v10518);
    
    //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
    ret10520 = v10518;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
    ret10520;
    
    //#line 66 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int virtualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getBucketIndexFromKey(
                              key);
    
    //#line 67 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        
        //#line 67 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10404 =
          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
            FMGL(buckets);
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i10403 = virtualBucket;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10405;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret10405 = (x10aux::nullCheck(this10404)->FMGL(raw))->__apply(i10403);
        ret10405;
    }))
    )->setBit(((x10_int) ((emptyBucket) - (virtualBucket))),
              true);
    
    //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((__extension__ ({
        
        //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10408 =
          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
            FMGL(buckets);
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i10407 = virtualBucket;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10409;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret10409 = (x10aux::nullCheck(this10408)->FMGL(raw))->__apply(i10407);
        ret10409;
    }))
    )->setBit(((x10_int) ((newBucket) - (virtualBucket))),
              false);
    
    //#line 69 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck((__extension__ ({
        
        //#line 69 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10412 =
          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
            FMGL(buckets);
        
        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i10411 = newBucket;
        
        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10413;
        
        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
        ret10413 = (x10aux::nullCheck(this10412)->FMGL(raw))->__apply(i10411);
        ret10413;
    }))
    )->FMGL(isNull) = true;
}

//#line 77 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::hop(
  x10_int desiredBucket, x10_int emptyBucket) {
    
    //#line 79 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((emptyBucket) < (((x10_int) ((((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getBucketIndexFromKey(
                                         x10aux::nullCheck((__extension__ ({
                                             
                                             //#line 79 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                             x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10416 =
                                               ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                 FMGL(buckets);
                                             
                                             //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10_int i10415 =
                                               desiredBucket;
                                             
                                             //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10417;
                                             
                                             //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret10417 = (x10aux::nullCheck(this10416)->
                                                           FMGL(raw))->__apply(i10415);
                                             ret10417;
                                         }))
                                         )->getKey())) + (((x10_int)4)))))))
    {
        
        //#line 80 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
        ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->swap(
          desiredBucket, emptyBucket);
        
        //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
        return desiredBucket;
        
    } else {
        
        //#line 84 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10_int newBucket = emptyBucket;
        
        //#line 85 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
        {
            x10_int index;
            for (
                 //#line 85 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                 index = ((x10_int) ((((x10_int) ((emptyBucket) - (((x10_int)4))))) + (((x10_int)1))));
                 ((index) < (emptyBucket)); 
                                            //#line 85 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                            index = ((x10_int) ((index) + (((x10_int)1)))))
            {
                
                //#line 86 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                if ((__extension__ ({
                        
                        //#line 86 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10420 =
                          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
                        
                        //#line 51 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int bucket10419 = index;
                        x10aux::nullCheck(this10420)->empty(
                          bucket10419, x10aux::nullCheck(this10420)->
                                         FMGL(buckets));
                    }))
                    ) {
                    
                    //#line 87 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    newBucket = index;
                    
                    //#line 88 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Branch_c
                    break;
                } else {
                    
                    //#line 90 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int delta = x10aux::nullCheck((__extension__ ({
                                        
                                        //#line 90 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10422 =
                                          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                            FMGL(buckets);
                                        
                                        //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10_int i10421 = index;
                                        
                                        //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10423;
                                        
                                        //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret10423 = (x10aux::nullCheck(this10422)->
                                                      FMGL(raw))->__apply(i10421);
                                        ret10423;
                                    }))
                                    )->getFirstEntry();
                    
                    //#line 91 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (((delta) >= (((x10_int)0))) && ((((x10_int) ((index) + (delta)))) < (emptyBucket)))
                    {
                        
                        //#line 92 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        newBucket = ((x10_int) ((index) + (delta)));
                        
                        //#line 93 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Branch_c
                        break;
                    }
                    
                }
                
            }
        }
        
        //#line 97 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (((newBucket) < (emptyBucket))) {
            
            //#line 98 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!((__extension__ ({
                    
                    //#line 98 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10426 =
                      x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
                    
                    //#line 51 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int bucket10425 = newBucket;
                    x10aux::nullCheck(this10426)->empty(bucket10425,
                                                        x10aux::nullCheck(this10426)->
                                                          FMGL(buckets));
                }))
                )) {
                
                //#line 99 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->swap(
                  newBucket, emptyBucket);
            }
            
            //#line 101 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
            return newBucket;
            
        } else {
            
            //#line 104 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
            return ((x10_int)-1);
            
        }
        
    }
    
}

//#line 110 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::add(
  TPMGL(K) key, TPMGL(V) value) {
    {
        
        //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10543 =
          X10_NULL;
        
        //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 112 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int bucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getBucketIndexFromKey(
                                       key);
                    
                    //#line 113 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int currentBucket = bucket;
                    
                    //#line 118 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int actualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getActualBucket(
                                             key);
                    
                    //#line 119 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(actualBucket,
                                                ((x10_int)-1))))
                    {
                        
                        //#line 120 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 120 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10428 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10427 = actualBucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10429;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10429 = (x10aux::nullCheck(this10428)->
                                          FMGL(raw))->__apply(i10427);
                            ret10429;
                        }))
                        )->setValue(value);
                        
                        //#line 121 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::throwReturn();
                    }
                    
                    //#line 125 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10While_c
                    while (((currentBucket) < (x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                   FMGL(buckets))->
                                                 FMGL(size))) &&
                           !((__extension__ ({
                               
                               //#line 125 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                               x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10432 =
                                 x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
                               
                               //#line 51 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                               x10_int bucket10431 = currentBucket;
                               x10aux::nullCheck(this10432)->empty(
                                 bucket10431, x10aux::nullCheck(this10432)->
                                                FMGL(buckets));
                           }))
                           )) {
                        
                        //#line 126 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                        currentBucket = ((x10_int) ((currentBucket) + (((x10_int)1))));
                    }
                    
                    //#line 130 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (((currentBucket) >= (x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                 FMGL(buckets))->
                                               FMGL(size))))
                    {
                        
                        //#line 131 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->grow();
                        
                        //#line 132 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->add(
                          key, value);
                    } else 
                    //#line 133 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (((currentBucket) < (((x10_int) ((bucket) + (((x10_int)4)))))))
                    {
                        
                        //#line 134 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10521 =
                          ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                            FMGL(buckets);
                        
                        //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int i10522 = currentBucket;
                        
                        //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > v10523 =
                          (__extension__ ({
                            
                            //#line 134 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > alloc10524 =
                               x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >((new (memset(x10aux::alloc<CEntry<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CEntry<TPMGL(K), TPMGL(V)>))) CEntry<TPMGL(K), TPMGL(V)>()))
                            ;
                            
                            //#line 134 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
                            (alloc10524)->::CEntry<TPMGL(K), TPMGL(V)>::_constructor(
                              key, value);
                            alloc10524;
                        }))
                        ;
                        
                        //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10525;
                        
                        //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                        (x10aux::nullCheck(this10521)->FMGL(raw))->__set(i10522, v10523);
                        
                        //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                        ret10525 = v10523;
                        
                        //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
                        ret10525;
                        
                        //#line 135 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 135 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10439 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10438 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10440;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10440 = (x10aux::nullCheck(this10439)->
                                          FMGL(raw))->__apply(i10438);
                            ret10440;
                        }))
                        )->setBit(((x10_int) ((currentBucket) - (bucket))),
                                  true);
                    } else {
                        
                        //#line 138 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10While_c
                        while ((!x10aux::struct_equals(currentBucket,
                                                       bucket)))
                        {
                            
                            //#line 139 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                            currentBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->hop(
                                              bucket, currentBucket);
                            
                            //#line 140 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                            if ((x10aux::struct_equals(currentBucket,
                                                       ((x10_int)-1))))
                            {
                                
                                //#line 141 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->grow();
                                
                                //#line 142 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->add(
                                  key, value);
                                
                                //#line 143 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                                x10::compiler::Finalization::throwReturn();
                            }
                            
                        }
                        
                        //#line 147 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 147 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10443 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10442 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10444;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10444 = (x10aux::nullCheck(this10443)->
                                          FMGL(raw))->__apply(i10442);
                            ret10444;
                        }))
                        )->setKey(key);
                        
                        //#line 148 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 148 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10447 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10446 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10448;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10448 = (x10aux::nullCheck(this10447)->
                                          FMGL(raw))->__apply(i10446);
                            ret10448;
                        }))
                        )->setValue(value);
                        
                        //#line 149 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 149 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10451 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10450 = bucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10452;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10452 = (x10aux::nullCheck(this10451)->
                                          FMGL(raw))->__apply(i10450);
                            ret10452;
                        }))
                        )->setBit(((x10_int)0), true);
                    }
                    
                }
            }
            
            //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__20) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__20 = (x10aux::ref<x10::lang::Throwable>&)__ref__20;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10544 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__20);
                {
                    
                    //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10543 = formal10544;
                }
            } else
            throw;
        }
        
        //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10543)))
        {
            
            //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10543))
            {
                
                //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10543));
            }
            
        }
        
        //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10543)))
        {
            
            //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10543)))
            {
                
                //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10543));
            }
            
            //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::compiler::Finalization> fin10545 =
              x10aux::class_cast_unchecked<x10aux::ref<x10::compiler::Finalization> >(throwable10543);
            
            //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(fin10545)->FMGL(isReturn))
            {
                
                //#line 111 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                return;
            }
            
        }
        
    }
}

//#line 156 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CHashMap<TPMGL(K), TPMGL(V)>::getActualBucket(
  TPMGL(K) key) {
    
    //#line 157 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10_int virtualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getBucketIndexFromKey(
                              key);
    
    //#line 158 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
    {
        x10_int offset;
        for (
             //#line 158 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
             offset = ((x10_int)0); ((offset) < (((x10_int)4)));
             
             //#line 158 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
             offset = ((x10_int) ((offset) + (((x10_int)1)))))
        {
            
            //#line 159 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10_int testBucket = ((x10_int) ((virtualBucket) + (offset)));
            
            //#line 160 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (((testBucket) >= (((x10_int)0))) && ((testBucket) < (x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                                         FMGL(buckets))->
                                                                       FMGL(size))))
            {
                
                //#line 161 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                if (!((__extension__ ({
                        
                        //#line 161 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > this10455 =
                          x10aux::class_cast_unchecked<x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > >(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this));
                        
                        //#line 51 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10_int bucket10454 = testBucket;
                        x10aux::nullCheck(this10455)->empty(
                          bucket10454, x10aux::nullCheck(this10455)->
                                         FMGL(buckets));
                    }))
                    )) {
                    
                    //#line 162 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (x10aux::equals(x10aux::nullCheck((__extension__ ({
                                           
                                           //#line 162 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10457 =
                                             ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                               FMGL(buckets);
                                           
                                           //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                           x10_int i10456 =
                                             testBucket;
                                           
                                           //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                           x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10458;
                                           
                                           //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret10458 = (x10aux::nullCheck(this10457)->
                                                         FMGL(raw))->__apply(i10456);
                                           ret10458;
                                       }))
                                       )->getKey(),x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(key)))
                    {
                        
                        //#line 163 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                        return testBucket;
                        
                    }
                    
                }
                
            }
            
        }
    }
    
    //#line 166 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10_int)-1);
    
}

//#line 170 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<x10::lang::Any>
  CHashMap<TPMGL(K), TPMGL(V)>::get(TPMGL(K) key) {
    {
        
        //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10547 =
          X10_NULL;
        
        //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 172 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int actualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getActualBucket(
                                             key);
                    
                    //#line 173 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::throwReturn(
                      (x10aux::struct_equals(actualBucket,
                                             ((x10_int)-1)))
                        ? ((x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(X10_NULL)))
                        : ((x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(x10aux::nullCheck((__extension__ ({
                                                                                           
                                                                                           //#line 173 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                                                                           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10461 =
                                                                                             ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                                               FMGL(buckets);
                                                                                           
                                                                                           //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                           x10_int i10460 =
                                                                                             actualBucket;
                                                                                           
                                                                                           //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                                           x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10462;
                                                                                           
                                                                                           //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                           ret10462 =
                                                                                             (x10aux::nullCheck(this10461)->
                                                                                                FMGL(raw))->__apply(i10460);
                                                                                           ret10462;
                                                                                       }))
                                                                                       )->getValue()))));
                }
            }
            
            //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__23) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__23 = (x10aux::ref<x10::lang::Throwable>&)__ref__23;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10548 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__23);
                {
                    
                    //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10547 = formal10548;
                }
            } else
            throw;
        }
        
        //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10547)))
        {
            
            //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10547))
            {
                
                //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10547));
            }
            
        }
        
        //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10547)))
        {
            
            //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10547)))
            {
                
                //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10547));
            }
            
            //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::compiler::Finalization> fin10549 =
              x10aux::class_cast_unchecked<x10aux::ref<x10::compiler::Finalization> >(throwable10547);
            
            //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(fin10549)->FMGL(isReturn))
            {
                
                //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                return x10aux::nullCheck(fin10549)->FMGL(value);
                
            }
            
        }
        
    }
}

//#line 179 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<x10::lang::Any>
  CHashMap<TPMGL(K), TPMGL(V)>::remove(TPMGL(K) key) {
    {
        
        //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10552 =
          X10_NULL;
        
        //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 181 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int virtualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getBucketIndexFromKey(
                                              key);
                    
                    //#line 184 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10_int actualBucket = ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->getActualBucket(
                                             key);
                    
                    //#line 185 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if ((x10aux::struct_equals(actualBucket,
                                               ((x10_int)-1))))
                    {
                        
                        //#line 187 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::throwReturn(
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(X10_NULL));
                    } else {
                        
                        //#line 189 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 189 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10465 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10464 = virtualBucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10466;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10466 = (x10aux::nullCheck(this10465)->
                                          FMGL(raw))->__apply(i10464);
                            ret10466;
                        }))
                        )->setBit(((x10_int) ((actualBucket) - (virtualBucket))),
                                  false);
                        
                        //#line 190 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        TPMGL(V) value = x10aux::nullCheck((__extension__ ({
                                             
                                             //#line 190 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                                             x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10469 =
                                               ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                 FMGL(buckets);
                                             
                                             //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10_int i10468 =
                                               actualBucket;
                                             
                                             //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                             x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10470;
                                             
                                             //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                             ret10470 = (x10aux::nullCheck(this10469)->
                                                           FMGL(raw))->__apply(i10468);
                                             ret10470;
                                         }))
                                         )->getValue();
                        
                        //#line 191 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
                        x10aux::nullCheck((__extension__ ({
                            
                            //#line 191 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > this10473 =
                              ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                FMGL(buckets);
                            
                            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i10472 = actualBucket;
                            
                            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10474;
                            
                            //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                            ret10474 = (x10aux::nullCheck(this10473)->
                                          FMGL(raw))->__apply(i10472);
                            ret10474;
                        }))
                        )->FMGL(isNull) = true;
                        
                        //#line 193 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::throwReturn(
                          x10aux::class_cast_unchecked<x10aux::ref<x10::lang::Any> >(value));
                    }
                    
                }
            }
            
            //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__25) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__25 = (x10aux::ref<x10::lang::Throwable>&)__ref__25;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10553 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__25);
                {
                    
                    //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10552 = formal10553;
                }
            } else
            throw;
        }
        
        //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10552)))
        {
            
            //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10552))
            {
                
                //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10552));
            }
            
        }
        
        //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10552)))
        {
            
            //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10552)))
            {
                
                //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10552));
            }
            
            //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::compiler::Finalization> fin10554 =
              x10aux::class_cast_unchecked<x10aux::ref<x10::compiler::Finalization> >(throwable10552);
            
            //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(fin10554)->FMGL(isReturn))
            {
                
                //#line 180 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                return x10aux::nullCheck(fin10554)->FMGL(value);
                
            }
            
        }
        
    }
}

//#line 199 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::rehash(
  x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > oldBuckets) {
    
    //#line 200 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(offset) =
      x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                          FMGL(rand))->nextInt();
    
    //#line 201 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 201 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (x10aux::nullCheck(oldBuckets)->
                                         FMGL(size))); 
                                                       //#line 201 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                                       i =
                                                         ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 202 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->empty(
                    i, oldBuckets))) {
                
                //#line 203 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->add(
                  x10aux::nullCheck((__extension__ ({
                      
                      //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10_int i10476 = i;
                      
                      //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10477;
                      
                      //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                      ret10477 = (x10aux::nullCheck(oldBuckets)->
                                    FMGL(raw))->__apply(i10476);
                      ret10477;
                  }))
                  )->getKey(), x10aux::nullCheck((__extension__ ({
                                   
                                   //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10_int i10479 = i;
                                   
                                   //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > ret10480;
                                   
                                   //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                   ret10480 = (x10aux::nullCheck(oldBuckets)->
                                                 FMGL(raw))->__apply(i10479);
                                   ret10480;
                               }))
                               )->getValue());
            }
            
        }
    }
    
}

//#line 209 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::shrink(
  ) {
    {
        
        //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10555 =
          X10_NULL;
        
        //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 215 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > oldBuckets =
                      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                        FMGL(buckets);
                    
                    //#line 216 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
                    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                      FMGL(buckets) = (__extension__ ({
                        
                        //#line 216 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > alloc8295 =
                           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >((new (memset(x10aux::alloc<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >(), 0, sizeof(x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >))) x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >()))
                        ;
                        
                        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int size10528 = ((x10_int) ((x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                             FMGL(buckets))->
                                                           FMGL(size)) / x10aux::zeroCheck(((x10_int)2))));
                        
                        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                        (alloc8295)->::x10::lang::Object::_constructor();
                        
                        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Region> myReg10526 =
                          x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
                            
                            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::RectRegion1D> alloc10527 =
                               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                            ;
                            
                            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                            (alloc10527)->::x10::array::RectRegion1D::_constructor(
                              ((x10_int)0), ((x10_int) ((size10528) - (((x10_int)1)))));
                            alloc10527;
                        }))
                        );
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(region) = myReg10526;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(rank) = ((x10_int)1);
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(rect) = true;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(zeroBased) = true;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(rail) = true;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(size) = size10528;
                        
                        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(layout_min0) = alloc8295->
                                                         FMGL(layout_stride1) =
                          alloc8295->FMGL(layout_min1) = ((x10_int)0);
                        
                        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(layout) = X10_NULL;
                        
                        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8295->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >(size10528, 8, false, true);
                        alloc8295;
                    }))
                    ;
                    
                    //#line 217 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > x10529 =
                      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this);
                    
                    //#line 217 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(x10529)->FMGL(numSegments) =
                      ((x10_int) ((x10aux::nullCheck(x10529)->
                                     FMGL(numSegments)) / x10aux::zeroCheck(((x10_int)2))));
                    
                    //#line 218 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->rehash(
                      oldBuckets);
                }
            }
            
            //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__28) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__28 = (x10aux::ref<x10::lang::Throwable>&)__ref__28;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10556 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__28);
                {
                    
                    //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10555 = formal10556;
                }
            } else
            throw;
        }
        
        //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10555)))
        {
            
            //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10555))
            {
                
                //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10555));
            }
            
        }
        
        //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10555)))
        {
            
            //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10555)))
            {
                
                //#line 214 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10555));
            }
            
        }
        
    }
}

//#line 223 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::grow(
  ) {
    {
        
        //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::Throwable> throwable10558 =
          X10_NULL;
        
        //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Try_c
        try {
            {
                
                //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::enterAtomic();
                {
                    
                    //#line 229 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > oldBuckets =
                      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                        FMGL(buckets);
                    
                    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
                    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                      FMGL(buckets) = (__extension__ ({
                        
                        //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > > alloc8296 =
                           x10aux::ref<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >((new (memset(x10aux::alloc<x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > > >(), 0, sizeof(x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >))) x10::array::Array<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >()))
                        ;
                        
                        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10_int size10532 = ((x10_int) ((x10aux::nullCheck(((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                                                                             FMGL(buckets))->
                                                           FMGL(size)) * (((x10_int)2))));
                        
                        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                        (alloc8296)->::x10::lang::Object::_constructor();
                        
                        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Region> myReg10530 =
                          x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
                            
                            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::RectRegion1D> alloc10531 =
                               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
                            ;
                            
                            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
                            (alloc10531)->::x10::array::RectRegion1D::_constructor(
                              ((x10_int)0), ((x10_int) ((size10532) - (((x10_int)1)))));
                            alloc10531;
                        }))
                        );
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(region) = myReg10530;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(rank) = ((x10_int)1);
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(rect) = true;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(zeroBased) = true;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(rail) = true;
                        
                        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(size) = size10532;
                        
                        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(layout_min0) = alloc8296->
                                                         FMGL(layout_stride1) =
                          alloc8296->FMGL(layout_min1) = ((x10_int)0);
                        
                        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(layout) = X10_NULL;
                        
                        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
                        alloc8296->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > >(size10532, 8, false, true);
                        alloc8296;
                    }))
                    ;
                    
                    //#line 231 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> > x10533 =
                      ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this);
                    
                    //#line 231 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(x10533)->FMGL(numSegments) =
                      ((x10_int) ((x10aux::nullCheck(x10533)->
                                     FMGL(numSegments)) * (((x10_int)2))));
                    
                    //#line 232 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
                    if (((((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->
                            FMGL(numSegments)) > (((x10_int)1000000))))
                    {
                        
                        //#line 233 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::RuntimeException::_make(x10aux::string_utils::lit("Too many items hash to the same value.  Increase the neighborhood size or maximum number of segments."))));
                    }
                    
                    //#line 235 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
                    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->rehash(
                      oldBuckets);
                }
            }
            
            //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::compiler::Finalization::plausibleThrow();
        }
        catch (x10aux::__ref& __ref__30) {
            x10aux::ref<x10::lang::Throwable>& __exc__ref__30 = (x10aux::ref<x10::lang::Throwable>&)__ref__30;
            if (true) {
                x10aux::ref<x10::lang::Throwable> formal10559 =
                  static_cast<x10aux::ref<x10::lang::Throwable> >(__exc__ref__30);
                {
                    
                    //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                    throwable10558 = formal10559;
                }
            } else
            throw;
        }
        
        //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10558)))
        {
            
            //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (x10aux::instanceof<x10aux::ref<x10::compiler::Abort> >(throwable10558))
            {
                
                //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10558));
            }
            
        }
        
        //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if (true) {
            
            //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::exitAtomic();
        }
        
        //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
        if ((!x10aux::struct_equals(X10_NULL, throwable10558)))
        {
            
            //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if (!(x10aux::instanceof<x10aux::ref<x10::compiler::Finalization> >(throwable10558)))
            {
                
                //#line 228 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(throwable10558));
            }
            
        }
        
    }
}

//#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >
  CHashMap<TPMGL(K), TPMGL(V)>::CHashMap____CHashMap__this(
  ) {
    
    //#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this);
    
}

//#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::__fieldInitializers7688(
  ) {
    
    //#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(buckets) =
      X10_NULL;
    
    //#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(numSegments) =
      ((x10_int)1);
    
    //#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(rand) =
      (__extension__ ({
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::util::Random> alloc8297 =  x10aux::ref<x10::util::Random>((new (memset(x10aux::alloc<x10::util::Random>(), 0, sizeof(x10::util::Random))) x10::util::Random()))
        ;
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
        (alloc8297)->::x10::util::Random::_constructor((__extension__ ({
                                                           x10aux::system_utils::nanoTime();
                                                       }))
                                                       );
        alloc8297;
    }))
    ;
    
    //#line 13 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CHashMap<TPMGL(K), TPMGL(V)> >)this)->FMGL(offset) =
      ((x10_int)0);
}
template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t CHashMap<TPMGL(K), TPMGL(V)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(CHashMap<TPMGL(K), TPMGL(V)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(K), class TPMGL(V)> void CHashMap<TPMGL(K), TPMGL(V)>::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    buf.write(this->FMGL(buckets));
    buf.write(this->FMGL(numSegments));
    buf.write(this->FMGL(rand));
    buf.write(this->FMGL(offset));
    
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
    FMGL(rand) = buf.read<x10aux::ref<x10::util::Random> >();
    FMGL(offset) = buf.read<x10_int>();
    
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
