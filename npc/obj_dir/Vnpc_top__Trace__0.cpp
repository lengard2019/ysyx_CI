// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vnpc_top__Syms.h"


void Vnpc_top___024root__trace_chg_0_sub_0(Vnpc_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vnpc_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_chg_0\n"); );
    // Body
    Vnpc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_top___024root*>(voidSelf);
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vnpc_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnpc_top___024root__trace_chg_0_sub_0(Vnpc_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_chg_0_sub_0\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*383:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+1,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+2,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+3,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+4,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+5,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+6,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+7,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+8,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+9,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+10,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+11,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+12,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+13,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[3]),6);
        bufp->chgCData(oldp+14,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[4]),6);
        bufp->chgCData(oldp+15,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[5]),6);
        bufp->chgCData(oldp+16,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[6]),6);
        bufp->chgCData(oldp+17,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[7]),6);
        bufp->chgCData(oldp+18,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[8]),6);
        bufp->chgCData(oldp+19,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[9]),6);
        bufp->chgCData(oldp+20,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[10]),6);
        bufp->chgCData(oldp+21,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+22,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+23,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+24,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[3]),5);
        bufp->chgCData(oldp+25,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[4]),5);
        bufp->chgCData(oldp+26,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[5]),5);
        bufp->chgCData(oldp+27,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[6]),5);
        bufp->chgCData(oldp+28,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[7]),5);
        bufp->chgCData(oldp+29,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[8]),5);
        bufp->chgCData(oldp+30,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[9]),5);
        bufp->chgCData(oldp+31,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[10]),5);
        bufp->chgBit(oldp+32,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+33,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+34,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+35,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+36,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+37,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+38,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[6]));
        bufp->chgBit(oldp+39,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[7]));
        bufp->chgBit(oldp+40,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[8]));
        bufp->chgBit(oldp+41,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[9]));
        bufp->chgBit(oldp+42,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[10]));
        bufp->chgBit(oldp+43,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+44,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+45,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+46,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+47,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid));
        bufp->chgIData(oldp+48,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr),32);
        bufp->chgCData(oldp+49,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid),4);
        bufp->chgCData(oldp+50,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize),3);
        bufp->chgCData(oldp+51,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                  ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                             >> 0x00000018U))
                                      ? 0U : 1U) : 0U)),2);
        bufp->chgBit(oldp+52,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid));
        bufp->chgIData(oldp+53,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                         >> 0x00000018U))
                                  ? 0U : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata)),32);
        bufp->chgCData(oldp+54,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                         >> 0x00000018U))
                                  ? 0U : ((0U == (3U 
                                                  & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                           ? ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                               ? ((1U 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                   ? 8U
                                                   : 4U)
                                               : ((1U 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                   ? 2U
                                                   : 1U))
                                           : ((1U == 
                                               (3U 
                                                & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                                    ? 0x0cU
                                                    : 0U))
                                               : 0x0fU)))),4);
        bufp->chgBit(oldp+55,(((2U != (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                       >> 0x00000018U)) 
                               & (5U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))));
        bufp->chgBit(oldp+56,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid));
        bufp->chgIData(oldp+57,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                  ? (0xfffffff0U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)
                                  : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                      ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                 >> 0x00000018U))
                                          ? 0U : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                      : 0U))),32);
        bufp->chgCData(oldp+58,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid),4);
        bufp->chgCData(oldp+59,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                  ? 3U : 0U)),8);
        bufp->chgCData(oldp+60,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize),3);
        bufp->chgCData(oldp+61,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                  ? 1U : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                           ? ((2U == 
                                               (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                >> 0x00000018U))
                                               ? 0U
                                               : 1U)
                                           : 0U))),2);
        bufp->chgBit(oldp+62,((1U & ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                      ? (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state))
                                      : ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                 >> 0x00000018U))
                                          ? 0U : (2U 
                                                  == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))))));
        bufp->chgBit(oldp+63,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                          >> 0x0000001cU))
                                ? (0U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                : (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg))));
        bufp->chgBit(oldp+64,(((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
                               | (1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state)))));
        bufp->chgBit(oldp+65,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid));
        bufp->chgCData(oldp+66,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp),2);
        bufp->chgCData(oldp+67,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bid),4);
        bufp->chgBit(oldp+68,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg));
        bufp->chgBit(oldp+69,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid));
        bufp->chgIData(oldp+70,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata),32);
        bufp->chgBit(oldp+71,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast));
        bufp->chgCData(oldp+72,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid),4);
        bufp->chgBit(oldp+73,(vlSelfRef.npc_top__DOT__axi_slave_awvalid));
        bufp->chgIData(oldp+74,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                            >> 0x0000001cU))
                                  ? 0U : (0x07ffffffU 
                                          & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr))),27);
        bufp->chgCData(oldp+75,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                            >> 0x0000001cU))
                                  ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid))),4);
        bufp->chgBit(oldp+76,((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))));
        bufp->chgBit(oldp+77,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg));
        bufp->chgBit(oldp+78,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg));
        bufp->chgBit(oldp+79,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg));
        bufp->chgCData(oldp+80,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg),4);
        bufp->chgIData(oldp+81,((0x07ffffffU & ((1U 
                                                 == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                                 ? 
                                                (0xfffffff0U 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                                  ? 
                                                 ((2U 
                                                   == 
                                                   (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                    >> 0x00000018U))
                                                   ? 0U
                                                   : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                  : 0U)))),27);
        bufp->chgBit(oldp+82,(vlSelfRef.npc_top__DOT__axi_slave_rready));
        bufp->chgBit(oldp+83,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgIData(oldp+84,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgBit(oldp+85,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg));
        bufp->chgCData(oldp+86,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg),4);
        bufp->chgBit(oldp+87,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                          >> 0x0000001cU)) 
                               & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid))));
        bufp->chgIData(oldp+88,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                            >> 0x0000001cU))
                                  ? (0x07ffffffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr)
                                  : 0U)),27);
        bufp->chgCData(oldp+89,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                            >> 0x0000001cU))
                                  ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid)
                                  : 0U)),4);
        bufp->chgBit(oldp+90,((0U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))));
        bufp->chgBit(oldp+91,((1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))));
        bufp->chgBit(oldp+92,((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))));
        bufp->chgBit(oldp+93,((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                         >> 0x0000001cU))));
        bufp->chgIData(oldp+94,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0),32);
        bufp->chgIData(oldp+95,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0),32);
        bufp->chgIData(oldp+96,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1),32);
        bufp->chgIData(oldp+97,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1),32);
        bufp->chgIData(oldp+98,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr),32);
        bufp->chgIData(oldp+99,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr),32);
        bufp->chgIData(oldp+100,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[0]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[1]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[2]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[3]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[4]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[5]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[6]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[7]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[0]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[1]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[2]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[3]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[4]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[5]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[6]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[7]),32);
        bufp->chgCData(oldp+116,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[0]),4);
        bufp->chgCData(oldp+117,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[1]),4);
        bufp->chgCData(oldp+118,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[2]),4);
        bufp->chgCData(oldp+119,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[3]),4);
        bufp->chgCData(oldp+120,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[4]),4);
        bufp->chgCData(oldp+121,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[5]),4);
        bufp->chgCData(oldp+122,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[6]),4);
        bufp->chgCData(oldp+123,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[7]),4);
        bufp->chgBit(oldp+124,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[0]));
        bufp->chgBit(oldp+125,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[1]));
        bufp->chgBit(oldp+126,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[2]));
        bufp->chgBit(oldp+127,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[3]));
        bufp->chgBit(oldp+128,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[4]));
        bufp->chgBit(oldp+129,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[5]));
        bufp->chgBit(oldp+130,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[6]));
        bufp->chgBit(oldp+131,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[7]));
        bufp->chgCData(oldp+132,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r),3);
        bufp->chgCData(oldp+133,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r),3);
        bufp->chgCData(oldp+134,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read),2);
        bufp->chgCData(oldp+135,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                                   ? (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid) 
                                       & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid)))
                                       ? 2U : 0U) : 
                                  ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                                    ? (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg) 
                                        & ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg) 
                                           & (0U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg))))
                                        ? 1U : 2U) : 
                                   ((1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                                     ? (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast) 
                                         & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)))
                                         ? 0U : 1U)
                                     : 0U)))),2);
        bufp->chgCData(oldp+136,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1),2);
        bufp->chgCData(oldp+137,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr),2);
        bufp->chgIData(oldp+138,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read),32);
        bufp->chgCData(oldp+139,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state),2);
        bufp->chgIData(oldp+140,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_wr),32);
        bufp->chgBit(oldp+141,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_reg));
        bufp->chgBit(oldp+142,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_next));
        bufp->chgCData(oldp+143,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg),2);
        bufp->chgCData(oldp+144,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next),2);
        bufp->chgBit(oldp+145,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_wr_en));
        bufp->chgBit(oldp+146,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_rd_en));
        bufp->chgCData(oldp+147,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_reg),4);
        bufp->chgCData(oldp+148,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_next),4);
        bufp->chgIData(oldp+149,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg),27);
        bufp->chgIData(oldp+150,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_next),27);
        bufp->chgCData(oldp+151,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg),8);
        bufp->chgCData(oldp+152,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next),8);
        bufp->chgCData(oldp+153,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_reg),3);
        bufp->chgCData(oldp+154,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_next),3);
        bufp->chgCData(oldp+155,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+156,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_next),2);
        bufp->chgCData(oldp+157,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_reg),4);
        bufp->chgCData(oldp+158,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_next),4);
        bufp->chgIData(oldp+159,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg),27);
        bufp->chgIData(oldp+160,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_next),27);
        bufp->chgCData(oldp+161,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg),8);
        bufp->chgCData(oldp+162,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_next),8);
        bufp->chgCData(oldp+163,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_reg),3);
        bufp->chgCData(oldp+164,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_next),3);
        bufp->chgCData(oldp+165,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_reg),2);
        bufp->chgCData(oldp+166,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_next),2);
        bufp->chgBit(oldp+167,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+168,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next));
        bufp->chgCData(oldp+169,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next),4);
        bufp->chgBit(oldp+170,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next));
        bufp->chgBit(oldp+171,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+172,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg),4);
        bufp->chgCData(oldp+173,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next),4);
        bufp->chgIData(oldp+174,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_reg),32);
        bufp->chgBit(oldp+175,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+176,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+177,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg));
        bufp->chgBit(oldp+178,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next));
        bufp->chgIData(oldp+179,((0x01ffffffU & (((0x0aU 
                                                   == 
                                                   (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                                    >> 0x0000001cU))
                                                   ? 0U
                                                   : 
                                                  (0x07ffffffU 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr)) 
                                                 >> 2U))),25);
        bufp->chgIData(oldp+180,((0x01ffffffU & (((1U 
                                                   == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                                   ? 
                                                  (0xfffffff0U 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                                    ? 
                                                   ((2U 
                                                     == 
                                                     (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                      >> 0x00000018U))
                                                     ? 0U
                                                     : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                    : 0U)) 
                                                 >> 2U))),25);
        bufp->chgIData(oldp+181,((0x01ffffffU & (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg 
                                                 >> 2U))),25);
        bufp->chgIData(oldp+182,((0x01ffffffU & (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg 
                                                 >> 2U))),25);
        bufp->chgCData(oldp+183,((0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 0x0000000fU))),4);
        bufp->chgCData(oldp+184,((0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 0x00000014U))),4);
        bufp->chgCData(oldp+185,((0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 7U))),4);
        bufp->chgBit(oldp+186,((1U & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)))));
        bufp->chgBit(oldp+187,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready));
        bufp->chgBit(oldp+188,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state))));
        bufp->chgIData(oldp+189,((0xfffffff0U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)),32);
        bufp->chgBit(oldp+190,((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state))));
        bufp->chgBit(oldp+191,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)) 
                                & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid))));
        bufp->chgIData(oldp+192,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                   ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata
                                   : 0U)),32);
        bufp->chgBit(oldp+193,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)) 
                                & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast))));
        bufp->chgBit(oldp+194,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready));
        bufp->chgBit(oldp+195,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))));
        bufp->chgIData(oldp+196,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r),32);
        bufp->chgIData(oldp+197,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata),32);
        bufp->chgIData(oldp+198,(((IData)(4U) + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)),32);
        bufp->chgBit(oldp+199,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__flush_r));
        bufp->chgBit(oldp+200,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid));
        bufp->chgIData(oldp+201,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm),32);
        bufp->chgBit(oldp+202,((1U & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r) 
                                      | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr)))));
        bufp->chgCData(oldp+203,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__Branch_r),3);
        bufp->chgBit(oldp+204,((0U == (0x0000001fU 
                                       & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)))));
        bufp->chgBit(oldp+205,((8U == (0x0000001fU 
                                       & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)))));
        bufp->chgCData(oldp+206,((7U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                        >> 0x0000000cU))),3);
        bufp->chgBit(oldp+207,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key));
        bufp->chgBit(oldp+208,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key));
        bufp->chgCData(oldp+209,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr),4);
        bufp->chgCData(oldp+210,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr),2);
        bufp->chgIData(oldp+211,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r),32);
        bufp->chgCData(oldp+212,(((0U != (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r))
                                   ? 0U : ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr)
                                            ? 1U : 
                                           ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal)
                                             ? 2U : 
                                            ((0x00100073U 
                                              == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)
                                              ? 3U : 
                                             ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall)
                                               ? 0x0bU
                                               : 0U)))))),4);
        bufp->chgBit(oldp+213,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr));
        bufp->chgBit(oldp+214,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret));
        bufp->chgBit(oldp+215,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready));
        bufp->chgBit(oldp+216,((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))));
        bufp->chgIData(oldp+217,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2_r),32);
        bufp->chgCData(oldp+218,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode),2);
        bufp->chgCData(oldp+219,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemOp_r),3);
        bufp->chgCData(oldp+220,(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r)
                                   ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r)
                                   : ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r))
                                       ? 4U : ((0U 
                                                != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r))
                                                ? 7U
                                                : 0U)))),4);
        bufp->chgBit(oldp+221,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_out));
        bufp->chgIData(oldp+222,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__pc_r),32);
        bufp->chgIData(oldp+223,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc_r),32);
        bufp->chgCData(oldp+224,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw),4);
        bufp->chgIData(oldp+225,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW),32);
        bufp->chgBit(oldp+226,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr));
        bufp->chgCData(oldp+227,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                   ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r))),2);
        bufp->chgIData(oldp+228,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc),32);
        bufp->chgCData(oldp+229,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw),4);
        bufp->chgIData(oldp+230,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result),32);
        bufp->chgBit(oldp+231,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr));
        bufp->chgBit(oldp+232,((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
        bufp->chgBit(oldp+233,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__finish_r));
        bufp->chgIData(oldp+234,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_r),32);
        bufp->chgCData(oldp+235,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_r),4);
        bufp->chgBit(oldp+236,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_wr_r));
        bufp->chgCData(oldp+237,((0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm)),8);
        bufp->chgIData(oldp+238,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData),32);
        bufp->chgBit(oldp+239,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr));
        bufp->chgIData(oldp+240,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData),32);
        bufp->chgIData(oldp+241,((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm 
                                  + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r)),32);
        bufp->chgBit(oldp+242,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r));
        bufp->chgIData(oldp+243,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r),32);
        bufp->chgIData(oldp+244,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r),32);
        bufp->chgIData(oldp+245,(((0U == (0x0000000fU 
                                          & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                             >> 0x0000000fU)))
                                   ? 0U : ((0x0eU >= 
                                            (0x0000000fU 
                                             & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 0x0000000fU) 
                                                - (IData)(1U))))
                                            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf
                                           [(0x0000000fU 
                                             & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 0x0000000fU) 
                                                - (IData)(1U)))]
                                            : 0U))),32);
        bufp->chgIData(oldp+246,(((0U == (0x0000000fU 
                                          & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                             >> 0x00000014U)))
                                   ? 0U : ((0x0eU >= 
                                            (0x0000000fU 
                                             & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 0x00000014U) 
                                                - (IData)(1U))))
                                            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf
                                           [(0x0000000fU 
                                             & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 0x00000014U) 
                                                - (IData)(1U)))]
                                            : 0U))),32);
        bufp->chgIData(oldp+247,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA),32);
        bufp->chgIData(oldp+248,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB),32);
        bufp->chgIData(oldp+249,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward),32);
        bufp->chgIData(oldp+250,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2),32);
        bufp->chgBit(oldp+251,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__less_r));
        bufp->chgBit(oldp+252,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare));
        bufp->chgIData(oldp+253,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r),32);
        bufp->chgIData(oldp+254,(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r)
                                   ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r
                                   : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r)),32);
        bufp->chgIData(oldp+255,(((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr))
                                   ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData
                                   : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r)),32);
        bufp->chgBit(oldp+256,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready));
        bufp->chgBit(oldp+257,((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
        bufp->chgIData(oldp+258,((0xfffffffcU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)),32);
        bufp->chgBit(oldp+259,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                        >> 0x00000018U))
                                 ? (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                 : ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
                                    | (1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))))));
        bufp->chgBit(oldp+260,((4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
        bufp->chgIData(oldp+261,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata),32);
        bufp->chgCData(oldp+262,(((0U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                   ? ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                       ? ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                           ? 8U : 4U)
                                       : ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                           ? 2U : 1U))
                                   : ((1U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                       ? ((0U == (3U 
                                                  & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                           ? 3U : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                                    ? 0x0cU
                                                    : 0U))
                                       : 0x0fU))),4);
        bufp->chgBit(oldp+263,((5U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
        bufp->chgBit(oldp+264,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid));
        bufp->chgCData(oldp+265,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                          >> 0x00000018U))
                                   ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp))),2);
        bufp->chgCData(oldp+266,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                          >> 0x00000018U))
                                   ? ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                       ? 1U : 0U) : (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bid))),4);
        bufp->chgBit(oldp+267,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready));
        bufp->chgBit(oldp+268,((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
        bufp->chgIData(oldp+269,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r),32);
        bufp->chgCData(oldp+270,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                   ? 1U : 0U)),4);
        bufp->chgCData(oldp+271,((3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r))),3);
        bufp->chgBit(oldp+272,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
        bufp->chgBit(oldp+273,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid));
        bufp->chgCData(oldp+274,(0U),2);
        bufp->chgIData(oldp+275,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                   ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata
                                   : ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr))
                                           ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time)
                                           : (IData)(
                                                     (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                                                      >> 0x00000020U)))
                                       : 0U))),32);
        bufp->chgBit(oldp+276,((1U & ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                       ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast)
                                       : vlSelfRef.__VdfgRegularize_he50b618e_0_2))));
        bufp->chgBit(oldp+277,((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
        bufp->chgBit(oldp+278,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid));
        bufp->chgIData(oldp+279,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? (0xfffffffcU 
                                          & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                       : 0U) : 0U)),32);
        bufp->chgCData(oldp+280,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? 1U : 0U) : 0U)),4);
        bufp->chgCData(oldp+281,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? 2U : 0U) : 0U)),3);
        bufp->chgCData(oldp+282,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? 1U : 0U) : 0U)),2);
        bufp->chgBit(oldp+283,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
        bufp->chgBit(oldp+284,((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
        bufp->chgCData(oldp+285,(((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                   ? 1U : 0U)),4);
        bufp->chgBit(oldp+286,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid));
        bufp->chgIData(oldp+287,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r
                                       : 0U) : 0U)),32);
        bufp->chgCData(oldp+288,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                           ? 1U : 0U)
                                       : 0U) : 0U)),4);
        bufp->chgCData(oldp+289,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r))
                                       : 0U) : 0U)),3);
        bufp->chgBit(oldp+290,(((1U == ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                         ? 1U : 0U)) 
                                & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U)) 
                                   & (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))))));
        bufp->chgBit(oldp+291,((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
        bufp->chgIData(oldp+292,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr))
                                   ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time)
                                   : (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                                              >> 0x00000020U)))),32);
        bufp->chgCData(oldp+293,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                   ? 1U : 0U)),4);
        bufp->chgBit(oldp+294,(((8U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                 ? ((1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                                              >> 2U))) 
                                    && ((1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                                                  >> 1U))) 
                                        && ((1U & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))) 
                                            && (1U 
                                                & (IData)(
                                                          (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                           >> 0x00000020U))))))
                                 : ((1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                                              >> 2U))) 
                                    && (1U & ((2U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                                   ? (IData)(
                                                             (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                              >> 0x00000020U))
                                                   : (IData)(
                                                             (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                              >> 0x00000020U)))
                                               : ((1U 
                                                   & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))) 
                                                  && (1U 
                                                      & (IData)(
                                                                (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                                 >> 0x00000020U))))))))));
        bufp->chgBit(oldp+295,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__overflow));
        bufp->chgQData(oldp+296,((0x00000001ffffffffULL 
                                  & (((- (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub))) 
                                      ^ (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))) 
                                     + (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub))))),33);
        bufp->chgBit(oldp+298,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub));
        bufp->chgQData(oldp+299,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add),33);
        bufp->chgQData(oldp+301,((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))),33);
        bufp->chgQData(oldp+303,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                                  ^ vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)))),33);
        bufp->chgQData(oldp+305,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                                  | vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)))),33);
        bufp->chgQData(oldp+307,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                                  & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)))),33);
        bufp->chgQData(oldp+309,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))))),33);
        bufp->chgQData(oldp+311,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                                  >> 
                                                  (0x0000001fU 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))))),33);
        bufp->chgQData(oldp+313,((QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA, 
                                                                (0x0000001fU 
                                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))))),33);
        bufp->chgBit(oldp+315,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__RegWr_r));
        bufp->chgCData(oldp+316,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__branch_r),3);
        bufp->chgBit(oldp+317,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemtoReg_r));
        bufp->chgBit(oldp+318,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemWr_r));
        bufp->chgIData(oldp+319,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r),32);
        bufp->chgIData(oldp+320,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__dnpc_r),32);
        bufp->chgCData(oldp+321,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__Rw_r),4);
        bufp->chgIData(oldp+322,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r),32);
        bufp->chgBit(oldp+323,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r));
        bufp->chgBit(oldp+324,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare_r));
        bufp->chgBit(oldp+325,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mpcWr_r));
        bufp->chgCData(oldp+326,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state),2);
        bufp->chgCData(oldp+327,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__next_state),2);
        bufp->chgCData(oldp+328,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux),2);
        bufp->chgIData(oldp+329,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com),32);
        bufp->chgBit(oldp+330,((0U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r)));
        bufp->chgCData(oldp+331,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__val),2);
        bufp->chgCData(oldp+332,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key),2);
        bufp->chgCData(oldp+333,((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 2U))),5);
        bufp->chgCData(oldp+334,((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                  >> 0x00000019U)),7);
        bufp->chgIData(oldp+335,((0xfffff000U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)),32);
        bufp->chgIData(oldp+336,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI),32);
        bufp->chgIData(oldp+337,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS),32);
        bufp->chgIData(oldp+338,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB),32);
        bufp->chgIData(oldp+339,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ),32);
        bufp->chgIData(oldp+340,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr),32);
        bufp->chgBit(oldp+341,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr));
        bufp->chgBit(oldp+342,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r));
        bufp->chgBit(oldp+343,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal));
        bufp->chgBit(oldp+344,((0x00100073U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)));
        bufp->chgBit(oldp+345,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall));
        bufp->chgBit(oldp+346,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state));
        bufp->chgBit(oldp+347,((1U & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)
                                       ? (~ (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready) 
                                              & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid)) 
                                             | (2U 
                                                == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))))
                                       : ((2U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
                                          & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready))))));
        bufp->chgBit(oldp+348,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict));
        bufp->chgBit(oldp+349,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay));
        bufp->chgBit(oldp+350,(((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay)) 
                                & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict))));
        __Vtemp_2[0U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[0U];
        __Vtemp_2[1U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[1U];
        __Vtemp_2[2U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[2U];
        __Vtemp_2[3U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[3U];
        __Vtemp_2[4U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[4U];
        __Vtemp_2[5U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[5U];
        __Vtemp_2[6U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[6U];
        __Vtemp_2[7U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[7U];
        __Vtemp_2[8U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[8U];
        __Vtemp_2[9U] = vlSelfRef.__VdfgRegularize_he50b618e_0_11[9U];
        __Vtemp_2[0x0000000aU] = ((0xfe000000U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                  << 0x0000000dU)) 
                                  | vlSelfRef.__VdfgRegularize_he50b618e_0_11[0x0000000aU]);
        __Vtemp_2[0x0000000bU] = (0x0001a000U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 0x00000013U));
        bufp->chgWData(oldp+351,(__Vtemp_2),370);
        bufp->chgQData(oldp+363,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[0]),37);
        bufp->chgQData(oldp+365,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[1]),37);
        bufp->chgQData(oldp+367,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[2]),37);
        bufp->chgQData(oldp+369,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[3]),37);
        bufp->chgQData(oldp+371,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[4]),37);
        bufp->chgQData(oldp+373,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[5]),37);
        bufp->chgQData(oldp+375,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[6]),37);
        bufp->chgQData(oldp+377,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[7]),37);
        bufp->chgQData(oldp+379,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[8]),37);
        bufp->chgQData(oldp+381,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[9]),37);
        bufp->chgIData(oldp+383,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+384,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+385,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+386,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+387,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+388,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+389,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+390,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+391,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+392,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+393,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+394,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+395,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+396,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+397,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state),3);
        bufp->chgCData(oldp+398,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                   ? ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))
                                       ? ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                                           ? 3U : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                                                    ? 1U
                                                    : 6U))
                                       : 0U) : ((1U 
                                                 == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                                 ? 
                                                ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready)
                                                  ? 2U
                                                  : 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                                  ? 
                                                 ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid)
                                                   ? 6U
                                                   : 2U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                                   ? 
                                                  ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready)
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                                    ? 
                                                   (((2U 
                                                      == 
                                                      (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                       >> 0x00000018U))
                                                      ? 
                                                     (2U 
                                                      == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                                      : 
                                                     ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
                                                      | (1U 
                                                         == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))))
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                                     ? 
                                                    ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid)
                                                      ? 6U
                                                      : 5U)
                                                     : 0U))))))),3);
        bufp->chgIData(oldp+399,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r),32);
        bufp->chgCData(oldp+400,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r),2);
        bufp->chgCData(oldp+401,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r),3);
        bufp->chgIData(oldp+402,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r),32);
        bufp->chgCData(oldp+403,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw_r),4);
        bufp->chgBit(oldp+404,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr_r));
        bufp->chgCData(oldp+405,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r),2);
        bufp->chgCData(oldp+406,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r),2);
        bufp->chgCData(oldp+407,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r),4);
        bufp->chgBit(oldp+408,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r));
        bufp->chgIData(oldp+409,(((0U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                   ? ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                       ? ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                           ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))) 
                                               << 8U) 
                                              | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                 >> 0x00000018U))
                                           : (((- (IData)(
                                                          (1U 
                                                           & ((~ 
                                                               ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r) 
                                                                >> 2U)) 
                                                              & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                                 >> 0x00000017U))))) 
                                               << 8U) 
                                              | (0x000000ffU 
                                                 & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                    >> 0x00000010U))))
                                       : ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                           ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))) 
                                               << 8U) 
                                              | (0x000000ffU 
                                                 & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                    >> 8U)))
                                           : (((- (IData)(
                                                          (1U 
                                                           & ((~ 
                                                               ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r) 
                                                                >> 2U)) 
                                                              & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                                 >> 7U))))) 
                                               << 8U) 
                                              | (0x000000ffU 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r))))
                                   : ((1U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                       ? ((0U == (3U 
                                                  & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                           ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))) 
                                               << 0x00000010U) 
                                              | (0x0000ffffU 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r))
                                           : ((2U == 
                                               (3U 
                                                & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                               ? ((
                                                   (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))) 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                     >> 0x00000010U))
                                               : 0U))
                                       : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r))),32);
        bufp->chgCData(oldp+410,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr),4);
        bufp->chgQData(oldp+411,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time),64);
        bufp->chgCData(oldp+413,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state),2);
        bufp->chgCData(oldp+414,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__next_state),2);
        bufp->chgIData(oldp+415,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [0U][0U]),32);
        bufp->chgIData(oldp+416,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [0U][1U]),32);
        bufp->chgIData(oldp+417,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [0U][2U]),32);
        bufp->chgIData(oldp+418,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [0U][3U]),32);
        bufp->chgIData(oldp+419,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [1U][0U]),32);
        bufp->chgIData(oldp+420,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [1U][1U]),32);
        bufp->chgIData(oldp+421,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [1U][2U]),32);
        bufp->chgIData(oldp+422,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [1U][3U]),32);
        bufp->chgIData(oldp+423,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [2U][0U]),32);
        bufp->chgIData(oldp+424,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [2U][1U]),32);
        bufp->chgIData(oldp+425,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [2U][2U]),32);
        bufp->chgIData(oldp+426,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [2U][3U]),32);
        bufp->chgIData(oldp+427,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [3U][0U]),32);
        bufp->chgIData(oldp+428,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [3U][1U]),32);
        bufp->chgIData(oldp+429,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [3U][2U]),32);
        bufp->chgIData(oldp+430,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                                 [3U][3U]),32);
        bufp->chgIData(oldp+431,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[0]),18);
        bufp->chgIData(oldp+432,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[1]),18);
        bufp->chgIData(oldp+433,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[2]),18);
        bufp->chgIData(oldp+434,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[3]),18);
        bufp->chgIData(oldp+435,((0x0003ffffU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                                 >> 6U))),18);
        bufp->chgCData(oldp+436,((3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                        >> 4U))),2);
        bufp->chgCData(oldp+437,((3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                        >> 2U))),2);
        bufp->chgBit(oldp+438,((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag
                                [(3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                        >> 4U))] == 
                                (0x0003ffffU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                                >> 6U)))));
        bufp->chgCData(oldp+439,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt),2);
        bufp->chgCData(oldp+440,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state),2);
        bufp->chgCData(oldp+441,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__next_state),2);
        bufp->chgBit(oldp+442,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec));
        bufp->chgBit(oldp+443,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block));
        bufp->chgBit(oldp+444,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay));
        bufp->chgBit(oldp+445,(((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay)) 
                                & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block))));
        bufp->chgBit(oldp+446,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss));
        bufp->chgBit(oldp+447,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay));
        bufp->chgBit(oldp+448,(((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay)) 
                                & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss))));
        bufp->chgIData(oldp+449,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+450,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mcause_r),4);
        bufp->chgIData(oldp+451,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r),32);
        bufp->chgIData(oldp+452,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mstatus_r),32);
        bufp->chgIData(oldp+453,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mtvec_r),32);
        __Vtemp_4[0U] = (IData)((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward)));
        __Vtemp_4[1U] = ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r 
                          << 1U) | (IData)(((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward)) 
                                            >> 0x00000020U)));
        __Vtemp_4[2U] = (2U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r 
                               >> 0x0000001fU));
        bufp->chgWData(oldp+454,(__Vtemp_4),66);
        bufp->chgQData(oldp+457,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+459,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+461,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+462,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+463,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+464,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__hit));
        __Vtemp_6[0U] = (IData)((0x0000000100000000ULL 
                                 | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))));
        __Vtemp_6[1U] = ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 
                          << 1U) | (IData)(((0x0000000100000000ULL 
                                             | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))) 
                                            >> 0x00000020U)));
        __Vtemp_6[2U] = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 
                         >> 0x0000001fU);
        bufp->chgWData(oldp+465,(__Vtemp_6),66);
        bufp->chgQData(oldp+468,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+470,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+472,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+473,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+474,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+475,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+476,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[0]),32);
        bufp->chgIData(oldp+477,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[1]),32);
        bufp->chgIData(oldp+478,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[2]),32);
        bufp->chgIData(oldp+479,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[3]),32);
        bufp->chgIData(oldp+480,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[4]),32);
        bufp->chgIData(oldp+481,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[5]),32);
        bufp->chgIData(oldp+482,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[6]),32);
        bufp->chgIData(oldp+483,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[7]),32);
        bufp->chgIData(oldp+484,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[8]),32);
        bufp->chgIData(oldp+485,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[9]),32);
        bufp->chgIData(oldp+486,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[10]),32);
        bufp->chgIData(oldp+487,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[11]),32);
        bufp->chgIData(oldp+488,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[12]),32);
        bufp->chgIData(oldp+489,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[13]),32);
        bufp->chgIData(oldp+490,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[14]),32);
        bufp->chgBit(oldp+491,((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                       >> 0x00000018U))));
        bufp->chgCData(oldp+492,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state),2);
        bufp->chgCData(oldp+493,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__next_state),2);
        bufp->chgCData(oldp+494,(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state),2);
        bufp->chgCData(oldp+495,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                   ? ((((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                                   >> 0x0000001cU)) 
                                        & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid)) 
                                       & (0x03f8U == 
                                          ((0x0aU == 
                                            (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                             >> 0x0000001cU))
                                            ? (0x00000fffU 
                                               & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr)
                                            : 0U)))
                                       ? 1U : 0U) : 
                                  ((1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                    ? ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid)
                                        ? 2U : 1U) : 
                                   ((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                     ? ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))
                                         ? 0U : 2U)
                                     : 0U)))),2);
    }
    bufp->chgBit(oldp+496,(vlSelfRef.clk));
    bufp->chgBit(oldp+497,(vlSelfRef.reset));
    bufp->chgBit(oldp+498,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst));
}

void Vnpc_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_cleanup\n"); );
    // Body
    Vnpc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_top___024root*>(voidSelf);
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
