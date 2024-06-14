// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb__Syms.h"
#include "simple_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void simple_tb___024root___dump_triggers__act(simple_tb___024root* vlSelf);
#endif  // VL_DEBUG

void simple_tb___024root___eval_triggers__act(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        simple_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
