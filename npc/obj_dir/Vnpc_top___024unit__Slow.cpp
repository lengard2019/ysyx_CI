// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_top.h for the primary calling header

#include "Vnpc_top__pch.h"

void Vnpc_top___024unit___ctor_var_reset(Vnpc_top___024unit* vlSelf);

void Vnpc_top___024unit::ctor(Vnpc_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vnpc_top___024unit___ctor_var_reset(this);
}

void Vnpc_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vnpc_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
