// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTB_memctrl.h for the primary calling header

#include "VTB_memctrl__pch.h"
#include "VTB_memctrl__Syms.h"
#include "VTB_memctrl___024root.h"

void VTB_memctrl___024root___ctor_var_reset(VTB_memctrl___024root* vlSelf);

VTB_memctrl___024root::VTB_memctrl___024root(VTB_memctrl__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , __Vm_mtaskstate_18(1U)
    , __Vm_mtaskstate_17(1U)
    , __Vm_mtaskstate_25(1U)
    , __Vm_mtaskstate_21(1U)
    , __Vm_mtaskstate_22(1U)
    , __Vm_mtaskstate_19(2U)
    , __Vm_mtaskstate_26(1U)
    , __Vm_mtaskstate_23(1U)
    , __Vm_mtaskstate_final__nba(0xbU)
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTB_memctrl___024root___ctor_var_reset(this);
}

void VTB_memctrl___024root___configure_coverage(VTB_memctrl___024root* vlSelf, bool first);

void VTB_memctrl___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    VTB_memctrl___024root___configure_coverage(this, first);
}

VTB_memctrl___024root::~VTB_memctrl___024root() {
}

// Coverage
void VTB_memctrl___024root::__vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    assert(sizeof(uint32_t) == sizeof(std::atomic<uint32_t>));
    uint32_t* count32p = reinterpret_cast<uint32_t*>(countp);
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
