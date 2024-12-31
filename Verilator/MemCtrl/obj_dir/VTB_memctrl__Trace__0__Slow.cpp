// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTB_memctrl__Syms.h"


VL_ATTR_COLD void VTB_memctrl___024root__trace_init_sub__TOP__0(VTB_memctrl___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("TB_memctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"RAM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,7,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rd_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,5,"mem_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"wr_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,5,"mem_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,1,"write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,5,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,1,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,5,"mem_wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,6,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,7,"mem_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+37,6,"rd_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,6,"wr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("reference_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+7+i*1,1,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+15,2,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+16,2,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+17,2,"test_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+18,2,"random_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,7,"assertion_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,3,"back_to_back_operations__Vstatic__addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+20,3,"back_to_back_operations__Vstatic__data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"test_read_write_conflicts__Vstatic__addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"test_read_write_conflicts__Vstatic__data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+52,0,"RAM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+52,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+2,0,"cntlr_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"cntlr_raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,6,"cntlr_rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+37,6,"cntlr_rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"cntlr_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,1,"cntlr_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,1,"cntlr_wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+38,6,"cntlr_wr_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,7,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rstn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,5,"mem_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,5,"mem_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,5,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,5,"mem_wr_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,7,"mem_rd_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,7,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,6,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,8,"wait_cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"RAM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"RAM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+53,0,"RAM_PERFORMANCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+57,0,"INIT_FILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,5,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,5,"dina",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,7,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,5,"wea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,8,"ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,3,"rsta",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"regcea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,7,"douta",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("BRAM", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+24+i*1,4,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+46,8,"ram_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("init_bram_to_zero", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,8,"ram_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("output_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,7,"douta_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,3,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,4,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_init_top(VTB_memctrl___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTB_memctrl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_1(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_2(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_3(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_4(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_5(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_6(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_6(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_7(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_7(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTB_memctrl___024root__trace_full_8(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_chg_8(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTB_memctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTB_memctrl___024root__trace_register(VTB_memctrl___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTB_memctrl___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_0, 0U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_1, 1U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_1, 1U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_2, 2U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_2, 2U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_3, 3U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_3, 3U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_4, 4U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_4, 4U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_5, 5U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_5, 5U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_6, 6U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_6, 6U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_7, 7U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_7, 7U, vlSelf);
    tracep->addFullCb(&VTB_memctrl___024root__trace_full_8, 8U, vlSelf);
    tracep->addChgCb(&VTB_memctrl___024root__trace_chg_8, 8U, vlSelf);
    tracep->addCleanupCb(&VTB_memctrl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_const_0_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_const_0\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_const_0_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+48,(0xaU),32);
    bufp->fullIData(oldp+49,(8U),32);
    bufp->fullCData(oldp+50,(vlSelfRef.TB_memctrl__DOT__test_read_write_conflicts__Vstatic__addr),3);
    bufp->fullCData(oldp+51,(vlSelfRef.TB_memctrl__DOT__test_read_write_conflicts__Vstatic__data),8);
    bufp->fullIData(oldp+52,(8U),32);
    __Vtemp_1[0U] = 0x414e4345U;
    __Vtemp_1[1U] = 0x464f524dU;
    __Vtemp_1[2U] = 0x5f504552U;
    __Vtemp_1[3U] = 0x48494748U;
    bufp->fullWData(oldp+53,(__Vtemp_1),128);
    bufp->fullCData(oldp+57,(0U),8);
    bufp->fullBit(oldp+58,(1U));
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_0_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_0\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_0_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.TB_memctrl__DOT__rstn));
    bufp->fullBit(oldp+2,(vlSelfRef.TB_memctrl__DOT__rd_enable));
    bufp->fullBit(oldp+3,(vlSelfRef.TB_memctrl__DOT__wr_enable));
    bufp->fullCData(oldp+4,(vlSelfRef.TB_memctrl__DOT__read_address),3);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_1_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_1(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_1\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_1_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_1_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_1_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+5,(vlSelfRef.TB_memctrl__DOT__write_address),3);
    bufp->fullCData(oldp+6,(vlSelfRef.TB_memctrl__DOT__write_data),8);
    bufp->fullCData(oldp+7,(vlSelfRef.TB_memctrl__DOT__reference_memory[0]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.TB_memctrl__DOT__reference_memory[1]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.TB_memctrl__DOT__reference_memory[2]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.TB_memctrl__DOT__reference_memory[3]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.TB_memctrl__DOT__reference_memory[4]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.TB_memctrl__DOT__reference_memory[5]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.TB_memctrl__DOT__reference_memory[6]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.TB_memctrl__DOT__reference_memory[7]),8);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_2_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_2(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_2\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_2_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_2_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_2_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+15,(vlSelfRef.TB_memctrl__DOT__i),32);
    bufp->fullIData(oldp+16,(vlSelfRef.TB_memctrl__DOT__errors),32);
    bufp->fullIData(oldp+17,(vlSelfRef.TB_memctrl__DOT__test_number),32);
    bufp->fullIData(oldp+18,(vlSelfRef.TB_memctrl__DOT__random_seed),32);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_3_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_3(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_3\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_3_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_3_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_3_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+19,(vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__addr),3);
    bufp->fullCData(oldp+20,(vlSelfRef.TB_memctrl__DOT__back_to_back_operations__Vstatic__data),8);
    bufp->fullBit(oldp+21,((1U & (~ (IData)(vlSelfRef.TB_memctrl__DOT__rstn)))));
    bufp->fullCData(oldp+22,(vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__addr),3);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_4_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_4(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_4\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_4_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_4_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_4_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+23,(vlSelfRef.TB_memctrl__DOT__unnamedblk1__DOT__data),8);
    bufp->fullCData(oldp+24,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[0]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[1]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[2]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[3]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[4]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[5]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[6]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__BRAM[7]),8);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_5_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_5(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_5\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_5_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_5_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_5_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+32,(vlSelfRef.TB_memctrl__DOT__mem_rd));
    bufp->fullBit(oldp+33,(vlSelfRef.TB_memctrl__DOT__mem_wr));
    bufp->fullCData(oldp+34,(vlSelfRef.TB_memctrl__DOT__mem_addr),3);
    bufp->fullCData(oldp+35,(vlSelfRef.TB_memctrl__DOT__mem_wr_data),8);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_6_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_6(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_6\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_6_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_6_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_6_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+36,(vlSelfRef.TB_memctrl__DOT__read_data),8);
    bufp->fullBit(oldp+37,(vlSelfRef.TB_memctrl__DOT__rd_valid));
    bufp->fullBit(oldp+38,(vlSelfRef.TB_memctrl__DOT__wr_done));
    bufp->fullCData(oldp+39,(vlSelfRef.TB_memctrl__DOT__DUT__DOT__next_state),3);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_7_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_7(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_7\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_7_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_7_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_7_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+40,(vlSelfRef.TB_memctrl__DOT__clk));
    bufp->fullCData(oldp+41,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg),8);
    bufp->fullIData(oldp+42,(vlSelfRef.TB_memctrl__DOT__assertion_errors),32);
    bufp->fullCData(oldp+43,(vlSelfRef.TB_memctrl__DOT__DUT__DOT__current_state),3);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_8_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_8(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_8\n"); );
    // Init
    VTB_memctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTB_memctrl___024root*>(voidSelf);
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTB_memctrl___024root__trace_full_8_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTB_memctrl___024root__trace_full_8_sub_0(VTB_memctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTB_memctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTB_memctrl___024root__trace_full_8_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+44,(vlSelfRef.TB_memctrl__DOT__DUT__DOT__wait_cycles),2);
    bufp->fullBit(oldp+45,(vlSelfRef.TB_memctrl__DOT____Vcellinp__MEM__ena));
    bufp->fullCData(oldp+46,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__ram_data),8);
    bufp->fullIData(oldp+47,(vlSelfRef.TB_memctrl__DOT__MEM__DOT__init_bram_to_zero__DOT__ram_index),32);
}
