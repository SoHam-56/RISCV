// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_memctrl.h for the primary calling header

#include "VTB_memctrl__pch.h"
#include "VTB_memctrl___024root.h"

VL_ATTR_COLD void VTB_memctrl___024root___eval_initial__TOP(VTB_memctrl___024root* vlSelf);
VlCoroutine VTB_memctrl___024root___eval_initial__TOP__Vtiming__0(VTB_memctrl___024root* vlSelf);
VlCoroutine VTB_memctrl___024root___eval_initial__TOP__Vtiming__1(VTB_memctrl___024root* vlSelf);

void VTB_memctrl___024root___eval_initial(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_memctrl___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VTB_memctrl___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTB_memctrl___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__TB_memctrl__DOT__clk__0 
        = vlSelfRef.TB_memctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__TB_memctrl__DOT__rstn__0 
        = vlSelfRef.TB_memctrl__DOT__rstn;
}

void VTB_memctrl___024root___act_sequent__TOP__0(VTB_memctrl___024root* vlSelf);
void VTB_memctrl___024root___act_comb__TOP__0(VTB_memctrl___024root* vlSelf);

void VTB_memctrl___024root___eval_act(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VTB_memctrl___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VTB_memctrl___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__2(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__TB_memctrl__DOT__MEM__DOT__BRAM__v0 = 0U;
}

VL_INLINE_OPT void VTB_memctrl___024root___nba_sequent__TOP__16(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___nba_sequent__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__TB_memctrl__DOT__MEM__DOT__BRAM__v0) {
        vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[vlSelfRef.__VdlyDim0__TB_memctrl__DOT__MEM__DOT__BRAM__v0] 
            = vlSelfRef.__VdlyVal__TB_memctrl__DOT__MEM__DOT__BRAM__v0;
    }
}

void VTB_memctrl___024root___timing_resume(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd2ff7444__0.resume(
                                                   "@(posedge TB_memctrl.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTB_memctrl___024root___timing_commit(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd2ff7444__0.commit(
                                                   "@(posedge TB_memctrl.clk)");
    }
}

void VTB_memctrl___024root___eval_triggers__act(VTB_memctrl___024root* vlSelf);

bool VTB_memctrl___024root___eval_phase__act(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTB_memctrl___024root___eval_triggers__act(vlSelf);
    VTB_memctrl___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTB_memctrl___024root___timing_resume(vlSelf);
        VTB_memctrl___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTB_memctrl___024root___eval_nba(VTB_memctrl___024root* vlSelf);

bool VTB_memctrl___024root___eval_phase__nba(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTB_memctrl___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__nba(VTB_memctrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__act(VTB_memctrl___024root* vlSelf);
#endif  // VL_DEBUG

void VTB_memctrl___024root___eval(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__TB_memctrl__DOT__rd_enable 
        = vlSelfRef.TB_memctrl__DOT__rd_enable;
    vlSelfRef.__Vsampled_TOP__TB_memctrl__DOT__wr_enable 
        = vlSelfRef.TB_memctrl__DOT__wr_enable;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTB_memctrl___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../TestBench/TB_memctrl.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VTB_memctrl___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../TestBench/TB_memctrl.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTB_memctrl___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTB_memctrl___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTB_memctrl___024root___eval_debug_assertions(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
