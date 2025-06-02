// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExponential.h for the primary calling header

#include "VExponential__pch.h"
#include "VExponential___024root.h"

VL_ATTR_COLD void VExponential___024root___eval_static(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_static\n"); );
}

VL_ATTR_COLD void VExponential___024root___eval_initial(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VExponential___024root___eval_final(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__stl(VExponential___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VExponential___024root___eval_phase__stl(VExponential___024root* vlSelf);

VL_ATTR_COLD void VExponential___024root___eval_settle(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_settle\n"); );
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
            VExponential___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Exponential.sv", 33, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VExponential___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__stl(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VExponential___024root___ico_sequent__TOP__0(VExponential___024root* vlSelf);

VL_ATTR_COLD void VExponential___024root___eval_stl(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VExponential___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VExponential___024root___eval_triggers__stl(VExponential___024root* vlSelf);

VL_ATTR_COLD bool VExponential___024root___eval_phase__stl(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VExponential___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VExponential___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__ico(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VExponential___024root___dump_triggers__act(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VExponential___024root___dump_triggers__nba(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VExponential___024root___ctor_var_reset(VExponential___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExponential__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExponential___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = 0;
    vlSelf->y = 0;
    vlSelf->__Vfunc_power__1__Vfuncout = 0;
    vlSelf->__Vfunc_power__1__x = 0;
    vlSelf->__Vfunc_power__1__pow = 0;
    vlSelf->__Vfunc_power__1__i = 0;
    vlSelf->__Vfunc_power__1__result = 0;
    vlSelf->__Vfunc_factorial__2__Vfuncout = 0;
    vlSelf->__Vfunc_factorial__2__x = 0;
    vlSelf->__Vfunc_factorial__2__fact = 0;
    vlSelf->__Vfunc_factorial__2__i = 0;
}
