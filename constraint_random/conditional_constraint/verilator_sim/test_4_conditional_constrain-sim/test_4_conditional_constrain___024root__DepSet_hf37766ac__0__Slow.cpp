// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See test_4_conditional_constrain.h for the primary calling header

#include "test_4_conditional_constrain__pch.h"
#include "test_4_conditional_constrain___024root.h"

VL_ATTR_COLD void test_4_conditional_constrain___024root___eval_static(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_static\n"); );
}

VL_ATTR_COLD void test_4_conditional_constrain___024root___eval_initial__TOP(test_4_conditional_constrain___024root* vlSelf);

VL_ATTR_COLD void test_4_conditional_constrain___024root___eval_initial(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_initial\n"); );
    // Body
    test_4_conditional_constrain___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void test_4_conditional_constrain___024root___eval_final(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_final\n"); );
}

VL_ATTR_COLD void test_4_conditional_constrain___024root___eval_settle(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void test_4_conditional_constrain___024root___dump_triggers__act(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void test_4_conditional_constrain___024root___dump_triggers__nba(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void test_4_conditional_constrain___024root___ctor_var_reset(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test_4_conditional_constrain__DOT__v = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
