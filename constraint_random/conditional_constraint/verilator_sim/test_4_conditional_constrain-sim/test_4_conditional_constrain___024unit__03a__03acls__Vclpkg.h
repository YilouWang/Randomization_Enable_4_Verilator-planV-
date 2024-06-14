// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See test_4_conditional_constrain.h for the primary calling header

#ifndef VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024UNIT__03A__03ACLS__VCLPKG_H_
#define VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024UNIT__03A__03ACLS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class test_4_conditional_constrain__Syms;

class alignas(VL_CACHE_LINE_BYTES) test_4_conditional_constrain___024unit__03a__03acls__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    test_4_conditional_constrain__Syms* const vlSymsp;

    // CONSTRUCTORS
    test_4_conditional_constrain___024unit__03a__03acls__Vclpkg(test_4_conditional_constrain__Syms* symsp, const char* v__name);
    ~test_4_conditional_constrain___024unit__03a__03acls__Vclpkg();
    VL_UNCOPYABLE(test_4_conditional_constrain___024unit__03a__03acls__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class test_4_conditional_constrain__Syms;

class test_4_conditional_constrain___024unit__03a__03acls : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__x;
    SData/*15:0*/ __PVT__enum_4_;
    IData/*31:0*/ __PVT__lgc_32_bit;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc_enum_con_setup_constraint(test_4_conditional_constrain__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(test_4_conditional_constrain__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(test_4_conditional_constrain__Syms* __restrict vlSymsp);
  public:
    test_4_conditional_constrain___024unit__03a__03acls(test_4_conditional_constrain__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~test_4_conditional_constrain___024unit__03a__03acls();
};

std::string VL_TO_STRING(const VlClassRef<test_4_conditional_constrain___024unit__03a__03acls>& obj);

#endif  // guard
