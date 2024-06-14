// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb__Syms.h"
#include "simple_tb___024root.h"

void simple_tb___024root___ctor_var_reset(simple_tb___024root* vlSelf);

simple_tb___024root::simple_tb___024root(simple_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    simple_tb___024root___ctor_var_reset(this);
}

void simple_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

simple_tb___024root::~simple_tb___024root() {
}
