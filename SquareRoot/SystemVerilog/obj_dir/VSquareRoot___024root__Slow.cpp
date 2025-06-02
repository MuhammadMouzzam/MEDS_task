// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSquareRoot.h for the primary calling header

#include "VSquareRoot__pch.h"
#include "VSquareRoot__Syms.h"
#include "VSquareRoot___024root.h"

void VSquareRoot___024root___ctor_var_reset(VSquareRoot___024root* vlSelf);

VSquareRoot___024root::VSquareRoot___024root(VSquareRoot__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSquareRoot___024root___ctor_var_reset(this);
}

void VSquareRoot___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSquareRoot___024root::~VSquareRoot___024root() {
}
