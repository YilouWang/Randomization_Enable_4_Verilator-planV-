// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See test_4_conditional_constrain.h for the primary calling header

#include "test_4_conditional_constrain__pch.h"
#include "test_4_conditional_constrain__Syms.h"
#include "test_4_conditional_constrain___024unit__03a__03acls__Vclpkg.h"

test_4_conditional_constrain___024unit__03a__03acls::test_4_conditional_constrain___024unit__03a__03acls(test_4_conditional_constrain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__enum_4_ = 3U;
    this->__VnoInFunc_enum_con_setup_constraint(vlSymsp);
}

void test_4_conditional_constrain___024unit__03a__03acls::_ctor_var_reset(test_4_conditional_constrain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__enum_4_ = 0;
    __PVT__lgc_32_bit = 0;
    __PVT__x = 0;
    }
