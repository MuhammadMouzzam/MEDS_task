// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSquareRoot.h for the primary calling header

#ifndef VERILATED_VSQUAREROOT___024UNIT_H_
#define VERILATED_VSQUAREROOT___024UNIT_H_  // guard

#include "verilated.h"


class VSquareRoot__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSquareRoot___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    double sqrt__Vstatic__low;
    double sqrt__Vstatic__high;
    double sqrt__Vstatic__mid;
    double sqrt__Vstatic__error;

    // INTERNAL VARIABLES
    VSquareRoot__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSquareRoot___024unit(VSquareRoot__Syms* symsp, const char* v__name);
    ~VSquareRoot___024unit();
    VL_UNCOPYABLE(VSquareRoot___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
