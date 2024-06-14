// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See test_4_conditional_constrain.h for the primary calling header

#include "test_4_conditional_constrain__pch.h"
#include "test_4_conditional_constrain__Syms.h"
#include "test_4_conditional_constrain___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void test_4_conditional_constrain___024root___dump_triggers__act(test_4_conditional_constrain___024root* vlSelf);
#endif  // VL_DEBUG

void test_4_conditional_constrain___024root___eval_triggers__act(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        test_4_conditional_constrain___024root___dump_triggers__act(vlSelf);
    }
#endif
}
