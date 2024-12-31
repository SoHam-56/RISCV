// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_memctrl.h for the primary calling header

#include "VTB_memctrl__pch.h"
#include "VTB_memctrl__Syms.h"
#include "VTB_memctrl___024root.h"

VL_INLINE_OPT VlCoroutine VTB_memctrl___024root___eval_initial__TOP__Vtiming__0(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_memctrl__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x32ULL, 
                                             nullptr, 
                                             "../TestBench/TB_memctrl.sv", 
                                             76);
        vlSelfRef.TB_memctrl__DOT__clk = (1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__clk)));
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine VTB_memctrl___024root___eval_initial__TOP__Vtiming__1(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 0;
    CData/*7:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__3__address;
    __Vtask_TB_memctrl__DOT__write_to_memory__3__address = 0;
    CData/*7:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__3__data;
    __Vtask_TB_memctrl__DOT__write_to_memory__3__data = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__read_and_verify__4__address;
    __Vtask_TB_memctrl__DOT__read_and_verify__4__address = 0;
    IData/*31:0*/ __Vtask_TB_memctrl__DOT__back_to_back_operations__5__num_ops;
    __Vtask_TB_memctrl__DOT__back_to_back_operations__5__num_ops = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__6__address;
    __Vtask_TB_memctrl__DOT__write_to_memory__6__address = 0;
    CData/*7:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__6__data;
    __Vtask_TB_memctrl__DOT__write_to_memory__6__data = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__read_and_verify__7__address;
    __Vtask_TB_memctrl__DOT__read_and_verify__7__address = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__read_and_verify__8__address;
    __Vtask_TB_memctrl__DOT__read_and_verify__8__address = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 0;
    CData/*7:0*/ __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 0;
    CData/*2:0*/ __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 0;
    // Body
    vlSelfRef.TB_memctrl__DOT__errors = 0U;
    vlSelfRef.TB_memctrl__DOT__test_number = 1U;
    vlSelfRef.TB_memctrl__DOT__random_seed = 0x12345678U;
    vlSelfRef.TB_memctrl__DOT__rstn = 0U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    vlSelfRef.TB_memctrl__DOT__read_address = 0U;
    vlSelfRef.TB_memctrl__DOT__write_address = 0U;
    vlSelfRef.TB_memctrl__DOT__write_data = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc8ULL, nullptr, 
                                         "../TestBench/TB_memctrl.sv", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rstn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc8ULL, nullptr, 
                                         "../TestBench/TB_memctrl.sv", 
                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    VL_WRITEF_NX("Test %0d: Sequential write/read of all locations\n",0,
                 32,vlSelfRef.TB_memctrl__DOT__test_number);
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xadU;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 0U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 1U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xaeU;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 1U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 2U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xafU;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 2U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 3U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xb0U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 3U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 4U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xb1U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 4U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 5U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xb2U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 5U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 6U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xb3U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 6U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 7U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__data = 0xb4U;
    __Vtask_TB_memctrl__DOT__write_to_memory__1__address = 7U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__1__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__1__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__1__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 8U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 0U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 1U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 1U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 2U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 2U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 3U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 3U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 4U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 4U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 5U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 5U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 6U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 6U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 7U;
    __Vtask_TB_memctrl__DOT__read_and_verify__2__address = 7U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__2__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__2__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__2__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 8U;
    vlSelfRef.TB_memctrl__DOT__test_number = ((IData)(1U) 
                                              + vlSelfRef.TB_memctrl__DOT__test_number);
    VL_WRITEF_NX("\nTest %0d: Random address access\n",0,
                 32,vlSelfRef.TB_memctrl__DOT__test_number);
    vlSelfRef.TB_memctrl__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, vlSelfRef.TB_memctrl__DOT__i)) {
        vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__addr 
            = (7U & VL_MODDIVS_III(32, (IData)(VL_RANDOM_SEEDED_II(vlSelfRef.TB_memctrl__DOT__random_seed)), (IData)(8U)));
        vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__data 
            = (0xffU & VL_RANDOM_SEEDED_II(vlSelfRef.TB_memctrl__DOT__random_seed));
        __Vtask_TB_memctrl__DOT__write_to_memory__3__data 
            = vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__data;
        __Vtask_TB_memctrl__DOT__write_to_memory__3__address 
            = vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__addr;
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             96);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
        vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__3__address;
        vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__3__data;
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             100);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
        while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 103);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__3__address] 
            = __Vtask_TB_memctrl__DOT__write_to_memory__3__data;
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        __Vtask_TB_memctrl__DOT__read_and_verify__4__address 
            = vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__addr;
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             111);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
        vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__4__address;
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             114);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
        while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 117);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        }
        if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                         != vlSelfRef.TB_memctrl__DOT__reference_memory
                         [__Vtask_TB_memctrl__DOT__read_and_verify__4__address]))) {
            VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                         3,__Vtask_TB_memctrl__DOT__read_and_verify__4__address,
                         8,vlSelfRef.TB_memctrl__DOT__reference_memory
                         [__Vtask_TB_memctrl__DOT__read_and_verify__4__address],
                         8,vlSelfRef.TB_memctrl__DOT__read_data);
            vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.TB_memctrl__DOT__errors);
            vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__i = ((IData)(1U) 
                                        + vlSelfRef.TB_memctrl__DOT__i);
    }
    vlSelfRef.TB_memctrl__DOT__test_number = ((IData)(1U) 
                                              + vlSelfRef.TB_memctrl__DOT__test_number);
    __Vtask_TB_memctrl__DOT__back_to_back_operations__5__num_ops = 0x32U;
    VL_WRITEF_NX("\nTest %0d: Performing %0d back-to-back operations\n",0,
                 32,vlSelfRef.TB_memctrl__DOT__test_number,
                 32,__Vtask_TB_memctrl__DOT__back_to_back_operations__5__num_ops);
    vlSelfRef.TB_memctrl__DOT__i = 0U;
    while (VL_LTS_III(32, vlSelfRef.TB_memctrl__DOT__i, __Vtask_TB_memctrl__DOT__back_to_back_operations__5__num_ops)) {
        vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__addr 
            = (7U & VL_MODDIVS_III(32, (IData)(VL_RANDOM_SEEDED_II(vlSelfRef.TB_memctrl__DOT__random_seed)), (IData)(8U)));
        vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__data 
            = (0xffU & VL_RANDOM_SEEDED_II(vlSelfRef.TB_memctrl__DOT__random_seed));
        if ((0U != VL_MODDIVS_III(32, (IData)(VL_RANDOM_SEEDED_II(vlSelfRef.TB_memctrl__DOT__random_seed)), (IData)(2U)))) {
            __Vtask_TB_memctrl__DOT__write_to_memory__6__data 
                = vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__data;
            __Vtask_TB_memctrl__DOT__write_to_memory__6__address 
                = vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__addr;
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 96);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
            vlSelfRef.TB_memctrl__DOT__write_address 
                = __Vtask_TB_memctrl__DOT__write_to_memory__6__address;
            vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__6__data;
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 100);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
            while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
                co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge TB_memctrl.clk)", 
                                                                     "../TestBench/TB_memctrl.sv", 
                                                                     103);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__6__address] 
                = __Vtask_TB_memctrl__DOT__write_to_memory__6__data;
            vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
            __Vtask_TB_memctrl__DOT__read_and_verify__7__address 
                = vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__addr;
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
            vlSelfRef.TB_memctrl__DOT__read_address 
                = __Vtask_TB_memctrl__DOT__read_and_verify__7__address;
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 114);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
            while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
                co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge TB_memctrl.clk)", 
                                                                     "../TestBench/TB_memctrl.sv", 
                                                                     117);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
            }
            if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                             != vlSelfRef.TB_memctrl__DOT__reference_memory
                             [__Vtask_TB_memctrl__DOT__read_and_verify__7__address]))) {
                VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                             3,__Vtask_TB_memctrl__DOT__read_and_verify__7__address,
                             8,vlSelfRef.TB_memctrl__DOT__reference_memory
                             [__Vtask_TB_memctrl__DOT__read_and_verify__7__address],
                             8,vlSelfRef.TB_memctrl__DOT__read_data);
                vlSelfRef.TB_memctrl__DOT__errors = 
                    ((IData)(1U) + vlSelfRef.TB_memctrl__DOT__errors);
                vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        } else {
            __Vtask_TB_memctrl__DOT__read_and_verify__8__address 
                = vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__addr;
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 111);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
            vlSelfRef.TB_memctrl__DOT__read_address 
                = __Vtask_TB_memctrl__DOT__read_and_verify__8__address;
            co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge TB_memctrl.clk)", 
                                                                 "../TestBench/TB_memctrl.sv", 
                                                                 114);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
            while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
                co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge TB_memctrl.clk)", 
                                                                     "../TestBench/TB_memctrl.sv", 
                                                                     117);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
            }
            if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                             != vlSelfRef.TB_memctrl__DOT__reference_memory
                             [__Vtask_TB_memctrl__DOT__read_and_verify__8__address]))) {
                VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                             3,__Vtask_TB_memctrl__DOT__read_and_verify__8__address,
                             8,vlSelfRef.TB_memctrl__DOT__reference_memory
                             [__Vtask_TB_memctrl__DOT__read_and_verify__8__address],
                             8,vlSelfRef.TB_memctrl__DOT__read_data);
                vlSelfRef.TB_memctrl__DOT__errors = 
                    ((IData)(1U) + vlSelfRef.TB_memctrl__DOT__errors);
                vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__i = ((IData)(1U) 
                                        + vlSelfRef.TB_memctrl__DOT__i);
    }
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__test_number = ((IData)(1U) 
                                              + vlSelfRef.TB_memctrl__DOT__test_number);
    VL_WRITEF_NX("\nTest %0d: Walking ones pattern test\n",0,
                 32,vlSelfRef.TB_memctrl__DOT__test_number);
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 1U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 0U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 0U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 1U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 2U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 1U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 1U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 2U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 4U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 2U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 2U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 3U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 8U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 3U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 3U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 4U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 0x10U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 4U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 4U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 5U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 0x20U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 5U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 5U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 6U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 0x40U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 6U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 6U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 7U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__data = 0x80U;
    __Vtask_TB_memctrl__DOT__write_to_memory__9__address = 7U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         96);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__write_address = __Vtask_TB_memctrl__DOT__write_to_memory__9__address;
    vlSelfRef.TB_memctrl__DOT__write_data = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__wr_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__wr_done)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             103);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelfRef.TB_memctrl__DOT__reference_memory[__Vtask_TB_memctrl__DOT__write_to_memory__9__address] 
        = __Vtask_TB_memctrl__DOT__write_to_memory__9__data;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    __Vtask_TB_memctrl__DOT__read_and_verify__10__address = 7U;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 1U;
    vlSelfRef.TB_memctrl__DOT__read_address = __Vtask_TB_memctrl__DOT__read_and_verify__10__address;
    co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge TB_memctrl.clk)", 
                                                         "../TestBench/TB_memctrl.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.TB_memctrl__DOT__rd_enable = 0U;
    while ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rd_valid)))) {
        co_await vlSelfRef.__VtrigSched_hd2ff7444__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge TB_memctrl.clk)", 
                                                             "../TestBench/TB_memctrl.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                     != vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address]))) {
        VL_WRITEF_NX("Error at address %0#: Expected %x, Got %x\n",0,
                     3,__Vtask_TB_memctrl__DOT__read_and_verify__10__address,
                     8,vlSelfRef.TB_memctrl__DOT__reference_memory
                     [__Vtask_TB_memctrl__DOT__read_and_verify__10__address],
                     8,vlSelfRef.TB_memctrl__DOT__read_data);
        vlSelfRef.TB_memctrl__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.TB_memctrl__DOT__errors);
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__i = 8U;
    vlSelfRef.TB_memctrl__DOT__test_number = ((IData)(1U) 
                                              + vlSelfRef.TB_memctrl__DOT__test_number);
    co_await vlSelfRef.__VdlySched.delay(0xc8ULL, nullptr, 
                                         "../TestBench/TB_memctrl.sv", 
                                         225);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((0U == vlSelfRef.TB_memctrl__DOT__errors) 
         & (0U == vlSelfRef.TB_memctrl__DOT__assertion_errors))) {
        VL_WRITEF_NX("\nAll tests passed successfully!\n",0);
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_WRITEF_NX("\nTests completed with %0d functional errors and %0# assertion failures\n",0,
                     32,vlSelfRef.TB_memctrl__DOT__errors,
                     32,vlSelfRef.TB_memctrl__DOT__assertion_errors);
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "../TestBench/TB_memctrl.sv", 
                                         231);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("../TestBench/TB_memctrl.sv", 232, "");
    vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__act(VTB_memctrl___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_memctrl___024root___eval_triggers__act(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.TB_memctrl__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB_memctrl__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.TB_memctrl__DOT__rstn)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__TB_memctrl__DOT__rstn__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__TB_memctrl__DOT__clk__0 
        = vlSelfRef.TB_memctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_memctrl__DOT__rstn__0 
        = vlSelfRef.TB_memctrl__DOT__rstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_memctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTB_memctrl___024root___act_sequent__TOP__0(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.TB_memctrl__DOT__clk) ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__clk = vlSelfRef.TB_memctrl__DOT__clk;
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___act_comb__TOP__0(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.TB_memctrl__DOT__rstn) ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__rstn))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__rstn 
            = vlSelfRef.TB_memctrl__DOT__rstn;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__rd_enable) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_enable))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_enable 
            = vlSelfRef.TB_memctrl__DOT__rd_enable;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__wr_enable) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_enable))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_enable 
            = vlSelfRef.TB_memctrl__DOT__wr_enable;
    }
    if ((1U ^ ((IData)(vlSelfRef.TB_memctrl__DOT__rstn) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__rsta)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__rsta 
            = (1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rstn)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__read_address)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__read_address)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__read_address)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__write_address)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__write_address)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__write_address)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffffeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (1U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffffdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (2U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffffbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (4U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffff7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (8U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffffefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x10U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffffdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x20U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffffbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x40U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffff7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x80U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x100U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffeffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x100U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x200U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffdffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x200U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x400U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffbffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x400U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x800U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffff7ffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x800U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x1000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffefffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x1000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x2000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffdfffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x2000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x4000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffbfffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x4000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x8000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffff7fffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x8000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x10000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffeffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x10000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x20000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffdffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x20000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x40000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffbffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x40000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x80000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfff7ffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x80000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x100000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffefffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x100000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x200000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffdfffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x200000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x400000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffbfffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x400000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x800000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xff7fffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x800000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x1000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfeffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x1000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x2000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfdffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x2000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x4000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfbffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x4000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x8000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xf7ffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x8000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x10000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xefffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x10000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x20000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xdfffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x20000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x40000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xbfffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x40000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if (((vlSelfRef.TB_memctrl__DOT__random_seed ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0x7fffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x80000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state 
        = vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state;
    vlSelfRef.TB_memctrl__DOT__mem_rd = 0U;
    vlSelfRef.TB_memctrl__DOT__mem_wr = 0U;
    vlSelfRef.TB_memctrl__DOT__mem_addr = 0U;
    vlSelfRef.TB_memctrl__DOT__mem_wr_data = 0U;
    vlSelfRef.TB_memctrl__DOT__rd_valid = 0U;
    vlSelfRef.TB_memctrl__DOT__read_data = 0U;
    vlSelfRef.TB_memctrl__DOT__wr_done = 0U;
    if ((0U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
            vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        } else if (vlSelfRef.TB_memctrl__DOT__wr_enable) {
            vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 4U;
        } else {
            vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__mem_rd = 1U;
        vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__read_address;
        vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 2U;
    } else if ((2U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSelfRef.TB_memctrl__DOT__mem_rd = 1U;
        vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__read_address;
        if ((2U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles))) {
            vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 3U;
        } else {
            vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSelfRef.TB_memctrl__DOT__rd_valid = 1U;
        vlSelfRef.TB_memctrl__DOT__read_data = vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg;
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 0U;
        }
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
    } else if ((4U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__mem_wr = 1U;
            vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__write_address;
            vlSelfRef.TB_memctrl__DOT__mem_wr_data 
                = vlSelfRef.TB_memctrl__DOT__write_data;
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 5U;
        }
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
    } else if ((5U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSelfRef.TB_memctrl__DOT__mem_wr = 1U;
            vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__write_address;
            vlSelfRef.TB_memctrl__DOT__mem_wr_data 
                = vlSelfRef.TB_memctrl__DOT__write_data;
            if ((1U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles))) {
                vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
                vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 6U;
            } else {
                vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
    } else if ((6U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSelfRef.TB_memctrl__DOT__wr_done = 1U;
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 0U;
        }
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelfRef.TB_memctrl__DOT__rd_valid) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_valid))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_valid 
            = vlSelfRef.TB_memctrl__DOT__rd_valid;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__wr_done) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_done))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_done 
            = vlSelfRef.TB_memctrl__DOT__wr_done;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__mem_rd) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd 
            = vlSelfRef.TB_memctrl__DOT__mem_rd;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr 
            = vlSelfRef.TB_memctrl__DOT__mem_wr;
    }
    vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena 
        = ((IData)(vlSelfRef.TB_memctrl__DOT__mem_rd) 
           | (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr));
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_addr) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_addr)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_addr) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_addr)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_addr) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_addr)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ena))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ena 
            = vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena;
    }
}

