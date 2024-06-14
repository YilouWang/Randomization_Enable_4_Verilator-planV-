// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See simple_tb.h for the primary calling header

#ifndef VERILATED_SIMPLE_TB___024UNIT__03A__03AW_SEQUENCE_ITEM__VCLPKG_H_
#define VERILATED_SIMPLE_TB___024UNIT__03A__03AW_SEQUENCE_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_random.h"
class simple_tb___024unit__03a__03acls;


class simple_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) simple_tb___024unit__03a__03aw_sequence_item__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    simple_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    simple_tb___024unit__03a__03aw_sequence_item__Vclpkg(simple_tb__Syms* symsp, const char* v__name);
    ~simple_tb___024unit__03a__03aw_sequence_item__Vclpkg();
    VL_UNCOPYABLE(simple_tb___024unit__03a__03aw_sequence_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class simple_tb__Syms;

class simple_tb___024unit__03a__03aw_sequence_item : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__data1;
    CData/*7:0*/ __PVT__data2;
    CData/*7:0*/ __PVT__data3;
    IData/*31:0*/ __PVT__r;
    IData/*31:0*/ __PVT__flag;
    IData/*31:0*/ __PVT__delay;
    VlRandomizer __PVT__constraint;
    VlClassRef<simple_tb___024unit__03a__03acls> __PVT__cls_1_;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc_data1_con_setup_constraint(simple_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_data2_con_setup_constraint(simple_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_data3_con_setup_constraint(simple_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(simple_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(simple_tb__Syms* __restrict vlSymsp);
  public:
    simple_tb___024unit__03a__03aw_sequence_item(simple_tb__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~simple_tb___024unit__03a__03aw_sequence_item();
};

std::string VL_TO_STRING(const VlClassRef<simple_tb___024unit__03a__03aw_sequence_item>& obj);

#endif  // guard
