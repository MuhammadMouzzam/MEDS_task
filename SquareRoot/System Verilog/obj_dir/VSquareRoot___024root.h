// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSquareRoot.h for the primary calling header

#ifndef VERILATED_VSQUAREROOT___024ROOT_H_
#define VERILATED_VSQUAREROOT___024ROOT_H_  // guard

#include "verilated.h"
class VSquareRoot___024unit;


class VSquareRoot__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSquareRoot___024root final : public VerilatedModule {
  public:
    // CELLS
    VSquareRoot___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    double x;
    double y;
    double __Vfunc_sqrt__0__Vfuncout;
    double __Vfunc_abs__1__Vfuncout;
    double __Vfunc_abs__1__num;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSquareRoot__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSquareRoot___024root(VSquareRoot__Syms* symsp, const char* v__name);
    ~VSquareRoot___024root();
    VL_UNCOPYABLE(VSquareRoot___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
