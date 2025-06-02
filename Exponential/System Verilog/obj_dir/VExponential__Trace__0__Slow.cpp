// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExponential__Syms.h"


VL_ATTR_COLD void VExponential___024root__trace_init_sub__TOP__0(VExponential___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declDouble(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("Exponential", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void VExponential___024root__trace_init_top(VExponential___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_init_top\n"); );
    // Body
    VExponential___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VExponential___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VExponential___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VExponential___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VExponential___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VExponential___024root__trace_register(VExponential___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VExponential___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VExponential___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VExponential___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VExponential___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VExponential___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_const_0\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VExponential___024root__trace_full_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VExponential___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_full_0\n"); );
    // Init
    VExponential___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VExponential___024root*>(voidSelf);
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VExponential___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VExponential___024root__trace_full_0_sub_0(VExponential___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+1,(vlSelf->x));
    bufp->fullDouble(oldp+3,(vlSelf->y));
}
