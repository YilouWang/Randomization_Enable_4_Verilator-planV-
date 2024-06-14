// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See test_4_conditional_constrain.h for the primary calling header

#include "test_4_conditional_constrain__pch.h"
#include "test_4_conditional_constrain___024root.h"

void test_4_conditional_constrain___024root___eval_act(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_act\n"); );
}

void test_4_conditional_constrain___024root___eval_nba(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_nba\n"); );
}

void test_4_conditional_constrain___024root___eval_triggers__act(test_4_conditional_constrain___024root* vlSelf);

bool test_4_conditional_constrain___024root___eval_phase__act(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    test_4_conditional_constrain___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        test_4_conditional_constrain___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool test_4_conditional_constrain___024root___eval_phase__nba(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        test_4_conditional_constrain___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void test_4_conditional_constrain___024root___dump_triggers__nba(test_4_conditional_constrain___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void test_4_conditional_constrain___024root___dump_triggers__act(test_4_conditional_constrain___024root* vlSelf);
#endif  // VL_DEBUG

void test_4_conditional_constrain___024root___eval(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            test_4_conditional_constrain___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../test_4_conditional_constrain.sv", 58, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                test_4_conditional_constrain___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../test_4_conditional_constrain.sv", 58, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (test_4_conditional_constrain___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (test_4_conditional_constrain___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void test_4_conditional_constrain___024root___eval_debug_assertions(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
