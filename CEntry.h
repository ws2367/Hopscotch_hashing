#ifndef __CENTRY_H
#define __CENTRY_H

#include <x10rt.h>


#define X10_LANG_OBJECT_H_NODEPS
#include <x10/lang/Object.h>
#undef X10_LANG_OBJECT_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class RuntimeException;
} } 
template<class TPMGL(K), class TPMGL(V)> class CEntry;
template <> class CEntry<void, void>;
template<class TPMGL(K), class TPMGL(V)> class CEntry : public x10::lang::Object
  {
    public:
    RTT_H_DECLS_CLASS
    
    TPMGL(K) FMGL(key);
    
    TPMGL(V) FMGL(value);
    
    x10aux::ref<x10::array::Array<x10_boolean> > FMGL(bitmap);
    
    x10aux::ref<x10::util::concurrent::Lock> FMGL(lock);
    
    x10_long FMGL(timestamp);
    
    x10_boolean FMGL(isNull);
    
    x10_boolean FMGL(isBusy);
    
    void _constructor(TPMGL(K) _key, TPMGL(V) _value);
    
    static x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > _make(TPMGL(K) _key, TPMGL(V) _value);
    
    virtual TPMGL(K) getKey();
    virtual void setKey(TPMGL(K) _key);
    virtual TPMGL(V) getValue();
    virtual void setValue(TPMGL(V) _value);
    virtual x10aux::ref<x10::array::Array<x10_boolean> > getBitmap();
    virtual void setBit(x10_int index, x10_boolean bit);
    virtual x10_int getFirstEntry();
    virtual x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > CEntry____CEntry__this(
      );
    virtual void __fieldInitializers7705();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10aux::ref<x10::lang::Reference> _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};
template <> class CEntry<void, void> : public x10::lang::Object {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};
#endif // CENTRY_H

template<class TPMGL(K), class TPMGL(V)> class CEntry;

#ifndef CENTRY_H_NODEPS
#define CENTRY_H_NODEPS
#include <x10/lang/Object.h>
#include <x10/array/Array.h>
#include <x10/lang/Boolean.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Long.h>
#include <x10/array/Region.h>
#include <x10/array/RectRegion1D.h>
#include <x10/lang/Int.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/util/Timer.h>
#include <x10/lang/RuntimeException.h>
#ifndef CENTRY_H_GENERICS
#define CENTRY_H_GENERICS
#endif // CENTRY_H_GENERICS
#ifndef CENTRY_H_IMPLEMENTATION
#define CENTRY_H_IMPLEMENTATION
#include <CEntry.h>


//#line 232 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 233 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 234 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 235 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 236 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 237 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 238 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10FieldDecl_c

//#line 243 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::_constructor(
                                           TPMGL(K) _key, TPMGL(V) _value) {
    
    //#line 243 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10ConstructorCall_c
    (((x10aux::ref<x10::lang::Object>)this))->::x10::lang::Object::_constructor();
    
    //#line 243 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10Call_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->CEntry<TPMGL(K), TPMGL(V)>::__fieldInitializers7705();
    
    //#line 244 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(key) =
      _key;
    
    //#line 245 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(value) =
      _value;
    
    //#line 246 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(bitmap) =
      (__extension__ ({
        
        //#line 246 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10_boolean> > alloc8332 = 
        x10aux::ref<x10::array::Array<x10_boolean> >((new (memset(x10aux::alloc<x10::array::Array<x10_boolean> >(), 0, sizeof(x10::array::Array<x10_boolean>))) x10::array::Array<x10_boolean>()))
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc8332)->::x10::lang::Object::_constructor();
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10566 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10567 =  x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10567)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((((x10_int)4)) - (((x10_int)1)))));
            alloc10567;
        }))
        );
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(region) = myReg10566;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(rank) = ((x10_int)1);
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(rect) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(zeroBased) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(rail) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(size) = ((x10_int)4);
        
        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(layout_min0) = alloc8332->FMGL(layout_stride1) =
          alloc8332->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(layout) = X10_NULL;
        
        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc8332->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_boolean >(((x10_int)4), 8, false, true);
        alloc8332;
    }))
    ;
    
    //#line 247 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
    {
        x10_int index;
        for (
             //#line 247 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
             index = ((x10_int)0); ((index) < (((x10_int)4))); 
                                                               //#line 247 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                                               index =
                                                                 ((x10_int) ((index) + (((x10_int)1)))))
        {
            
            //#line 248 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::Array<x10_boolean> > this10568 =
              ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->
                FMGL(bitmap);
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10569 = index;
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret10570;
            
            //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (x10aux::nullCheck(this10568)->FMGL(raw))->__set(i10569, false);
            
            //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret10570 = false;
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
            ret10570;
        }
    }
    
    //#line 250 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(timestamp) =
      x10aux::system_utils::nanoTime();
}
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > CEntry<TPMGL(K), TPMGL(V)>::_make(
                                           TPMGL(K) _key,
                                           TPMGL(V) _value)
{
    x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > this_ = new (memset(x10aux::alloc<CEntry<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CEntry<TPMGL(K), TPMGL(V)>))) CEntry<TPMGL(K), TPMGL(V)>();
    this_->_constructor(_key, _value);
    return this_;
}



//#line 253 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> TPMGL(K) CEntry<TPMGL(K), TPMGL(V)>::getKey(
  ) {
    
    //#line 254 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->
          FMGL(isNull)) {
        
        //#line 256 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::RuntimeException::_make(x10aux::string_utils::lit("Accessing key of a null entry"))));
    }
    
    //#line 258 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->
             FMGL(key);
    
}

