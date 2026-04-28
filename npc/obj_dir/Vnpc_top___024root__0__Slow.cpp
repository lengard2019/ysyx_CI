// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_top.h for the primary calling header

#include "Vnpc_top__pch.h"

VL_ATTR_COLD void Vnpc_top___024root___eval_static__TOP(Vnpc_top___024root* vlSelf);
VL_ATTR_COLD void Vnpc_top___024root____Vm_traceActivitySetAll(Vnpc_top___024root* vlSelf);

VL_ATTR_COLD void Vnpc_top___024root___eval_static(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_static\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnpc_top___024root___eval_static__TOP(vlSelf);
    Vnpc_top___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vnpc_top___024root___eval_static__TOP(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_static__TOP\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_pipe_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg = 0U;
}

VL_ATTR_COLD void Vnpc_top___024root___eval_initial__TOP(Vnpc_top___024root* vlSelf);

VL_ATTR_COLD void Vnpc_top___024root___eval_initial(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_initial\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnpc_top___024root___eval_initial__TOP(vlSelf);
    Vnpc_top___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vnpc_top___024root___eval_initial__TOP(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_initial__TOP\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[0U] = 0x1cU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[1U] = 8U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[2U] = 0x18U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[3U] = 0x0cU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[6U] = 0x19U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[7U] = 0x1bU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[8U] = 5U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[9U] = 0x0dU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[0U] = 6U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[1U] = 0x38U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[2U] = 0x10U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[3U] = 0x30U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[4U] = 0x18U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[5U] = 8U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[6U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[7U] = 0x32U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[8U] = 0x36U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[9U] = 0x0aU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[0x0000000aU] = 0x1aU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[0x0000000aU] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[1U] = 0x1cU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[3U] = 0x18U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[4U] = 0x0cU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[5U] = 4U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[6U] = 0U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[7U] = 0x19U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[8U] = 0x1bU;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[9U] = 5U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[0x0000000aU] = 0x0dU;
}

VL_ATTR_COLD void Vnpc_top___024root___eval_final(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_final\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnpc_top___024root___eval_phase__stl(Vnpc_top___024root* vlSelf);

VL_ATTR_COLD void Vnpc_top___024root___eval_settle(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_settle\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vnpc_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/dengzibin/ysyx-workbench/npc/sim_file/sim_npc/npc_top.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vnpc_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vnpc_top___024root___eval_triggers__stl(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_triggers__stl\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnpc_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vnpc_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vnpc_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vnpc_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 32> Vnpc_top__ConstPool__TABLE_hb5cef33b_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vnpc_top__ConstPool__TABLE_hd38a96af_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnpc_top__ConstPool__TABLE_h6374ab4c_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vnpc_top__ConstPool__TABLE_hf5b1d39b_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnpc_top__ConstPool__TABLE_h9f8b7679_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnpc_top__ConstPool__TABLE_heee80908_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vnpc_top__ConstPool__TABLE_h27af0b9b_0;

VL_ATTR_COLD void Vnpc_top___024root___stl_sequent__TOP__0(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___stl_sequent__TOP__0\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__snpc = 
        ((IData)(4U) + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)) 
           | (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata 
        = ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
            ? ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r, 0x00000018U)
                : VL_SHIFTL_III(32,32,32, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r, 0x00000010U))
            : ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r, 8U)
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata
        [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r];
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state) 
           & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_out 
        = ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r)) 
           | ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r)) 
              | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r)));
    vlSelfRef.__Vtableidx2 = (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                             >> 2U));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r 
        = Vnpc_top__ConstPool__TABLE_hb5cef33b_0[vlSelfRef.__Vtableidx2];
    vlSelfRef.__Vtableidx3 = ((0x000000e0U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 7U)) 
                              | (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                >> 2U)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__Branch_r 
        = Vnpc_top__ConstPool__TABLE_hd38a96af_0[vlSelfRef.__Vtableidx3];
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
        [(3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                >> 4U))][(3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                >> 2U))];
    if ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))) {
        if ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                    >> 0x00000018U))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize = 0U;
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid = 0U;
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr = 0U;
        } else {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize = 2U;
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid = 1U;
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                = (0xfffffffcU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r);
        }
    } else {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr = 0U;
    }
    if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize = 2U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid 
            = (1U & (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    } else if ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))) {
        if ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                    >> 0x00000018U))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize = 0U;
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid = 0U;
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid 
                = (1U & 0U);
        } else {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize 
                = (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r));
            if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))) {
                vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid = 1U;
                vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid = 1U;
            } else {
                vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid = 0U;
                vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid = 0U;
            }
        }
    } else {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid 
            = (1U & 0U);
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[9U] 
        = (0x0000000d00000000ULL | (QData)((IData)(
                                                   (0xfffff000U 
                                                    & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr 
        = ((0x1cU == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                     >> 2U))) ? ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                      >> 0x0000000cU)))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                       >> 0x0000000cU)))
                                                   ? 3U
                                                   : 0U))
            : 0U);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
           | (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) & (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid 
        = ((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
            == vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_wr) 
           & (0U != vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr));
    if ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                >> 0x00000018U))) {
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = 
            (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state));
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid 
            = (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state));
    } else {
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                            >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                           >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [6U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [7U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [8U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [9U]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out) 
           | (((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
               [0x0aU]) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list
              [0x0aU]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list
              [0x0aU]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal 
        = ((1U & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit))) 
           || (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready 
        = ((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)) 
           & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready 
        = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) ? (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
               : (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1 
        = (IData)((0x00000070U == (0x0000707cU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r;
    vlSelfRef.npc_top__DOT__axi_slave_rready = ((2U 
                                                 == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid 
        = ((2U != (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                   >> 0x00000018U)) & (4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U != (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) & (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgExtracted_h15b8dab5__0 
        = ((8U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                  >> 0x0000001bU)) | (7U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                            >> 0x0000000cU)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[8U] 
        = (0xfffff000U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[9U] 
        = (0xfffff000U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key 
        = ((5U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                  >> 2U))) | (0x1bU 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                     >> 2U))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key 
        = ((0x0cU != (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                     >> 2U))) & (0x18U 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                     >> 2U))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ 
        = (((- (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                        >> 0x0000001fU))) << 0x00000014U) 
           | ((((0x000001feU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                >> 0x0000000bU)) | 
                (1U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                       >> 0x00000014U))) << 0x0000000bU) 
              | (0x000007feU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                >> 0x00000014U))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid
        [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r];
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr 
        = ((6U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
           & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr_r));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr 
        = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
           & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__RegWr_r));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (1U 
                                                 & ((~ 
                                                     ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r) 
                                                      >> 2U)) 
                                                    & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                       >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (IData)(
                                                        ((~ 
                                                          ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r) 
                                                           >> 2U)) 
                                                         & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                            >> 0x0000001fU)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare_r)
            ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r)
            : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key 
        = (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r) 
            << 1U) | (0U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB 
        = (((- (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000800U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              << 4U)) | ((0x000007e0U 
                                          & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                             >> 0x00000014U)) 
                                         | (0x0000001eU 
                                            & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                               >> 7U)))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS 
        = (((- (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                     >> 7U))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemWr_r)
            ? 3U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemtoReg_r));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw 
        = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))
            ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__Rw_r)
            : 0U);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
        = (((- (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
              >> 0x00000014U));
    vlSelfRef.__Vtableidx7 = ((((((5U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
                                  << 3U) | ((4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
                                            << 2U)) 
                                | ((((1U == ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                              ? 1U : 0U)) 
                                     & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                >> 0x00000018U)) 
                                        & (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) 
                                    << 1U) | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid))) 
                               << 3U) | (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid) 
                                          << 2U) | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__next_state 
        = Vnpc_top__ConstPool__TABLE_h6374ab4c_0[vlSelfRef.__Vtableidx7];
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst 
        = ((IData)(vlSelfRef.reset) | (IData)(((0x0000000cU 
                                                == 
                                                (0x0000007cU 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata)) 
                                               & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1) 
           & (0x18U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                        >> 0x00000019U)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1) 
           & (0U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                     >> 0x00000019U)));
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg) 
           & (~ ((IData)(vlSelfRef.npc_top__DOT__axi_slave_rready) 
                 | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg)))));
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_rd_en = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_wr_en = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg) 
           & (2U != (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr)));
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg))) {
            if (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
                 & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_wr_en = 1U;
                if ((0U >= (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg))) {
                    if ((1U & ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr)) 
                               | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg))))) {
                        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next = 1U;
                        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next 
                            = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_reg;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg))) {
            if ((1U & ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr)) 
                       | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg))))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next = 1U;
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next 
                    = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_reg;
            }
        }
    }
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg) 
             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid))) {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_next 
                = ((2U > (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize))
                    ? (7U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize))
                    : 2U);
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_next 
                = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid;
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_next 
                = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                    ? 1U : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                             ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                        >> 0x00000018U))
                                 ? 0U : 1U) : 0U));
        }
    }
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg;
    if (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_reg) {
        if ((1U & (((IData)(vlSelfRef.npc_top__DOT__axi_slave_rready) 
                    | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg))) 
                   | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg))))) {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next = 1U;
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_rd_en = 1U;
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next 
                = (0U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg));
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next 
                = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_reg;
            if ((0U >= (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next = 1U;
            }
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next 
                = (0x000000ffU & ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg) 
                                  - (IData)(1U)));
            if ((0U != (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_reg))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_next 
                    = (0x07ffffffU & (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_reg))));
            }
        }
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_next 
            = ((1U & (~ (((IData)(vlSelfRef.npc_top__DOT__axi_slave_rready) 
                          | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg))) 
                         | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg))))) 
               || (0U < (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg)));
    } else {
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg) 
             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid))) {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next = 0U;
            if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next = 3U;
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_next 
                    = (0x07ffffffU & (0xfffffff0U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r));
            } else {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next = 0U;
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_next 
                    = (0x07ffffffU & ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                       ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                  >> 0x00000018U))
                                           ? 0U : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                       : 0U));
            }
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_next = 1U;
        } else {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_next = 0U;
        }
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr 
        = ((0x0dU == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                     >> 2U))) ? 0x0aU
            : ((4U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                      >> 2U))) ? ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                       >> 0x0000000cU)))
                                                   ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgExtracted_h15b8dab5__0)
                                                   : 
                                                  (7U 
                                                   & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                      >> 0x0000000cU)))
                : ((0x0cU == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                             >> 2U)))
                    ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgExtracted_h15b8dab5__0)
                    : ((0x18U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                 >> 2U)))
                        ? ((3U == (3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                         >> 0x0000000dU)))
                            ? 3U : 2U) : 0U))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key) 
           == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key) 
              == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_3 
        = (1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key) 
                    | (0U == (0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                             >> 0x0000000fU))))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key) 
           == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key) 
              == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_2 
        = (((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key)) 
            | (8U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                     >> 2U)))) & (0U 
                                                  != 
                                                  (0x0000000fU 
                                                   & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                      >> 0x00000014U))));
    vlSelfRef.npc_top__DOT__u_uart_npc__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
            ? ((((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                            >> 0x0000001cU)) & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid)) 
                & (0x03f8U == ((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                          >> 0x0000001cU))
                                ? (0x00000fffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr)
                                : 0U))) ? 1U : 0U) : 
           ((1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
             ? ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid)
                 ? 2U : 1U) : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                ? ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))
                                    ? 0U : 2U) : 0U)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) ? (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
               : ((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                             >> 0x0000001cU)) ? (0U 
                                                 == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                   : (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg))));
    vlSelfRef.npc_top__DOT__axi_slave_awvalid = ((0x0aU 
                                                  != 
                                                  (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                                   >> 0x0000001cU)) 
                                                 & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ;
    if ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))) {
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read 
            = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state 
            = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read;
    } else {
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read 
            = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state 
            = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW 
        = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r))
            ? ((0U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                ? ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                    ? ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                        ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))) 
                            << 8U) | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                      >> 0x00000018U))
                        : (((- (IData)((1U & ((~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r) 
                                                  >> 2U)) 
                                              & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                 >> 0x00000017U))))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                       >> 0x00000010U))))
                    : ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                        ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))) 
                            << 8U) | (0x000000ffU & 
                                      (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                       >> 8U))) : (
                                                   ((- (IData)(
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
                    ? ((0U == (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                        ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r))
                        : ((2U == (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                            ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))) 
                                << 0x00000010U) | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                   >> 0x00000010U))
                            : 0U)) : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r))
            : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r);
    vlSelfRef.__Vtableidx5 = (((((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key))
                                  ? 3U : 1U) << 7U) 
                               | (((0U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r) 
                                   << 6U) | (((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key))
                                               ? 3U
                                               : 1U) 
                                             << 4U))) 
                              | (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r) 
                                  << 3U) | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__branch_r)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__val 
        = Vnpc_top__ConstPool__TABLE_hf5b1d39b_0[vlSelfRef.__Vtableidx5];
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
            ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw_r));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw) 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                    >> 0x00000014U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw) 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                    >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw) 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                    >> 0x00000014U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw) 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                    >> 0x0000000fU)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[0U] 
        = (0x0000001c00000000ULL | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI;
    vlSelfRef.__VdfgRegularize_he50b618e_0_4[0U] = (IData)(
                                                           (0x0000001c00000000ULL 
                                                            | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_4[1U] = 
        ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS 
          << 5U) | (IData)(((0x0000001c00000000ULL 
                             | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI))) 
                            >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_4[2U] = 
        (0x00000100U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS 
                        >> 0x0000001bU));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr 
        = ((0U != (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r)) 
           || ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr) 
               || ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal) 
                   || ((0x00100073U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr) 
                       || (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall)))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare 
        = ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr)) 
           | (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr)));
    vlSelfRef.__Vtableidx6 = (((((((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready) 
                                   | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready)) 
                                  << 3U) | ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready) 
                                            << 2U)) 
                                | (((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)) 
                                    << 1U) | (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) 
                               << 3U) | (((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
                                          << 2U) | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__next_state 
        = Vnpc_top__ConstPool__TABLE_h9f8b7679_0[vlSelfRef.__Vtableidx6];
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg))) {
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next = 1U;
        if (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg) 
             & (IData)(vlSelfRef.npc_top__DOT__axi_slave_awvalid))) {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_next 
                = ((2U > (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize))
                    ? (7U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize))
                    : 2U);
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next = 1U;
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_next 
                = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                    ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                               >> 0x00000018U)) ? 0U
                        : 1U) : 0U);
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_next = 0U;
            if ((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                           >> 0x0000001cU))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_next = 0U;
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_next = 0U;
            } else {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_next 
                    = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid;
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_next 
                    = (0x07ffffffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr);
            }
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next = 0U;
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next = 1U;
        } else {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg))) {
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid))) {
            if ((0U >= (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next = 0U;
                if ((1U & ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr)) 
                           | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg))))) {
                    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next = 1U;
                }
            }
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_next 
                = (0x000000ffU & ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg) 
                                  - (IData)(1U)));
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next 
                = ((0U < (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg))
                    ? 1U : ((1U & ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr)) 
                                   | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg))))
                             ? 0U : 2U));
            if ((0U != (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_reg))) {
                vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_next 
                    = (0x07ffffffU & (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_reg))));
            }
        } else {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg))) {
        if ((1U & ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr)) 
                   | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg))))) {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next = 1U;
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next = 0U;
        } else {
            vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next = 2U;
        }
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid 
        = ((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read
            [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r] 
            <= vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read) 
           & (1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mpcWr_r)
            ? 2U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__val));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict 
        = (((((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_3) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
             | ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_2) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) 
            & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))) 
           | ((((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_3) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
               | ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_2) 
                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))) 
              & (1U == ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                         ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r)))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                       >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                           >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 2U)) == 
                          vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit) 
           | ((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 2U)) == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit)
                                                    ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out
                                                    : 0U);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[1U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_4[2U])) 
                                     << 0x0000001bU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_4[1U])) 
                                       >> 5U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_5[0U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_4[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_5[1U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_4[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_5[2U] = 
        ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB 
          << 0x0000000aU) | vlSelfRef.__VdfgRegularize_he50b618e_0_4[2U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_5[3U] = 
        (0x00006000U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB 
                        >> 0x00000016U));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret) 
           || (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret)
            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r
            : ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr)
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mtvec_r
                : 0U));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub 
        = ((8U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr)) 
           | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec 
        = (((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)) 
            & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid)) 
           & (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid 
        = (1U & ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                  ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid)
                  : vlSelfRef.__VdfgRegularize_he50b618e_0_2));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
            ? ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))
                ? ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                    ? 3U : ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                             ? 1U : 6U)) : 0U) : ((1U 
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
                                                       : 0U))))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid) 
           & vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast
           [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc 
        = ((2U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
            ? ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__dnpc_r
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r)
            : ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r
            : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid 
        = ((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict)) 
           & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData 
        = ((0x41U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))
            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r
            : ((0x42U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))
                ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mcause_r)
                : ((0U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))
                    ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mstatus_r
                    : ((5U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))
                        ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mtvec_r
                        : ((0x11U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))
                            ? 0x79737978U : ((0x12U 
                                              == (0x000000ffU 
                                                  & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))
                                              ? 0x017e14e6U
                                              : 0U))))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[2U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_5[3U])) 
                                     << 0x00000016U) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_5[2U])) 
                                       >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_6[0U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_5[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_6[1U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_5[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_6[2U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_5[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_6[3U] = 
        ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
          << 0x0000000fU) | vlSelfRef.__VdfgRegularize_he50b618e_0_5[3U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_6[4U] = 
        (0x00060000U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
                        >> 0x00000011U));
    vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__next_read 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
            ? (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid) 
                & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid)))
                ? 2U : 0U) : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                               ? (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg) 
                                   & ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg) 
                                      & (0U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg))))
                                   ? 1U : 2U) : ((1U 
                                                  == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                                                  ? 
                                                 (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)))
                                                   ? 0U
                                                   : 1U)
                                                  : 0U)));
    vlSelfRef.__Vtableidx1 = (4U | (((((((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)) 
                                         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast)) 
                                        << 3U) | ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready) 
                                                  << 2U)) 
                                      | ((2U & ((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)) 
                                                << 1U)) 
                                         | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag
                                            [(3U & 
                                              (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                               >> 4U))] 
                                            == (0x0003ffffU 
                                                & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                                   >> 6U))))) 
                                     << 3U) | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__next_state 
        = Vnpc_top__ConstPool__TABLE_heee80908_0[vlSelfRef.__Vtableidx1];
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
             & (0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw))) 
            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))
            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result
            : ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                 & (0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw))) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW
                : ((0U == (0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 0x00000014U)))
                    ? 0U : ((0x0eU >= (0x0000000fU 
                                       & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                           >> 0x00000014U) 
                                          - (IData)(1U))))
                             ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf
                            [(0x0000000fU & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 0x00000014U) 
                                             - (IData)(1U)))]
                             : 0U))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
             & (0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw))) 
            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))
            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result
            : ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                 & (0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw))) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW
                : ((0U == (0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 0x0000000fU)))
                    ? 0U : ((0x0eU >= (0x0000000fU 
                                       & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                           >> 0x0000000fU) 
                                          - (IData)(1U))))
                             ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf
                            [(0x0000000fU & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 0x0000000fU) 
                                             - (IData)(1U)))]
                             : 0U))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready) 
           & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid) 
              & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__next_state 
        = (1U & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)
                  ? (~ (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready) 
                         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid)) 
                        | (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))))
                  : ((2U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
                     & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready))));
    vlSelfRef.__Vtableidx4 = ((((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__finish_r) 
                                << 7U) | (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready) 
                                           << 6U) | 
                                          ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux) 
                                           << 4U))) 
                              | (((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
                                  << 3U) | (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid) 
                                             << 2U) 
                                            | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__next_state 
        = Vnpc_top__ConstPool__TABLE_h27af0b9b_0[vlSelfRef.__Vtableidx4];
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[3U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_6[4U])) 
                                     << 0x00000011U) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_6[3U])) 
                                       >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_7[0U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_6[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_7[1U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_6[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_7[2U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_6[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_7[3U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_6[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_7[4U] = 
        ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
          << 0x00000014U) | vlSelfRef.__VdfgRegularize_he50b618e_0_6[4U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_7[5U] = 
        (0x00400000U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
                        >> 0x0000000cU));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list[1U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(
                                                     (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 
                                                      >> 0x0000001fU))) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(
                                                       ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 
                                                         << 1U) 
                                                        | (IData)(
                                                                  ((0x0000000100000000ULL 
                                                                    | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))) 
                                                                   >> 0x00000020U))))) 
                                       >> 1U)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[0U] 
        = (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData 
        = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr))
            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward
            : ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr))
                ? (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData 
                   | vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward)
                : 0U));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[4U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_7[5U])) 
                                     << 0x0000000cU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_7[4U])) 
                                       >> 0x00000014U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_8[0U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_7[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_8[1U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_7[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_8[2U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_7[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_8[3U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_7[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_8[4U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_7[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_8[5U] = 
        ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
          << 0x00000019U) | vlSelfRef.__VdfgRegularize_he50b618e_0_7[5U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_8[6U] = 
        (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
         >> 7U);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key) 
                       == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key) 
                          == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key) 
                       == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key) 
                          == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[5U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_8[6U])) 
                                     << 7U) | ((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_8[5U])) 
                                               >> 0x00000019U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[0U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_8[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[1U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_8[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[2U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_8[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[3U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_8[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[4U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_8[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[5U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_8[5U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[6U] = 
        ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
          << 0x0000001eU) | vlSelfRef.__VdfgRegularize_he50b618e_0_8[6U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[7U] = 
        (0x40000000U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
                        >> 2U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_9[8U] = 6U;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA)) 
                                    + (((- (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub))) 
                                        ^ (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))) 
                                       + (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub)))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[6U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_9[8U])) 
                                     << 0x00000022U) 
                                    | (((QData)((IData)(
                                                        vlSelfRef.__VdfgRegularize_he50b618e_0_9[7U])) 
                                        << 2U) | ((QData)((IData)(
                                                                  vlSelfRef.__VdfgRegularize_he50b618e_0_9[6U])) 
                                                  >> 0x0000001eU))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[0U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[1U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[2U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[3U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[4U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[5U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[5U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[6U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[6U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[7U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_9[7U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[8U] = 
        ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ 
          << 3U) | vlSelfRef.__VdfgRegularize_he50b618e_0_9[8U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_10[9U] = 
        (0x000000d8U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ 
                        >> 0x0000001dU));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r 
        = ((8U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
            ? ((4U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                ? ((2U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                    ? 0U : ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                             ? VL_SHIFTRS_III(32,32,5, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA, 
                                              (0x0000001fU 
                                               & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))
                             : 0U)) : ((2U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                        ? ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                            ? 0U : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)
                                        : ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                            ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add))))
            : ((4U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                ? ((2U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                    ? ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                        ? (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                           & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)
                        : (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                           | vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))
                    : ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                        ? (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                           >> (0x0000001fU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))
                        : (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                           ^ vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)))
                : ((2U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                    ? ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                        ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add)
                        : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add))
                    : ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                        ? (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                           << (0x0000001fU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))
                        : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add)))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[7U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_10[9U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_10[8U])) 
                                       >> 3U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[0U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[1U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[2U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[3U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[4U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[5U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[5U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[6U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[6U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[7U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[7U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[8U] = 
        vlSelfRef.__VdfgRegularize_he50b618e_0_10[8U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[9U] = 
        ((0xfff00000U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                         << 8U)) | vlSelfRef.__VdfgRegularize_he50b618e_0_10[9U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_11[0x0000000aU] 
        = (0x00000500U | (0x000fffffU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                         >> 0x00000018U)));
    if ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__overflow 
            = (((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                 >> 0x1fU) == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB 
                               >> 0x1fU)) & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r 
                                              ^ vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA) 
                                             >> 0x1fU));
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__less_r 
            = ((8U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                ? ((1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                             >> 2U))) && ((1U & (~ 
                                                 ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                                                  >> 1U))) 
                                          && ((1U & 
                                               (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))) 
                                              && (1U 
                                                  & (IData)(
                                                            (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                             >> 0x00000020U))))))
                : ((1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                             >> 2U))) && (1U & ((2U 
                                                 & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                                                  ? (IData)(
                                                            (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                             >> 0x00000020U))
                                                  : (IData)(
                                                            (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                             >> 0x00000020U)))
                                                 : 
                                                ((1U 
                                                  & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))) 
                                                 && (1U 
                                                     & (IData)(
                                                               (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
                                                                >> 0x00000020U))))))));
    } else {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__overflow 
            = (((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                 ^ vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB) 
                & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r 
                   ^ vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA)) 
               >> 0x1fU);
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__less_r 
            = (1U & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__overflow)
                      ? (~ (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r 
                            >> 0x1fU)) : (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r 
                                          >> 0x1fU)));
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[8U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_11[0x0000000aU])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_11[9U])) 
                                       >> 8U)));
}

VL_ATTR_COLD void Vnpc_top___024root___eval_stl(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_stl\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vnpc_top___024root___stl_sequent__TOP__0(vlSelf);
        Vnpc_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vnpc_top___024root___eval_phase__stl(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_phase__stl\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnpc_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vnpc_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vnpc_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vnpc_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vnpc_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vnpc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vnpc_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpc_top___024root____Vm_traceActivitySetAll(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root____Vm_traceActivitySetAll\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vnpc_top___024root___ctor_var_reset(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___ctor_var_reset\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->npc_top__DOT__axi_slave_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10781182764260763020ull);
    vlSelf->npc_top__DOT__axi_slave_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3079268692289798361ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__ifu_prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13231237398243462582ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__snpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15142123364188199179ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17233803415593789264ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__mRegWr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2105647393833094355ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__dataA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11980561518482035574ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__dataB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8813082927359096795ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__rs1_forward = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14465947972802899753ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5701094652650337557ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__flush_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17448562509232636961ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4238752239609246348ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2440520163217103011ull);
    }
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 912690292057212156ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2604414708867022280ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2110286797449805610ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9356732670333802307ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6674088500283154946ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6669756587485105444ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11697220499556485915ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3494278522367635208ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12933309793626681628ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5556534827417968709ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2811895117818321582ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16393713555033744308ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11848694079175324446ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6511416894576924873ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5504852773888345992ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11492281024176274957ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8806986938176251333ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9953181958125305265ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3285510892437615674ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__Branch_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3484228407969985749ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15283516241462031614ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6726436101375920818ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2486273160343019864ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3354321260920390424ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1425929464866747559ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13320779152518771815ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__finish_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11177729805116405811ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9914241343113314249ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgExtracted_h15b8dab5__0 = 0;
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1 = 0;
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_2 = 0;
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_3 = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 17645608822722952058ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4071072947396713460ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5550587282014574295ull);
    }
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5853802150997336770ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5941694387867782238ull);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7322654484477389829ull);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17609198865840032645ull);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7138320006190156897ull);
    }
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11885701207308459810ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10859984429824112455ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13370437121230542990ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14307141145697895286ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12194637628162894708ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 753510967658451524ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mcause_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5995867441414529357ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5808986141335811673ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mstatus_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2978553414111045784ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mtvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2387560113195163960ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2097534567191066351ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5141289050499105100ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12576877771772588446ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8746898920137519028ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8105266439425890983ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8117764394722343720ull);
    }
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14227089242053924112ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13188331622604495419ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3684941439724874985ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15090639828282856193ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15057107539760430722ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 572628413434539228ull);
    }
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7156287887994664849ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10324933302557323172ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_register__DOT____Vlvbound_h72517ad8__0 = 0;
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8771640592230241463ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11695516114871949773ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18036358475660564310ull);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6794222014426454136ull);
    }
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2788549121479238006ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 164253194195164482ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 126331968323647707ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__less_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 459767609141554926ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2355993558089331916ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10633272071994552997ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4650129470021599462ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12342930771972424680ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1145893276617209771ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7412238042644064651ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1697999583709940022ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4069092904578728068ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__RegWr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5832551193372651289ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__branch_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5624064397628076929ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemtoReg_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5414409734798739907ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemWr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8051204873882563309ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemOp_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1271665128372329730ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17795198207481956849ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__dnpc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18257015730698826327ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__Rw_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15528741047741444862ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 964361492974017360ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5458302435611653792ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5799745890661786431ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mpcWr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8713610301988748987ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9932015556866285712ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10434826844860617008ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_wr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11777897267790525427ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11894298810668304113ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12229944692254127182ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4839515076243357179ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8527765923726516976ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__val = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6261506421692351151ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6352298484654559513ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5019986805125095681ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17744079671736516091ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14896396158240109614ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15632456803379367936ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16958049117242785212ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2528390593720366167ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6232864344928581626ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3928619940167548158ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15522377085061609092ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2542570764496838112ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5626339421376456732ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4199413721009954912ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5449641224356291095ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15677350650316738799ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3104225507450097035ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10894644620467501823ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13992191296146785068ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18326933358157515454ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15392527536448643562ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15572972920860114929ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__pc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12576732682918094552ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851430670418527654ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3412984449274261839ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2994404358840742034ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 293843699202733035ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11606263410609043739ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14528551058880758011ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16606140857333785060ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14536316066310667716ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 323838580279404126ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6163974638107300201ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10997740845745953955ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10610744768884850634ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13120582524795808479ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11962941005267929238ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 768496599760364681ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 891992893527627866ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12800329217089395752ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3968798646543734477ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13704639407871255305ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9541396187351037925ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 686787031434919578ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12309681663863221864ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12494917686102747648ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14665507620376512373ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1621377103402188867ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 43464194989860919ull);
    vlSelf->npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1221892794075303249ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__total_read_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16072802611301025022ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18423933224438234998ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__total_read_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3894503376105629367ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11723553519387120366ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__total_wr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15200369195479926762ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__counter_wr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16944641946705173876ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc_top__DOT__u_axi4_delayer__DOT__latency_read[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5019315667370309189ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16350438320945964369ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3914740800876046238ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18064886366112181442ull);
    }
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__wpt_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9523385794870476887ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__rpt_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12509236438080966608ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__current_read = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15876646676414801835ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__next_read = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12237160459754506363ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__state_rd_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8465253636336564537ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__state_wr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2911387518946448472ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__counter_read = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14439913295926468369ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7760122011558245429ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__latency_wr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6662501186016789932ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7934513281254919642ull);
    vlSelf->npc_top__DOT__u_axi4_delayer__DOT__fifo_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12704126654488047807ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_state_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2227446061500649023ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_state_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1100746486364371008ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_state_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8400300811619883003ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_state_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4839222655160755641ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__mem_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14625333221379167295ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__mem_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14239786626994891281ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_id_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12223014720809681196ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_id_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13410468017977800236ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_addr_reg = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 18339099855628207518ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_addr_next = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 16636655546690496833ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 771151331776850332ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_count_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12998794741188040735ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13662728465390989254ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_size_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1409252586011398993ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_burst_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3460866844084937156ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__read_burst_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14009261348863547585ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_id_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9384930440533666576ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_id_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6627231652693141662ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_addr_reg = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 5776378427303416584ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_addr_next = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 1754012480709785582ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7964147241758993637ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_count_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1096183381989080028ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_size_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6178602216053374956ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_size_next = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15357075315433152062ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_burst_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4886761107747232186ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__write_burst_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13277563741221043837ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16461762940414456623ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8026360742981862497ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9950548245234672475ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14328251513877047397ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15348843002669033564ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8281571963258681991ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7339056561034063888ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2410127827599679223ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5407379286853469041ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5862937862221732564ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9519514989142865817ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9205594073551133580ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17261377130573267844ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11545945870643891218ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2287934784864443160ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1523537158424826179ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1164447138247160414ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13784617292491568921ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13253455241250059716ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_pipe_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17279542371819716160ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4539794449994356387ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6832049498347815350ull);
    vlSelf->npc_top__DOT__u_axi_ram__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1159292336262210937ull);
    vlSelf->npc_top__DOT__u_uart_npc__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17741041799125257398ull);
    vlSelf->npc_top__DOT__u_uart_npc__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11403351464098019826ull);
    vlSelf->__VdfgRegularize_he50b618e_0_2 = 0;
    VL_ZERO_RESET_W(74, vlSelf->__VdfgRegularize_he50b618e_0_4);
    VL_ZERO_RESET_W(111, vlSelf->__VdfgRegularize_he50b618e_0_5);
    VL_ZERO_RESET_W(148, vlSelf->__VdfgRegularize_he50b618e_0_6);
    VL_ZERO_RESET_W(185, vlSelf->__VdfgRegularize_he50b618e_0_7);
    VL_ZERO_RESET_W(222, vlSelf->__VdfgRegularize_he50b618e_0_8);
    VL_ZERO_RESET_W(259, vlSelf->__VdfgRegularize_he50b618e_0_9);
    VL_ZERO_RESET_W(296, vlSelf->__VdfgRegularize_he50b618e_0_10);
    VL_ZERO_RESET_W(333, vlSelf->__VdfgRegularize_he50b618e_0_11);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vtableidx7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_17 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
