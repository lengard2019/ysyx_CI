// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc_top.h for the primary calling header

#ifndef VERILATED_VNPC_TOP___024UNIT_H_
#define VERILATED_VNPC_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vnpc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnpc_top___024unit final {
  public:

    // INTERNAL VARIABLES
    Vnpc_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnpc_top___024unit() = default;
    ~Vnpc_top___024unit() = default;
    void ctor(Vnpc_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vnpc_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
