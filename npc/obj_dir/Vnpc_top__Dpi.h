// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VNPC_TOP__DPI_H_
#define VERILATED_VNPC_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/npc_config.vh:18:30
    extern void call_ebreak();
    // DPI import at vsrc/npc_config.vh:13:30
    extern void cycle_add(int no);
    // DPI import at vsrc/npc_config.vh:14:30
    extern void icache_add(int no);
    // DPI import at /home/dengzibin/ysyx-workbench/npc/vsrc_npc/axi_ram.v:5:29
    extern int pmem_read(int addr);
    // DPI import at /home/dengzibin/ysyx-workbench/npc/vsrc_npc/axi_ram.v:6:30
    extern void pmem_write(int addr, char wmask, int data);
    // DPI import at vsrc/npc_config.vh:12:30
    extern void time_add(int no);

#ifdef __cplusplus
}
#endif

#endif  // guard
