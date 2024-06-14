// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "test_4_conditional_constrain__Syms.h"


VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_init_sub__TOP__0(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("test_4_conditional_constrain", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_init_top(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_init_top\n"); );
    // Body
    test_4_conditional_constrain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void test_4_conditional_constrain___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void test_4_conditional_constrain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_register(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&test_4_conditional_constrain___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&test_4_conditional_constrain___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&test_4_conditional_constrain___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&test_4_conditional_constrain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_const_0\n"); );
    // Init
    test_4_conditional_constrain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<test_4_conditional_constrain___024root*>(voidSelf);
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_full_0_sub_0(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_full_0\n"); );
    // Init
    test_4_conditional_constrain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<test_4_conditional_constrain___024root*>(voidSelf);
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    test_4_conditional_constrain___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_full_0_sub_0(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->test_4_conditional_constrain__DOT__v),32);
}
