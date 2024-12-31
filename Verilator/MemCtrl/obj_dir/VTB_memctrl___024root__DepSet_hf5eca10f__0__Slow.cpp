// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_memctrl.h for the primary calling header

#include "VTB_memctrl__pch.h"
#include "VTB_memctrl___024root.h"

VL_ATTR_COLD void VTB_memctrl___024root___eval_static__TOP(VTB_memctrl___024root* vlSelf);

VL_ATTR_COLD void VTB_memctrl___024root___eval_static(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_memctrl___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VTB_memctrl___024root___eval_final(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__stl(VTB_memctrl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTB_memctrl___024root___eval_phase__stl(VTB_memctrl___024root* vlSelf);

VL_ATTR_COLD void VTB_memctrl___024root___eval_settle(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTB_memctrl___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../TestBench/TB_memctrl.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTB_memctrl___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__stl(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_memctrl___024root___stl_sequent__TOP__0(VTB_memctrl___024root* vlSelf);
VL_ATTR_COLD void VTB_memctrl___024root____Vm_traceActivitySetAll(VTB_memctrl___024root* vlSelf);

VL_ATTR_COLD void VTB_memctrl___024root___eval_stl(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VTB_memctrl___024root___stl_sequent__TOP__0(vlSelf);
        VTB_memctrl___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VTB_memctrl___024root___eval_triggers__stl(VTB_memctrl___024root* vlSelf);

VL_ATTR_COLD bool VTB_memctrl___024root___eval_phase__stl(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTB_memctrl___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VTB_memctrl___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__act(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge TB_memctrl.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge TB_memctrl.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__nba(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge TB_memctrl.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge TB_memctrl.rstn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_memctrl___024root____Vm_traceActivitySetAll(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void VTB_memctrl___024root___ctor_var_reset(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->TB_memctrl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__rd_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__mem_rd = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__wr_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__mem_wr = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__read_address = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__write_address = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__mem_addr = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__write_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT__mem_wr_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT__read_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT__rd_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__wr_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_memctrl__DOT__reference_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TB_memctrl__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT__test_number = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT__random_seed = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT__assertion_errors = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT____Vcellinp__MEM__ena = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__back_to_back_operations__Vstatic__addr = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__back_to_back_operations__Vstatic__data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT__test_read_write_conflicts__Vstatic__addr = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__test_read_write_conflicts__Vstatic__data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT____Vtogcov__rstn = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT____Vtogcov__rd_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT____Vtogcov__mem_rd = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT____Vtogcov__wr_enable = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT____Vtogcov__mem_wr = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT____Vtogcov__read_address = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT____Vtogcov__write_address = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT____Vtogcov__mem_addr = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT____Vtogcov__write_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT____Vtogcov__mem_wr_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT____Vtogcov__read_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT____Vtogcov__mem_rd_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT____Vtogcov__rd_valid = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT____Vtogcov__wr_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_memctrl__DOT____Vtogcov__reference_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TB_memctrl__DOT____Vtogcov__random_seed = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT____Vtogcov__assertion_errors = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT__unnamedblk1__DOT__addr = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__unnamedblk1__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT__DUT__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__DUT__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__DUT__DOT__wait_cycles = VL_RAND_RESET_I(2);
    vlSelf->TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state = VL_RAND_RESET_I(3);
    vlSelf->TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_memctrl__DOT__MEM__DOT__BRAM[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TB_memctrl__DOT__MEM__DOT__ram_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT__MEM__DOT____Vtogcov__ena = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__MEM__DOT____Vtogcov__rsta = VL_RAND_RESET_I(1);
    vlSelf->TB_memctrl__DOT__MEM__DOT____Vtogcov__regcea = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data = VL_RAND_RESET_I(8);
    vlSelf->TB_memctrl__DOT__MEM__DOT__init_bram_to_zero__DOT__ram_index = VL_RAND_RESET_I(32);
    vlSelf->TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__TB_memctrl__DOT__MEM__DOT__BRAM__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__TB_memctrl__DOT__MEM__DOT__BRAM__v0 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__TB_memctrl__DOT__MEM__DOT__BRAM__v0 = 0;
    vlSelf->__Vsampled_TOP__TB_memctrl__DOT__rd_enable = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__TB_memctrl__DOT__wr_enable = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_memctrl__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TB_memctrl__DOT__rstn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
