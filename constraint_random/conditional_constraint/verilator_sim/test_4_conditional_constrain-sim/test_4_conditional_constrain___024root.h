// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See test_4_conditional_constrain.h for the primary calling header

#ifndef VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024ROOT_H_
#define VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"
class test_4_conditional_constrain___024unit;
class test_4_conditional_constrain___024unit__03a__03acls;
class test_4_conditional_constrain___024unit__03a__03acls__Vclpkg;
class test_4_conditional_constrain___024unit__03a__03aw_sequence_item;
class test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg;


class test_4_conditional_constrain__Syms;

class alignas(VL_CACHE_LINE_BYTES) test_4_conditional_constrain___024root final : public VerilatedModule {
  public:
    // CELLS
    test_4_conditional_constrain___024unit* __PVT____024unit;
    test_4_conditional_constrain___024unit__03a__03acls__Vclpkg* __024unit__03a__03acls__Vclpkg;
    test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg* __024unit__03a__03aw_sequence_item__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ test_4_conditional_constrain__DOT__v;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    test_4_conditional_constrain__Syms* const vlSymsp;

    // CONSTRUCTORS
    test_4_conditional_constrain___024root(test_4_conditional_constrain__Syms* symsp, const char* v__name);
    ~test_4_conditional_constrain___024root();
    VL_UNCOPYABLE(test_4_conditional_constrain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
