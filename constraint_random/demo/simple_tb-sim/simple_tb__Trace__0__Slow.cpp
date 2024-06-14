// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "simple_tb__Syms.h"


VL_ATTR_COLD void simple_tb___024root__trace_init_sub__TOP__0(simple_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("simple_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void simple_tb___024root__trace_init_top(simple_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_init_top\n"); );
    // Body
    simple_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void simple_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void simple_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void simple_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void simple_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void simple_tb___024root__trace_register(simple_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&simple_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&simple_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&simple_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&simple_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void simple_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_const_0\n"); );
    // Init
    simple_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<simple_tb___024root*>(voidSelf);
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void simple_tb___024root__trace_full_0_sub_0(simple_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void simple_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_full_0\n"); );
    // Init
    simple_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<simple_tb___024root*>(voidSelf);
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    simple_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void simple_tb___024root__trace_full_0_sub_0(simple_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->simple_tb__DOT__v),32);
}
