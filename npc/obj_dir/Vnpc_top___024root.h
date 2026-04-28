// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc_top.h for the primary calling header

#ifndef VERILATED_VNPC_TOP___024ROOT_H_
#define VERILATED_VNPC_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vnpc_top___024unit;


class Vnpc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnpc_top___024root final {
  public:
    // CELLS
    Vnpc_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ npc_top__DOT__axi_slave_awvalid;
        CData/*0:0*/ npc_top__DOT__axi_slave_rready;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__mRegWr;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__flush_r;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__next_state;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__Branch_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__next_state;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__finish_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgExtracted_h15b8dab5__0;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_2;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_3;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mcause_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__hit;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__overflow;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__less_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__RegWr_r;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__branch_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemtoReg_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemWr_r;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemOp_r;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__Rw_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mpcWr_r;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_wr_r;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__next_state;
    };
    struct {
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__val;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_out;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__next_state;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr_r;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid;
        CData/*2:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid;
        CData/*0:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__next_state;
        CData/*3:0*/ npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state;
        CData/*1:0*/ npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__next_state;
        CData/*2:0*/ npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
        CData/*2:0*/ npc_top__DOT__u_axi4_delayer__DOT__rpt_r;
        CData/*1:0*/ npc_top__DOT__u_axi4_delayer__DOT__current_read;
        CData/*1:0*/ npc_top__DOT__u_axi4_delayer__DOT__next_read;
        CData/*1:0*/ npc_top__DOT__u_axi4_delayer__DOT__state_rd_1;
        CData/*1:0*/ npc_top__DOT__u_axi4_delayer__DOT__state_wr;
        CData/*1:0*/ npc_top__DOT__u_axi4_delayer__DOT__state;
        CData/*1:0*/ npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp;
        CData/*3:0*/ npc_top__DOT__u_axi4_delayer__DOT__fifo_bid;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__read_state_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__read_state_next;
        CData/*1:0*/ npc_top__DOT__u_axi_ram__DOT__write_state_reg;
        CData/*1:0*/ npc_top__DOT__u_axi_ram__DOT__write_state_next;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__mem_wr_en;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__mem_rd_en;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__read_id_reg;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__read_id_next;
        CData/*7:0*/ npc_top__DOT__u_axi_ram__DOT__read_count_reg;
        CData/*7:0*/ npc_top__DOT__u_axi_ram__DOT__read_count_next;
        CData/*2:0*/ npc_top__DOT__u_axi_ram__DOT__read_size_reg;
        CData/*2:0*/ npc_top__DOT__u_axi_ram__DOT__read_size_next;
        CData/*1:0*/ npc_top__DOT__u_axi_ram__DOT__read_burst_reg;
        CData/*1:0*/ npc_top__DOT__u_axi_ram__DOT__read_burst_next;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__write_id_reg;
    };
    struct {
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__write_id_next;
        CData/*7:0*/ npc_top__DOT__u_axi_ram__DOT__write_count_reg;
        CData/*7:0*/ npc_top__DOT__u_axi_ram__DOT__write_count_next;
        CData/*2:0*/ npc_top__DOT__u_axi_ram__DOT__write_size_reg;
        CData/*2:0*/ npc_top__DOT__u_axi_ram__DOT__write_size_next;
        CData/*1:0*/ npc_top__DOT__u_axi_ram__DOT__write_burst_reg;
        CData/*1:0*/ npc_top__DOT__u_axi_ram__DOT__write_burst_next;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next;
        CData/*3:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg;
        CData/*0:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg;
        CData/*1:0*/ npc_top__DOT__u_uart_npc__DOT__current_state;
        CData/*1:0*/ npc_top__DOT__u_uart_npc__DOT__next_state;
        CData/*6:0*/ __Vtableidx1;
        CData/*4:0*/ __Vtableidx2;
        CData/*7:0*/ __Vtableidx3;
        CData/*7:0*/ __Vtableidx4;
        CData/*6:0*/ __Vtableidx6;
        CData/*6:0*/ __Vtableidx7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        SData/*8:0*/ __Vtableidx5;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__ifu_prdata;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__snpc;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__imm;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__dataA;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__dataB;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__rs1_forward;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData;
    };
    struct {
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mstatus_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mtvec_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_register__DOT____Vlvbound_h72517ad8__0;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__dnpc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__pc_r;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr;
        IData/*31:0*/ npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__total_read_0;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__counter_read_0;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__total_read_1;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__counter_read_1;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__total_wr;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__counter_wr;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__counter_read;
        IData/*31:0*/ npc_top__DOT__u_axi4_delayer__DOT__latency_wr;
        IData/*26:0*/ npc_top__DOT__u_axi_ram__DOT__read_addr_reg;
        IData/*26:0*/ npc_top__DOT__u_axi_ram__DOT__read_addr_next;
        IData/*26:0*/ npc_top__DOT__u_axi_ram__DOT__write_addr_reg;
        IData/*26:0*/ npc_top__DOT__u_axi_ram__DOT__write_addr_next;
        IData/*31:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_reg;
        IData/*31:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_next;
        IData/*31:0*/ npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_pipe_reg;
        IData/*31:0*/ npc_top__DOT__u_axi_ram__DOT__i;
        IData/*31:0*/ __VdfgRegularize_he50b618e_0_2;
        VlWide<3>/*73:0*/ __VdfgRegularize_he50b618e_0_4;
        VlWide<4>/*110:0*/ __VdfgRegularize_he50b618e_0_5;
        VlWide<5>/*147:0*/ __VdfgRegularize_he50b618e_0_6;
        VlWide<6>/*184:0*/ __VdfgRegularize_he50b618e_0_7;
        VlWide<7>/*221:0*/ __VdfgRegularize_he50b618e_0_8;
        VlWide<9>/*258:0*/ __VdfgRegularize_he50b618e_0_9;
        VlWide<10>/*295:0*/ __VdfgRegularize_he50b618e_0_10;
        VlWide<11>/*332:0*/ __VdfgRegularize_he50b618e_0_11;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add;
        QData/*63:0*/ npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache;
        VlUnpacked<IData/*17:0*/, 4> npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag;
        VlUnpacked<QData/*36:0*/, 10> npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 10> npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 10> npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*5:0*/, 11> npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 11> npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 11> npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 2> npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 15> npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf;
        VlUnpacked<IData/*31:0*/, 8> npc_top__DOT__u_axi4_delayer__DOT__latency_read;
        VlUnpacked<IData/*31:0*/, 8> npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata;
        VlUnpacked<CData/*3:0*/, 8> npc_top__DOT__u_axi4_delayer__DOT__fifo_rid;
        VlUnpacked<CData/*0:0*/, 8> npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vnpc_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnpc_top___024root(Vnpc_top__Syms* symsp, const char* namep);
    ~Vnpc_top___024root();
    VL_UNCOPYABLE(Vnpc_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
