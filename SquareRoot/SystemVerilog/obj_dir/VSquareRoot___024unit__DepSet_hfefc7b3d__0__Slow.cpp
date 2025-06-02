// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSquareRoot.h for the primary calling header

#include "VSquareRoot__pch.h"
#include "VSquareRoot___024unit.h"

VL_ATTR_COLD void VSquareRoot___024unit___ctor_var_reset(VSquareRoot___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSquareRoot___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->sqrt__Vstatic__low = 0;
    vlSelf->sqrt__Vstatic__high = 0;
    vlSelf->sqrt__Vstatic__mid = 0;
    vlSelf->sqrt__Vstatic__error = 0;
}
