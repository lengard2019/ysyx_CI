// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_top.h for the primary calling header

#include "Vnpc_top__pch.h"

extern "C" void time_add(int no);

void Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(IData/*31:0*/ no) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit\n"); );
    // Body
    int no__Vcvt;
    no__Vcvt = no;
    time_add(no__Vcvt);
}

extern "C" void cycle_add(int no);

void Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(IData/*31:0*/ no) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit\n"); );
    // Body
    int no__Vcvt;
    no__Vcvt = no;
    cycle_add(no__Vcvt);
}

extern "C" void icache_add(int no);

void Vnpc_top___024unit____Vdpiimwrap_icache_add_TOP____024unit(IData/*31:0*/ no) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_top___024unit____Vdpiimwrap_icache_add_TOP____024unit\n"); );
    // Body
    int no__Vcvt;
    no__Vcvt = no;
    icache_add(no__Vcvt);
}

extern "C" void call_ebreak();

void Vnpc_top___024unit____Vdpiimwrap_call_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_top___024unit____Vdpiimwrap_call_ebreak_TOP____024unit\n"); );
    // Body
    call_ebreak();
}

extern "C" int pmem_read(int addr);

void Vnpc_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(addr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int addr, char wmask, int data);

void Vnpc_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ addr, CData/*7:0*/ wmask, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    char wmask__Vcvt;
    wmask__Vcvt = wmask;
    int data__Vcvt;
    data__Vcvt = data;
    pmem_write(addr__Vcvt, wmask__Vcvt, data__Vcvt);
}
