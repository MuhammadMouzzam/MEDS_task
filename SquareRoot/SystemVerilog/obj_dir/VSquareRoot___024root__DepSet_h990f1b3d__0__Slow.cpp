// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSquareRoot.h for the primary calling header

#include "VSquareRoot__pch.h"
#include "VSquareRoot__Syms.h"
#include "VSquareRoot___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSquareRoot___024root___dump_triggers__stl(VSquareRoot___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSquareRoot___024root___eval_triggers__stl(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSquareRoot___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VSquareRoot___024root___stl_sequent__TOP__0(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___stl_sequent__TOP__0\n"); );
    // Init
    double __Vfunc_sqrt__0__x;
    __Vfunc_sqrt__0__x = 0;
    // Body
    __Vfunc_sqrt__0__x = vlSelf->x;
    {
        if (VL_UNLIKELY((__Vfunc_sqrt__0__x < 0.0))) {
            VL_WRITEF("Number less than 0, Sqrt Non-Existant\n\n");
            vlSelf->__Vfunc_sqrt__0__Vfuncout = 0.0;
            goto __Vlabel1;
        }
        vlSymsp->TOP____024unit.sqrt__Vstatic__error = 1.00000000000000002e-08;
        vlSymsp->TOP____024unit.sqrt__Vstatic__low = 0.0;
        vlSymsp->TOP____024unit.sqrt__Vstatic__high 
            = __Vfunc_sqrt__0__x;
        if ((__Vfunc_sqrt__0__x < 1.0)) {
            vlSymsp->TOP____024unit.sqrt__Vstatic__low 
                = __Vfunc_sqrt__0__x;
            vlSymsp->TOP____024unit.sqrt__Vstatic__high = 1.0;
        }
        vlSymsp->TOP____024unit.sqrt__Vstatic__mid 
            = ((vlSymsp->TOP____024unit.sqrt__Vstatic__low 
                + vlSymsp->TOP____024unit.sqrt__Vstatic__high) 
               / 2.0);
        while ((1U & (~ (([&]() {
                                vlSelf->__Vfunc_abs__1__num 
                                    = ((vlSymsp->TOP____024unit.sqrt__Vstatic__mid 
                                        * vlSymsp->TOP____024unit.sqrt__Vstatic__mid) 
                                       - __Vfunc_sqrt__0__x);
                                {
                                    if ((vlSelf->__Vfunc_abs__1__num 
                                         <= 0.0)) {
                                        vlSelf->__Vfunc_abs__1__Vfuncout 
                                            = (-1.0 
                                               * vlSelf->__Vfunc_abs__1__num);
                                        goto __Vlabel2;
                                    }
                                    vlSelf->__Vfunc_abs__1__Vfuncout 
                                        = vlSelf->__Vfunc_abs__1__num;
                                    __Vlabel2: ;
                                }
                            }(), vlSelf->__Vfunc_abs__1__Vfuncout) 
                         <= vlSymsp->TOP____024unit.sqrt__Vstatic__error)))) {
            if (((vlSymsp->TOP____024unit.sqrt__Vstatic__mid 
                  * vlSymsp->TOP____024unit.sqrt__Vstatic__mid) 
                 > __Vfunc_sqrt__0__x)) {
                vlSymsp->TOP____024unit.sqrt__Vstatic__high 
                    = vlSymsp->TOP____024unit.sqrt__Vstatic__mid;
            } else if (((vlSymsp->TOP____024unit.sqrt__Vstatic__mid 
                         * vlSymsp->TOP____024unit.sqrt__Vstatic__mid) 
                        < __Vfunc_sqrt__0__x)) {
                vlSymsp->TOP____024unit.sqrt__Vstatic__low 
                    = vlSymsp->TOP____024unit.sqrt__Vstatic__mid;
            }
            vlSymsp->TOP____024unit.sqrt__Vstatic__mid 
                = ((vlSymsp->TOP____024unit.sqrt__Vstatic__low 
                    + vlSymsp->TOP____024unit.sqrt__Vstatic__high) 
                   / 2.0);
        }
        vlSelf->__Vfunc_sqrt__0__Vfuncout = vlSymsp->TOP____024unit.sqrt__Vstatic__mid;
        __Vlabel1: ;
    }
    vlSelf->y = vlSelf->__Vfunc_sqrt__0__Vfuncout;
}
