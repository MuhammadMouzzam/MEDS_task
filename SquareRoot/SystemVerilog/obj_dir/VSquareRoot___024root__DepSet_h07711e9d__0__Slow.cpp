// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSquareRoot.h for the primary calling header

#include "VSquareRoot__pch.h"
#include "VSquareRoot___024root.h"

VL_ATTR_COLD void VSquareRoot___024root___eval_static(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSquareRoot___024root___eval_initial(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VSquareRoot___024root___eval_final(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSquareRoot___024root___dump_triggers__stl(VSquareRoot___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSquareRoot___024root___eval_phase__stl(VSquareRoot___024root* vlSelf);

VL_ATTR_COLD void VSquareRoot___024root___eval_settle(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSquareRoot___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SquareRoot.sv", 34, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSquareRoot___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSquareRoot___024root___dump_triggers__stl(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSquareRoot___024root___stl_sequent__TOP__0(VSquareRoot___024root* vlSelf);

VL_ATTR_COLD void VSquareRoot___024root___eval_stl(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSquareRoot___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VSquareRoot___024root___eval_triggers__stl(VSquareRoot___024root* vlSelf);

VL_ATTR_COLD bool VSquareRoot___024root___eval_phase__stl(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSquareRoot___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSquareRoot___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSquareRoot___024root___dump_triggers__ico(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSquareRoot___024root___dump_triggers__act(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSquareRoot___024root___dump_triggers__nba(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSquareRoot___024root___ctor_var_reset(VSquareRoot___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSquareRoot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSquareRoot___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = 0;
    vlSelf->y = 0;
    vlSelf->__Vfunc_sqrt__0__Vfuncout = 0;
    vlSelf->__Vfunc_abs__1__Vfuncout = 0;
    vlSelf->__Vfunc_abs__1__num = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
