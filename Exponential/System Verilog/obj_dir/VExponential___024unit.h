// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VExponential.h for the primary calling header

#ifndef VERILATED_VEXPONENTIAL___024UNIT_H_
#define VERILATED_VEXPONENTIAL___024UNIT_H_  // guard

#include "verilated.h"


class VExponential__Syms;

class alignas(VL_CACHE_LINE_BYTES) VExponential___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VExponential__Syms* const vlSymsp;

    // CONSTRUCTORS
    VExponential___024unit(VExponential__Syms* symsp, const char* v__name);
    ~VExponential___024unit();
    VL_UNCOPYABLE(VExponential___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
