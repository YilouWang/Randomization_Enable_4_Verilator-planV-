// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See simple_tb.h for the primary calling header

#include "simple_tb__pch.h"
#include "simple_tb__Syms.h"
#include "simple_tb___024root.h"
#include "simple_tb___024unit__03a__03acls__Vclpkg.h"
#include "simple_tb___024unit__03a__03aw_sequence_item__Vclpkg.h"

VL_ATTR_COLD void simple_tb___024root___eval_initial__TOP(simple_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    simple_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    simple_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlClassRef<simple_tb___024unit__03a__03aw_sequence_item> simple_tb__DOT__w;
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    VL_WRITEF_NX("***************************\n",0);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    simple_tb__DOT__w = VL_NEW(simple_tb___024unit__03a__03aw_sequence_item, vlSymsp, 
                               std::string{"w_sequence_item"});
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 66)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 67)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 69)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 71)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 74)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 74)
                 ->__PVT__x);
    VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 78)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    vlSelf->simple_tb__DOT__v = __Vtask_randomize__1__Vfuncout;
    if (VL_UNLIKELY((1U != vlSelf->simple_tb__DOT__v))) {
        VL_STOP_MT("simple_tb.sv", 79, "");
    }
    VL_WRITEF_NX("w_sequence_item: delay: %0d, flag: %b\ndata1(h) = %x\ndata2(h) = %x\ndata3(h) = %x\ncls: enum_4_: %0#, lgc_32_bit: %x, x: %b\n***************************\n",0,
                 32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__delay,32,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 82)
                 ->__PVT__flag,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 83)
                 ->__PVT__data1,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 85)
                 ->__PVT__data2,8,VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 87)
                 ->__PVT__data3,16,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                 ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__enum_4_,32,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                   ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__lgc_32_bit,1,VL_NULL_CHECK(VL_NULL_CHECK(simple_tb__DOT__w, "simple_tb.sv", 91)
                                                     ->__PVT__cls_1_, "simple_tb.sv", 91)
                 ->__PVT__x);
    VL_FINISH_MT("simple_tb.sv", 97, "");
}
