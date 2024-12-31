// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_memctrl__Syms.h"


void VTB_memctrl___024root__trace_chg_0_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_0\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_0_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.TB_memctrl__DOT__rstn));
        bufp->chgBit(oldp+1,(vlSelfRef.TB_memctrl__DOT__rd_enable));
        bufp->chgBit(oldp+2,(vlSelfRef.TB_memctrl__DOT__wr_enable));
        bufp->chgCData(oldp+3,(vlSelfRef.TB_memctrl__DOT__read_address),3);
    }
}

void VTB_memctrl___024root__trace_chg_1_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_1\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_1_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_1_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_1_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 5);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.TB_memctrl__DOT__write_address),3);
        bufp->chgCData(oldp+1,(vlSelfRef.TB_memctrl__DOT__write_data),8);
        bufp->chgCData(oldp+2,(vlSelfRef.TB_memctrl__DOT__reference_memory[0]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.TB_memctrl__DOT__reference_memory[1]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.TB_memctrl__DOT__reference_memory[2]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.TB_memctrl__DOT__reference_memory[3]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.TB_memctrl__DOT__reference_memory[4]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.TB_memctrl__DOT__reference_memory[5]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.TB_memctrl__DOT__reference_memory[6]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.TB_memctrl__DOT__reference_memory[7]),8);
    }
}

void VTB_memctrl___024root__trace_chg_2_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_2\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_2_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_2_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_2_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 15);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.TB_memctrl__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.TB_memctrl__DOT__errors),32);
        bufp->chgIData(oldp+2,(vlSelfRef.TB_memctrl__DOT__test_number),32);
        bufp->chgIData(oldp+3,(vlSelfRef.TB_memctrl__DOT__random_seed),32);
    }
}

void VTB_memctrl___024root__trace_chg_3_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_3\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_3_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_3_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_3_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 19);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__addr),3);
        bufp->chgCData(oldp+1,(vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__data),8);
        bufp->chgBit(oldp+2,((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rstn)))));
        bufp->chgCData(oldp+3,(vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__addr),3);
    }
}

void VTB_memctrl___024root__trace_chg_4_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_4\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_4_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_4_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_4_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 23);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__data),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgCData(oldp+1,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[0]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[1]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[2]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[3]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[4]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[5]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[6]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[7]),8);
    }
}

void VTB_memctrl___024root__trace_chg_5_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_5\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_5_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_5_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_5_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 32);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.TB_memctrl__DOT__mem_rd));
        bufp->chgBit(oldp+1,(vlSelfRef.TB_memctrl__DOT__mem_wr));
        bufp->chgCData(oldp+2,(vlSelfRef.TB_memctrl__DOT__mem_addr),3);
        bufp->chgCData(oldp+3,(vlSelfRef.TB_memctrl__DOT__mem_wr_data),8);
    }
}

void VTB_memctrl___024root__trace_chg_6_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_6(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_6\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_6_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_6_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_6_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 36);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [4U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.TB_memctrl__DOT__read_data),8);
        bufp->chgBit(oldp+1,(vlSelfRef.TB_memctrl__DOT__rd_valid));
        bufp->chgBit(oldp+2,(vlSelfRef.TB_memctrl__DOT__wr_done));
        bufp->chgCData(oldp+3,(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state),3);
    }
}

void VTB_memctrl___024root__trace_chg_7_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_7(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_7\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_7_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_7_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_7_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 40);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.TB_memctrl__DOT__clk));
    bufp->chgCData(oldp+1,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg),8);
    bufp->chgIData(oldp+2,(vlSelfRef.TB_memctrl__DOT__assertion_errors),32);
    bufp->chgCData(oldp+3,(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state),3);
}

void VTB_memctrl___024root__trace_chg_8_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTB_memctrl___024root__trace_chg_8(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_8\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTB_memctrl___024root__trace_chg_8_sub_0((&vlSymsp->TOP), bufp);
}

void VTB_memctrl___024root__trace_chg_8_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_chg_8_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 44);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles),2);
    bufp->chgBit(oldp+1,(vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena));
    bufp->chgCData(oldp+2,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data),8);
    bufp->chgIData(oldp+3,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__init_bram_to_zero__DOT__ram_index),32);
}

void VTB_memctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_cleanup\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
