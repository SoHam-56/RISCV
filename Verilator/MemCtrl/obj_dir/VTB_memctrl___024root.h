// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTB_memctrl.h for the primary calling header

#ifndef VERILATED_VTB_MEMCTRL___024ROOT_H_
#define VERILATED_VTB_MEMCTRL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_threads.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class VTB_memctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTB_memctrl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VlUnpacked<CData/*7:0*/, 8> TB_memctrl__DOT__MEM__DOT__BRAM;
        CData/*7:0*/ __VdlyVal__TB_memctrl__DOT__MEM__DOT__BRAM__v0;
        CData/*2:0*/ __VdlyDim0__TB_memctrl__DOT__MEM__DOT__BRAM__v0;
        CData/*0:0*/ __VdlySet__TB_memctrl__DOT__MEM__DOT__BRAM__v0;
        IData/*31:0*/ TB_memctrl__DOT__random_seed;
        IData/*31:0*/ TB_memctrl__DOT____Vtogcov__random_seed;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__mem_rd;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__mem_wr;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__rd_valid;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__wr_done;
        CData/*0:0*/ TB_memctrl__DOT__MEM__DOT____Vtogcov__ena;
        CData/*0:0*/ TB_memctrl__DOT____Vcellinp__MEM__ena;
        CData/*0:0*/ TB_memctrl__DOT__mem_rd;
        CData/*0:0*/ TB_memctrl__DOT__rd_valid;
        CData/*0:0*/ TB_memctrl__DOT__wr_done;
        CData/*0:0*/ TB_memctrl__DOT__mem_wr;
        CData/*2:0*/ TB_memctrl__DOT__read_address;
        CData/*2:0*/ TB_memctrl__DOT__write_address;
        CData/*2:0*/ TB_memctrl__DOT____Vtogcov__read_address;
        CData/*2:0*/ TB_memctrl__DOT____Vtogcov__write_address;
        CData/*2:0*/ TB_memctrl__DOT__DUT__DOT____Vtogcov__next_state;
        CData/*2:0*/ TB_memctrl__DOT__DUT__DOT__next_state;
        CData/*0:0*/ TB_memctrl__DOT__rstn;
        CData/*0:0*/ TB_memctrl__DOT__clk;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__clk;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__rstn;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__rd_enable;
        CData/*0:0*/ TB_memctrl__DOT____Vtogcov__wr_enable;
        CData/*2:0*/ TB_memctrl__DOT__DUT__DOT____Vtogcov__current_state;
        CData/*1:0*/ TB_memctrl__DOT__DUT__DOT____Vtogcov__wait_cycles;
        CData/*0:0*/ TB_memctrl__DOT__MEM__DOT____Vtogcov__rsta;
        CData/*0:0*/ TB_memctrl__DOT__rd_enable;
        CData/*0:0*/ TB_memctrl__DOT__wr_enable;
        CData/*2:0*/ TB_memctrl__DOT__DUT__DOT__current_state;
        CData/*1:0*/ TB_memctrl__DOT__DUT__DOT__wait_cycles;
        CData/*7:0*/ TB_memctrl__DOT____Vtogcov__mem_wr_data;
        CData/*7:0*/ TB_memctrl__DOT__mem_wr_data;
        CData/*2:0*/ TB_memctrl__DOT__mem_addr;
        CData/*2:0*/ TB_memctrl__DOT____Vtogcov__mem_addr;
        CData/*7:0*/ TB_memctrl__DOT____Vtogcov__read_data;
        CData/*7:0*/ TB_memctrl__DOT__read_data;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
        CData/*7:0*/ TB_memctrl__DOT__write_data;
        CData/*7:0*/ TB_memctrl__DOT____Vtogcov__write_data;
        CData/*7:0*/ TB_memctrl__DOT__MEM__DOT____Vtogcov__ram_data;
        CData/*7:0*/ TB_memctrl__DOT__MEM__DOT__ram_data;
        CData/*7:0*/ TB_memctrl__DOT__MEM__DOT__output_register__DOT__douta_reg;
        CData/*7:0*/ TB_memctrl__DOT____Vtogcov__mem_rd_data;
        VlUnpacked<CData/*7:0*/, 8> TB_memctrl__DOT__MEM__DOT____Vtogcov__BRAM;
        IData/*31:0*/ TB_memctrl__DOT____Vtogcov__assertion_errors;
        IData/*31:0*/ TB_memctrl__DOT__assertion_errors;
        CData/*0:0*/ __Vsampled_TOP__TB_memctrl__DOT__rd_enable;
        CData/*0:0*/ __Vsampled_TOP__TB_memctrl__DOT__wr_enable;
        VlUnpacked<CData/*7:0*/, 8> TB_memctrl__DOT__reference_memory;
        VlUnpacked<CData/*7:0*/, 8> TB_memctrl__DOT____Vtogcov__reference_memory;
        CData/*2:0*/ TB_memctrl__DOT__back_to_back_operations__Vstatic__addr;
        CData/*7:0*/ TB_memctrl__DOT__back_to_back_operations__Vstatic__data;
        CData/*2:0*/ TB_memctrl__DOT__test_read_write_conflicts__Vstatic__addr;
        CData/*7:0*/ TB_memctrl__DOT__test_read_write_conflicts__Vstatic__data;
        CData/*2:0*/ TB_memctrl__DOT__unnamedblk1__DOT__addr;
        CData/*7:0*/ TB_memctrl__DOT__unnamedblk1__DOT__data;
        CData/*0:0*/ TB_memctrl__DOT__MEM__DOT____Vtogcov__regcea;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__TB_memctrl__DOT__clk__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__TB_memctrl__DOT__rstn__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ TB_memctrl__DOT__i;
        IData/*31:0*/ TB_memctrl__DOT__errors;
        IData/*31:0*/ TB_memctrl__DOT__test_number;
        IData/*31:0*/ TB_memctrl__DOT__MEM__DOT__init_bram_to_zero__DOT__ram_index;
        IData/*31:0*/ __VactIterCount;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd2ff7444__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;
    VlMTaskVertex __Vm_mtaskstate_18;
    VlMTaskVertex __Vm_mtaskstate_17;
    VlMTaskVertex __Vm_mtaskstate_25;
    VlMTaskVertex __Vm_mtaskstate_21;
    VlMTaskVertex __Vm_mtaskstate_22;
    VlMTaskVertex __Vm_mtaskstate_19;
    VlMTaskVertex __Vm_mtaskstate_26;
    VlMTaskVertex __Vm_mtaskstate_23;
    VlMTaskVertex __Vm_mtaskstate_final__nba;

    // INTERNAL VARIABLES
    VTB_memctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTB_memctrl___024root(VTB_memctrl__Syms* symsp, const char* v__name);
    ~VTB_memctrl___024root();
    VL_UNCOPYABLE(VTB_memctrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
