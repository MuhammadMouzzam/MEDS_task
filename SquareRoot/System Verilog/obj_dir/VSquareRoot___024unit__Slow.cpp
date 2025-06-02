// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSquareRoot.h for the primary calling header

#include "VSquareRoot__pch.h"
#include "VSquareRoot__Syms.h"
#include "VSquareRoot___024unit.h"

void VSquareRoot___024unit___ctor_var_reset(VSquareRoot___024unit* vlSelf);

VSquareRoot___024unit::VSquareRoot___024unit(VSquareRoot__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSquareRoot___024unit___ctor_var_reset(this);
}

void VSquareRoot___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSquareRoot___024unit::~VSquareRoot___024unit() {
}
