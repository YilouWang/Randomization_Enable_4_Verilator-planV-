// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_TEST_4_CONDITIONAL_CONSTRAIN__SYMS_H_
#define VERILATED_TEST_4_CONDITIONAL_CONSTRAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "test_4_conditional_constrain.h"

// INCLUDE MODULE CLASSES
#include "test_4_conditional_constrain___024root.h"
#include "test_4_conditional_constrain___024unit.h"
#include "test_4_conditional_constrain___024unit__03a__03acls__Vclpkg.h"
#include "test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)test_4_conditional_constrain__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    test_4_conditional_constrain* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    test_4_conditional_constrain___024root TOP;
    test_4_conditional_constrain___024unit__03a__03acls__Vclpkg TOP____024unit__03a__03acls__Vclpkg;
    test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg TOP____024unit__03a__03aw_sequence_item__Vclpkg;
    test_4_conditional_constrain___024unit TOP____024unit;

    // CONSTRUCTORS
    test_4_conditional_constrain__Syms(VerilatedContext* contextp, const char* namep, test_4_conditional_constrain* modelp);
    ~test_4_conditional_constrain__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
