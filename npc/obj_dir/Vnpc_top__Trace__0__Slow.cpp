// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vnpc_top__Syms.h"


VL_ATTR_COLD void Vnpc_top___024root__trace_init_sub__TOP__0(Vnpc_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_init_sub__TOP__0\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("npc_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_master_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"io_master_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"io_master_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"io_master_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+53,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"io_master_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"io_master_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_master_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_master_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"io_master_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"io_master_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"io_master_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"io_master_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"io_master_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_master_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"io_master_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_master_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"io_master_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+69,0,"io_master_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"io_master_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"io_master_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"io_master_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"io_master_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+502,0,"io_slave_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+503,0,"io_slave_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+502,0,"io_slave_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+504,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+502,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"io_slave_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+502,0,"io_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"axi_slave_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"axi_slave_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+76,0,"axi_slave_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"axi_slave_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"axi_slave_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"axi_slave_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+53,0,"axi_slave_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"axi_slave_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"axi_slave_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"axi_slave_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"axi_slave_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"axi_slave_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"axi_slave_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"axi_slave_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"axi_slave_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"axi_slave_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+57,0,"axi_slave_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"axi_slave_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+59,0,"axi_slave_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"axi_slave_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"axi_slave_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"axi_slave_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"axi_slave_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"axi_slave_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"axi_slave_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"axi_slave_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"axi_slave_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"axi_slave_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"axi_slave_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+88,0,"uart_slave_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"uart_slave_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+90,0,"uart_slave_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"uart_slave_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"uart_slave_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"uart_slave_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+53,0,"uart_slave_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"uart_slave_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"uart_slave_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"uart_slave_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"uart_slave_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"uart_slave_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"uart_slave_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"uart_slave_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"uart_slave_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+505,0,"uart_slave_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("u_axi4_delayer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+71,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+72,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+60,0,"out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"out_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"out_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+500,0,"out_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"out_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"out_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"out_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+501,0,"out_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+91,0,"uart_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"uart_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"uart_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"uart_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+500,0,"uart_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"uart_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"uart_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+92,0,"uart_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"uart_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"uart_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"uart_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"uart_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"uart_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"uart_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"uart_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+501,0,"uart_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"total_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"counter_read_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"total_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"counter_read_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"total_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"counter_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"IDLE_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"WAIT_OUT_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"BACK_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"IDLE_READ1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"WAIT_OUT_RREADY1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"BACK_READ1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"IDLE_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"WAIT_OUT_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"BACK_WR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("latency_read", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+101+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fifo_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+109+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fifo_rid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+117+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fifo_rlast", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+125+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+133,0,"wpt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+134,0,"rpt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+135,0,"current_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+137,0,"state_rd_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+138,0,"state_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+139,0,"counter_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"latency_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"fifo_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"fifo_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_axi_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+509,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"PIPELINE_OUTPUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"s_axi_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+500,0,"s_axi_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"s_axi_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"s_axi_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+74,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"s_axi_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"s_axi_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"s_axi_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"s_axi_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+501,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+80,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"s_axi_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"s_axi_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+60,0,"s_axi_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"s_axi_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"s_axi_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+57,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"s_axi_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"s_axi_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"s_axi_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"s_axi_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+512,0,"VALID_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"READ_STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+514,0,"READ_STATE_BURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+142,0,"read_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+143,0,"read_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+501,0,"WRITE_STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+515,0,"WRITE_STATE_BURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+516,0,"WRITE_STATE_RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+144,0,"write_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+145,0,"write_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+146,0,"mem_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"mem_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"read_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+149,0,"read_id_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"read_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+151,0,"read_addr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+152,0,"read_count_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"read_count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"read_size_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"read_size_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"read_burst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"read_burst_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+158,0,"write_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"write_id_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+160,0,"write_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+161,0,"write_addr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+162,0,"write_count_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+163,0,"write_count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"write_size_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+165,0,"write_size_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+166,0,"write_burst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"write_burst_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"s_axi_awready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"s_axi_awready_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"s_axi_wready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"s_axi_wready_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"s_axi_bid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+170,0,"s_axi_bid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"s_axi_bvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"s_axi_bvalid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"s_axi_arready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"s_axi_arready_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"s_axi_rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"s_axi_rid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+175,0,"s_axi_rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+517,0,"s_axi_rdata_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+176,0,"s_axi_rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"s_axi_rlast_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"s_axi_rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"s_axi_rvalid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"s_axi_rid_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"s_axi_rdata_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,0,"s_axi_rlast_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"s_axi_rvalid_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"s_axi_awaddr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+181,0,"s_axi_araddr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+182,0,"read_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+183,0,"write_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+518,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_cpu_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+69,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+502,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+519,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+501,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+502,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+502,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+503,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+502,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+519,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+501,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+502,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+504,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+502,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"Ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"Rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"Rw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+187,0,"inst_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"ifu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"ifu_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"ifu_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"ifu_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+520,0,"ifu_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"ifu_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"ifu_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"ifu_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"ifu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"ifu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"ifu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"ifu_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"ifu_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+195,0,"pc_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"pc_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"ifu_paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+522,0,"ifu_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"ifu_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"ifu_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+502,0,"ifu_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"pc_if_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+201,0,"decode_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"RegWr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+205,0,"MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"MemWr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"MemOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+208,0,"ALUAsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"ALUBsrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"ALUctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"mRegWr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+212,0,"snpc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"mcause_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"mcause_wr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"decode_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"lsu_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"lsu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"lsu_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+220,0,"lsu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+221,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+222,0,"mcause_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"pc_mreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"Next_pc_ls_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"Rw_ls_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"result_ls_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"regwr_ls_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"lsu_mode_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+223,0,"pc_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"mcause_wr_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"mcause_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"Next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"Rw_ex_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"result_ex_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"regwr_ex_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"lsu_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"flush_id_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"pc_ex_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"mcause_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"mcause_wr_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"imm_mreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"mreg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+240,0,"csr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"wrData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"dnpc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,0,"mpcWr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"mretPc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"pc_id_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"dataA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"dataB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"rs1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"rs2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+252,0,"less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"is_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"snpc_id_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"result_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+257,0,"lsu_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"lsu_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"lsu_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"lsu_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"lsu_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"lsu_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"lsu_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+260,0,"lsu_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"lsu_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"lsu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"lsu_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"lsu_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"lsu_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"lsu_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"lsu_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"lsu_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+268,0,"lsu_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"lsu_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"lsu_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"lsu_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"lsu_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"lsu_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"lsu_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+273,0,"lsu_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"lsu_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"lsu_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,0,"lsu_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"lsu_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"clint_slave_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"clint_slave_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"clint_slave_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"clint_slave_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"clint_slave_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+282,0,"clint_slave_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"clint_slave_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+284,0,"clint_slave_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"clint_slave_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"clint_slave_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"clint_slave_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"clint_slave_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"clint_slave_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"clint_slave_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"clint_slave_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+286,0,"clint_slave_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"clint_slave_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"clint_slave_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"clint_slave_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"clint_slave_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"clint_slave_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"clint_slave_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"clint_slave_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+291,0,"clint_slave_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"clint_slave_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"clint_slave_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+293,0,"clint_slave_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+292,0,"clint_slave_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"clint_slave_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("u_ALU_ysyx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"ALUctr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+248,0,"dataA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"dataB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+252,0,"less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"is_compare",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+295,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+296,0,"overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"less_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+297,0,"dataB_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+299,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+300,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+302,0,"result_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+304,0,"result_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+306,0,"result_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+308,0,"result_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+310,0,"result_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+312,0,"result_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+314,0,"result_right_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_EXU_ysyx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"snpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"dnpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+252,0,"less",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"is_compare",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"mpcWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"mcause_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"mcause_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"mcause_wr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"decode_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"decode_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"lsu_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"lsu_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"pc_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"pc_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"lsu_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"lsu_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+220,0,"lsu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"Next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"Rw_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"regwr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"RegWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+205,0,"MemtoReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"MemWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"MemOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+186,0,"Rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+234,0,"flush_finish",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"rs2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+316,0,"RegWr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+318,0,"MemtoReg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"MemWr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"MemOp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+320,0,"snpc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"dnpc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"Rw_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"Next_pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+324,0,"less_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"is_compare_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"mpcWr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"mcause_wr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+328,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+504,0,"WAIT_DEVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"WAIT_LSUREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"WAIT_PCREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"WAIT_DNPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+330,0,"result_com",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+331,0,"zero_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_Branch_Cond", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+317,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+324,0,"less",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"mpcWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+332,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+333,0,"key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_IDU_ysyx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"snpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"snpc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"inst_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"inst_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"pc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"decode_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"decode_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"Rw_exu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"load_exu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+225,0,"Rw_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"load_lsu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+198,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+502,0,"in_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"flush_finish",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"flush_finish_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"RegWr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+205,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"MemWr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"MemOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+208,0,"ALUAsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"ALUBsrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"ALUctr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"mRegWr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+213,0,"mcause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"mcause_wr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"mret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"Ra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"Rb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+186,0,"Rw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+334,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+207,0,"fun3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+335,0,"fun7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+336,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"val_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+341,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"snpc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+342,0,"pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"RegWr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"ALUAsrc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"ALUBsrc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"Branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+210,0,"ALUctr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+344,0,"illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"cause_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"WAIT_INST_VALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"WAIT_DECODE_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+347,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"conflict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"finish_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"conf_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"conf_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_extop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+524,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+526,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+352,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 369,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+524,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+526,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+352,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 369,0);
    tracep->declBus(c+527,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+364+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 36,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+384+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+394,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+395,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ill_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+529,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+334,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+522,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+530,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+529,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+334,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+522,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+530,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+533,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+396,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+397,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_IFU_ysyx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"snpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"pc_exu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+196,0,"pc_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"pc_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"in_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+522,0,"in_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"in_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"flush_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_LSU_ysyx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"lsu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"lsu_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+220,0,"lsu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+229,0,"Next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+237,0,"mcause_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"mcause_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+222,0,"mcause_wr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"Rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+232,0,"regwr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"Next_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"Rw_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"regwr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"lsu_mode_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+217,0,"lsu_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"lsu_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+260,0,"master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+268,0,"master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+273,0,"master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,0,"master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+398,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+399,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+504,0,"WAIT_LSUVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"WAIT_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"WAIT_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"WAIT_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"WAIT_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"WAIT_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+533,0,"WAIT_WBUREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+401,0,"lsu_mode_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+402,0,"memop_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+270,0,"Addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"DataIn_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"Next_pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"Rw_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+270,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+405,0,"regwr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"master_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"rresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+407,0,"bresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+408,0,"mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+221,0,"mcause_ls",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+409,0,"mcause_wr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"m_wstrb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+410,0,"r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_clint", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"clint_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"clint_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"clint_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"clint_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"clint_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+282,0,"clint_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"clint_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+284,0,"clint_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"clint_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"clint_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"clint_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"clint_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"clint_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"clint_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"clint_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+286,0,"clint_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"clint_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"clint_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"clint_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"clint_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"clint_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"clint_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"clint_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+291,0,"clint_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"clint_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"clint_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+293,0,"clint_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+292,0,"clint_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"clint_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+411,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+412,0,"m_time",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+414,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+415,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+504,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"WAIT_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"WAIT_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"WAIT_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_iCache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+522,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+502,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+520,0,"master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+507,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"BACK_INST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"TO_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"WAIT_INST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("icache", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+416,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+418,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+420,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+424,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+426,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+428,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cache_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+432+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 17,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+436,0,"pc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+437,0,"pc_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+439,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+441,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+442,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+443,0,"rec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"block_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"block_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"miss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"miss_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"miss_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mReg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"mret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"mcause_wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+238,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+240,0,"mRegwr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+241,0,"wrData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+214,0,"mcause_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"mretPc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,0,"mpcWr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"mRegData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+452,0,"mepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"mstatus_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"mtvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"mRegData_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"mretPc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,0,"mpcWr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+536,0,"mvendorid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"marchid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mux1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+507,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+455,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+507,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+526,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+455,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+538,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+458+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+462+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+464,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+465,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mux2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+507,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+466,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+507,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+526,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+466,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+538,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+469+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+46+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+473+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+475,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+476,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_register", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"busW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"Ra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+185,0,"Rb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"Rw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+227,0,"Regwr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"busA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"busB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+477+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_xBar", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"ifu_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"ifu_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"ifu_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"ifu_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+520,0,"ifu_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"ifu_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"ifu_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+191,0,"ifu_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"ifu_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"ifu_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,0,"ifu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"ifu_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"ifu_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+257,0,"lsu_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"lsu_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"lsu_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"lsu_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"lsu_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+521,0,"lsu_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"lsu_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+260,0,"lsu_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"lsu_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"lsu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"lsu_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"lsu_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"lsu_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"lsu_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+266,0,"lsu_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"lsu_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+268,0,"lsu_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"lsu_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"lsu_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"lsu_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"lsu_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"lsu_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+515,0,"lsu_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+273,0,"lsu_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"lsu_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"lsu_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"lsu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+277,0,"lsu_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"lsu_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+65,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+69,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+63,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"clint_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"clint_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+280,0,"clint_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"clint_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"clint_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+282,0,"clint_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"clint_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+284,0,"clint_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"clint_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"clint_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"clint_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+261,0,"clint_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"clint_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"clint_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"clint_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+286,0,"clint_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"clint_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"clint_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"clint_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"clint_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+500,0,"clint_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"clint_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+283,0,"clint_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+291,0,"clint_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"clint_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"clint_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+293,0,"clint_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+292,0,"clint_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"clint_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+504,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"IFU_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"LSU_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+492,0,"clint",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+494,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_uart_npc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+509,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+497,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"s_axi_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+500,0,"s_axi_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"s_axi_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+52,0,"s_axi_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"s_axi_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"s_axi_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"s_axi_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"s_axi_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+501,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"s_axi_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"WAIT_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"WAIT_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"WAIT_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+496,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnpc_top___024root__trace_init_top(Vnpc_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_init_top\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnpc_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnpc_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vnpc_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vnpc_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vnpc_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vnpc_top___024root__trace_register(Vnpc_top___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_register\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vnpc_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vnpc_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vnpc_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vnpc_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnpc_top___024root__trace_const_0_sub_0(Vnpc_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vnpc_top___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_const_0\n"); );
    // Body
    Vnpc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_top___024root*>(voidSelf);
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vnpc_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnpc_top___024root__trace_const_0_sub_0(Vnpc_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_const_0_sub_0\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+500,(0U),8);
    bufp->fullCData(oldp+501,(0U),2);
    bufp->fullBit(oldp+502,(0U));
    bufp->fullCData(oldp+503,(0U),4);
    bufp->fullIData(oldp+504,(0U),32);
    bufp->fullCData(oldp+505,(1U),4);
    bufp->fullIData(oldp+506,(8U),32);
    bufp->fullIData(oldp+507,(2U),32);
    bufp->fullIData(oldp+508,(1U),32);
    bufp->fullIData(oldp+509,(0x00000020U),32);
    bufp->fullIData(oldp+510,(0x0000001bU),32);
    bufp->fullIData(oldp+511,(4U),32);
    bufp->fullIData(oldp+512,(0x00000019U),32);
    bufp->fullBit(oldp+513,(0U));
    bufp->fullBit(oldp+514,(1U));
    bufp->fullCData(oldp+515,(1U),2);
    bufp->fullCData(oldp+516,(2U),2);
    bufp->fullIData(oldp+517,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_next),32);
    bufp->fullIData(oldp+518,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__i),32);
    bufp->fullCData(oldp+519,(0U),3);
    bufp->fullCData(oldp+520,(3U),8);
    bufp->fullCData(oldp+521,(2U),3);
    bufp->fullBit(oldp+522,(1U));
    bufp->fullIData(oldp+523,(3U),32);
    bufp->fullIData(oldp+524,(0x0000000aU),32);
    bufp->fullIData(oldp+525,(5U),32);
    bufp->fullIData(oldp+526,(0U),32);
    bufp->fullIData(oldp+527,(0x00000025U),32);
    bufp->fullIData(oldp+528,(0x0000000aU),32);
    bufp->fullIData(oldp+529,(0x0000000bU),32);
    __Vtemp_1[0U] = 0x18c10e06U;
    __Vtemp_1[1U] = 0xa2b6c802U;
    __Vtemp_1[2U] = 1U;
    bufp->fullWData(oldp+530,(__Vtemp_1),66);
    bufp->fullIData(oldp+533,(6U),32);
    bufp->fullIData(oldp+534,(0x0000000bU),32);
    bufp->fullIData(oldp+535,(0x00000012U),32);
    bufp->fullIData(oldp+536,(0x79737978U),32);
    bufp->fullIData(oldp+537,(0x017e14e6U),32);
    bufp->fullIData(oldp+538,(0x00000021U),32);
    bufp->fullIData(oldp+539,(2U),32);
}

VL_ATTR_COLD void Vnpc_top___024root__trace_full_0_sub_0(Vnpc_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vnpc_top___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_full_0\n"); );
    // Body
    Vnpc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc_top___024root*>(voidSelf);
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vnpc_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnpc_top___024root__trace_full_0_sub_0(Vnpc_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc_top___024root__trace_full_0_sub_0\n"); );
    Vnpc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<12>/*383:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+1,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+2,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+3,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+4,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+5,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+6,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+7,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+8,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+9,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+10,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+11,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+12,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+13,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+14,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+15,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[4]),6);
    bufp->fullCData(oldp+16,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[5]),6);
    bufp->fullCData(oldp+17,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[6]),6);
    bufp->fullCData(oldp+18,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[7]),6);
    bufp->fullCData(oldp+19,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[8]),6);
    bufp->fullCData(oldp+20,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[9]),6);
    bufp->fullCData(oldp+21,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__pair_list[10]),6);
    bufp->fullCData(oldp+22,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+23,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+24,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+25,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[3]),5);
    bufp->fullCData(oldp+26,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[4]),5);
    bufp->fullCData(oldp+27,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[5]),5);
    bufp->fullCData(oldp+28,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[6]),5);
    bufp->fullCData(oldp+29,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[7]),5);
    bufp->fullCData(oldp+30,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[8]),5);
    bufp->fullCData(oldp+31,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[9]),5);
    bufp->fullCData(oldp+32,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__key_list[10]),5);
    bufp->fullBit(oldp+33,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+34,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+35,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+36,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+37,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+38,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+39,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+40,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[7]));
    bufp->fullBit(oldp+41,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[8]));
    bufp->fullBit(oldp+42,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[9]));
    bufp->fullBit(oldp+43,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__data_list[10]));
    bufp->fullBit(oldp+44,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+45,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+46,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+47,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+48,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid));
    bufp->fullIData(oldp+49,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr),32);
    bufp->fullCData(oldp+50,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid),4);
    bufp->fullCData(oldp+51,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awsize),3);
    bufp->fullCData(oldp+52,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                               ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                          >> 0x00000018U))
                                   ? 0U : 1U) : 0U)),2);
    bufp->fullBit(oldp+53,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid));
    bufp->fullIData(oldp+54,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                      >> 0x00000018U))
                               ? 0U : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata)),32);
    bufp->fullCData(oldp+55,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                      >> 0x00000018U))
                               ? 0U : ((0U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                        ? ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                            ? ((1U 
                                                & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                ? 8U
                                                : 4U)
                                            : ((1U 
                                                & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                ? 2U
                                                : 1U))
                                        : ((1U == (3U 
                                                   & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                                ? 3U
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                                    ? 0x0cU
                                                    : 0U))
                                            : 0x0fU)))),4);
    bufp->fullBit(oldp+56,(((2U != (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                    >> 0x00000018U)) 
                            & (5U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))));
    bufp->fullBit(oldp+57,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid));
    bufp->fullIData(oldp+58,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                               ? (0xfffffff0U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)
                               : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                   ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? 0U : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                   : 0U))),32);
    bufp->fullCData(oldp+59,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid),4);
    bufp->fullCData(oldp+60,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                               ? 3U : 0U)),8);
    bufp->fullCData(oldp+61,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arsize),3);
    bufp->fullCData(oldp+62,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                               ? 1U : ((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                        ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                   >> 0x00000018U))
                                            ? 0U : 1U)
                                        : 0U))),2);
    bufp->fullBit(oldp+63,((1U & ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                   ? (3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state))
                                   : ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                              >> 0x00000018U))
                                       ? 0U : (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state)))))));
    bufp->fullBit(oldp+64,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                       >> 0x0000001cU))
                             ? (0U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                             : (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg))));
    bufp->fullBit(oldp+65,(((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
                            | (1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state)))));
    bufp->fullBit(oldp+66,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_bvalid));
    bufp->fullCData(oldp+67,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp),2);
    bufp->fullCData(oldp+68,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bid),4);
    bufp->fullBit(oldp+69,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_reg));
    bufp->fullBit(oldp+70,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid));
    bufp->fullIData(oldp+71,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata),32);
    bufp->fullBit(oldp+72,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast));
    bufp->fullCData(oldp+73,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid),4);
    bufp->fullBit(oldp+74,(vlSelfRef.npc_top__DOT__axi_slave_awvalid));
    bufp->fullIData(oldp+75,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                         >> 0x0000001cU))
                               ? 0U : (0x07ffffffU 
                                       & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr))),27);
    bufp->fullCData(oldp+76,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                         >> 0x0000001cU))
                               ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid))),4);
    bufp->fullBit(oldp+77,((2U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))));
    bufp->fullBit(oldp+78,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_reg));
    bufp->fullBit(oldp+79,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg));
    bufp->fullBit(oldp+80,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_reg));
    bufp->fullCData(oldp+81,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_reg),4);
    bufp->fullIData(oldp+82,((0x07ffffffU & ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                              ? (0xfffffff0U 
                                                 & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)
                                              : ((2U 
                                                  == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                                  ? 
                                                 ((2U 
                                                   == 
                                                   (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                                    >> 0x00000018U))
                                                   ? 0U
                                                   : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                                  : 0U)))),27);
    bufp->fullBit(oldp+83,(vlSelfRef.npc_top__DOT__axi_slave_rready));
    bufp->fullBit(oldp+84,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg));
    bufp->fullIData(oldp+85,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_pipe_reg),32);
    bufp->fullBit(oldp+86,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg));
    bufp->fullCData(oldp+87,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg),4);
    bufp->fullBit(oldp+88,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                       >> 0x0000001cU)) 
                            & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid))));
    bufp->fullIData(oldp+89,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                         >> 0x0000001cU))
                               ? (0x07ffffffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr)
                               : 0U)),27);
    bufp->fullCData(oldp+90,(((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                         >> 0x0000001cU))
                               ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awid)
                               : 0U)),4);
    bufp->fullBit(oldp+91,((0U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))));
    bufp->fullBit(oldp+92,((1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))));
    bufp->fullBit(oldp+93,((2U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))));
    bufp->fullBit(oldp+94,((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                      >> 0x0000001cU))));
    bufp->fullIData(oldp+95,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_0),32);
    bufp->fullIData(oldp+96,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_0),32);
    bufp->fullIData(oldp+97,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_read_1),32);
    bufp->fullIData(oldp+98,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read_1),32);
    bufp->fullIData(oldp+99,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__total_wr),32);
    bufp->fullIData(oldp+100,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_wr),32);
    bufp->fullIData(oldp+101,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[0]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[1]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[2]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[3]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[4]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[5]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[6]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_read[7]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[0]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[1]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[2]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[3]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[4]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[5]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[6]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rdata[7]),32);
    bufp->fullCData(oldp+117,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[0]),4);
    bufp->fullCData(oldp+118,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[1]),4);
    bufp->fullCData(oldp+119,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[2]),4);
    bufp->fullCData(oldp+120,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[3]),4);
    bufp->fullCData(oldp+121,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[4]),4);
    bufp->fullCData(oldp+122,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[5]),4);
    bufp->fullCData(oldp+123,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[6]),4);
    bufp->fullCData(oldp+124,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rid[7]),4);
    bufp->fullBit(oldp+125,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[0]));
    bufp->fullBit(oldp+126,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[1]));
    bufp->fullBit(oldp+127,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[2]));
    bufp->fullBit(oldp+128,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[3]));
    bufp->fullBit(oldp+129,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[4]));
    bufp->fullBit(oldp+130,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[5]));
    bufp->fullBit(oldp+131,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[6]));
    bufp->fullBit(oldp+132,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_rlast[7]));
    bufp->fullCData(oldp+133,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__wpt_r),3);
    bufp->fullCData(oldp+134,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__rpt_r),3);
    bufp->fullCData(oldp+135,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read),2);
    bufp->fullCData(oldp+136,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                                ? (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arvalid) 
                                    & (0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_arid)))
                                    ? 2U : 0U) : ((2U 
                                                   == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                                                   ? 
                                                  (((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_pipe_reg) 
                                                    & ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_pipe_reg) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_pipe_reg))))
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__current_read))
                                                    ? 
                                                   (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)))
                                                     ? 0U
                                                     : 1U)
                                                    : 0U)))),2);
    bufp->fullCData(oldp+137,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_rd_1),2);
    bufp->fullCData(oldp+138,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr),2);
    bufp->fullIData(oldp+139,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__counter_read),32);
    bufp->fullCData(oldp+140,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state),2);
    bufp->fullIData(oldp+141,(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__latency_wr),32);
    bufp->fullBit(oldp+142,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_reg));
    bufp->fullBit(oldp+143,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_state_next));
    bufp->fullCData(oldp+144,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_reg),2);
    bufp->fullCData(oldp+145,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_state_next),2);
    bufp->fullBit(oldp+146,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_wr_en));
    bufp->fullBit(oldp+147,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__mem_rd_en));
    bufp->fullCData(oldp+148,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_reg),4);
    bufp->fullCData(oldp+149,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_id_next),4);
    bufp->fullIData(oldp+150,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg),27);
    bufp->fullIData(oldp+151,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_next),27);
    bufp->fullCData(oldp+152,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_reg),8);
    bufp->fullCData(oldp+153,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_count_next),8);
    bufp->fullCData(oldp+154,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_reg),3);
    bufp->fullCData(oldp+155,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_size_next),3);
    bufp->fullCData(oldp+156,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_reg),2);
    bufp->fullCData(oldp+157,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_burst_next),2);
    bufp->fullCData(oldp+158,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_reg),4);
    bufp->fullCData(oldp+159,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_id_next),4);
    bufp->fullIData(oldp+160,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg),27);
    bufp->fullIData(oldp+161,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_next),27);
    bufp->fullCData(oldp+162,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_reg),8);
    bufp->fullCData(oldp+163,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_count_next),8);
    bufp->fullCData(oldp+164,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_reg),3);
    bufp->fullCData(oldp+165,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_size_next),3);
    bufp->fullCData(oldp+166,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_reg),2);
    bufp->fullCData(oldp+167,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_burst_next),2);
    bufp->fullBit(oldp+168,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_awready_next));
    bufp->fullBit(oldp+169,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_next));
    bufp->fullCData(oldp+170,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bid_next),4);
    bufp->fullBit(oldp+171,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_bvalid_next));
    bufp->fullBit(oldp+172,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_arready_next));
    bufp->fullCData(oldp+173,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_reg),4);
    bufp->fullCData(oldp+174,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rid_next),4);
    bufp->fullIData(oldp+175,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rdata_reg),32);
    bufp->fullBit(oldp+176,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_reg));
    bufp->fullBit(oldp+177,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rlast_next));
    bufp->fullBit(oldp+178,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_reg));
    bufp->fullBit(oldp+179,(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_rvalid_next));
    bufp->fullIData(oldp+180,((0x01ffffffU & (((0x0aU 
                                                == 
                                                (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                                 >> 0x0000001cU))
                                                ? 0U
                                                : (0x07ffffffU 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr)) 
                                              >> 2U))),25);
    bufp->fullIData(oldp+181,((0x01ffffffU & (((1U 
                                                == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                                ? (0xfffffff0U 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)
                                                : (
                                                   (2U 
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
    bufp->fullIData(oldp+182,((0x01ffffffU & (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__read_addr_reg 
                                              >> 2U))),25);
    bufp->fullIData(oldp+183,((0x01ffffffU & (vlSelfRef.npc_top__DOT__u_axi_ram__DOT__write_addr_reg 
                                              >> 2U))),25);
    bufp->fullCData(oldp+184,((0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 0x0000000fU))),4);
    bufp->fullCData(oldp+185,((0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 0x00000014U))),4);
    bufp->fullCData(oldp+186,((0x0000000fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 7U))),4);
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)))));
    bufp->fullBit(oldp+188,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__ifu_arready));
    bufp->fullBit(oldp+189,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state))));
    bufp->fullIData(oldp+190,((0xfffffff0U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)),32);
    bufp->fullBit(oldp+191,((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state))));
    bufp->fullBit(oldp+192,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)) 
                             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rvalid))));
    bufp->fullIData(oldp+193,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata
                                : 0U)),32);
    bufp->fullBit(oldp+194,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid)) 
                             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast))));
    bufp->fullBit(oldp+195,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready));
    bufp->fullBit(oldp+196,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))));
    bufp->fullIData(oldp+197,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r),32);
    bufp->fullIData(oldp+198,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__ifu_prdata),32);
    bufp->fullIData(oldp+199,(((IData)(4U) + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r)),32);
    bufp->fullBit(oldp+200,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__flush_r));
    bufp->fullBit(oldp+201,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid));
    bufp->fullIData(oldp+202,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm),32);
    bufp->fullBit(oldp+203,((1U & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r) 
                                   | (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr)))));
    bufp->fullCData(oldp+204,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__Branch_r),3);
    bufp->fullBit(oldp+205,((0U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                   >> 2U)))));
    bufp->fullBit(oldp+206,((8U == (0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                   >> 2U)))));
    bufp->fullCData(oldp+207,((7U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                     >> 0x0000000cU))),3);
    bufp->fullBit(oldp+208,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__key));
    bufp->fullBit(oldp+209,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__key));
    bufp->fullCData(oldp+210,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr),4);
    bufp->fullCData(oldp+211,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr),2);
    bufp->fullIData(oldp+212,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r),32);
    bufp->fullCData(oldp+213,(((0U != (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r))
                                ? 0U : ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr)
                                         ? 1U : ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal)
                                                  ? 2U
                                                  : 
                                                 ((0x00100073U 
                                                   == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall)
                                                    ? 0x0bU
                                                    : 0U)))))),4);
    bufp->fullBit(oldp+214,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__cause_wr));
    bufp->fullBit(oldp+215,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mret));
    bufp->fullBit(oldp+216,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready));
    bufp->fullBit(oldp+217,((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))));
    bufp->fullIData(oldp+218,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2_r),32);
    bufp->fullCData(oldp+219,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode),2);
    bufp->fullCData(oldp+220,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemOp_r),3);
    bufp->fullCData(oldp+221,(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r)
                                ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r)
                                : ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r))
                                    ? 4U : ((0U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r))
                                             ? 7U : 0U)))),4);
    bufp->fullBit(oldp+222,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_out));
    bufp->fullIData(oldp+223,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__pc_r),32);
    bufp->fullIData(oldp+224,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc_r),32);
    bufp->fullCData(oldp+225,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Rw),4);
    bufp->fullIData(oldp+226,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__busW),32);
    bufp->fullBit(oldp+227,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__Regwr));
    bufp->fullCData(oldp+228,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r))),2);
    bufp->fullIData(oldp+229,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Next_pc),32);
    bufp->fullCData(oldp+230,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw),4);
    bufp->fullIData(oldp+231,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result),32);
    bufp->fullBit(oldp+232,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr));
    bufp->fullBit(oldp+233,((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    bufp->fullBit(oldp+234,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__finish_r));
    bufp->fullIData(oldp+235,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_r),32);
    bufp->fullCData(oldp+236,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_r),4);
    bufp->fullBit(oldp+237,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mcause_wr_r));
    bufp->fullCData(oldp+238,((0x000000ffU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm)),8);
    bufp->fullIData(oldp+239,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData),32);
    bufp->fullBit(oldp+240,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegwr));
    bufp->fullIData(oldp+241,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__wrData),32);
    bufp->fullIData(oldp+242,((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm 
                               + vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r)),32);
    bufp->fullBit(oldp+243,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r));
    bufp->fullIData(oldp+244,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r),32);
    bufp->fullIData(oldp+245,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r),32);
    bufp->fullIData(oldp+246,(((0U == (0x0000000fU 
                                       & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 0x0000000fU)))
                                ? 0U : ((0x0eU >= (0x0000000fU 
                                                   & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                       >> 0x0000000fU) 
                                                      - (IData)(1U))))
                                         ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf
                                        [(0x0000000fU 
                                          & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 0x0000000fU) 
                                             - (IData)(1U)))]
                                         : 0U))),32);
    bufp->fullIData(oldp+247,(((0U == (0x0000000fU 
                                       & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                          >> 0x00000014U)))
                                ? 0U : ((0x0eU >= (0x0000000fU 
                                                   & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                                       >> 0x00000014U) 
                                                      - (IData)(1U))))
                                         ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf
                                        [(0x0000000fU 
                                          & ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 0x00000014U) 
                                             - (IData)(1U)))]
                                         : 0U))),32);
    bufp->fullIData(oldp+248,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA),32);
    bufp->fullIData(oldp+249,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB),32);
    bufp->fullIData(oldp+250,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward),32);
    bufp->fullIData(oldp+251,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2),32);
    bufp->fullBit(oldp+252,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__less_r));
    bufp->fullBit(oldp+253,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare));
    bufp->fullIData(oldp+254,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r),32);
    bufp->fullIData(oldp+255,(((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mpcWr_r)
                                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mretPc_r
                                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__snpc_r)),32);
    bufp->fullIData(oldp+256,(((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__mRegWr))
                                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mRegData
                                : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_r)),32);
    bufp->fullBit(oldp+257,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_awready));
    bufp->fullBit(oldp+258,((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    bufp->fullIData(oldp+259,((0xfffffffcU & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)),32);
    bufp->fullBit(oldp+260,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                     >> 0x00000018U))
                              ? (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                              : ((IData)(vlSelfRef.npc_top__DOT__u_axi_ram__DOT__s_axi_wready_reg) 
                                 | (1U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))))));
    bufp->fullBit(oldp+261,((4U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    bufp->fullIData(oldp+262,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+263,(((0U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                ? ((2U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                    ? ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                        ? 8U : 4U) : 
                                   ((1U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                     ? 2U : 1U)) : 
                               ((1U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
                                 ? ((0U == (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                     ? 3U : ((2U == 
                                              (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                              ? 0x0cU
                                              : 0U))
                                 : 0x0fU))),4);
    bufp->fullBit(oldp+264,((5U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    bufp->fullBit(oldp+265,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_bvalid));
    bufp->fullCData(oldp+266,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                       >> 0x00000018U))
                                ? 0U : (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bresp))),2);
    bufp->fullCData(oldp+267,(((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                       >> 0x00000018U))
                                ? ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                    ? 1U : 0U) : (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__fifo_bid))),4);
    bufp->fullBit(oldp+268,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready));
    bufp->fullBit(oldp+269,((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    bufp->fullIData(oldp+270,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r),32);
    bufp->fullCData(oldp+271,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                ? 1U : 0U)),4);
    bufp->fullCData(oldp+272,((3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r))),3);
    bufp->fullBit(oldp+273,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))));
    bufp->fullBit(oldp+274,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_rvalid));
    bufp->fullCData(oldp+275,(0U),2);
    bufp->fullIData(oldp+276,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rdata
                                : ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? ((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr))
                                        ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time)
                                        : (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                                                   >> 0x00000020U)))
                                    : 0U))),32);
    bufp->fullBit(oldp+277,((1U & ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rid))
                                    ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_rlast)
                                    : vlSelfRef.__VdfgRegularize_he50b618e_0_2))));
    bufp->fullBit(oldp+278,((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
    bufp->fullBit(oldp+279,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_awvalid));
    bufp->fullIData(oldp+280,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? (0xfffffffcU 
                                       & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r)
                                    : 0U) : 0U)),32);
    bufp->fullCData(oldp+281,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? 1U : 0U) : 0U)),4);
    bufp->fullCData(oldp+282,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? 2U : 0U) : 0U)),3);
    bufp->fullCData(oldp+283,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? 1U : 0U) : 0U)),2);
    bufp->fullBit(oldp+284,((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
    bufp->fullBit(oldp+285,((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
    bufp->fullCData(oldp+286,(((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                ? 1U : 0U)),4);
    bufp->fullBit(oldp+287,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__clint_master_arvalid));
    bufp->fullIData(oldp+288,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r
                                    : 0U) : 0U)),32);
    bufp->fullCData(oldp+289,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                        ? 1U : 0U) : 0U)
                                : 0U)),4);
    bufp->fullCData(oldp+290,(((2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state))
                                ? ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                           >> 0x00000018U))
                                    ? (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r))
                                    : 0U) : 0U)),3);
    bufp->fullBit(oldp+291,(((1U == ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                      ? 1U : 0U)) & 
                             ((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                      >> 0x00000018U)) 
                              & (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))))));
    bufp->fullBit(oldp+292,((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))));
    bufp->fullIData(oldp+293,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr))
                                ? (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time)
                                : (IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time 
                                           >> 0x00000020U)))),32);
    bufp->fullCData(oldp+294,(((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state))
                                ? 1U : 0U)),4);
    bufp->fullBit(oldp+295,(((8U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))
                              ? ((1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                                           >> 2U))) 
                                 && ((1U & (~ ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr) 
                                               >> 1U))) 
                                     && ((1U & (~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__ALUctr))) 
                                         && (1U & (IData)(
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
    bufp->fullBit(oldp+296,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__overflow));
    bufp->fullQData(oldp+297,((0x00000001ffffffffULL 
                               & (((- (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub))) 
                                   ^ (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))) 
                                  + (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub))))),33);
    bufp->fullBit(oldp+299,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__sub));
    bufp->fullQData(oldp+300,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_ALU_ysyx__DOT__result_add),33);
    bufp->fullQData(oldp+302,((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))),33);
    bufp->fullQData(oldp+304,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                               ^ vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)))),33);
    bufp->fullQData(oldp+306,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                               | vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)))),33);
    bufp->fullQData(oldp+308,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                               & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB)))),33);
    bufp->fullQData(oldp+310,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                               << (0x0000001fU 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))))),33);
    bufp->fullQData(oldp+312,((QData)((IData)((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))))),33);
    bufp->fullQData(oldp+314,((QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataA, 
                                                             (0x0000001fU 
                                                              & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__dataB))))),33);
    bufp->fullBit(oldp+316,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__RegWr_r));
    bufp->fullCData(oldp+317,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__branch_r),3);
    bufp->fullBit(oldp+318,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemtoReg_r));
    bufp->fullBit(oldp+319,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__MemWr_r));
    bufp->fullIData(oldp+320,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__snpc_r),32);
    bufp->fullIData(oldp+321,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__dnpc_r),32);
    bufp->fullCData(oldp+322,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__Rw_r),4);
    bufp->fullIData(oldp+323,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r),32);
    bufp->fullBit(oldp+324,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__less_r));
    bufp->fullBit(oldp+325,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__is_compare_r));
    bufp->fullBit(oldp+326,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__mpcWr_r));
    bufp->fullCData(oldp+327,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state),2);
    bufp->fullCData(oldp+328,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__next_state),2);
    bufp->fullCData(oldp+329,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__mux),2);
    bufp->fullIData(oldp+330,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_com),32);
    bufp->fullBit(oldp+331,((0U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__result_r)));
    bufp->fullCData(oldp+332,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__val),2);
    bufp->fullCData(oldp+333,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__u_Branch_Cond__DOT__key),2);
    bufp->fullCData(oldp+334,((0x0000001fU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                                              >> 2U))),5);
    bufp->fullCData(oldp+335,((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr 
                               >> 0x00000019U)),7);
    bufp->fullIData(oldp+336,((0xfffff000U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)),32);
    bufp->fullIData(oldp+337,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immI),32);
    bufp->fullIData(oldp+338,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immS),32);
    bufp->fullIData(oldp+339,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immB),32);
    bufp->fullIData(oldp+340,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__immJ),32);
    bufp->fullIData(oldp+341,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr),32);
    bufp->fullBit(oldp+342,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pslverr));
    bufp->fullBit(oldp+343,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__RegWr_r));
    bufp->fullBit(oldp+344,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__illegal));
    bufp->fullBit(oldp+345,((0x00100073U == vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__instr)));
    bufp->fullBit(oldp+346,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__ecall));
    bufp->fullBit(oldp+347,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state));
    bufp->fullBit(oldp+348,((1U & ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__current_state)
                                    ? (~ (((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_ready) 
                                           & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__decode_valid)) 
                                          | (2U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))))
                                    : ((2U != (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state)) 
                                       & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__pc_ready))))));
    bufp->fullBit(oldp+349,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conflict));
    bufp->fullBit(oldp+350,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay));
    bufp->fullBit(oldp+351,(((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__conf_delay)) 
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
    bufp->fullWData(oldp+352,(__Vtemp_2),370);
    bufp->fullQData(oldp+364,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[0]),37);
    bufp->fullQData(oldp+366,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[1]),37);
    bufp->fullQData(oldp+368,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[2]),37);
    bufp->fullQData(oldp+370,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[3]),37);
    bufp->fullQData(oldp+372,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[4]),37);
    bufp->fullQData(oldp+374,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[5]),37);
    bufp->fullQData(oldp+376,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[6]),37);
    bufp->fullQData(oldp+378,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[7]),37);
    bufp->fullQData(oldp+380,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[8]),37);
    bufp->fullQData(oldp+382,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__pair_list[9]),37);
    bufp->fullIData(oldp+384,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+385,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+386,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+387,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+388,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+389,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+390,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+391,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+392,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+393,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+394,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+395,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_extop__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+396,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+397,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__u_ill_inst__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+398,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state),3);
    bufp->fullCData(oldp+399,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                ? ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__current_state))
                                    ? ((3U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                                        ? 3U : ((1U 
                                                 == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode))
                                                 ? 1U
                                                 : 6U))
                                    : 0U) : ((1U == (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__current_state))
                                              ? ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__lsu_arready)
                                                  ? 2U
                                                  : 1U)
                                              : ((2U 
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
    bufp->fullIData(oldp+400,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r),32);
    bufp->fullCData(oldp+401,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__lsu_mode_r),2);
    bufp->fullCData(oldp+402,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r),3);
    bufp->fullIData(oldp+403,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__DataIn_r),32);
    bufp->fullCData(oldp+404,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__Rw_r),4);
    bufp->fullBit(oldp+405,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__regwr_r));
    bufp->fullCData(oldp+406,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rresp_r),2);
    bufp->fullCData(oldp+407,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__bresp_r),2);
    bufp->fullCData(oldp+408,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_r),4);
    bufp->fullBit(oldp+409,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__mcause_wr_r));
    bufp->fullIData(oldp+410,(((0U == (3U & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__memop_r)))
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
                                    ? ((0U == (3U & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                        ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r))
                                        : ((2U == (3U 
                                                   & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r))
                                            ? (((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))) 
                                                << 0x00000010U) 
                                               | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r 
                                                  >> 0x00000010U))
                                            : 0U)) : vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__rdata_r))),32);
    bufp->fullCData(oldp+411,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__addr),4);
    bufp->fullQData(oldp+412,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__m_time),64);
    bufp->fullCData(oldp+414,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__current_state),2);
    bufp->fullCData(oldp+415,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_clint__DOT__next_state),2);
    bufp->fullIData(oldp+416,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [0U][0U]),32);
    bufp->fullIData(oldp+417,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [0U][1U]),32);
    bufp->fullIData(oldp+418,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [0U][2U]),32);
    bufp->fullIData(oldp+419,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [0U][3U]),32);
    bufp->fullIData(oldp+420,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [1U][0U]),32);
    bufp->fullIData(oldp+421,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [1U][1U]),32);
    bufp->fullIData(oldp+422,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [1U][2U]),32);
    bufp->fullIData(oldp+423,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [1U][3U]),32);
    bufp->fullIData(oldp+424,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [2U][0U]),32);
    bufp->fullIData(oldp+425,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [2U][1U]),32);
    bufp->fullIData(oldp+426,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [2U][2U]),32);
    bufp->fullIData(oldp+427,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [2U][3U]),32);
    bufp->fullIData(oldp+428,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [3U][0U]),32);
    bufp->fullIData(oldp+429,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [3U][1U]),32);
    bufp->fullIData(oldp+430,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [3U][2U]),32);
    bufp->fullIData(oldp+431,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__icache
                              [3U][3U]),32);
    bufp->fullIData(oldp+432,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[0]),18);
    bufp->fullIData(oldp+433,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[1]),18);
    bufp->fullIData(oldp+434,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[2]),18);
    bufp->fullIData(oldp+435,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag[3]),18);
    bufp->fullIData(oldp+436,((0x0003ffffU & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                              >> 6U))),18);
    bufp->fullCData(oldp+437,((3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                     >> 4U))),2);
    bufp->fullCData(oldp+438,((3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                     >> 2U))),2);
    bufp->fullBit(oldp+439,((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cache_tag
                             [(3U & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                     >> 4U))] == (0x0003ffffU 
                                                  & (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IFU_ysyx__DOT__pc_r 
                                                     >> 6U)))));
    bufp->fullCData(oldp+440,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__cnt),2);
    bufp->fullCData(oldp+441,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__current_state),2);
    bufp->fullCData(oldp+442,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__next_state),2);
    bufp->fullBit(oldp+443,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rec));
    bufp->fullBit(oldp+444,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block));
    bufp->fullBit(oldp+445,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay));
    bufp->fullBit(oldp+446,(((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block_delay)) 
                             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__block))));
    bufp->fullBit(oldp+447,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss));
    bufp->fullBit(oldp+448,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay));
    bufp->fullBit(oldp+449,(((~ (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss_delay)) 
                             & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__miss))));
    bufp->fullIData(oldp+450,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+451,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mcause_r),4);
    bufp->fullIData(oldp+452,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mepc_r),32);
    bufp->fullIData(oldp+453,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mstatus_r),32);
    bufp->fullIData(oldp+454,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mReg__DOT__mtvec_r),32);
    __Vtemp_4[0U] = (IData)((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward)));
    __Vtemp_4[1U] = ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r 
                      << 1U) | (IData)(((QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__rs1_forward)) 
                                        >> 0x00000020U)));
    __Vtemp_4[2U] = (2U | (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_IDU_ysyx__DOT__pc_r 
                           >> 0x0000001fU));
    bufp->fullWData(oldp+455,(__Vtemp_4),66);
    bufp->fullQData(oldp+458,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+460,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+462,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+463,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+464,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+465,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux1__DOT__i0__DOT__hit));
    __Vtemp_6[0U] = (IData)((0x0000000100000000ULL 
                             | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))));
    __Vtemp_6[1U] = ((vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 
                      << 1U) | (IData)(((0x0000000100000000ULL 
                                         | (QData)((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__imm))) 
                                        >> 0x00000020U)));
    __Vtemp_6[2U] = (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_EXU_ysyx__DOT__rs2 
                     >> 0x0000001fU);
    bufp->fullWData(oldp+466,(__Vtemp_6),66);
    bufp->fullQData(oldp+469,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+471,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+473,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+474,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+475,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+476,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_mux2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+477,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[0]),32);
    bufp->fullIData(oldp+478,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[1]),32);
    bufp->fullIData(oldp+479,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[2]),32);
    bufp->fullIData(oldp+480,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[3]),32);
    bufp->fullIData(oldp+481,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[4]),32);
    bufp->fullIData(oldp+482,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[5]),32);
    bufp->fullIData(oldp+483,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[6]),32);
    bufp->fullIData(oldp+484,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[7]),32);
    bufp->fullIData(oldp+485,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[8]),32);
    bufp->fullIData(oldp+486,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[9]),32);
    bufp->fullIData(oldp+487,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[10]),32);
    bufp->fullIData(oldp+488,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[11]),32);
    bufp->fullIData(oldp+489,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[12]),32);
    bufp->fullIData(oldp+490,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[13]),32);
    bufp->fullIData(oldp+491,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_register__DOT__rf[14]),32);
    bufp->fullBit(oldp+492,((2U == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_LSU_ysyx__DOT__result_r 
                                    >> 0x00000018U))));
    bufp->fullCData(oldp+493,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__current_state),2);
    bufp->fullCData(oldp+494,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__next_state),2);
    bufp->fullCData(oldp+495,(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state),2);
    bufp->fullCData(oldp+496,(((0U == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                ? ((((0x0aU == (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                                >> 0x0000001cU)) 
                                     & (IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awvalid)) 
                                    & (0x03f8U == (
                                                   (0x0aU 
                                                    == 
                                                    (vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr 
                                                     >> 0x0000001cU))
                                                    ? 
                                                   (0x00000fffU 
                                                    & vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_awaddr)
                                                    : 0U)))
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                                   ? 
                                                  ((IData)(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_xBar__DOT__io_master_wvalid)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.npc_top__DOT__u_uart_npc__DOT__current_state))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.npc_top__DOT__u_axi4_delayer__DOT__state_wr))
                                                     ? 0U
                                                     : 2U)
                                                    : 0U)))),2);
    bufp->fullBit(oldp+497,(vlSelfRef.clk));
    bufp->fullBit(oldp+498,(vlSelfRef.reset));
    bufp->fullBit(oldp+499,(vlSelfRef.npc_top__DOT__u_cpu_top__DOT__u_iCache__DOT__rst));
}
