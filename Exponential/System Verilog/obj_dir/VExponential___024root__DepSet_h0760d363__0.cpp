// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExponential.h for the primary calling header

#include "VExponential__pch.h"
#include "VExponential___024root.h"

VL_INLINE_OPT void VExponential___024root___ico_sequent__TOP__0(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___ico_sequent__TOP__0\n"); );
    // Init
    double __Vfunc_exp__0__Vfuncout;
    __Vfunc_exp__0__Vfuncout = 0;
    double __Vfunc_exp__0__x;
    __Vfunc_exp__0__x = 0;
    double __Vfunc_exp__0__result;
    __Vfunc_exp__0__result = 0;
    double __Vtemp_5;
    double __Vtemp_10;
    double __Vtemp_15;
    double __Vtemp_20;
    double __Vtemp_25;
    double __Vtemp_30;
    double __Vtemp_35;
    double __Vtemp_40;
    double __Vtemp_45;
    double __Vtemp_50;
    double __Vtemp_55;
    double __Vtemp_60;
    double __Vtemp_65;
    double __Vtemp_70;
    double __Vtemp_75;
    double __Vtemp_80;
    double __Vtemp_85;
    double __Vtemp_90;
    double __Vtemp_95;
    double __Vtemp_100;
    // Body
    __Vfunc_exp__0__x = vlSelf->x;
    __Vfunc_exp__0__result = (0.0 + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                     / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vtemp_5 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 1U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                           / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 1U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_5;
    __Vtemp_10 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 2U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 2U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_10;
    __Vtemp_15 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 3U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 3U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_15;
    __Vtemp_20 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 4U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 4U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_20;
    __Vtemp_25 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 5U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 5U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_25;
    __Vtemp_30 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 6U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 6U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_30;
    __Vtemp_35 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 7U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 7U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_35;
    __Vtemp_40 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 8U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 8U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_40;
    __Vtemp_45 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 9U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 9U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_45;
    __Vtemp_50 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0xaU;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0xaU;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_50;
    __Vtemp_55 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0xbU;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0xbU;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_55;
    __Vtemp_60 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0xcU;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0xcU;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_60;
    __Vtemp_65 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0xdU;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0xdU;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_65;
    __Vtemp_70 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0xeU;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0xeU;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_70;
    __Vtemp_75 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0xfU;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0xfU;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_75;
    __Vtemp_80 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0x10U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0x10U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_80;
    __Vtemp_85 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0x11U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0x11U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_85;
    __Vtemp_90 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0x12U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0x12U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_90;
    __Vtemp_95 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0x13U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                            / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0x13U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_95;
    __Vtemp_100 = (__Vfunc_exp__0__result + (([&]() {
                    vlSelf->__Vfunc_power__1__pow = 0x14U;
                    vlSelf->__Vfunc_power__1__x = __Vfunc_exp__0__x;
                    vlSelf->__Vfunc_power__1__result = 1.0;
                    vlSelf->__Vfunc_power__1__i = 0U;
                    while (VL_LTS_III(32, vlSelf->__Vfunc_power__1__i, vlSelf->__Vfunc_power__1__pow)) {
                        vlSelf->__Vfunc_power__1__result 
                            = (vlSelf->__Vfunc_power__1__result 
                               * vlSelf->__Vfunc_power__1__x);
                        vlSelf->__Vfunc_power__1__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_power__1__i);
                    }
                    vlSelf->__Vfunc_power__1__Vfuncout 
                        = vlSelf->__Vfunc_power__1__result;
                }(), vlSelf->__Vfunc_power__1__Vfuncout) 
                                             / ([&]() {
                    vlSelf->__Vfunc_factorial__2__x = 0x14U;
                    vlSelf->__Vfunc_factorial__2__fact = 1.0;
                    vlSelf->__Vfunc_factorial__2__i = 2U;
                    while (VL_LTES_III(32, vlSelf->__Vfunc_factorial__2__i, vlSelf->__Vfunc_factorial__2__x)) {
                        vlSelf->__Vfunc_factorial__2__fact 
                            = (vlSelf->__Vfunc_factorial__2__fact 
                               * VL_ISTOR_D_I(32, vlSelf->__Vfunc_factorial__2__i));
                        vlSelf->__Vfunc_factorial__2__i 
                            = ((IData)(1U) + vlSelf->__Vfunc_factorial__2__i);
                    }
                    vlSelf->__Vfunc_factorial__2__Vfuncout 
                        = vlSelf->__Vfunc_factorial__2__fact;
                }(), vlSelf->__Vfunc_factorial__2__Vfuncout)));
    __Vfunc_exp__0__result = __Vtemp_100;
    __Vfunc_exp__0__Vfuncout = __Vfunc_exp__0__result;
    vlSelf->y = __Vfunc_exp__0__Vfuncout;
}

void VExponential___024root___eval_ico(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VExponential___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VExponential___024root___eval_triggers__ico(VExponential___024root* vlSelf);

bool VExponential___024root___eval_phase__ico(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VExponential___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VExponential___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VExponential___024root___eval_act(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_act\n"); );
}

void VExponential___024root___eval_nba(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_nba\n"); );
}

void VExponential___024root___eval_triggers__act(VExponential___024root* vlSelf);

bool VExponential___024root___eval_phase__act(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VExponential___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VExponential___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VExponential___024root___eval_phase__nba(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VExponential___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__ico(VExponential___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__nba(VExponential___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__act(VExponential___024root* vlSelf);
#endif  // VL_DEBUG

void VExponential___024root___eval(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VExponential___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Exponential.sv", 33, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VExponential___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VExponential___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Exponential.sv", 33, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VExponential___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Exponential.sv", 33, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VExponential___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VExponential___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VExponential___024root___eval_debug_assertions(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
