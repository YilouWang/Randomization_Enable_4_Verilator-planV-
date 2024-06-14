// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See test_4_conditional_constrain.h for the primary calling header

#include "test_4_conditional_constrain__pch.h"
#include "test_4_conditional_constrain___024unit__03a__03acls__Vclpkg.h"

void test_4_conditional_constrain___024unit__03a__03acls::__VnoInFunc_randomize(test_4_conditional_constrain__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::__VnoInFunc_randomize\n"); );
    // Body
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__PVT__lgc_32_bit = VL_RANDOM_RNG_I(__Vm_rng);
    this->__PVT__x = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

void test_4_conditional_constrain___024unit__03a__03acls::__VnoInFunc_enum_con_setup_constraint(test_4_conditional_constrain__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::__VnoInFunc_enum_con_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.write_var(this->__PVT__enum_4_, 0x10ULL, 
                                      "enum_4_");
    this->__PVT__constraint.hard(std::string{"(or (= enum_4_ #x0005) (= enum_4_ #x0008))"});
}

test_4_conditional_constrain___024unit__03a__03acls::~test_4_conditional_constrain___024unit__03a__03acls() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<test_4_conditional_constrain___024unit__03a__03acls>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string test_4_conditional_constrain___024unit__03a__03acls::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string test_4_conditional_constrain___024unit__03a__03acls::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          test_4_conditional_constrain___024unit__03a__03acls::to_string_middle\n"); );
    // Body
    std::string out;
    out += "enum_4_:" + VL_TO_STRING(__PVT__enum_4_);
    out += ", lgc_32_bit:" + VL_TO_STRING(__PVT__lgc_32_bit);
    out += ", x:" + VL_TO_STRING(__PVT__x);
    return out;
}
