// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExponential__Syms.h"


void VExponential___024root__trace_chg_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VExponential___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_chg_0\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VExponential___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VExponential___024root__trace_chg_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgDouble(oldp+0,(vlSelf->x));
    bufp->chgDouble(oldp+2,(vlSelf->y));
}

void VExponential___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_cleanup\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
