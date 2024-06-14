// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See simple_tb.h for the primary calling header

#ifndef VERILATED_SIMPLE_TB___024ROOT_H_
#define VERILATED_SIMPLE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"
class simple_tb___024unit;
class simple_tb___024unit__03a__03acls;
class simple_tb___024unit__03a__03acls__Vclpkg;
class simple_tb___024unit__03a__03aw_sequence_item;
class simple_tb___024unit__03a__03aw_sequence_item__Vclpkg;


class simple_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) simple_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    simple_tb___024unit* __PVT____024unit;
    simple_tb___024unit__03a__03acls__Vclpkg* __024unit__03a__03acls__Vclpkg;
    simple_tb___024unit__03a__03aw_sequence_item__Vclpkg* __024unit__03a__03aw_sequence_item__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ simple_tb__DOT__v;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    simple_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    simple_tb___024root(simple_tb__Syms* symsp, const char* v__name);
    ~simple_tb___024root();
    VL_UNCOPYABLE(simple_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
