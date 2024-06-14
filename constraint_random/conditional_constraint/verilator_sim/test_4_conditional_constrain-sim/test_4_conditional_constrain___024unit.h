// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See test_4_conditional_constrain.h for the primary calling header

#ifndef VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024UNIT_H_
#define VERILATED_TEST_4_CONDITIONAL_CONSTRAIN___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_random.h"


class test_4_conditional_constrain__Syms;

class alignas(VL_CACHE_LINE_BYTES) test_4_conditional_constrain___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    test_4_conditional_constrain__Syms* const vlSymsp;

    // CONSTRUCTORS
    test_4_conditional_constrain___024unit(test_4_conditional_constrain__Syms* symsp, const char* v__name);
    ~test_4_conditional_constrain___024unit();
    VL_UNCOPYABLE(test_4_conditional_constrain___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
