// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See simple_tb.h for the primary calling header

#ifndef VERILATED_SIMPLE_TB___024UNIT__03A__03ACLS__VCLPKG_H_
#define VERILATED_SIMPLE_TB___024UNIT__03A__03ACLS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class simple_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) simple_tb___024unit__03a__03acls__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    simple_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    simple_tb___024unit__03a__03acls__Vclpkg(simple_tb__Syms* symsp, const char* v__name);
    ~simple_tb___024unit__03a__03acls__Vclpkg();
    VL_UNCOPYABLE(simple_tb___024unit__03a__03acls__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class simple_tb__Syms;

class simple_tb___024unit__03a__03acls : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__x;
    SData/*15:0*/ __PVT__enum_4_;
    IData/*31:0*/ __PVT__lgc_32_bit;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc_enum_con_setup_constraint(simple_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(simple_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(simple_tb__Syms* __restrict vlSymsp);
  public:
    simple_tb___024unit__03a__03acls(simple_tb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~simple_tb___024unit__03a__03acls();
};

std::string VL_TO_STRING(const VlClassRef<simple_tb___024unit__03a__03acls>& obj);

#endif  // guard
