// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb__Syms.h"
#include "simple_tb___024unit__03a__03acls__Vclpkg.h"

simple_tb___024unit__03a__03acls::simple_tb___024unit__03a__03acls(simple_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03acls::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__enum_4_ = 3U;
    this->__VnoInFunc_combined_debug_setup_constraint(vlSymsp);
}

void simple_tb___024unit__03a__03acls::_ctor_var_reset(simple_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03acls::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__enum_4_ = 0;
    __PVT__lgc_1_ = 0;
    __PVT__x = 0;
    }
