// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See test_4_conditional_constrain.h for the primary calling header

#ifndef VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024UNIT__03A__03AW_SEQUENCE_ITEM__VCLPKG_H_
#define VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024UNIT__03A__03AW_SEQUENCE_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_random.h"
class test_4_conditional_constrain___024unit__03a__03acls;


class test_4_conditional_constrain__Syms;

class alignas(VL_CACHE_LINE_BYTES) test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    test_4_conditional_constrain__Syms* const vlSymsp;

    // CONSTRUCTORS
    test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg(test_4_conditional_constrain__Syms* symsp, const char* v__name);
    ~test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg();
    VL_UNCOPYABLE(test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class test_4_conditional_constrain__Syms;

class test_4_conditional_constrain___024unit__03a__03aw_sequence_item : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data1;
    CData/*7:0*/ __PVT__data2;
    CData/*7:0*/ __PVT__data3;
    IData/*31:0*/ __PVT__r;
    IData/*31:0*/ __PVT__flag;
    IData/*31:0*/ __PVT__delay;
    VlRandomizer __PVT__constraint;
    VlClassRef<test_4_conditional_constrain___024unit__03a__03acls> __PVT__cls_1_;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc_data1_con_setup_constraint(test_4_conditional_constrain__Syms* __restrict vlSymsp);
    void __VnoInFunc_data2_con_setup_constraint(test_4_conditional_constrain__Syms* __restrict vlSymsp);
    void __VnoInFunc_data3_con_setup_constraint(test_4_conditional_constrain__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(test_4_conditional_constrain__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(test_4_conditional_constrain__Syms* __restrict vlSymsp);
  public:
    test_4_conditional_constrain___024unit__03a__03aw_sequence_item(test_4_conditional_constrain__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~test_4_conditional_constrain___024unit__03a__03aw_sequence_item();
};

std::string VL_TO_STRING(const VlClassRef<test_4_conditional_constrain___024unit__03a__03aw_sequence_item>& obj);

#endif  // guard
