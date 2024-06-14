// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb___024unit__03a__03aw_sequence_item__Vclpkg.h"

void simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_randomize(simple_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_randomize\n"); );
    // Body
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__PVT__data1 = (0xffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__delay = VL_RANDOM_RNG_I(__Vm_rng);
}

void simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_data1_con_setup_constraint(simple_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_data1_con_setup_constraint\n"); );
}

void simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_data2_con_setup_constraint(simple_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_data2_con_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.write_var(this->__PVT__data2, 8ULL, 
                                      "data2");
    this->__PVT__constraint.hard(std::string{"(or (or (= ((_ zero_extend 24) data2) #x00000001) (= ((_ zero_extend 24) data2) #x00000002)) (= ((_ zero_extend 24) data2) #x00000003))"});
}

void simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_data3_con_setup_constraint(simple_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::__VnoInFunc_data3_con_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.write_var(this->__PVT__data3, 8ULL, 
                                      "data3");
    this->__PVT__constraint.hard(std::string{"(= (bvand data3 #xf0) #xa0)"});
}

simple_tb___024unit__03a__03aw_sequence_item::~simple_tb___024unit__03a__03aw_sequence_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<simple_tb___024unit__03a__03aw_sequence_item>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string simple_tb___024unit__03a__03aw_sequence_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string simple_tb___024unit__03a__03aw_sequence_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          simple_tb___024unit__03a__03aw_sequence_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "cls_1_:" + VL_TO_STRING(__PVT__cls_1_);
    out += ", r:" + VL_TO_STRING(__PVT__r);
    out += ", flag:" + VL_TO_STRING(__PVT__flag);
    out += ", data1:" + VL_TO_STRING(__PVT__data1);
    out += ", data2:" + VL_TO_STRING(__PVT__data2);
    out += ", data3:" + VL_TO_STRING(__PVT__data3);
    out += ", delay:" + VL_TO_STRING(__PVT__delay);
    return out;
}
