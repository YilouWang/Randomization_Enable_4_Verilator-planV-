// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb__Syms.h"
#include "simple_tb___024unit.h"

void simple_tb___024unit___ctor_var_reset(simple_tb___024unit* vlSelf);

simple_tb___024unit::simple_tb___024unit(simple_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    simple_tb___024unit___ctor_var_reset(this);
}

void simple_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

simple_tb___024unit::~simple_tb___024unit() {
}
