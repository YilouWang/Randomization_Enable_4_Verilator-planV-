// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_SIMPLE_TB__SYMS_H_
#define VERILATED_SIMPLE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "simple_tb.h"

// INCLUDE MODULE CLASSES
#include "simple_tb___024root.h"
#include "simple_tb___024unit.h"
#include "simple_tb___024unit__03a__03acls__Vclpkg.h"
#include "simple_tb___024unit__03a__03aw_sequence_item__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)simple_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    simple_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    simple_tb___024root            TOP;
    simple_tb___024unit__03a__03acls__Vclpkg TOP____024unit__03a__03acls__Vclpkg;
    simple_tb___024unit__03a__03aw_sequence_item__Vclpkg TOP____024unit__03a__03aw_sequence_item__Vclpkg;
    simple_tb___024unit            TOP____024unit;

    // CONSTRUCTORS
    simple_tb__Syms(VerilatedContext* contextp, const char* namep, simple_tb* modelp);
    ~simple_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
