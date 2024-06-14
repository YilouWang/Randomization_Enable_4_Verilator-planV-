// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "test_4_conditional_constrain__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

test_4_conditional_constrain::test_4_conditional_constrain(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new test_4_conditional_constrain__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __024unit__03a__03acls__Vclpkg{vlSymsp->TOP.__024unit__03a__03acls__Vclpkg}
    , __024unit__03a__03aw_sequence_item__Vclpkg{vlSymsp->TOP.__024unit__03a__03aw_sequence_item__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

test_4_conditional_constrain::test_4_conditional_constrain(const char* _vcname__)
    : test_4_conditional_constrain(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

test_4_conditional_constrain::~test_4_conditional_constrain() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void test_4_conditional_constrain___024root___eval_debug_assertions(test_4_conditional_constrain___024root* vlSelf);
#endif  // VL_DEBUG
void test_4_conditional_constrain___024root___eval_static(test_4_conditional_constrain___024root* vlSelf);
void test_4_conditional_constrain___024root___eval_initial(test_4_conditional_constrain___024root* vlSelf);
void test_4_conditional_constrain___024root___eval_settle(test_4_conditional_constrain___024root* vlSelf);
void test_4_conditional_constrain___024root___eval(test_4_conditional_constrain___024root* vlSelf);

void test_4_conditional_constrain::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate test_4_conditional_constrain::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    test_4_conditional_constrain___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        test_4_conditional_constrain___024root___eval_static(&(vlSymsp->TOP));
        test_4_conditional_constrain___024root___eval_initial(&(vlSymsp->TOP));
        test_4_conditional_constrain___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    test_4_conditional_constrain___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool test_4_conditional_constrain::eventsPending() { return false; }

uint64_t test_4_conditional_constrain::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* test_4_conditional_constrain::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void test_4_conditional_constrain___024root___eval_final(test_4_conditional_constrain___024root* vlSelf);

VL_ATTR_COLD void test_4_conditional_constrain::final() {
    test_4_conditional_constrain___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* test_4_conditional_constrain::hierName() const { return vlSymsp->name(); }
const char* test_4_conditional_constrain::modelName() const { return "test_4_conditional_constrain"; }
unsigned test_4_conditional_constrain::threads() const { return 1; }
void test_4_conditional_constrain::prepareClone() const { contextp()->prepareClone(); }
void test_4_conditional_constrain::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> test_4_conditional_constrain::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void test_4_conditional_constrain___024root__trace_decl_types(VerilatedVcd* tracep);

void test_4_conditional_constrain___024root__trace_init_top(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    test_4_conditional_constrain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<test_4_conditional_constrain___024root*>(voidSelf);
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    test_4_conditional_constrain___024root__trace_decl_types(tracep);
    test_4_conditional_constrain___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void test_4_conditional_constrain___024root__trace_register(test_4_conditional_constrain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void test_4_conditional_constrain::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'test_4_conditional_constrain::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    test_4_conditional_constrain___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
