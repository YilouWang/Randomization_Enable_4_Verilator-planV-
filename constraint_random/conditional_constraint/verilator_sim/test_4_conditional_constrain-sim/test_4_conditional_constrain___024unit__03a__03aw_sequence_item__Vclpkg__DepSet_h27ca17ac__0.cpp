// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See test_4_conditional_constrain.h for the primary calling header

#include "test_4_conditional_constrain__pch.h"
#include "test_4_conditional_constrain__Syms.h"
#include "test_4_conditional_constrain___024unit__03a__03acls__Vclpkg.h"
#include "test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg.h"

test_4_conditional_constrain___024unit__03a__03aw_sequence_item::test_4_conditional_constrain___024unit__03a__03aw_sequence_item(test_4_conditional_constrain__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03aw_sequence_item::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    this->__PVT__flag = 0U;
    this->__PVT__cls_1_ = VL_NEW(test_4_conditional_constrain___024unit__03a__03acls, vlSymsp);
    VL_NULL_CHECK(this->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 52)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    this->__PVT__r = __Vtask_randomize__1__Vfuncout;
    this->__PVT__flag = VL_NULL_CHECK(this->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 53)
        ->__PVT__x;
    this->__VnoInFunc_data1_con_setup_constraint(vlSymsp);
    this->__VnoInFunc_data2_con_setup_constraint(vlSymsp);
    this->__VnoInFunc_data3_con_setup_constraint(vlSymsp);
}
