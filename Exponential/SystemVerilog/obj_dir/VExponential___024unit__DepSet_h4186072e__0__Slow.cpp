// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExponential.h for the primary calling header

#include "VExponential__pch.h"
#include "VExponential___024unit.h"

VL_ATTR_COLD void VExponential___024unit___ctor_var_reset(VExponential___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VExponential___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->factorial__Vstatic__fact = 0;
    vlSelf->factorial__Vstatic__i = 0;
    vlSelf->exp__Vstatic__result = 0;
    vlSelf->power__Vstatic__i = 0;
    vlSelf->power__Vstatic__result = 0;
}
