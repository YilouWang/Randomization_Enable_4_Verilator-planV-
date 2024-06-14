// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb__Syms.h"
#include "simple_tb___024unit__03a__03aw_sequence_item__Vclpkg.h"

void simple_tb___024unit__03a__03aw_sequence_item::_ctor_var_reset(simple_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__r = 0;
    __PVT__data1 = VL_RAND_RESET_I(8);
    __PVT__data2 = VL_RAND_RESET_I(8);
    __PVT__data3 = VL_RAND_RESET_I(8);
    __PVT__delay = 0;
    __PVT__flag = VL_RAND_RESET_I(1);
    }
