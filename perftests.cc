/*************************************************/
/* START of perftests */
#include <perftests.h>

#include <x10/lang/Object.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Double.h>
#include <x10/lang/Long.h>
#include <x10/util/Timer.h>
#include <x10/util/Random.h>
#include <CHashMap.h>
#include <x10/array/Region.h>
#include <x10/array/RectRegion1D.h>
#include <x10/lang/Any.h>
#include <x10/util/HashMap.h>
#include <x10/util/Box.h>

//#line 12 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10MethodDecl_c
void perftests::main(x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > args) {
    
    //#line 14 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_int argc = x10aux::nullCheck(args)->FMGL(size);
    
    //#line 15 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
    if (((argc) < (((x10_int)3)))) {
        
        //#line 16 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(ERR)->x10::io::Printer::println(x10aux::string_utils::lit("Usage: perftests <num operations> <% adds> <% removes>"));
        
        //#line 17 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_int nOperations = x10aux::int_utils::parseInt((__extension__ ({
        
        //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > p__7014 =
          args;
        
        //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Empty_c
        ;
        
        //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::String> ret7021;
        
        //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > x__10738 =
          p__7014;
        
        //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
        if (!((x10aux::struct_equals(x10aux::nullCheck(x__10738)->
                                       FMGL(rank), ((x10_int)1)))))
        {
            
            //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$0.rank == 1)"))));
            }
            
        }
        
        //#line 21 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
        ret7021 = (__extension__ ({
            
            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::lang::String> ret10739;
            
            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret10740; __ret10740: {
            {
                
                //#line 417 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(x__10738)->FMGL(rail))
                {
                    
                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret10739 = (x10aux::nullCheck(x__10738)->
                                  FMGL(raw))->__apply(((x10_int)0));
                    
                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret10740_end_;
                } else {
                    
                    //#line 424 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret10739 = (x10aux::nullCheck(x__10738)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)0)) - (x10aux::nullCheck(x__10738)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 424 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret10740_end_;
                }
                
            }goto __ret10740_end_; __ret10740_end_: ;
            }
            ret10739;
            }))
            ;
        ret7021;
        }))
        );
        
    
    //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_int nAdds = x10aux::double_utils::toInt(((((x10_double) (nOperations))) * (x10aux::double_utils::parseDouble((__extension__ ({
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > p__7041 =
          args;
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Empty_c
        ;
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::String> ret7048;
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > x__10741 =
          p__7041;
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
        if (!((x10aux::struct_equals(x10aux::nullCheck(x__10741)->
                                       FMGL(rank), ((x10_int)1)))))
        {
            
            //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$0.rank == 1)"))));
            }
            
        }
        
        //#line 22 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
        ret7048 = (__extension__ ({
            
            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::lang::String> ret10742;
            
            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret10743; __ret10743: {
            {
                
                //#line 417 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(x__10741)->FMGL(rail))
                {
                    
                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret10742 = (x10aux::nullCheck(x__10741)->
                                  FMGL(raw))->__apply(((x10_int)1));
                    
                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret10743_end_;
                } else {
                    
                    //#line 424 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret10742 = (x10aux::nullCheck(x__10741)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)1)) - (x10aux::nullCheck(x__10741)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 424 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret10743_end_;
                }
                
            }goto __ret10743_end_; __ret10743_end_: ;
            }
            ret10742;
            }))
            ;
        ret7048;
        }))
        ))));
        
    
    //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_int nRemoves = x10aux::double_utils::toInt(((((x10_double) (nOperations))) * (x10aux::double_utils::parseDouble((__extension__ ({
        
        //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > p__7053 =
          args;
        
        //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Empty_c
        ;
        
        //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::lang::String> ret7060;
        
        //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > x__10744 =
          p__7053;
        
        //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
        if (!((x10aux::struct_equals(x10aux::nullCheck(x__10744)->
                                       FMGL(rank), ((x10_int)1)))))
        {
            
            //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$0.rank == 1)"))));
            }
            
        }
        
        //#line 23 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
        ret7060 = (__extension__ ({
            
            //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
            ;
            
            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::lang::String> ret10745;
            
            //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
            goto __ret10746; __ret10746: {
            {
                
                //#line 417 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(x__10744)->FMGL(rail))
                {
                    
                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret10745 = (x10aux::nullCheck(x__10744)->
                                  FMGL(raw))->__apply(((x10_int)2));
                    
                    //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret10746_end_;
                } else {
                    
                    //#line 424 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                    ret10745 = (x10aux::nullCheck(x__10744)->
                                  FMGL(raw))->__apply(((x10_int) ((((x10_int)2)) - (x10aux::nullCheck(x__10744)->
                                                                                      FMGL(layout_min0)))));
                    
                    //#line 424 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                    goto __ret10746_end_;
                }
                
            }goto __ret10746_end_; __ret10746_end_: ;
            }
            ret10745;
            }))
            ;
        ret7060;
        }))
        ))));
        
    
    //#line 24 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_int nLookups = ((x10_int) ((((x10_int) ((nOperations) - (nAdds)))) - (nRemoves)));
    
    //#line 26 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_long seed = (__extension__ ({
        x10aux::system_utils::nanoTime();
    }))
    ;
    
    //#line 31 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::Random> rand =  x10aux::ref<x10::util::Random>((new (memset(x10aux::alloc<x10::util::Random>(), 0, sizeof(x10::util::Random))) x10::util::Random()))
    ;
    
    //#line 31 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10ConstructorCall_c
    (rand)->::x10::util::Random::_constructor(seed);
    
    //#line 34 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<CHashMap<x10_int, x10_int> > hashMap =  x10aux::ref<CHashMap<x10_int, x10_int> >((new (memset(x10aux::alloc<CHashMap<x10_int, x10_int> >(), 0, sizeof(CHashMap<x10_int, x10_int>))) CHashMap<x10_int, x10_int>()))
    ;
    
    //#line 34 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10ConstructorCall_c
    (hashMap)->::CHashMap<x10_int, x10_int>::_constructor();
    
    //#line 36 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10_int> > keys =  x10aux::ref<x10::array::Array<x10_int> >((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
    ;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10809 = nAdds;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (keys)->::x10::lang::Object::_constructor();
    
    //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10747 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10748 =
           x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10748)->::x10::array::RectRegion1D::_constructor(
          ((x10_int)0), ((x10_int) ((size10809) - (((x10_int)1)))));
        alloc10748;
    }))
    );
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(region) = myReg10747;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(rank) = ((x10_int)1);
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(rect) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(zeroBased) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(rail) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(size) = size10809;
    
    //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(layout_min0) = x10aux::nullCheck(keys)->
                                                   FMGL(layout_stride1) =
      x10aux::nullCheck(keys)->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(layout) = X10_NULL;
    
    //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(keys)->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size10809, 8, false, true);
    
    //#line 37 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10_int> > values =  x10aux::ref<x10::array::Array<x10_int> >((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
    ;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10810 = nAdds;
    
    //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (values)->::x10::lang::Object::_constructor();
    
    //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10749 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10750 =
           x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10750)->::x10::array::RectRegion1D::_constructor(
          ((x10_int)0), ((x10_int) ((size10810) - (((x10_int)1)))));
        alloc10750;
    }))
    );
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(region) = myReg10749;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(rank) = ((x10_int)1);
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(rect) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(zeroBased) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(rail) = true;
    
    //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(size) = size10810;
    
    //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(layout_min0) = x10aux::nullCheck(values)->
                                                     FMGL(layout_stride1) =
      x10aux::nullCheck(values)->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(layout) = X10_NULL;
    
    //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(values)->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size10810, 8, false, true);
    
    //#line 42 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 42 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nAdds)); 
                                                //#line 42 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10751 = i;
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int v10752 = x10aux::nullCheck(rand)->nextInt();
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret10753;
            
            //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (x10aux::nullCheck(keys)->FMGL(raw))->__set(i10751, v10752);
            
            //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret10753 = v10752;
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
            ret10753;
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10754 = i;
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int v10755 = x10aux::nullCheck(rand)->nextInt();
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret10756;
            
            //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (x10aux::nullCheck(values)->FMGL(raw))->__set(i10754, v10755);
            
            //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret10756 = v10755;
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
            ret10756;
        }
    }
    
    //#line 47 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_long start;
    
    //#line 48 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_long end;
    
    //#line 49 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_long addTime;
    
    //#line 50 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_long lookupTime;
    
    //#line 51 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_long deleteTime;
    
    //#line 52 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10_long lookupTime2;
    
    //#line 55 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 56 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 56 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nAdds)); 
                                                //#line 56 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 57 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            hashMap->add((__extension__ ({
                             
                             //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10_int i9792 = i;
                             
                             //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10_int ret9793;
                             
                             //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret9793 = (x10aux::nullCheck(keys)->
                                          FMGL(raw))->__apply(i9792);
                             ret9793;
                         }))
                         , (__extension__ ({
                             
                             //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10_int i9795 = i;
                             
                             //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                             x10_int ret9796;
                             
                             //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                             ret9796 = (x10aux::nullCheck(values)->
                                          FMGL(raw))->__apply(i9795);
                             ret9796;
                         }))
                         );
        }
    }
    
    //#line 59 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 60 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    addTime = ((x10_long) ((end) - (start)));
    
    //#line 64 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nLookups)); 
                                                   //#line 65 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                   i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 66 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int r = x10aux::nullCheck(rand)->nextInt(
                          x10aux::nullCheck(keys)->FMGL(size));
            
            //#line 67 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int key = (__extension__ ({
                
                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i9807 = r;
                
                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret9808;
                
                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret9808 = (x10aux::nullCheck(keys)->FMGL(raw))->__apply(i9807);
                ret9808;
            }))
            ;
            
            //#line 68 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            hashMap->get(key);
        }
    }
    
    //#line 70 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 71 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    lookupTime = ((x10_long) ((end) - (start)));
    
    //#line 73 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10_boolean> > beenRemoved =
       x10aux::ref<x10::array::Array<x10_boolean> >((new (memset(x10aux::alloc<x10::array::Array<x10_boolean> >(), 0, sizeof(x10::array::Array<x10_boolean>))) x10::array::Array<x10_boolean>()))
    ;
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10811 = x10aux::nullCheck(keys)->FMGL(size);
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (beenRemoved)->::x10::lang::Object::_constructor();
    
    //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10760 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10761 =
           x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10761)->::x10::array::RectRegion1D::_constructor(
          ((x10_int)0), ((x10_int) ((size10811) - (((x10_int)1)))));
        alloc10761;
    }))
    );
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(region) = myReg10760;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(rank) = ((x10_int)1);
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(rect) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(zeroBased) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(rail) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(size) = size10811;
    
    //#line 303 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(layout_min0) = x10aux::nullCheck(beenRemoved)->
                                                          FMGL(layout_stride1) =
      x10aux::nullCheck(beenRemoved)->FMGL(layout_min1) =
      ((x10_int)0);
    
    //#line 304 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(layout) = X10_NULL;
    
    //#line 305 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<x10_boolean > r10762 = x10::util::IndexedMemoryChunk<void>::allocate<x10_boolean >(size10811, 8, false, false);
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i6877max10757 = ((x10_int) ((size10811) - (((x10_int)1))));
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i10758;
        for (
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i10758 = ((x10_int)0); ((i10758) <= (i6877max10757));
             
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i10758 = ((x10_int) ((i10758) + (((x10_int)1)))))
        {
            
            //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10759 = i10758;
            
            //#line 307 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r10762)->__set(i10759, false);
        }
    }
    
    //#line 309 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(beenRemoved)->FMGL(raw) = r10762;
    
    //#line 74 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10_boolean> > controlBeenRemoved =
       x10aux::ref<x10::array::Array<x10_boolean> >((new (memset(x10aux::alloc<x10::array::Array<x10_boolean> >(), 0, sizeof(x10::array::Array<x10_boolean>))) x10::array::Array<x10_boolean>()))
    ;
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size10812 = x10aux::nullCheck(keys)->FMGL(size);
    
    //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (controlBeenRemoved)->::x10::lang::Object::_constructor();
    
    //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Region> myReg10766 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::RectRegion1D> alloc10767 =
           x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
        ;
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc10767)->::x10::array::RectRegion1D::_constructor(
          ((x10_int)0), ((x10_int) ((size10812) - (((x10_int)1)))));
        alloc10767;
    }))
    );
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(region) =
      myReg10766;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(rank) = ((x10_int)1);
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(rect) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(zeroBased) =
      true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(rail) = true;
    
    //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(size) = size10812;
    
    //#line 303 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(layout_min0) =
      x10aux::nullCheck(controlBeenRemoved)->FMGL(layout_stride1) =
      x10aux::nullCheck(controlBeenRemoved)->FMGL(layout_min1) =
      ((x10_int)0);
    
    //#line 304 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(layout) =
      X10_NULL;
    
    //#line 305 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<x10_boolean > r10768 = x10::util::IndexedMemoryChunk<void>::allocate<x10_boolean >(size10812, 8, false, false);
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int i6877max10763 = ((x10_int) ((size10812) - (((x10_int)1))));
    
    //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
    {
        x10_int i10764;
        for (
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
             i10764 = ((x10_int)0); ((i10764) <= (i6877max10763));
             
             //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
             i10764 = ((x10_int) ((i10764) + (((x10_int)1)))))
        {
            
            //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10765 = i10764;
            
            //#line 307 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (r10768)->__set(i10765, false);
        }
    }
    
    //#line 309 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(controlBeenRemoved)->FMGL(raw) = r10768;
    
    //#line 77 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 78 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 78 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nRemoves)); 
                                                   //#line 78 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                   i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 79 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int r = x10aux::nullCheck(rand)->nextInt(
                          x10aux::nullCheck(keys)->FMGL(size));
            
            //#line 80 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int key = (__extension__ ({
                
                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i9830 = r;
                
                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret9831;
                
                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret9831 = (x10aux::nullCheck(keys)->FMGL(raw))->__apply(i9830);
                ret9831;
            }))
            ;
            
            //#line 81 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            hashMap->remove(key);
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::Array<x10_boolean> > p__10773 =
              beenRemoved;
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int p__10774 = r;
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret10775;
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::Array<x10_boolean> > x__10769 =
              p__10773;
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int x__i10770 = p__10774;
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10aux::nullCheck(x__10769)->
                                           FMGL(rank), ((x10_int)1)))))
            {
                
                //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$0.rank == 1)"))));
                }
                
            }
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
            ret10775 = (__extension__ ({
                
                //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i10771 = x__i10770;
                
                //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_boolean ret10772;
                
                //#line 518 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(x__10769)->FMGL(rail))
                {
                    
                    //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(x__10769)->FMGL(raw))->__set(i10771, true);
                } else {
                    
                    //#line 525 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(x__10769)->FMGL(raw))->__set(((x10_int) ((i10771) - (x10aux::nullCheck(x__10769)->
                                                                                              FMGL(layout_min0)))), true);
                }
                
                //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret10772 = true;
                ret10772;
            }))
            ;
            
            //#line 82 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Local_c
            ret10775;
        }
    }
    
    //#line 84 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 85 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    deleteTime = ((x10_long) ((end) - (start)));
    
    //#line 88 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 89 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 89 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nLookups)); 
                                                   //#line 89 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                   i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 90 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int r = x10aux::nullCheck(rand)->nextInt(
                          x10aux::nullCheck(keys)->FMGL(size));
            
            //#line 91 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int key = (__extension__ ({
                
                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i9849 = r;
                
                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret9850;
                
                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret9850 = (x10aux::nullCheck(keys)->FMGL(raw))->__apply(i9849);
                ret9850;
            }))
            ;
            
            //#line 92 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            hashMap->get(key);
        }
    }
    
    //#line 94 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 95 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    lookupTime2 = ((x10_long) ((end) - (start)));
    
    //#line 97 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      x10aux::string_utils::lit("Time for our CHashMap:"));
    
    //#line 98 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((addTime) + (x10aux::string_utils::lit("ms for ")))) + (nAdds))) + (x10aux::string_utils::lit(" insertions."))));
    
    //#line 99 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((lookupTime) + (x10aux::string_utils::lit("ms for ")))) + (nLookups))) + (x10aux::string_utils::lit(" random lookups before any deletion."))));
    
    //#line 100 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((deleteTime) + (x10aux::string_utils::lit("ms for ")))) + (nRemoves))) + (x10aux::string_utils::lit(" random deletions."))));
    
    //#line 101 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((lookupTime2) + (x10aux::string_utils::lit("ms for ")))) + (nLookups))) + (x10aux::string_utils::lit(" random lookups after deletions."))));
    
    //#line 109 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    rand = (__extension__ ({
        
        //#line 109 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::util::Random> alloc2426 =  x10aux::ref<x10::util::Random>((new (memset(x10aux::alloc<x10::util::Random>(), 0, sizeof(x10::util::Random))) x10::util::Random()))
        ;
        
        //#line 109 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10ConstructorCall_c
        (alloc2426)->::x10::util::Random::_constructor(seed);
        alloc2426;
    }))
    ;
    
    //#line 112 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::HashMap<x10_int, x10_int> > oldHashMap =
       x10aux::ref<x10::util::HashMap<x10_int, x10_int> >((new (memset(x10aux::alloc<x10::util::HashMap<x10_int, x10_int> >(), 0, sizeof(x10::util::HashMap<x10_int, x10_int>))) x10::util::HashMap<x10_int, x10_int>()))
    ;
    
    //#line 112 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10ConstructorCall_c
    (oldHashMap)->::x10::util::HashMap<x10_int, x10_int>::_constructor(
      ((x10_int)128));
    
    //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    keys = (__extension__ ({
        
        //#line 114 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10_int> > alloc2427 =
           x10aux::ref<x10::array::Array<x10_int> >((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size10778 = nAdds;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc2427)->::x10::lang::Object::_constructor();
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10776 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10777 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10777)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((size10778) - (((x10_int)1)))));
            alloc10777;
        }))
        );
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(region) = myReg10776;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(rank) = ((x10_int)1);
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(rect) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(zeroBased) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(rail) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(size) = size10778;
        
        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(layout_min0) = alloc2427->FMGL(layout_stride1) =
          alloc2427->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(layout) = X10_NULL;
        
        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2427->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size10778, 8, false, true);
        alloc2427;
    }))
    ;
    
    //#line 115 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    values = (__extension__ ({
        
        //#line 115 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10_int> > alloc2428 =
           x10aux::ref<x10::array::Array<x10_int> >((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
        ;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size10781 = nAdds;
        
        //#line 247 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc2428)->::x10::lang::Object::_constructor();
        
        //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10779 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10780 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 249 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10780)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((size10781) - (((x10_int)1)))));
            alloc10780;
        }))
        );
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(region) = myReg10779;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(rank) = ((x10_int)1);
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(rect) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(zeroBased) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(rail) = true;
        
        //#line 251 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(size) = size10781;
        
        //#line 253 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(layout_min0) = alloc2428->FMGL(layout_stride1) =
          alloc2428->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 254 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(layout) = X10_NULL;
        
        //#line 255 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2428->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size10781, 8, false, true);
        alloc2428;
    }))
    ;
    
    //#line 119 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 119 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nAdds)); 
                                                //#line 119 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10782 = i;
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int v10783 = x10aux::nullCheck(rand)->nextInt();
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret10784;
            
            //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (x10aux::nullCheck(keys)->FMGL(raw))->__set(i10782, v10783);
            
            //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret10784 = v10783;
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
            ret10784;
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i10785 = i;
            
            //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int v10786 = x10aux::nullCheck(rand)->nextInt();
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret10787;
            
            //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (x10aux::nullCheck(values)->FMGL(raw))->__set(i10785, v10786);
            
            //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret10787 = v10786;
            
            //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
            ret10787;
        }
    }
    
    //#line 126 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 127 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 127 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nAdds)); 
                                                //#line 127 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 128 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            oldHashMap->put((__extension__ ({
                                
                                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int i10687 = i;
                                
                                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int ret10688;
                                
                                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret10688 = (x10aux::nullCheck(keys)->
                                              FMGL(raw))->__apply(i10687);
                                ret10688;
                            }))
                            , (__extension__ ({
                                
                                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int i10690 = i;
                                
                                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int ret10691;
                                
                                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                ret10691 = (x10aux::nullCheck(values)->
                                              FMGL(raw))->__apply(i10690);
                                ret10691;
                            }))
                            );
        }
    }
    
    //#line 130 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 131 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    addTime = ((x10_long) ((end) - (start)));
    
    //#line 134 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 135 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 135 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nLookups)); 
                                                   //#line 135 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                   i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 136 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int r = x10aux::nullCheck(rand)->nextInt(
                          x10aux::nullCheck(keys)->FMGL(size));
            
            //#line 137 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int key = (__extension__ ({
                
                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i10693 = r;
                
                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret10694;
                
                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret10694 = (x10aux::nullCheck(keys)->FMGL(raw))->__apply(i10693);
                ret10694;
            }))
            ;
            
            //#line 138 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            oldHashMap->get(key);
        }
    }
    
    //#line 140 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 141 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    lookupTime = ((x10_long) ((end) - (start)));
    
    //#line 143 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    beenRemoved = (__extension__ ({
        
        //#line 143 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10_boolean> > alloc2429 =
           x10aux::ref<x10::array::Array<x10_boolean> >((new (memset(x10aux::alloc<x10::array::Array<x10_boolean> >(), 0, sizeof(x10::array::Array<x10_boolean>))) x10::array::Array<x10_boolean>()))
        ;
        
        //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size10794 = x10aux::nullCheck(keys)->FMGL(size);
        
        //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc2429)->::x10::lang::Object::_constructor();
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10791 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10792 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10792)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((size10794) - (((x10_int)1)))));
            alloc10792;
        }))
        );
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(region) = myReg10791;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(rank) = ((x10_int)1);
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(rect) = true;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(zeroBased) = true;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(rail) = true;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(size) = size10794;
        
        //#line 303 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(layout_min0) = alloc2429->FMGL(layout_stride1) =
          alloc2429->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 304 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(layout) = X10_NULL;
        
        //#line 305 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::util::IndexedMemoryChunk<x10_boolean > r10793 =
          x10::util::IndexedMemoryChunk<void>::allocate<x10_boolean >(size10794, 8, false, false);
        
        //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i6877max10788 = ((x10_int) ((size10794) - (((x10_int)1))));
        
        //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
        {
            x10_int i10789;
            for (
                 //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                 i10789 = ((x10_int)0); ((i10789) <= (i6877max10788));
                 
                 //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                 i10789 = ((x10_int) ((i10789) + (((x10_int)1)))))
            {
                
                //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i10790 = i10789;
                
                //#line 307 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (r10793)->__set(i10790, false);
            }
        }
        
        //#line 309 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2429->FMGL(raw) = r10793;
        alloc2429;
    }))
    ;
    
    //#line 144 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    controlBeenRemoved = (__extension__ ({
        
        //#line 144 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Array<x10_boolean> > alloc2430 =
           x10aux::ref<x10::array::Array<x10_boolean> >((new (memset(x10aux::alloc<x10::array::Array<x10_boolean> >(), 0, sizeof(x10::array::Array<x10_boolean>))) x10::array::Array<x10_boolean>()))
        ;
        
        //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int size10801 = x10aux::nullCheck(keys)->FMGL(size);
        
        //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
        ;
        
        //#line 297 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
        (alloc2430)->::x10::lang::Object::_constructor();
        
        //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10aux::ref<x10::array::Region> myReg10798 = x10aux::class_cast<x10aux::ref<x10::array::Region> >((__extension__ ({
            
            //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::RectRegion1D> alloc10799 =
               x10aux::ref<x10::array::RectRegion1D>((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
            ;
            
            //#line 299 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
            (alloc10799)->::x10::array::RectRegion1D::_constructor(
              ((x10_int)0), ((x10_int) ((size10801) - (((x10_int)1)))));
            alloc10799;
        }))
        );
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(region) = myReg10798;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(rank) = ((x10_int)1);
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(rect) = true;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(zeroBased) = true;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(rail) = true;
        
        //#line 301 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(size) = size10801;
        
        //#line 303 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(layout_min0) = alloc2430->FMGL(layout_stride1) =
          alloc2430->FMGL(layout_min1) = ((x10_int)0);
        
        //#line 304 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(layout) = X10_NULL;
        
        //#line 305 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::util::IndexedMemoryChunk<x10_boolean > r10800 =
          x10::util::IndexedMemoryChunk<void>::allocate<x10_boolean >(size10801, 8, false, false);
        
        //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i6877max10795 = ((x10_int) ((size10801) - (((x10_int)1))));
        
        //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
        {
            x10_int i10796;
            for (
                 //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                 i10796 = ((x10_int)0); ((i10796) <= (i6877max10795));
                 
                 //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                 i10796 = ((x10_int) ((i10796) + (((x10_int)1)))))
            {
                
                //#line 306 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i10797 = i10796;
                
                //#line 307 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                (r10800)->__set(i10797, false);
            }
        }
        
        //#line 309 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
        alloc2430->FMGL(raw) = r10800;
        alloc2430;
    }))
    ;
    
    //#line 147 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 148 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 148 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nRemoves)); 
                                                   //#line 148 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                   i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 149 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int r = x10aux::nullCheck(rand)->nextInt(
                          x10aux::nullCheck(keys)->FMGL(size));
            
            //#line 150 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int key = (__extension__ ({
                
                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i10716 = r;
                
                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret10717;
                
                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret10717 = (x10aux::nullCheck(keys)->FMGL(raw))->__apply(i10716);
                ret10717;
            }))
            ;
            
            //#line 151 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            oldHashMap->remove(key);
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::Array<x10_boolean> > p__10806 =
              beenRemoved;
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int p__10807 = r;
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_boolean ret10808;
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::Array<x10_boolean> > x__10802 =
              p__10806;
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int x__i10803 = p__10807;
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
            if (!((x10aux::struct_equals(x10aux::nullCheck(x__10802)->
                                           FMGL(rank), ((x10_int)1)))))
            {
                
                //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$0.rank == 1)"))));
                }
                
            }
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
            ret10808 = (__extension__ ({
                
                //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i10804 = x__i10803;
                
                //#line 517 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Empty_c
                ;
                
                //#line 516 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_boolean ret10805;
                
                //#line 518 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (x10aux::nullCheck(x__10802)->FMGL(rail))
                {
                    
                    //#line 520 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(x__10802)->FMGL(raw))->__set(i10804, true);
                } else {
                    
                    //#line 525 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    (x10aux::nullCheck(x__10802)->FMGL(raw))->__set(((x10_int) ((i10804) - (x10aux::nullCheck(x__10802)->
                                                                                              FMGL(layout_min0)))), true);
                }
                
                //#line 527 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret10805 = true;
                ret10805;
            }))
            ;
            
            //#line 152 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Local_c
            ret10808;
        }
    }
    
    //#line 154 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 155 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    deleteTime = ((x10_long) ((end) - (start)));
    
    //#line 158 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    start = x10aux::system_utils::currentTimeMillis();
    
    //#line 159 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": polyglot.ast.For_c
    {
        x10_int i;
        for (
             //#line 159 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
             i = ((x10_int)0); ((i) < (nLookups)); 
                                                   //#line 159 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
                                                   i = ((x10_int) ((i) + (((x10_int)1)))))
        {
            
            //#line 160 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int r = x10aux::nullCheck(rand)->nextInt(
                          x10aux::nullCheck(keys)->FMGL(size));
            
            //#line 161 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10LocalDecl_c
            x10_int key = (__extension__ ({
                
                //#line 416 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int i10735 = r;
                
                //#line 415 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                x10_int ret10736;
                
                //#line 419 "/opt/x10/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret10736 = (x10aux::nullCheck(keys)->FMGL(raw))->__apply(i10735);
                ret10736;
            }))
            ;
            
            //#line 162 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
            oldHashMap->get(key);
        }
    }
    
    //#line 164 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    end = x10aux::system_utils::currentTimeMillis();
    
    //#line 165 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10LocalAssign_c
    lookupTime2 = ((x10_long) ((end) - (start)));
    
    //#line 167 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      x10aux::string_utils::lit("Time for Built-in HashMap:"));
    
    //#line 168 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((addTime) + (x10aux::string_utils::lit("ms for ")))) + (nAdds))) + (x10aux::string_utils::lit(" insertions."))));
    
    //#line 169 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((lookupTime) + (x10aux::string_utils::lit("ms for ")))) + (nLookups))) + (x10aux::string_utils::lit(" random lookups before any deletion."))));
    
    //#line 170 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((deleteTime) + (x10aux::string_utils::lit("ms for ")))) + (nRemoves))) + (x10aux::string_utils::lit(" random deletions."))));
    
    //#line 171 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
      ((((((lookupTime2) + (x10aux::string_utils::lit("ms for ")))) + (nLookups))) + (x10aux::string_utils::lit(" random lookups after deletions."))));
    }
    
    //#line 11 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10MethodDecl_c
    x10aux::ref<perftests> perftests::perftests____perftests__this(
      ) {
        
        //#line 11 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10Return_c
        return ((x10aux::ref<perftests>)this);
        
    }
    
    //#line 11 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10ConstructorDecl_c
    void perftests::_constructor() {
        
        //#line 11 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.X10ConstructorCall_c
        (((x10aux::ref<x10::lang::Object>)this))->::x10::lang::Object::_constructor();
        
        //#line 11 "/home/dap2163/fall2012/coms4130/project/HopscotchHashing/perftests.x10": x10.ast.AssignPropertyCall_c
        
    }
    x10aux::ref<perftests> perftests::_make() {
        x10aux::ref<perftests> this_ = new (memset(x10aux::alloc<perftests>(), 0, sizeof(perftests))) perftests();
        this_->_constructor();
        return this_;
    }
    
    
    const x10aux::serialization_id_t perftests::_serialization_id = 
        x10aux::DeserializationDispatcher::addDeserializer(perftests::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);
    
    void perftests::_serialize_body(x10aux::serialization_buffer& buf) {
        x10::lang::Object::_serialize_body(buf);
        
    }
    
    x10aux::ref<x10::lang::Reference> perftests::_deserializer(x10aux::deserialization_buffer& buf) {
        x10aux::ref<perftests> this_ = new (memset(x10aux::alloc<perftests>(), 0, sizeof(perftests))) perftests();
        buf.record_reference(this_);
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void perftests::_deserialize_body(x10aux::deserialization_buffer& buf) {
        x10::lang::Object::_deserialize_body(buf);
        
    }
    
    x10aux::RuntimeType perftests::rtt;
    void perftests::_initRTT() {
        if (rtt.initStageOne(&rtt)) return;
        const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
        rtt.initStageTwo("perftests",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
    }
    /* END of perftests */
/*************************************************/
