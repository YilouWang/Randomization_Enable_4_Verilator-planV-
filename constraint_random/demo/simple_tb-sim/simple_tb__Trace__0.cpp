// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "simple_tb__Syms.h"


void simple_tb___024root__trace_chg_0_sub_0(simple_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void simple_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_chg_0\n"); );
    // Init
    simple_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<simple_tb___024root*>(voidSelf);
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    simple_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void simple_tb___024root__trace_chg_0_sub_0(simple_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->simple_tb__DOT__v),32);
    }
}

void simple_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root__trace_cleanup\n"); );
    // Init
    simple_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<simple_tb___024root*>(voidSelf);
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