void VTB_memctrl___024root____Vthread__nba__0(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__1(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__2(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__3(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__4(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__5(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__6(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__7(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__8(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__9(void* voidSelf, bool even_cycle);
void VTB_memctrl___024root____Vthread__nba__10(void* voidSelf, bool even_cycle);

void VTB_memctrl___024root___eval_nba(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&VTB_memctrl___024root____Vthread__nba__0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&VTB_memctrl___024root____Vthread__nba__1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&VTB_memctrl___024root____Vthread__nba__2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(3)->addTask(&VTB_memctrl___024root____Vthread__nba__3, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(4)->addTask(&VTB_memctrl___024root____Vthread__nba__4, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(5)->addTask(&VTB_memctrl___024root____Vthread__nba__5, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(6)->addTask(&VTB_memctrl___024root____Vthread__nba__6, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(7)->addTask(&VTB_memctrl___024root____Vthread__nba__7, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(8)->addTask(&VTB_memctrl___024root____Vthread__nba__8, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(9)->addTask(&VTB_memctrl___024root____Vthread__nba__9, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    VTB_memctrl___024root____Vthread__nba__10(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final__nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__0(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__read_address)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__read_address)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_address)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__read_address)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__write_address)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__write_address)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_address) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_address)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__write_address)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__1(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__write_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__write_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__write_data)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__2(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffffeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (1U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffffdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (2U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffffbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (4U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__random_seed 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffff7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (8U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffffefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x10U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffffdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x20U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffffbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x40U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffff7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x80U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x100U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffeffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x100U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x200U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffdffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x200U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x400U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffffbffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x400U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x800U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffff7ffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x800U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x1000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffefffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x1000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x2000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffdfffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x2000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x4000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffffbfffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x4000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x8000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffff7fffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x8000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x10000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffeffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x10000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x20000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffdffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x20000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x40000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfffbffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x40000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x80000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfff7ffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x80000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x100000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffefffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x100000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x200000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffdfffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x200000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x400000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xffbfffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x400000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x800000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xff7fffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x800000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x1000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfeffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x1000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x2000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfdffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x2000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x4000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xfbffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x4000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x8000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xf7ffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x8000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x10000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xefffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x10000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x20000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xdfffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x20000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if ((0x40000000U & (vlSelfRef.TB_memctrl__DOT__random_seed 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0xbfffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x40000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
    if (((vlSelfRef.TB_memctrl__DOT__random_seed ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed 
            = ((0x7fffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__random_seed) 
               | (0x80000000U & vlSelfRef.TB_memctrl__DOT__random_seed));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__3(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [0U]))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [0U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [0U]))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[0U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [0U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [0U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [1U]))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [1U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [1U]))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[1U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [1U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [1U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [2U]))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [2U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[2U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [2U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [2U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [3U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [3U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [3U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[3U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [3U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [3U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [4U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [4U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [4U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[4U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [4U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [4U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [5U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [5U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [5U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[5U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [5U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [5U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [6U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [6U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [6U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[6U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [6U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [6U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (1U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (2U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (4U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__reference_memory
               [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
               [7U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (8U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__reference_memory
                  [7U] ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                  [7U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory[7U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__reference_memory
                [7U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__reference_memory
                         [7U]));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__3(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY(((IData)(vlSelfRef.__Vsampled_TOP__TB_memctrl__DOT__rd_enable) 
                         & (IData)(vlSelfRef.__Vsampled_TOP__TB_memctrl__DOT__wr_enable)))) {
            VL_WRITEF_NX("[%0t] %%Error: TB_memctrl.sv:267: Assertion failed in %NTB_memctrl: Simultaneous read and write detected!\n",0,
                         64,VL_TIME_UNITED_Q(10),-9,
                         vlSymsp->name());
            vlSelfRef.TB_memctrl__DOT__assertion_errors 
                = ((IData)(1U) + vlSelfRef.TB_memctrl__DOT__assertion_errors);
            VL_STOP_MT("../TestBench/TB_memctrl.sv", 267, "");
        }
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__5(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_memctrl__DOT__rstn) {
        if (((2U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state)) 
             | (5U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state)))) {
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles)));
            vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles = 0U;
        }
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state 
            = vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state;
    } else {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles = 0U;
        vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state = 0U;
    }
    vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__6(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffffffeU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (1U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffffffdU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (2U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffffffbU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (4U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
               ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffffff7U & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (8U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffffffefU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x10U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffffffdfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x20U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffffffbfU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x40U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                  ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffffff7fU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x80U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x100U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffffeffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x100U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x200U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffffdffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x200U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x400U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffffbffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x400U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x800U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                   ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffff7ffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x800U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x1000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffffefffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x1000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x2000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffffdfffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x2000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x4000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffffbfffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x4000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x8000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                    ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffff7fffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x8000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x10000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffeffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x10000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x20000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffdffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x20000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x40000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfffbffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x40000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x80000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                     ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfff7ffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x80000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x100000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffefffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x100000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x200000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffdfffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x200000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x400000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xffbfffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x400000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x800000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                      ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xff7fffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x800000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x1000000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfeffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x1000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x2000000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfdffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x2000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x4000000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xfbffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x4000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x8000000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                       ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xf7ffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x8000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x10000000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xefffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x10000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x20000000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xdfffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x20000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if ((0x40000000U & (vlSelfRef.TB_memctrl__DOT__assertion_errors 
                        ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0xbfffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x40000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
    if (((vlSelfRef.TB_memctrl__DOT__assertion_errors 
          ^ vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors 
            = ((0x7fffffffU & vlSelfRef.TB_memctrl__DOT____Vtogcov__assertion_errors) 
               | (0x80000000U & vlSelfRef.TB_memctrl__DOT__assertion_errors));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__7(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_memctrl__DOT__rstn) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg 
            = vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data;
    } else {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg = 0U;
    }
    vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__4(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.TB_memctrl__DOT__rstn) ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__rstn))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__rstn 
            = vlSelfRef.TB_memctrl__DOT__rstn;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__rd_enable) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_enable))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_enable 
            = vlSelfRef.TB_memctrl__DOT__rd_enable;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__wr_enable) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_enable))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_enable 
            = vlSelfRef.TB_memctrl__DOT__wr_enable;
    }
    if ((1U ^ ((IData)(vlSelfRef.TB_memctrl__DOT__rstn) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__rsta)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__rsta 
            = (1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rstn)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__13(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles 
            = ((2U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles 
            = ((1U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles)));
    }
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__14(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__15(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena) {
        vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data 
            = vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
            [vlSelfRef.TB_memctrl__DOT__mem_addr];
        if (vlSelfRef.TB_memctrl__DOT__mem_wr) {
            vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.__VdlyVal__TB_memctrl__DOT__MEM__DOT__BRAM__v0 
                = vlSelfRef.TB_memctrl__DOT__mem_wr_data;
            vlSelfRef.__VdlyDim0__TB_memctrl__DOT__MEM__DOT__BRAM__v0 
                = vlSelfRef.TB_memctrl__DOT__mem_addr;
            vlSelfRef.__VdlySet__TB_memctrl__DOT__MEM__DOT__BRAM__v0 = 1U;
        } else {
            vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__5(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state 
        = vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state;
    vlSelfRef.TB_memctrl__DOT__mem_rd = 0U;
    vlSelfRef.TB_memctrl__DOT__mem_wr = 0U;
    vlSelfRef.TB_memctrl__DOT__mem_addr = 0U;
    vlSelfRef.TB_memctrl__DOT__mem_wr_data = 0U;
    vlSelfRef.TB_memctrl__DOT__rd_valid = 0U;
    vlSelfRef.TB_memctrl__DOT__read_data = 0U;
    vlSelfRef.TB_memctrl__DOT__wr_done = 0U;
    if ((0U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
            vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        } else if (vlSelfRef.TB_memctrl__DOT__wr_enable) {
            vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 4U;
        } else {
            vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__mem_rd = 1U;
        vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__read_address;
        vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 2U;
    } else if ((2U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSelfRef.TB_memctrl__DOT__mem_rd = 1U;
        vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__read_address;
        if ((2U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles))) {
            vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 3U;
        } else {
            vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSelfRef.TB_memctrl__DOT__rd_valid = 1U;
        vlSelfRef.TB_memctrl__DOT__read_data = vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg;
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 0U;
        }
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
    } else if ((4U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__mem_wr = 1U;
            vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__write_address;
            vlSelfRef.TB_memctrl__DOT__mem_wr_data 
                = vlSelfRef.TB_memctrl__DOT__write_data;
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 5U;
        }
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
    } else if ((5U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSelfRef.TB_memctrl__DOT__mem_wr = 1U;
            vlSelfRef.TB_memctrl__DOT__mem_addr = vlSelfRef.TB_memctrl__DOT__write_address;
            vlSelfRef.TB_memctrl__DOT__mem_wr_data 
                = vlSelfRef.TB_memctrl__DOT__write_data;
            if ((1U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles))) {
                vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
                vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 6U;
            } else {
                vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
    } else if ((6U == (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state))) {
        vlSelfRef.TB_memctrl__DOT__wr_done = 1U;
        if (vlSelfRef.TB_memctrl__DOT__rd_enable) {
            vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 1U;
        } else {
            vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
            vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state = 0U;
        }
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__6(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.TB_memctrl__DOT__mem_rd) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_rd 
            = vlSelfRef.TB_memctrl__DOT__mem_rd;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr 
            = vlSelfRef.TB_memctrl__DOT__mem_wr;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__rd_valid) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_valid))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__rd_valid 
            = vlSelfRef.TB_memctrl__DOT__rd_valid;
    }
    if (((IData)(vlSelfRef.TB_memctrl__DOT__wr_done) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_done))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__wr_done 
            = vlSelfRef.TB_memctrl__DOT__wr_done;
    }
    vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena 
        = ((IData)(vlSelfRef.TB_memctrl__DOT__mem_rd) 
           | (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr));
    if (((IData)(vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena) 
         ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ena))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ena 
            = vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena;
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__7(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_addr) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_addr)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_addr) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_addr)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_addr) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_addr)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_addr)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__8(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state 
            = ((6U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state 
            = ((5U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state 
            = ((3U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__9(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__mem_wr_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__mem_wr_data)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_comb__TOP__10(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_comb__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__read_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__read_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__read_data)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__17(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0xfeU & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (1U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
    if ((2U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0xfdU & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (2U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
    if ((4U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0xfbU & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (4U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
    if ((8U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
               ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0xf7U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (8U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0xefU & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (0x10U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0xdfU & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (0x20U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0xbfU & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (0x40U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data) 
                  ^ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data 
            = ((0x7fU & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data)) 
               | (0x80U & (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data)));
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__18(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__18\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [0U]))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [0U]))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [0U]))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [0U]))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [0U]))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [0U]))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [0U]))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [0U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [0U]))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[0U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [0U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [0U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [1U]))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [1U]))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [1U]))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [1U]))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [1U]))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [1U]))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [1U]))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [1U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [1U]))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[1U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [1U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [1U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [2U]))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [2U]))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [2U]))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [2U]))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [2U]))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [2U]))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [2U]))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [2U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [2U]))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[2U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [2U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [2U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [3U]))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [3U]))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [3U]))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [3U]))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [3U]))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [3U]))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [3U]))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [3U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [3U]))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[3U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [3U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [3U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [4U]))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [4U]))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [4U]))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [4U]))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [4U]))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [4U]))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [4U]))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [4U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [4U]))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[4U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [4U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [4U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [5U]))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [5U]))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [5U]))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [5U]))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [5U]))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [5U]))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [5U]))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [5U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [5U]))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[5U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [5U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [5U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [6U]))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [6U]))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [6U]))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [6U]))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [6U]))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [6U]))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [6U]))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [6U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [6U]))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[6U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [6U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [6U]));
    }
    if ((1U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [7U]))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0xfeU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (1U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
    if ((2U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [7U]))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0xfdU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (2U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
    if ((4U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [7U]))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0xfbU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (4U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
    if ((8U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
               [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
               [7U]))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0xf7U & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (8U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
    if ((0x10U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [7U]))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0xefU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (0x10U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
    if ((0x20U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [7U]))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0xdfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (0x20U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
    if ((0x40U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [7U]))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0xbfU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (0x40U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
    if ((0x80U & (vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                  [7U] ^ vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                  [7U]))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[7U] 
            = ((0x7fU & vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM
                [7U]) | (0x80U & vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM
                         [7U]));
    }
}

void VTB_memctrl___024root___nba_sequent__TOP__2(VTB_memctrl___024root* vlSelf);

void VTB_memctrl___024root__nba_mtask2(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(2);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask3(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(3);
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__0(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask4(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(4);
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__1(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask5(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(5);
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__2(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask6(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(6);
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask7(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(7);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__3(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask9(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(9);
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask10(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(10);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask11(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(11);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask16(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(16);
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__13(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask17(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(17);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__14(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask18(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask18\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(18);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__15(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask19(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask19\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(19);
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root___nba_sequent__TOP__16(VTB_memctrl___024root* vlSelf);

void VTB_memctrl___024root__nba_mtask20(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask20\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(20);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__16(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask21(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask21\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(21);
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask22(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask22\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(22);
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask23(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask23\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(23);
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__8(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask24(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask24\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(24);
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask25(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask25\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(25);
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_comb__TOP__10(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask26(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask26\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(26);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__17(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root__nba_mtask27(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__nba_mtask27\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(27);
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTB_memctrl___024root___nba_sequent__TOP__18(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void VTB_memctrl___024root____Vthread__nba__0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__0\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask11(vlSelf);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask18(vlSelf);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask20(vlSelf);
    VTB_memctrl___024root__nba_mtask27(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__1\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask2(vlSelf);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask17(vlSelf);
    vlSelf->__Vm_mtaskstate_25.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask25(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__2\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask6(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__3\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask7(vlSelf);
    VTB_memctrl___024root__nba_mtask10(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__4(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__4\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask5(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__5(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__5\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask9(vlSelf);
    vlSelf->__Vm_mtaskstate_19.signalUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask16(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__6(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__6\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask4(vlSelf);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask21(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__7(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__7\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTB_memctrl___024root__nba_mtask3(vlSelf);
    vlSelf->__Vm_mtaskstate_22.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask22(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__8(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__8\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_19.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask19(vlSelf);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_22.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask24(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__9(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__9\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask26(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}

void VTB_memctrl___024root____Vthread__nba__10(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vthread__nba__10\n"); );
    // Body
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    VTB_memctrl___024root__nba_mtask23(vlSelf);
    vlSelf->__Vm_mtaskstate_final__nba.signalUpstreamDone(even_cycle);
}
