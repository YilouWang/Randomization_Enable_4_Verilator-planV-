// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb__Syms.h"
#include "simple_tb___024unit__03a__03acls__Vclpkg.h"
#include "simple_tb___024unit__03a__03aw_sequence_item__Vclpkg.h"

simple_tb___024unit__03a__03aw_sequence_item::simple_tb___024unit__03a__03aw_sequence_item(simple_tb__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    this->__PVT__flag = 0U;
    this->__PVT__cls_1_ = VL_NEW(simple_tb___024unit__03a__03acls, vlSymsp);
    VL_NULL_CHECK(this->__PVT__cls_1_, "simple_tb.sv", 52)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    this->__PVT__r = __Vtask_randomize__1__Vfuncout;
    this->__PVT__flag = VL_NULL_CHECK(this->__PVT__cls_1_, "simple_tb.sv", 53)
        ->__PVT__x;
    this->__VnoInFunc_data1_con_setup_constraint(vlSymsp);
    this->__VnoInFunc_data2_con_setup_constraint(vlSymsp);
    this->__VnoInFunc_data3_con_setup_constraint(vlSymsp);
}
