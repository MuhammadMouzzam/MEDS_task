// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSquareRoot__Syms.h"


VL_ATTR_COLD void VSquareRoot___024root__trace_init_sub__TOP____024unit__0(VSquareRoot___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSquareRoot___024root__trace_init_sub__TOP__0(VSquareRoot___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    VSquareRoot___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declDouble(c+9,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+11,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->pushPrefix("SquareRoot", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+9,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+11,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSquareRoot___024root__trace_init_sub__TOP____024unit__0(VSquareRoot___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declDouble(c+1,0,"sqrt__Vstatic__low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+3,0,"sqrt__Vstatic__high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+5,0,"sqrt__Vstatic__mid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+7,0,"sqrt__Vstatic__error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE, false,-1);
}

VL_ATTR_COLD void VSquareRoot___024root__trace_init_top(VSquareRoot___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_init_top\n"); );
    // Body
    VSquareRoot___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSquareRoot___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSquareRoot___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSquareRoot___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSquareRoot___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSquareRoot___024root__trace_register(VSquareRoot___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VSquareRoot___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VSquareRoot___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VSquareRoot___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VSquareRoot___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSquareRoot___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_const_0\n"); );
    // Init
    VSquareRoot___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSquareRoot___024root*>(voidSelf);
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VSquareRoot___024root__trace_full_0_sub_0(VSquareRoot___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSquareRoot___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_full_0\n"); );
    // Init
    VSquareRoot___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSquareRoot___024root*>(voidSelf);
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSquareRoot___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSquareRoot___024root__trace_full_0_sub_0(VSquareRoot___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+1,(vlSymsp->TOP____024unit.sqrt__Vstatic__low));
    bufp->fullDouble(oldp+3,(vlSymsp->TOP____024unit.sqrt__Vstatic__high));
    bufp->fullDouble(oldp+5,(vlSymsp->TOP____024unit.sqrt__Vstatic__mid));
    bufp->fullDouble(oldp+7,(vlSymsp->TOP____024unit.sqrt__Vstatic__error));
    bufp->fullDouble(oldp+9,(vlSelf->x));
    bufp->fullDouble(oldp+11,(vlSelf->y));
}
