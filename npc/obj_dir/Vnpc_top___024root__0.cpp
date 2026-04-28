// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc_top.h for the primary calling header

#include "Vnpc_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vnpc_top___024root___eval_triggers__ico(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_triggers__ico\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnpc_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vnpc_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___trigger_anySet__ico\n"); );
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

void Vnpc_top___024root___ico_sequent__TOP__0(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___ico_sequent__TOP__0\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst 
        = ((IData)(vlSelfRef.reset) | (IData)(((0x0000000cU 
                                                == 
                                                (0x0000007cU 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata)) 
                                               & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready))));
}

void Vnpc_top___024root___eval_ico(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_ico\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vnpc_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vnpc_top___024root___eval_phase__ico(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_phase__ico\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vnpc_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vnpc_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vnpc_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vnpc_top___024root___eval_triggers__act(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_triggers__act\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnpc_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vnpc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___trigger_anySet__act\n"); );
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

void Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(IData/*31:0*/ no);
void Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(IData/*31:0*/ no);
void Vnpc_top___024unit____Vdpiimwrap_icache_add_TOP____024unit(IData/*31:0*/ no);
void Vnpc_top___024unit____Vdpiimwrap_call_ebreak_TOP____024unit();
void Vnpc_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ addr, CData/*7:0*/ wmask, IData/*31:0*/ data);
extern const VlUnpacked<CData/*1:0*/, 128> Vnpc_top__ConstPool__TABLE_hdcd20c3c_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vnpc_top__ConstPool__TABLE_hf5b1d39b_0;
void Vnpc_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*0:0*/, 32> Vnpc_top__ConstPool__TABLE_hb5cef33b_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vnpc_top__ConstPool__TABLE_hd38a96af_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnpc_top__ConstPool__TABLE_h9f8b7679_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnpc_top__ConstPool__TABLE_h6374ab4c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vnpc_top__ConstPool__TABLE_heee80908_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vnpc_top__ConstPool__TABLE_h27af0b9b_0;

void Vnpc_top___024root___nba_sequent__TOP__0(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___nba_sequent__TOP__0\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_pmem_read__16__Vfuncout;
    __Vfunc_pmem_read__16__Vfuncout = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*1:0*/ __Vdly__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt;
    __Vdly__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt = 0;
    QData/*63:0*/ __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time;
    __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time = 0;
    CData/*2:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__wpt_r = 0;
    CData/*2:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__rpt_r;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__rpt_r = 0;
    IData/*31:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0 = 0;
    IData/*31:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 = 0;
    IData/*31:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1 = 0;
    IData/*31:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 = 0;
    CData/*1:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__state_wr;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__state_wr = 0;
    IData/*31:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr = 0;
    IData/*31:0*/ __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr = 0;
    CData/*0:0*/ __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v0;
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v0 = 0;
    IData/*17:0*/ __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4;
    __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4 = 0;
    CData/*1:0*/ __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4;
    __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4 = 0;
    CData/*0:0*/ __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4;
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4 = 0;
    IData/*31:0*/ __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0;
    __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 = 0;
    CData/*1:0*/ __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0;
    __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 = 0;
    CData/*1:0*/ __VdlyDim1__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0;
    __VdlyDim1__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 = 0;
    CData/*0:0*/ __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0;
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 = 0;
    IData/*31:0*/ __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0;
    __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0 = 0;
    CData/*3:0*/ __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0;
    __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0;
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0;
    __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0 = 0;
    CData/*2:0*/ __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0;
    __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0;
    __VdlySet__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0 = 0;
    IData/*31:0*/ __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0;
    __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0 = 0;
    CData/*2:0*/ __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0;
    __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0 = 0;
    CData/*3:0*/ __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0;
    __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0 = 0;
    CData/*2:0*/ __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0;
    __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0 = 0;
    CData/*0:0*/ __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0;
    __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0 = 0;
    CData/*2:0*/ __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0;
    __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0 = 0;
    // Body
    if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss) {
        Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(1U);
    }
    if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block) {
        Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(0U);
    }
    if (((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay)) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss))) {
        Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(1U);
    }
    if (((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay)) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block))) {
        Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(0U);
    }
    __Vdly__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt;
    if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready) {
        Vnpc_top___024unit____Vdpiimwrap_icache_add_TOP____024unit(0U);
    }
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr;
    if (VL_UNLIKELY((((IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r) 
                      == ((IData)(1U) + (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r)))))) {
        VL_WRITEF_NX("%x, %x\n",0,3,vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r,
                     3,(IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/dengzibin/ysyx-workbench/npc/vsrc_npc/axi4_delayer.v", 280, "");
    }
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__state_wr 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr;
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__rpt_r 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r;
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0 = 0U;
    if ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))) {
        Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(6U);
    }
    if (((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready))) {
        Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(6U);
    }
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v0 = 0U;
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4 = 0U;
    __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 = 0U;
    if (((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag
          [(3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                  >> 4U))] == (0x0003ffffU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                              >> 6U))) 
         & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)))) {
        Vnpc_top___024unit____Vdpiimwrap_icache_add_TOP____024unit(1U);
    }
    if (((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
         & (6U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) {
        Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(2U);
    }
    if (((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
         & ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode)) 
            | (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))))) {
        Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(2U);
    }
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__wpt_r 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
    __VdlySet__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0 = 0U;
    if (VL_UNLIKELY((((1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state)) 
                      & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid))))) {
        VL_WRITEF_NX("%c",0,8,((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                       >> 0x00000018U))
                                ? 0U : (0x000000ffU 
                                        & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata)));
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
    }
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict) 
         & (0U == (0x0000007cU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)))) {
        Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(5U);
    }
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict) 
         & (0U != (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                  >> 2U))))) {
        Vnpc_top___024unit____Vdpiimwrap_cycle_add_TOP____024unit(4U);
    }
    if ((((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay)) 
          & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict)) 
         & (0U == (0x0000007cU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)))) {
        Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(5U);
    }
    if ((((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay)) 
          & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict)) 
         & (0U != (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                  >> 2U))))) {
        Vnpc_top___024unit____Vdpiimwrap_time_add_TOP____024unit(4U);
    }
    __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time;
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_wr_r) 
         & (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_r)))) {
        Vnpc_top___024unit____Vdpiimwrap_call_ebreak_TOP____024unit();
    }
    if (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_wr_en) {
        Vnpc_top___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                                   (0x07fffffcU 
                                                                    & vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg), 
                                                                   ((2U 
                                                                     == 
                                                                     (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                                      >> 0x00000018U))
                                                                     ? 0U
                                                                     : 
                                                                    ((0U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                                                      ? 
                                                                     ((2U 
                                                                       & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                                       ? 
                                                                      ((1U 
                                                                        & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                                        ? 8U
                                                                        : 4U)
                                                                       : 
                                                                      ((1U 
                                                                        & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                                        ? 2U
                                                                        : 1U))
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                                                       ? 
                                                                      ((0U 
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
                                                                       : 0x0fU))), 
                                                                   ((2U 
                                                                     == 
                                                                     (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                                      >> 0x00000018U))
                                                                     ? 0U
                                                                     : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata));
    }
    if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__unnamedblk1__DOT__i = 4U;
        __Vdly__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt = 0U;
        __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v0 = 1U;
    } else if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec) {
        __Vdly__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt)));
        __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4 
            = (0x0003ffffU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                              >> 6U));
        __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4 
            = (3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                     >> 4U));
        __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4 = 1U;
    }
    __Vtableidx8 = ((((((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid) 
                        << 3U) | ((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state)) 
                                  << 2U)) | (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid))) 
                     << 3U) | (((IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr) 
                                << 1U) | (IData)(vlSelfRef.reset)));
    __Vdly__npc_top__DOT__u_axi4_delayer__DOT__state_wr 
        = Vnpc_top__ConstPool__TABLE_hdcd20c3c_0[__Vtableidx8];
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr) 
         & (0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT____Vlvbound_h72517ad8__0 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW;
        if ((0x0eU >= (0x0000000fU & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw) 
                                      - (IData)(1U))))) {
            __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0 
                = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT____Vlvbound_h72517ad8__0;
            __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0 
                = (0x0000000fU & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw) 
                                  - (IData)(1U)));
            __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0 = 1U;
        }
    }
    if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec) {
        __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 
            = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata
                : 0U);
        __VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt;
        __VdlyDim1__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 
            = (3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                     >> 4U));
        __VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0 = 1U;
    }
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_next;
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr) 
         & (0U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mstatus_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData;
    }
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr) 
         & (5U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mtvec_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData;
    }
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next;
    if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_out) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__pc_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mcause_r 
            = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r)
                ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r)
                : ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r))
                    ? 4U : ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r))
                             ? 7U : 0U)));
    } else {
        if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr) 
             & (0x41U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm)))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r 
                = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData;
        }
        if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr) 
             & (0x42U == (0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm)))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mcause_r 
                = (0x0000000fU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData);
        }
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block;
    if (vlSelfRef.reset) {
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr = 0U;
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr = 0U;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr;
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1 = 0U;
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 = 0U;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1;
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0 = 0U;
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 = 0U;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0;
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__rpt_r = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr 
                = ((IData)(8U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr);
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
                = ((IData)(1U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr);
        } else if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))) {
            if ((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
                 == vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr)) {
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr;
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr;
            } else {
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr;
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
                    = ((IData)(1U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr);
            }
        } else if ((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr = 0U;
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr = 0U;
        }
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_wr;
        if ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1 
                = ((IData)(8U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1);
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 
                = ((IData)(1U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1);
        } else if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1))) {
            if ((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 
                 == vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1)) {
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1;
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1;
            } else {
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 
                    = ((IData)(1U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1);
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1;
            }
        } else if ((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1 = 0U;
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 = 0U;
        }
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_1;
        if ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0 
                = ((IData)(8U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0);
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 
                = ((IData)(1U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0);
        } else if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))) {
            if ((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 
                 == vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0)) {
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0;
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0;
            } else {
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 
                    = ((IData)(1U) + vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0);
                __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0 
                    = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0;
            }
        } else if ((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0 = 0U;
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 = 0U;
        }
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__counter_read_0;
        if (((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read
              [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r] 
              <= vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read) 
             & (1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state)))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__rpt_r 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r)));
        }
    }
    vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r 
        = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__rpt_r;
    if (__VdlySet__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[__VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0] 
            = __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf__v0;
    }
    if (__VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v0) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[0U] = 0x0003ffffU;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[1U] = 0x0003ffffU;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[2U] = 0x0003ffffU;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[3U] = 0x0003ffffU;
    }
    if (__VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[__VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4] 
            = __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag__v4;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt 
        = __Vdly__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt;
    if (__VdlySet__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache[__VdlyDim1__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0][__VdlyDim0__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0] 
            = __VdlyVal__npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache__v0;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1 = 0U;
        __Vdly__npc_top__DOT__u_axi4_delayer__DOT__wpt_r = 0U;
    } else {
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1 
            = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1))
                ? (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid) 
                    & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid)))
                    ? 2U : 0U) : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1))
                                   ? ((((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg) 
                                        & (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg)) 
                                       & (1U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg)))
                                       ? 1U : 2U) : 
                                  ((1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1))
                                    ? (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast) 
                                        & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)))
                                        ? 0U : 1U) : 0U)));
        if (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg) 
             & (IData)(vlSelfRef.npc_top__DOT__axi_slave_rready))) {
            __Vdly__npc_top__DOT__u_axi4_delayer__DOT__wpt_r 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r)));
            __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0 
                = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_pipe_reg;
            __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0 
                = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
            __VdlySet__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0 = 1U;
            __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0 
                = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg))
                    ? vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0
                    : vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1);
            __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0 
                = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
            __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0 
                = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg;
            __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0 
                = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
            __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0 
                = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg;
            __VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0 
                = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
        }
    }
    vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r 
        = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__wpt_r;
    vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0 
        = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_0;
    vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1 
        = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_read_1;
    if (__VdlySet__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0) {
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[__VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0] 
            = __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata__v0;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[__VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0] 
            = __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast__v0;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[__VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0] 
            = __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__latency_read__v0;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[__VdlyDim0__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0] 
            = __VdlyVal__npc_top__DOT__u_axi4_delayer__DOT__fifo_rid__v0;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_next;
    if (vlSelfRef.reset) {
        __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time = 0ULL;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg = 0U;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_reg = 0U;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg = 0U;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg = 0U;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg = 0U;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_wr = 0U;
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__finish_r = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r = 0xffffffffU;
    } else {
        if (((4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
             & (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state)))) {
            if ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr))) {
                __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                    = (((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                                         >> 0x20U))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata)));
            } else if ((4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr))) {
                __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                    = (((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata)) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time)));
            }
        } else {
            __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                = (1ULL + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time);
        }
        if ((((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg) 
              & (2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))) 
             | ((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state)) 
                & (2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))))) {
            vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_wr 
                = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr;
        }
        vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr 
            = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__total_wr;
        if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready) 
             & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__finish_r 
                = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__flush_r;
        }
        if (((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                    ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata
                    : ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                               >> 0x00000018U)) ? (
                                                   (0U 
                                                    == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr))
                                                    ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time)
                                                    : (IData)(
                                                              (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                                                               >> 0x00000020U)))
                        : 0U));
        }
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
        = __Vdly__npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata
        [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r];
    if ((1U & ((~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg)) 
               | (IData)(vlSelfRef.npc_top__DOT__axi_slave_rready)))) {
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg 
            = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_pipe_reg 
            = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_reg;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg 
            = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg;
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg 
            = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid 
        = ((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr 
            == vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_wr) 
           & (0U != vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr));
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if ((((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg) 
              & (2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))) 
             | ((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state)) 
                & (2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))))) {
            vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bid 
                = (1U | (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg));
        }
    }
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next;
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__RegWr_r 
            = (1U & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r) 
                     | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr)));
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mpcWr_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__branch_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__Branch_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__less_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r 
            = ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r);
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare_r)
            ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r)
            : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key 
        = (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r) 
            << 1U) | (0U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r));
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r 
            = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r)
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r);
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__dnpc_r 
            = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm 
               + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r);
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemWr_r 
            = (8U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                     >> 2U)));
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemtoReg_r 
            = (0U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                     >> 2U)));
    }
    if (((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
         & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemWr_r)
            ? 3U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemtoReg_r));
    if (((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state)) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr 
            = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                           >> 0x00000018U)) ? (0x0000000fU 
                                               & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                    : 0U) : 0U);
    } else if (((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state)) 
                & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr 
            = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                           >> 0x00000018U)) ? (0x0000000cU 
                                               & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                    : 0U) : 0U);
    }
    if (((IData)(vlSelfRef.reset) | (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r = 0U;
    } else {
        if (((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r = 0U;
        }
        if (((5U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid))) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r 
                = ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                           >> 0x00000018U)) ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp));
        }
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__next_state));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)) 
           | (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    if (((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
         & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemOp_r;
    }
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid 
        = vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid
        [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r];
    vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__next_read));
    vlSelfRef.npc_top__DOT__axi_slave_rready = ((2U 
                                                 == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read)) 
                                                | (2U 
                                                   == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1)));
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next;
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__Rw_r 
            = (0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                              >> 7U));
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemOp_r 
            = (7U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                     >> 0x0000000cU));
    }
    if (((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
         & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__pc_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_wr_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_r;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__flush_r = 0U;
    } else if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__flush_r 
            = (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state));
    }
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready) 
         & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r 
            = ((IData)(4U) + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r);
    }
    if (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_rd_en) {
        Vnpc_top___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                  (0x07fffffcU 
                                                                   & vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg), __Vfunc_pmem_read__16__Vfuncout);
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_reg 
            = __Vfunc_pmem_read__16__Vfuncout;
    }
    if (((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
         & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if ((((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg) 
              & (2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))) 
             | ((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state)) 
                & (2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))))) {
            vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp = 0U;
        }
    }
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid) 
         & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_wr_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_r 
            = ((0U != (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r))
                ? 0U : ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr)
                         ? 1U : ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal)
                                  ? 2U : ((0x00100073U 
                                           == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)
                                           ? 3U : ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall)
                                                    ? 0x0bU
                                                    : 0U)))));
    }
    if (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready) 
         & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata;
    }
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mpcWr_r)
            ? 2U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__val));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_out 
        = ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r)) 
           | ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r)) 
              | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid 
        = ((vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read
            [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r] 
            <= vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read) 
           & (1U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state)));
    vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr 
        = __Vdly__npc_top__DOT__u_axi4_delayer__DOT__state_wr;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
            ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r
            : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com);
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_next;
    if (vlSelfRef.reset) {
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg = 0U;
    }
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg) 
           & (~ ((IData)(vlSelfRef.npc_top__DOT__axi_slave_rready) 
                 | (~ (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg)))));
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_rd_en = 0U;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg;
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg;
    if (vlSelfRef.reset) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state = 0U;
    } else {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__next_state;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__next_state;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready 
        = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec 
        = (((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)) 
            & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid)) 
           & (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid) 
           & vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast
           [vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r]);
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next;
    if (vlSelfRef.reset) {
        vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg = 0U;
        vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r = 0x80000000U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state = 0U;
    } else {
        vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state 
            = vlSelfRef.npc_top__DOT__u_uart_npc__DOT__next_state;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__next_state;
        if (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready) {
            vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))
                    ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc
                    : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__snpc);
        }
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__next_state;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata 
        = ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
            ? ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r, 0x00000018U)
                : VL_SHIFTL_III(32,32,32, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r, 0x00000010U))
            : ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                ? VL_SHIFTL_III(32,32,32, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r, 8U)
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r));
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
    if ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                >> 0x00000018U))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid 
            = (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state));
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = 
            (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state));
    } else {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid;
        vlSelfRef.__VdfgRegularize_he50b618e_0_2 = 0U;
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) ? (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
               : (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg)));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid 
        = (1U & ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                  ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid)
                  : vlSelfRef.__VdfgRegularize_he50b618e_0_2));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) ? (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
               : ((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                             >> 0x0000001cU)) ? (0U 
                                                 == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                   : (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) & (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid 
        = ((2U != (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                   >> 0x00000018U)) & (4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid 
        = ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state)) 
           & ((2U != (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                      >> 0x00000018U)) & (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr 
        = ((6U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)) 
           & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr_r));
    if ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__next_state 
            = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))
                ? ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                    ? 3U : ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                             ? 1U : 6U)) : 0U);
    } else {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__next_state 
            = ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                ? ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready)
                    ? 2U : 1U) : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                   ? ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid)
                                       ? 6U : 2U) : 
                                  ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                    ? ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready)
                                        ? 4U : 3U) : 
                                   ((4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                     ? (((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                 >> 0x00000018U))
                                          ? (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                          : ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
                                             | (1U 
                                                == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))))
                                         ? 5U : 4U)
                                     : ((5U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                         ? ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid)
                                             ? 6U : 5U)
                                         : 0U)))));
    }
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__next_state));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1 
        = (IData)((0x00000070U == (0x0000707cU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI 
        = (((- (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
              >> 0x00000014U));
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
    vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next 
        = vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg;
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
    vlSelfRef.npc_top__DOT__axi_slave_awvalid = ((0x0aU 
                                                  != 
                                                  (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                                   >> 0x0000001cU)) 
                                                 & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode)));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc 
        = ((2U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
            ? ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__dnpc_r
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r)
            : ((1U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux))
                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r
                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1) 
           & (0x18U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                        >> 0x00000019U)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT____VdfgRegularize_heb7c188e_0_1) 
           & (0U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                     >> 0x00000019U)));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB;
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS;
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__snpc = 
        ((IData)(4U) + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r);
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata 
        = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
        [(3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                >> 4U))][(3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                >> 2U))];
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block 
        = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state) 
           & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready 
        = ((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)) 
           & (1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state)));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr 
        = ((0U != (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r)) 
           || ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr) 
               || ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal) 
                   || ((0x00100073U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr) 
                       || (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall)))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare 
        = ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr)) 
           | (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr)));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst 
        = ((IData)(vlSelfRef.reset) | (IData)(((0x0000000cU 
                                                == 
                                                (0x0000007cU 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata)) 
                                               & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready))));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready 
        = ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
           | (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)));
    if ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))) {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__RegWr_r;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw 
            = vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__Rw_r;
    } else {
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr = 0U;
        vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw = 0U;
    }
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr) 
                                                 & (1U 
                                                    != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode)));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid 
        = ((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict)) 
           & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state));
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
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add 
        = (0x00000001ffffffffULL & ((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA)) 
                                    + (((- (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub))) 
                                        ^ (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))) 
                                       + (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub)))));
    vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[8U] 
        = (0x0000001fffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__VdfgRegularize_he50b618e_0_11[0x0000000aU])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_11[9U])) 
                                       >> 8U)));
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
}

void Vnpc_top___024root___eval_nba(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_nba\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vnpc_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vnpc_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vnpc_top___024root___eval_phase__act(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_phase__act\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnpc_top___024root___eval_triggers__act(vlSelf);
    Vnpc_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vnpc_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vnpc_top___024root___eval_phase__nba(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_phase__nba\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vnpc_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vnpc_top___024root___eval_nba(vlSelf);
        Vnpc_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vnpc_top___024root___eval(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vnpc_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/dengzibin/ysyx-workbench/npc/sim_file/sim_npc/npc_top.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vnpc_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vnpc_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/dengzibin/ysyx-workbench/npc/sim_file/sim_npc/npc_top.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vnpc_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/dengzibin/ysyx-workbench/npc/sim_file/sim_npc/npc_top.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vnpc_top___024root___eval_phase__act(vlSelf));
    } while (Vnpc_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vnpc_top___024root___eval_debug_assertions(Vnpc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root___eval_debug_assertions\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
}
#endif  // VL_DEBUG
