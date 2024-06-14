// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "test_4_conditional_constrain__Syms.h"


void test_4_conditional_constrain___024root__trace_chg_0_sub_0(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void test_4_conditional_constrain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_chg_0\n"); );
    // Init
    test_4_conditional_constrain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<test_4_conditional_constrain___024root*>(voidSelf);
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    test_4_conditional_constrain___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void test_4_conditional_constrain___024root__trace_chg_0_sub_0(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->test_4_conditional_constrain__DOT__v),32);
    }
}

void test_4_conditional_constrain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_cleanup\n"); );
    // Init
    test_4_conditional_constrain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<test_4_conditional_constrain___024root*>(voidSelf);
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
