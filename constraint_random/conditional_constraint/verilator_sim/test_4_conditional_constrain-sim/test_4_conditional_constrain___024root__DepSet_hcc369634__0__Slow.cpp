// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See test_4_conditional_constrain.h for the primary calling header

#include "test_4_conditional_constrain__pch.h"
#include "test_4_conditional_constrain__Syms.h"
#include "test_4_conditional_constrain___024root.h"
#include "test_4_conditional_constrain___024unit__03a__03acls__Vclpkg.h"
#include "test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg.h"

VL_ATTR_COLD void test_4_conditional_constrain___024root___eval_initial__TOP(test_4_conditional_constrain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    test_4_conditional_constrain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    test_4_conditional_constrain___024root___eval_initial__TOP\n"); );
    // Init
    VlClassRef<test_4_conditional_constrain___024unit__03a__03aw_sequence_item> test_4_conditional_constrain__DOT__w;
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    VL_WRITEF_NX("***************************\n",0);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    test_4_conditional_constrain__DOT__w = VL_NEW(test_4_conditional_constrain___024unit__03a__03aw_sequence_item, vlSymsp, 
                                                  std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 74)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->test_4_conditional_constrain__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->test_4_conditional_constrain__DOT__v))) {
        VL_STOP_MT("../test_4_conditional_constrain.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                 ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                   ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(test_4_conditional_constrain__DOT__w, "../test_4_conditional_constrain.sv", 91)
                                                     ->__PVT__cls_1_, "../test_4_conditional_constrain.sv", 91)
                 ->__PVT__x);
    VL_FINISH_MT("../test_4_conditional_constrain.sv", 97, "");
}
