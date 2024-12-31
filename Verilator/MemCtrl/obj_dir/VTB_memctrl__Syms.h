// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MEMCTRL__SYMS_H_
#define VERILATED_VTB_MEMCTRL__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VTB_memctrl.h"

// INCLUDE MODULE CLASSES
#include "VTB_memctrl___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTB_memctrl__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTB_memctrl* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MULTI-THREADING
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle__ico = false;
    bool __Vm_even_cycle__act = false;
    bool __Vm_even_cycle__nba = false;

    // MODULE INSTANCE STATE
    VTB_memctrl___024root          TOP;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[328];

    // SCOPE NAMES
    VerilatedScope __Vscope_TB_memctrl;

    // CONSTRUCTORS
    VTB_memctrl__Syms(VerilatedContext* contextp, const char* namep, VTB_memctrl* modelp);
    ~VTB_memctrl__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
