// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb___024root.h"

VL_ATTR_COLD void simple_tb___024root___eval_static(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void simple_tb___024root___eval_initial__TOP(simple_tb___024root* vlSelf);

VL_ATTR_COLD void simple_tb___024root___eval_initial(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___eval_initial\n"); );
    // Body
    simple_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void simple_tb___024root___eval_final(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void simple_tb___024root___eval_settle(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void simple_tb___024root___dump_triggers__act(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void simple_tb___024root___dump_triggers__nba(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void simple_tb___024root___ctor_var_reset(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->simple_tb__DOT__v = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