//#line 260 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::setKey(
  TPMGL(K) _key) {
    
    //#line 261 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(isNull) =
      false;
    
    //#line 262 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(key) =
      _key;
}

//#line 265 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> TPMGL(V) CEntry<TPMGL(K), TPMGL(V)>::getValue(
  ) {
    
    //#line 266 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
    if (((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->
          FMGL(isNull)) {
        
        //#line 268 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::RuntimeException::_make(x10aux::string_utils::lit("Accessing value of a null entry"))));
    }
    
    //#line 270 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->
             FMGL(value);
    
}

//#line 272 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::setValue(
  TPMGL(V) _value) {
    
    //#line 273 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(value) =
      _value;
}

//#line 276 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<x10::array::Array<x10_boolean> >
  CEntry<TPMGL(K), TPMGL(V)>::getBitmap() {
    
    //#line 277 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->
             FMGL(bitmap);
    
}

//#line 280 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::setBit(
  x10_int index, x10_boolean bit) {
    
    //#line 281 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10_boolean> > this10571 =
      ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(bitmap);
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i10572 = index;
    
    //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_boolean v10573 = bit;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_boolean ret10574;
    
    //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
    (x10aux::nullCheck(this10571)->FMGL(raw))->__set(i10572, v10573);
    
    //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
    ret10574 = v10573;
    
    //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
    ret10574;
}

//#line 284 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10_int CEntry<TPMGL(K), TPMGL(V)>::getFirstEntry(
  ) {
    
    //#line 285 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": polyglot.ast.For_c
    {
        x10_int index;
        for (
             //#line 285 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
             index = ((x10_int)0); ((index) < (((x10_int)4)));
             
             //#line 285 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10LocalAssign_c
             index = ((x10_int) ((index) + (((x10_int)1)))))
        {
            
            //#line 286 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10If_c
            if ((__extension__ ({
                    
                    //#line 286 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10LocalDecl_c
                    x10aux::ref<x10::array::Array<x10_boolean> > this10542 =
                      ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->
                        FMGL(bitmap);
                    
                    //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_int i10541 = index;
                    
                    //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                    x10_boolean ret10543;
                    
                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret10543 = (x10aux::nullCheck(this10542)->
                                  FMGL(raw))->__apply(i10541);
                    ret10543;
                }))
                ) {
                
                //#line 287 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
                return index;
                
            }
            
        }
    }
    
    //#line 290 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10_int)-1);
    
}

//#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >
  CEntry<TPMGL(K), TPMGL(V)>::CEntry____CEntry__this() {
    
    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10Return_c
    return ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this);
    
}

//#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::__fieldInitializers7705(
  ) {
    
    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(bitmap) =
      X10_NULL;
    
    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(lock) =
      x10::util::concurrent::Lock::_make();
    
    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(timestamp) =
      ((x10_long)0ll);
    
    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(isNull) =
      false;
    
    //#line 230 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/CHashMap.x10": Eval of x10.ast.X10FieldAssign_c
    ((x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> >)this)->FMGL(isBusy) =
      false;
}
template<class TPMGL(K), class TPMGL(V)> const x10aux::serialization_id_t CEntry<TPMGL(K), TPMGL(V)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(CEntry<TPMGL(K), TPMGL(V)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    buf.write(this->FMGL(key));
    buf.write(this->FMGL(value));
    buf.write(this->FMGL(bitmap));
    buf.write(this->FMGL(lock));
    buf.write(this->FMGL(timestamp));
    buf.write(this->FMGL(isNull));
    buf.write(this->FMGL(isBusy));
    
}

template<class TPMGL(K), class TPMGL(V)> x10aux::ref<x10::lang::Reference> CEntry<TPMGL(K), TPMGL(V)>::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<CEntry<TPMGL(K), TPMGL(V)> > this_ = new (memset(x10aux::alloc<CEntry<TPMGL(K), TPMGL(V)> >(), 0, sizeof(CEntry<TPMGL(K), TPMGL(V)>))) CEntry<TPMGL(K), TPMGL(V)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    FMGL(key) = buf.read<TPMGL(K)>();
    FMGL(value) = buf.read<TPMGL(V)>();
    FMGL(bitmap) = buf.read<x10aux::ref<x10::array::Array<x10_boolean> > >();
    FMGL(lock) = buf.read<x10aux::ref<x10::util::concurrent::Lock> >();
    FMGL(timestamp) = buf.read<x10_long>();
    FMGL(isNull) = buf.read<x10_boolean>();
    FMGL(isBusy) = buf.read<x10_boolean>();
}

template<class TPMGL(K), class TPMGL(V)> x10aux::RuntimeType CEntry<TPMGL(K), TPMGL(V)>::rtt;
template<class TPMGL(K), class TPMGL(V)> void CEntry<TPMGL(K), TPMGL(V)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<CEntry<void, void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    const x10aux::RuntimeType* params[2] = { x10aux::getRTT<TPMGL(K)>(), x10aux::getRTT<TPMGL(V)>()};
    x10aux::RuntimeType::Variance variances[2] = { x10aux::RuntimeType::invariant, x10aux::RuntimeType::invariant};
    const char *baseName = "CEntry";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 1, parents, 2, params, variances);
}
#endif // CENTRY_H_IMPLEMENTATION
#endif // __CENTRY_H_NODEPS
