// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_memctrl.h for the primary calling header

#include "VTB_memctrl__pch.h"
#include "VTB_memctrl__Syms.h"
#include "VTB_memctrl___024root.h"

VL_ATTR_COLD void VTB_memctrl___024root___eval_static__TOP(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TB_memctrl__DOT__assertion_errors = 0U;
    vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data = 0U;
    vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg = 0U;
    vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void VTB_memctrl___024root___eval_initial__TOP(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6374726cU;
    __Vtemp_1[2U] = 0x5f6d656dU;
    __Vtemp_1[3U] = 0x5442U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[0U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[1U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[2U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[3U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[4U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[5U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[6U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[7U] = 0U;
    vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
    vlSelfRef.TB_memctrl__DOT__MEM__DOT__init_bram_to_zero__DOT__ram_index = 8U;
    vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__regcea)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT__MEM__DOT____Vtogcov__regcea = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTB_memctrl___024root___dump_triggers__stl(VTB_memctrl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTB_memctrl___024root___eval_triggers__stl(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTB_memctrl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VTB_memctrl___024root___stl_sequent__TOP__0(VTB_memctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.TB_memctrl__DOT__clk) ^ (IData)(vlSelfRef.TB_memctrl__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelfRef.TB_memctrl__DOT____Vtogcov__clk = vlSelfRef.TB_memctrl__DOT__clk;
    }
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

VL_ATTR_COLD void VTB_memctrl___024root___configure_coverage(VTB_memctrl___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root___configure_coverage\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../TestBench/TB_memctrl.sv", 9, 9, ".TB_memctrl", "v_toggle/TB_memctrl", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../TestBench/TB_memctrl.sv", 10, 9, ".TB_memctrl", "v_toggle/TB_memctrl", "rstn", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../TestBench/TB_memctrl.sv", 12, 9, ".TB_memctrl", "v_toggle/TB_memctrl", "rd_enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../TestBench/TB_memctrl.sv", 12, 20, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../TestBench/TB_memctrl.sv", 13, 9, ".TB_memctrl", "v_toggle/TB_memctrl", "wr_enable", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../TestBench/TB_memctrl.sv", 13, 20, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../TestBench/TB_memctrl.sv", 14, 35, ".TB_memctrl", "v_toggle/TB_memctrl", "read_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../TestBench/TB_memctrl.sv", 14, 35, ".TB_memctrl", "v_toggle/TB_memctrl", "read_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../TestBench/TB_memctrl.sv", 14, 35, ".TB_memctrl", "v_toggle/TB_memctrl", "read_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../TestBench/TB_memctrl.sv", 14, 49, ".TB_memctrl", "v_toggle/TB_memctrl", "write_address[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../TestBench/TB_memctrl.sv", 14, 49, ".TB_memctrl", "v_toggle/TB_memctrl", "write_address[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../TestBench/TB_memctrl.sv", 14, 49, ".TB_memctrl", "v_toggle/TB_memctrl", "write_address[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../TestBench/TB_memctrl.sv", 14, 64, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../TestBench/TB_memctrl.sv", 14, 64, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../TestBench/TB_memctrl.sv", 14, 64, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../TestBench/TB_memctrl.sv", 16, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "write_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../TestBench/TB_memctrl.sv", 16, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../TestBench/TB_memctrl.sv", 17, 26, ".TB_memctrl", "v_toggle/TB_memctrl", "read_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../TestBench/TB_memctrl.sv", 17, 37, ".TB_memctrl", "v_toggle/TB_memctrl", "mem_rd_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../TestBench/TB_memctrl.sv", 19, 10, ".TB_memctrl", "v_toggle/TB_memctrl", "rd_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../TestBench/TB_memctrl.sv", 20, 10, ".TB_memctrl", "v_toggle/TB_memctrl", "wr_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[3][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[4][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[5][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[6][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../TestBench/TB_memctrl.sv", 22, 25, ".TB_memctrl", "v_toggle/TB_memctrl", "reference_memory[7][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../TestBench/TB_memctrl.sv", 24, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "random_seed[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../TestBench/TB_memctrl.sv", 26, 16, ".TB_memctrl", "v_toggle/TB_memctrl", "assertion_errors[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../TestBench/TB_memctrl.sv", 26, 35, ".TB_memctrl", "v_line/TB_memctrl", "block", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../TestBench/TB_memctrl.sv", 76, 9, ".TB_memctrl", "v_line/TB_memctrl", "block", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../TestBench/TB_memctrl.sv", 74, 5, ".TB_memctrl", "v_line/TB_memctrl", "block", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../TestBench/TB_memctrl.sv", 79, 10, ".TB_memctrl", "v_line/TB_memctrl", "block", "79-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../TestBench/TB_memctrl.sv", 103, 13, ".TB_memctrl", "v_line/TB_memctrl", "block", "103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../TestBench/TB_memctrl.sv", 94, 10, ".TB_memctrl", "v_line/TB_memctrl", "block", "94-101,104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../TestBench/TB_memctrl.sv", 117, 13, ".TB_memctrl", "v_line/TB_memctrl", "block", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../TestBench/TB_memctrl.sv", 119, 13, ".TB_memctrl", "v_branch/TB_memctrl", "if", "119-121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../TestBench/TB_memctrl.sv", 119, 14, ".TB_memctrl", "v_branch/TB_memctrl", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../TestBench/TB_memctrl.sv", 109, 10, ".TB_memctrl", "v_line/TB_memctrl", "block", "109-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../TestBench/TB_memctrl.sv", 136, 17, ".TB_memctrl", "v_branch/TB_memctrl", "if", "136-138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../TestBench/TB_memctrl.sv", 136, 18, ".TB_memctrl", "v_branch/TB_memctrl", "else", "139-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../TestBench/TB_memctrl.sv", 132, 13, ".TB_memctrl", "v_line/TB_memctrl", "block", "132-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../TestBench/TB_memctrl.sv", 127, 10, ".TB_memctrl", "v_line/TB_memctrl", "block", "127,130-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../TestBench/TB_memctrl.sv", 171, 13, ".TB_memctrl", "v_line/TB_memctrl", "block", "171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../TestBench/TB_memctrl.sv", 147, 10, ".TB_memctrl", "v_line/TB_memctrl", "block", "147,150-151,153-159,162,165-168,174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../TestBench/TB_memctrl.sv", 190, 9, ".TB_memctrl", "v_line/TB_memctrl", "block", "190-191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../TestBench/TB_memctrl.sv", 193, 9, ".TB_memctrl", "v_line/TB_memctrl", "block", "193-194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../TestBench/TB_memctrl.sv", 200, 9, ".TB_memctrl", "v_line/TB_memctrl", "block", "200-204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../TestBench/TB_memctrl.sv", 218, 9, ".TB_memctrl", "v_line/TB_memctrl", "block", "218-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../TestBench/TB_memctrl.sv", 226, 9, ".TB_memctrl", "v_branch/TB_memctrl", "if", "226-227");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../TestBench/TB_memctrl.sv", 226, 10, ".TB_memctrl", "v_branch/TB_memctrl", "else", "229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../TestBench/TB_memctrl.sv", 179, 5, ".TB_memctrl", "v_line/TB_memctrl", "block", "179,181-183,186,189-190,193,196,199-200,206,209-210,217-218,222,225,231-232");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../TestBench/TB_memctrl.sv", 255, 5, ".TB_memctrl", "v_line/TB_memctrl", "block", "255-257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../TestBench/TB_memctrl.sv", 261, 14, ".TB_memctrl", "v_line/TB_memctrl", "block", "261-262");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "../src/Memory/memctrl.sv", 8, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../src/Memory/memctrl.sv", 9, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_raddr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../src/Memory/memctrl.sv", 9, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_raddr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../src/Memory/memctrl.sv", 9, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_raddr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../src/Memory/memctrl.sv", 10, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../src/Memory/memctrl.sv", 11, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_rd_valid_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "../src/Memory/memctrl.sv", 14, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../src/Memory/memctrl.sv", 15, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_waddr_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../src/Memory/memctrl.sv", 15, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_waddr_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../src/Memory/memctrl.sv", 15, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_waddr_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../src/Memory/memctrl.sv", 16, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../src/Memory/memctrl.sv", 17, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "cntlr_wr_done_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../src/Memory/memctrl.sv", 20, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "clk_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../src/Memory/memctrl.sv", 21, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "rstn_i", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "../src/Memory/memctrl.sv", 24, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../src/Memory/memctrl.sv", 25, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_o", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../src/Memory/memctrl.sv", 26, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_addr_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../src/Memory/memctrl.sv", 26, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_addr_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../src/Memory/memctrl.sv", 26, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_addr_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../src/Memory/memctrl.sv", 27, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_wr_data_o[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../src/Memory/memctrl.sv", 28, 46, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "mem_rd_data_i[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../src/Memory/memctrl.sv", 41, 13, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "current_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../src/Memory/memctrl.sv", 41, 13, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "current_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../src/Memory/memctrl.sv", 41, 13, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "current_state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../src/Memory/memctrl.sv", 41, 28, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "next_state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../src/Memory/memctrl.sv", 41, 28, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "next_state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../src/Memory/memctrl.sv", 41, 28, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "next_state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../src/Memory/memctrl.sv", 42, 17, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "wait_cycles[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../src/Memory/memctrl.sv", 42, 17, ".TB_memctrl.DUT", "v_toggle/memctrl__R8_RB8", "wait_cycles[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../src/Memory/memctrl.sv", 50, 13, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "50-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../src/Memory/memctrl.sv", 50, 14, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../src/Memory/memctrl.sv", 45, 9, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "45-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../src/Memory/memctrl.sv", 45, 10, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../src/Memory/memctrl.sv", 44, 5, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../src/Memory/memctrl.sv", 74, 22, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "74-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../src/Memory/memctrl.sv", 74, 23, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../src/Memory/memctrl.sv", 71, 17, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "elsif", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../src/Memory/memctrl.sv", 69, 17, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "case", "69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../src/Memory/memctrl.sv", 79, 21, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "case", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../src/Memory/memctrl.sv", 88, 17, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "88-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../src/Memory/memctrl.sv", 88, 18, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../src/Memory/memctrl.sv", 85, 22, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "case", "85-87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../src/Memory/memctrl.sv", 97, 17, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "97-98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../src/Memory/memctrl.sv", 97, 18, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../src/Memory/memctrl.sv", 93, 26, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "case", "93-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../src/Memory/memctrl.sv", 106, 17, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "106-107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../src/Memory/memctrl.sv", 106, 18, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "108-112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../src/Memory/memctrl.sv", 104, 22, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "case", "104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../src/Memory/memctrl.sv", 124, 21, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "124-125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../src/Memory/memctrl.sv", 124, 22, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../src/Memory/memctrl.sv", 118, 17, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "118-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../src/Memory/memctrl.sv", 118, 18, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "120-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../src/Memory/memctrl.sv", 116, 23, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "case", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../src/Memory/memctrl.sv", 133, 17, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "if", "133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../src/Memory/memctrl.sv", 133, 18, ".TB_memctrl.DUT", "v_branch/memctrl__R8_RB8", "else", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../src/Memory/memctrl.sv", 130, 27, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "case", "130-131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../src/Memory/memctrl.sv", 57, 5, ".TB_memctrl.DUT", "v_line/memctrl__R8_RB8", "block", "57,59-66,68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 9, 35, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "addra[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 9, 35, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "addra[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 9, 35, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "addra[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 10, 25, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "dina[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 11, 9, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "clka", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 12, 9, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "wea", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 13, 9, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ena", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 14, 9, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "rsta", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 15, 9, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "regcea", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 16, 26, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "douta[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[0][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[1][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[2][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[3][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[4][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[5][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[6][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 19, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "BRAM[7][7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 23, ".TB_memctrl.MEM", "v_toggle/xilinx_single_port_ram_read_first__pi1", "ram_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 20, 44, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 30, 9, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "30-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 29, 7, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 37, 7, ".TB_memctrl.MEM", "v_branch/xilinx_single_port_ram_read_first__pi1", "if", "37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 37, 8, ".TB_memctrl.MEM", "v_branch/xilinx_single_port_ram_read_first__pi1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 36, 5, ".TB_memctrl.MEM", "v_branch/xilinx_single_port_ram_read_first__pi1", "if", "36,39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 36, 6, ".TB_memctrl.MEM", "v_branch/xilinx_single_port_ram_read_first__pi1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 35, 3, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 53, 49, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 58, 14, ".TB_memctrl.MEM", "v_branch/xilinx_single_port_ram_read_first__pi1", "if", "58-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 58, 15, ".TB_memctrl.MEM", "v_branch/xilinx_single_port_ram_read_first__pi1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 56, 9, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "elsif", "56-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 55, 7, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 69, 7, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../src/Memory/xilinx_single_port_ram_read_first.sv", 67, 20, ".TB_memctrl.MEM", "v_line/xilinx_single_port_ram_read_first__pi1", "block", "67,69");
}
