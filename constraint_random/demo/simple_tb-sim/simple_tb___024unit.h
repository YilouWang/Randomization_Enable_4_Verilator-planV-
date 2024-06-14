// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See simple_tb.h for the primary calling header

#ifndef VERILATED_SIMPLE_TB___024UNIT_H_
#define VERILATED_SIMPLE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class simple_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) simple_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    simple_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    simple_tb___024unit(simple_tb__Syms* symsp, const char* v__name);
    ~simple_tb___024unit();
    VL_UNCOPYABLE(simple_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
