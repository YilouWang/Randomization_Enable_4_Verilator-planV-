// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "simple_tb__pch.h"
#include "simple_tb.h"
#include "simple_tb___024root.h"
#include "simple_tb___024unit.h"
#include "simple_tb___024unit__03a__03acls__Vclpkg.h"
#include "simple_tb___024unit__03a__03aw_sequence_item__Vclpkg.h"

// FUNCTIONS
simple_tb__Syms::~simple_tb__Syms()
{
}

simple_tb__Syms::simple_tb__Syms(VerilatedContext* contextp, const char* namep, simple_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03acls__Vclpkg{this, Verilated::catName(namep, "$unit::cls__Vclpkg")}
    , TOP____024unit__03a__03aw_sequence_item__Vclpkg{this, Verilated::catName(namep, "$unit::w_sequence_item__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(239);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03acls__Vclpkg = &TOP____024unit__03a__03acls__Vclpkg;
    TOP.__024unit__03a__03aw_sequence_item__Vclpkg = &TOP____024unit__03a__03aw_sequence_item__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03acls__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03aw_sequence_item__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
}
