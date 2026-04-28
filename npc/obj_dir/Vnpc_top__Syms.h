// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNPC_TOP__SYMS_H_
#define VERILATED_VNPC_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnpc_top.h"

// INCLUDE MODULE CLASSES
#include "Vnpc_top___024root.h"
#include "Vnpc_top___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vnpc_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnpc_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnpc_top___024root             TOP;
    Vnpc_top___024unit             TOP____024unit;

    // CONSTRUCTORS
    Vnpc_top__Syms(VerilatedContext* contextp, const char* namep, Vnpc_top* modelp);
    ~Vnpc_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
