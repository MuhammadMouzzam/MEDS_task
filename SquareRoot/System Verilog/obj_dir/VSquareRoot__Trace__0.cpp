// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSquareRoot__Syms.h"


void VSquareRoot___024root__trace_chg_0_sub_0(VSquareRoot___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSquareRoot___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_chg_0\n"); );
    // Init
    VSquareRoot___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSquareRoot___024root*>(voidSelf);
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSquareRoot___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSquareRoot___024root__trace_chg_0_sub_0(VSquareRoot___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgDouble(oldp+0,(vlSymsp->TOP____024unit.sqrt__Vstatic__low));
        bufp->chgDouble(oldp+2,(vlSymsp->TOP____024unit.sqrt__Vstatic__high));
        bufp->chgDouble(oldp+4,(vlSymsp->TOP____024unit.sqrt__Vstatic__mid));
        bufp->chgDouble(oldp+6,(vlSymsp->TOP____024unit.sqrt__Vstatic__error));
    }
    bufp->chgDouble(oldp+8,(vlSelf->x));
    bufp->chgDouble(oldp+10,(vlSelf->y));
}

void VSquareRoot___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_cleanup\n"); );
    // Init
    VSquareRoot___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSquareRoot___024root*>(voidSelf);
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
