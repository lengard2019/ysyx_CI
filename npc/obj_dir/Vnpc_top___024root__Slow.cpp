// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_top.h for the primary calling header

#include "Vnpc_top__pch.h"

void Vnpc_top___024root___ctor_var_reset(Vnpc_top___024root* vlSelf);

Vnpc_top___024root::Vnpc_top___024root(Vnpc_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vnpc_top___024root___ctor_var_reset(this);
}

void Vnpc_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnpc_top___024root::~Vnpc_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
