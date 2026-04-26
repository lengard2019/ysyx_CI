// ============================================
// 模块: ysyx_25040102_netlist
// 功能: 网表 wrapper，将展开的端口重新组合成总线
// 自动生成，请勿手动修改
// ============================================

module ysyx_25040102_netlist (
    input               clock,
    input               reset,
    input               io_interrupt,

    // ===== AXI Master Interface =====
    input           io_master_awready,
    output          io_master_awvalid,
    input           io_master_wready,
    output          io_master_wvalid,
    output          io_master_wlast,
    output          io_master_bready,
    input           io_master_bvalid,
    input           io_master_arready,
    output          io_master_arvalid,
    output          io_master_rready,
    input           io_master_rvalid,
    input           io_master_rlast,
    output  [31:0] io_master_awaddr,
    output  [ 3:0] io_master_awid,
    output  [ 7:0] io_master_awlen,
    output  [ 2:0] io_master_awsize,
    output  [ 1:0] io_master_awburst,
    output  [31:0] io_master_wdata,
    output  [ 3:0] io_master_wstrb,
    input   [ 1:0] io_master_bresp,
    input   [ 3:0] io_master_bid,
    output  [31:0] io_master_araddr,
    output  [ 3:0] io_master_arid,
    output  [ 7:0] io_master_arlen,
    output  [ 2:0] io_master_arsize,
    output  [ 1:0] io_master_arburst,
    input   [ 1:0] io_master_rresp,
    input   [31:0] io_master_rdata,
    input   [ 3:0] io_master_rid,

    // ===== AXI Slave Interface =====
    output          io_slave_awready,
    input           io_slave_awvalid,
    output          io_slave_wready,
    input           io_slave_wvalid,
    input           io_slave_wlast,
    input           io_slave_bready,
    output          io_slave_bvalid,
    output          io_slave_arready,
    input           io_slave_arvalid,
    input           io_slave_rready,
    output          io_slave_rvalid,
    output          io_slave_rlast,
    input   [31:0] io_slave_awaddr,
    input   [ 3:0] io_slave_awid,
    input   [ 7:0] io_slave_awlen,
    input   [ 2:0] io_slave_awsize,
    input   [ 1:0] io_slave_awburst,
    input   [31:0] io_slave_wdata,
    input   [ 3:0] io_slave_wstrb,
    output  [ 1:0] io_slave_bresp,
    output  [ 3:0] io_slave_bid,
    input   [31:0] io_slave_araddr,
    input   [ 3:0] io_slave_arid,
    input   [ 7:0] io_slave_arlen,
    input   [ 2:0] io_slave_arsize,
    input   [ 1:0] io_slave_arburst,
    output  [ 1:0] io_slave_rresp,
    output  [31:0] io_slave_rdata,
    output  [ 3:0] io_slave_rid
);

    // ============================================
    // 展开的总线信号（用于连接网表）
    // ============================================

    // // ----- Master 接口展开信号 -----
    // wire io_master_awaddr[0];
    // wire io_master_awaddr[1];
    // wire io_master_awaddr[2];
    // wire io_master_awaddr[3];
    // wire io_master_awaddr[4];
    // wire io_master_awaddr[5];
    // wire io_master_awaddr[6];
    // wire io_master_awaddr[7];
    // wire io_master_awaddr[8];
    // wire io_master_awaddr[9];
    // wire io_master_awaddr[10];
    // wire io_master_awaddr[11];
    // wire io_master_awaddr[12];
    // wire io_master_awaddr[13];
    // wire io_master_awaddr[14];
    // wire io_master_awaddr[15];
    // wire io_master_awaddr[16];
    // wire io_master_awaddr[17];
    // wire io_master_awaddr[18];
    // wire io_master_awaddr[19];
    // wire io_master_awaddr[20];
    // wire io_master_awaddr[21];
    // wire io_master_awaddr[22];
    // wire io_master_awaddr[23];
    // wire io_master_awaddr[24];
    // wire io_master_awaddr[25];
    // wire io_master_awaddr[26];
    // wire io_master_awaddr[27];
    // wire io_master_awaddr[28];
    // wire io_master_awaddr[29];
    // wire io_master_awaddr[30];
    // wire io_master_awaddr[31];
    // wire io_master_awid[0];
    // wire io_master_awid[1];
    // wire io_master_awid[2];
    // wire io_master_awid[3];
    // wire io_master_awlen[0];
    // wire io_master_awlen[1];
    // wire io_master_awlen[2];
    // wire io_master_awlen[3];
    // wire io_master_awlen[4];
    // wire io_master_awlen[5];
    // wire io_master_awlen[6];
    // wire io_master_awlen[7];
    // wire io_master_awsize[0];
    // wire io_master_awsize[1];
    // wire io_master_awsize[2];
    // wire io_master_awburst[0];
    // wire io_master_awburst[1];
    // wire io_master_wdata[0];
    // wire io_master_wdata[1];
    // wire io_master_wdata[2];
    // wire io_master_wdata[3];
    // wire io_master_wdata[4];
    // wire io_master_wdata[5];
    // wire io_master_wdata[6];
    // wire io_master_wdata[7];
    // wire io_master_wdata[8];
    // wire io_master_wdata[9];
    // wire io_master_wdata[10];
    // wire io_master_wdata[11];
    // wire io_master_wdata[12];
    // wire io_master_wdata[13];
    // wire io_master_wdata[14];
    // wire io_master_wdata[15];
    // wire io_master_wdata[16];
    // wire io_master_wdata[17];
    // wire io_master_wdata[18];
    // wire io_master_wdata[19];
    // wire io_master_wdata[20];
    // wire io_master_wdata[21];
    // wire io_master_wdata[22];
    // wire io_master_wdata[23];
    // wire io_master_wdata[24];
    // wire io_master_wdata[25];
    // wire io_master_wdata[26];
    // wire io_master_wdata[27];
    // wire io_master_wdata[28];
    // wire io_master_wdata[29];
    // wire io_master_wdata[30];
    // wire io_master_wdata[31];
    // wire io_master_wstrb[0];
    // wire io_master_wstrb[1];
    // wire io_master_wstrb[2];
    // wire io_master_wstrb[3];
    // wire io_master_bresp[0];
    // wire io_master_bresp[1];
    // wire io_master_bid[0];
    // wire io_master_bid[1];
    // wire io_master_bid[2];
    // wire io_master_bid[3];
    // wire io_master_araddr[0];
    // wire io_master_araddr[1];
    // wire io_master_araddr[2];
    // wire io_master_araddr[3];
    // wire io_master_araddr[4];
    // wire io_master_araddr[5];
    // wire io_master_araddr[6];
    // wire io_master_araddr[7];
    // wire io_master_araddr[8];
    // wire io_master_araddr[9];
    // wire io_master_araddr[10];
    // wire io_master_araddr[11];
    // wire io_master_araddr[12];
    // wire io_master_araddr[13];
    // wire io_master_araddr[14];
    // wire io_master_araddr[15];
    // wire io_master_araddr[16];
    // wire io_master_araddr[17];
    // wire io_master_araddr[18];
    // wire io_master_araddr[19];
    // wire io_master_araddr[20];
    // wire io_master_araddr[21];
    // wire io_master_araddr[22];
    // wire io_master_araddr[23];
    // wire io_master_araddr[24];
    // wire io_master_araddr[25];
    // wire io_master_araddr[26];
    // wire io_master_araddr[27];
    // wire io_master_araddr[28];
    // wire io_master_araddr[29];
    // wire io_master_araddr[30];
    // wire io_master_araddr[31];
    // wire io_master_arid[0];
    // wire io_master_arid[1];
    // wire io_master_arid[2];
    // wire io_master_arid[3];
    // wire io_master_arlen[0];
    // wire io_master_arlen[1];
    // wire io_master_arlen[2];
    // wire io_master_arlen[3];
    // wire io_master_arlen[4];
    // wire io_master_arlen[5];
    // wire io_master_arlen[6];
    // wire io_master_arlen[7];
    // wire io_master_arsize[0];
    // wire io_master_arsize[1];
    // wire io_master_arsize[2];
    // wire io_master_arburst[0];
    // wire io_master_arburst[1];
    // wire io_master_rresp[0];
    // wire io_master_rresp[1];
    // wire io_master_rdata[0];
    // wire io_master_rdata[1];
    // wire io_master_rdata[2];
    // wire io_master_rdata[3];
    // wire io_master_rdata[4];
    // wire io_master_rdata[5];
    // wire io_master_rdata[6];
    // wire io_master_rdata[7];
    // wire io_master_rdata[8];
    // wire io_master_rdata[9];
    // wire io_master_rdata[10];
    // wire io_master_rdata[11];
    // wire io_master_rdata[12];
    // wire io_master_rdata[13];
    // wire io_master_rdata[14];
    // wire io_master_rdata[15];
    // wire io_master_rdata[16];
    // wire io_master_rdata[17];
    // wire io_master_rdata[18];
    // wire io_master_rdata[19];
    // wire io_master_rdata[20];
    // wire io_master_rdata[21];
    // wire io_master_rdata[22];
    // wire io_master_rdata[23];
    // wire io_master_rdata[24];
    // wire io_master_rdata[25];
    // wire io_master_rdata[26];
    // wire io_master_rdata[27];
    // wire io_master_rdata[28];
    // wire io_master_rdata[29];
    // wire io_master_rdata[30];
    // wire io_master_rdata[31];
    // wire io_master_rid[0];
    // wire io_master_rid[1];
    // wire io_master_rid[2];
    // wire io_master_rid[3];

    // // ----- Slave 接口展开信号 -----
    // wire io_slave_awaddr[0];
    // wire io_slave_awaddr[1];
    // wire io_slave_awaddr[2];
    // wire io_slave_awaddr[3];
    // wire io_slave_awaddr[4];
    // wire io_slave_awaddr[5];
    // wire io_slave_awaddr[6];
    // wire io_slave_awaddr[7];
    // wire io_slave_awaddr[8];
    // wire io_slave_awaddr[9];
    // wire io_slave_awaddr[10];
    // wire io_slave_awaddr[11];
    // wire io_slave_awaddr[12];
    // wire io_slave_awaddr[13];
    // wire io_slave_awaddr[14];
    // wire io_slave_awaddr[15];
    // wire io_slave_awaddr[16];
    // wire io_slave_awaddr[17];
    // wire io_slave_awaddr[18];
    // wire io_slave_awaddr[19];
    // wire io_slave_awaddr[20];
    // wire io_slave_awaddr[21];
    // wire io_slave_awaddr[22];
    // wire io_slave_awaddr[23];
    // wire io_slave_awaddr[24];
    // wire io_slave_awaddr[25];
    // wire io_slave_awaddr[26];
    // wire io_slave_awaddr[27];
    // wire io_slave_awaddr[28];
    // wire io_slave_awaddr[29];
    // wire io_slave_awaddr[30];
    // wire io_slave_awaddr[31];
    // wire io_slave_awid[0];
    // wire io_slave_awid[1];
    // wire io_slave_awid[2];
    // wire io_slave_awid[3];
    // wire io_slave_awlen[0];
    // wire io_slave_awlen[1];
    // wire io_slave_awlen[2];
    // wire io_slave_awlen[3];
    // wire io_slave_awlen[4];
    // wire io_slave_awlen[5];
    // wire io_slave_awlen[6];
    // wire io_slave_awlen[7];
    // wire io_slave_awsize[0];
    // wire io_slave_awsize[1];
    // wire io_slave_awsize[2];
    // wire io_slave_awburst[0];
    // wire io_slave_awburst[1];
    // wire io_slave_wdata[0];
    // wire io_slave_wdata[1];
    // wire io_slave_wdata[2];
    // wire io_slave_wdata[3];
    // wire io_slave_wdata[4];
    // wire io_slave_wdata[5];
    // wire io_slave_wdata[6];
    // wire io_slave_wdata[7];
    // wire io_slave_wdata[8];
    // wire io_slave_wdata[9];
    // wire io_slave_wdata[10];
    // wire io_slave_wdata[11];
    // wire io_slave_wdata[12];
    // wire io_slave_wdata[13];
    // wire io_slave_wdata[14];
    // wire io_slave_wdata[15];
    // wire io_slave_wdata[16];
    // wire io_slave_wdata[17];
    // wire io_slave_wdata[18];
    // wire io_slave_wdata[19];
    // wire io_slave_wdata[20];
    // wire io_slave_wdata[21];
    // wire io_slave_wdata[22];
    // wire io_slave_wdata[23];
    // wire io_slave_wdata[24];
    // wire io_slave_wdata[25];
    // wire io_slave_wdata[26];
    // wire io_slave_wdata[27];
    // wire io_slave_wdata[28];
    // wire io_slave_wdata[29];
    // wire io_slave_wdata[30];
    // wire io_slave_wdata[31];
    // wire io_slave_wstrb[0];
    // wire io_slave_wstrb[1];
    // wire io_slave_wstrb[2];
    // wire io_slave_wstrb[3];
    // wire io_slave_bresp[0];
    // wire io_slave_bresp[1];
    // wire io_slave_bid[0];
    // wire io_slave_bid[1];
    // wire io_slave_bid[2];
    // wire io_slave_bid[3];
    // wire io_slave_araddr[0];
    // wire io_slave_araddr[1];
    // wire io_slave_araddr[2];
    // wire io_slave_araddr[3];
    // wire io_slave_araddr[4];
    // wire io_slave_araddr[5];
    // wire io_slave_araddr[6];
    // wire io_slave_araddr[7];
    // wire io_slave_araddr[8];
    // wire io_slave_araddr[9];
    // wire io_slave_araddr[10];
    // wire io_slave_araddr[11];
    // wire io_slave_araddr[12];
    // wire io_slave_araddr[13];
    // wire io_slave_araddr[14];
    // wire io_slave_araddr[15];
    // wire io_slave_araddr[16];
    // wire io_slave_araddr[17];
    // wire io_slave_araddr[18];
    // wire io_slave_araddr[19];
    // wire io_slave_araddr[20];
    // wire io_slave_araddr[21];
    // wire io_slave_araddr[22];
    // wire io_slave_araddr[23];
    // wire io_slave_araddr[24];
    // wire io_slave_araddr[25];
    // wire io_slave_araddr[26];
    // wire io_slave_araddr[27];
    // wire io_slave_araddr[28];
    // wire io_slave_araddr[29];
    // wire io_slave_araddr[30];
    // wire io_slave_araddr[31];
    // wire io_slave_arid[0];
    // wire io_slave_arid[1];
    // wire io_slave_arid[2];
    // wire io_slave_arid[3];
    // wire io_slave_arlen[0];
    // wire io_slave_arlen[1];
    // wire io_slave_arlen[2];
    // wire io_slave_arlen[3];
    // wire io_slave_arlen[4];
    // wire io_slave_arlen[5];
    // wire io_slave_arlen[6];
    // wire io_slave_arlen[7];
    // wire io_slave_arsize[0];
    // wire io_slave_arsize[1];
    // wire io_slave_arsize[2];
    // wire io_slave_arburst[0];
    // wire io_slave_arburst[1];
    // wire io_slave_rresp[0];
    // wire io_slave_rresp[1];
    // wire io_slave_rdata[0];
    // wire io_slave_rdata[1];
    // wire io_slave_rdata[2];
    // wire io_slave_rdata[3];
    // wire io_slave_rdata[4];
    // wire io_slave_rdata[5];
    // wire io_slave_rdata[6];
    // wire io_slave_rdata[7];
    // wire io_slave_rdata[8];
    // wire io_slave_rdata[9];
    // wire io_slave_rdata[10];
    // wire io_slave_rdata[11];
    // wire io_slave_rdata[12];
    // wire io_slave_rdata[13];
    // wire io_slave_rdata[14];
    // wire io_slave_rdata[15];
    // wire io_slave_rdata[16];
    // wire io_slave_rdata[17];
    // wire io_slave_rdata[18];
    // wire io_slave_rdata[19];
    // wire io_slave_rdata[20];
    // wire io_slave_rdata[21];
    // wire io_slave_rdata[22];
    // wire io_slave_rdata[23];
    // wire io_slave_rdata[24];
    // wire io_slave_rdata[25];
    // wire io_slave_rdata[26];
    // wire io_slave_rdata[27];
    // wire io_slave_rdata[28];
    // wire io_slave_rdata[29];
    // wire io_slave_rdata[30];
    // wire io_slave_rdata[31];
    // wire io_slave_rid[0];
    // wire io_slave_rid[1];
    // wire io_slave_rid[2];
    // wire io_slave_rid[3];

    // // ============================================
    // // 总线拼接/拆分逻辑
    // // ============================================

    // // ----- Master 接口输出拼接 -----
    // assign {io_master_awaddr_31_, io_master_awaddr_30_, io_master_awaddr_29_, io_master_awaddr_28_, io_master_awaddr_27_, io_master_awaddr_26_, io_master_awaddr_25_, io_master_awaddr_24_, io_master_awaddr_23_, io_master_awaddr_22_, io_master_awaddr_21_, io_master_awaddr_20_, io_master_awaddr_19_, io_master_awaddr_18_, io_master_awaddr_17_, io_master_awaddr_16_, io_master_awaddr_15_, io_master_awaddr_14_, io_master_awaddr_13_, io_master_awaddr_12_, io_master_awaddr_11_, io_master_awaddr_10_, io_master_awaddr_9_, io_master_awaddr_8_, io_master_awaddr_7_, io_master_awaddr_6_, io_master_awaddr_5_, io_master_awaddr_4_, io_master_awaddr_3_, io_master_awaddr_2_, io_master_awaddr_1_, io_master_awaddr_0_} = io_master_awaddr;
    // assign {io_master_awid_3_, io_master_awid_2_, io_master_awid_1_, io_master_awid_0_} = io_master_awid;
    // assign {io_master_awlen_7_, io_master_awlen_6_, io_master_awlen_5_, io_master_awlen_4_, io_master_awlen_3_, io_master_awlen_2_, io_master_awlen_1_, io_master_awlen_0_} = io_master_awlen;
    // assign {io_master_awsize_2_, io_master_awsize_1_, io_master_awsize_0_} = io_master_awsize;
    // assign {io_master_awburst_1_, io_master_awburst_0_} = io_master_awburst;
    // assign {io_master_wdata_31_, io_master_wdata_30_, io_master_wdata_29_, io_master_wdata_28_, io_master_wdata_27_, io_master_wdata_26_, io_master_wdata_25_, io_master_wdata_24_, io_master_wdata_23_, io_master_wdata_22_, io_master_wdata_21_, io_master_wdata_20_, io_master_wdata_19_, io_master_wdata_18_, io_master_wdata_17_, io_master_wdata_16_, io_master_wdata_15_, io_master_wdata_14_, io_master_wdata_13_, io_master_wdata_12_, io_master_wdata_11_, io_master_wdata_10_, io_master_wdata_9_, io_master_wdata_8_, io_master_wdata_7_, io_master_wdata_6_, io_master_wdata_5_, io_master_wdata_4_, io_master_wdata_3_, io_master_wdata_2_, io_master_wdata_1_, io_master_wdata_0_} = io_master_wdata;
    // assign {io_master_wstrb_3_, io_master_wstrb_2_, io_master_wstrb_1_, io_master_wstrb_0_} = io_master_wstrb;
    // assign {io_master_araddr_31_, io_master_araddr_30_, io_master_araddr_29_, io_master_araddr_28_, io_master_araddr_27_, io_master_araddr_26_, io_master_araddr_25_, io_master_araddr_24_, io_master_araddr_23_, io_master_araddr_22_, io_master_araddr_21_, io_master_araddr_20_, io_master_araddr_19_, io_master_araddr_18_, io_master_araddr_17_, io_master_araddr_16_, io_master_araddr_15_, io_master_araddr_14_, io_master_araddr_13_, io_master_araddr_12_, io_master_araddr_11_, io_master_araddr_10_, io_master_araddr_9_, io_master_araddr_8_, io_master_araddr_7_, io_master_araddr_6_, io_master_araddr_5_, io_master_araddr_4_, io_master_araddr_3_, io_master_araddr_2_, io_master_araddr_1_, io_master_araddr_0_} = io_master_araddr;
    // assign {io_master_arid_3_, io_master_arid_2_, io_master_arid_1_, io_master_arid_0_} = io_master_arid;
    // assign {io_master_arlen_7_, io_master_arlen_6_, io_master_arlen_5_, io_master_arlen_4_, io_master_arlen_3_, io_master_arlen_2_, io_master_arlen_1_, io_master_arlen_0_} = io_master_arlen;
    // assign {io_master_arsize_2_, io_master_arsize_1_, io_master_arsize_0_} = io_master_arsize;
    // assign {io_master_arburst_1_, io_master_arburst_0_} = io_master_arburst;

    // // ----- Master 接口输入拆分 -----
    // assign io_master_bresp = {io_master_bresp_1_, io_master_bresp_0_};
    // assign io_master_bid = {io_master_bid_3_, io_master_bid_2_, io_master_bid_1_, io_master_bid_0_};
    // assign io_master_rresp = {io_master_rresp_1_, io_master_rresp_0_};
    // assign io_master_rdata = {io_master_rdata_31_, io_master_rdata_30_, io_master_rdata_29_, io_master_rdata_28_, io_master_rdata_27_, io_master_rdata_26_, io_master_rdata_25_, io_master_rdata_24_, io_master_rdata_23_, io_master_rdata_22_, io_master_rdata_21_, io_master_rdata_20_, io_master_rdata_19_, io_master_rdata_18_, io_master_rdata_17_, io_master_rdata_16_, io_master_rdata_15_, io_master_rdata_14_, io_master_rdata_13_, io_master_rdata_12_, io_master_rdata_11_, io_master_rdata_10_, io_master_rdata_9_, io_master_rdata_8_, io_master_rdata_7_, io_master_rdata_6_, io_master_rdata_5_, io_master_rdata_4_, io_master_rdata_3_, io_master_rdata_2_, io_master_rdata_1_, io_master_rdata_0_};
    // assign io_master_rid = {io_master_rid_3_, io_master_rid_2_, io_master_rid_1_, io_master_rid_0_};

    // // ----- Slave 接口输入拆分 -----
    // assign {io_slave_awaddr_31_, io_slave_awaddr_30_, io_slave_awaddr_29_, io_slave_awaddr_28_, io_slave_awaddr_27_, io_slave_awaddr_26_, io_slave_awaddr_25_, io_slave_awaddr_24_, io_slave_awaddr_23_, io_slave_awaddr_22_, io_slave_awaddr_21_, io_slave_awaddr_20_, io_slave_awaddr_19_, io_slave_awaddr_18_, io_slave_awaddr_17_, io_slave_awaddr_16_, io_slave_awaddr_15_, io_slave_awaddr_14_, io_slave_awaddr_13_, io_slave_awaddr_12_, io_slave_awaddr_11_, io_slave_awaddr_10_, io_slave_awaddr_9_, io_slave_awaddr_8_, io_slave_awaddr_7_, io_slave_awaddr_6_, io_slave_awaddr_5_, io_slave_awaddr_4_, io_slave_awaddr_3_, io_slave_awaddr_2_, io_slave_awaddr_1_, io_slave_awaddr_0_} = io_slave_awaddr;
    // assign {io_slave_awid_3_, io_slave_awid_2_, io_slave_awid_1_, io_slave_awid_0_} = io_slave_awid;
    // assign {io_slave_awlen_7_, io_slave_awlen_6_, io_slave_awlen_5_, io_slave_awlen_4_, io_slave_awlen_3_, io_slave_awlen_2_, io_slave_awlen_1_, io_slave_awlen_0_} = io_slave_awlen;
    // assign {io_slave_awsize_2_, io_slave_awsize_1_, io_slave_awsize_0_} = io_slave_awsize;
    // assign {io_slave_awburst_1_, io_slave_awburst_0_} = io_slave_awburst;
    // assign {io_slave_wdata_31_, io_slave_wdata_30_, io_slave_wdata_29_, io_slave_wdata_28_, io_slave_wdata_27_, io_slave_wdata_26_, io_slave_wdata_25_, io_slave_wdata_24_, io_slave_wdata_23_, io_slave_wdata_22_, io_slave_wdata_21_, io_slave_wdata_20_, io_slave_wdata_19_, io_slave_wdata_18_, io_slave_wdata_17_, io_slave_wdata_16_, io_slave_wdata_15_, io_slave_wdata_14_, io_slave_wdata_13_, io_slave_wdata_12_, io_slave_wdata_11_, io_slave_wdata_10_, io_slave_wdata_9_, io_slave_wdata_8_, io_slave_wdata_7_, io_slave_wdata_6_, io_slave_wdata_5_, io_slave_wdata_4_, io_slave_wdata_3_, io_slave_wdata_2_, io_slave_wdata_1_, io_slave_wdata_0_} = io_slave_wdata;
    // assign {io_slave_wstrb_3_, io_slave_wstrb_2_, io_slave_wstrb_1_, io_slave_wstrb_0_} = io_slave_wstrb;
    // assign {io_slave_araddr_31_, io_slave_araddr_30_, io_slave_araddr_29_, io_slave_araddr_28_, io_slave_araddr_27_, io_slave_araddr_26_, io_slave_araddr_25_, io_slave_araddr_24_, io_slave_araddr_23_, io_slave_araddr_22_, io_slave_araddr_21_, io_slave_araddr_20_, io_slave_araddr_19_, io_slave_araddr_18_, io_slave_araddr_17_, io_slave_araddr_16_, io_slave_araddr_15_, io_slave_araddr_14_, io_slave_araddr_13_, io_slave_araddr_12_, io_slave_araddr_11_, io_slave_araddr_10_, io_slave_araddr_9_, io_slave_araddr_8_, io_slave_araddr_7_, io_slave_araddr_6_, io_slave_araddr_5_, io_slave_araddr_4_, io_slave_araddr_3_, io_slave_araddr_2_, io_slave_araddr_1_, io_slave_araddr_0_} = io_slave_araddr;
    // assign {io_slave_arid_3_, io_slave_arid_2_, io_slave_arid_1_, io_slave_arid_0_} = io_slave_arid;
    // assign {io_slave_arlen_7_, io_slave_arlen_6_, io_slave_arlen_5_, io_slave_arlen_4_, io_slave_arlen_3_, io_slave_arlen_2_, io_slave_arlen_1_, io_slave_arlen_0_} = io_slave_arlen;
    // assign {io_slave_arsize_2_, io_slave_arsize_1_, io_slave_arsize_0_} = io_slave_arsize;
    // assign {io_slave_arburst_1_, io_slave_arburst_0_} = io_slave_arburst;

    // // ----- Slave 接口输出拼接 -----
    // assign io_slave_bresp = {io_slave_bresp_1_, io_slave_bresp_0_};
    // assign io_slave_bid = {io_slave_bid_3_, io_slave_bid_2_, io_slave_bid_1_, io_slave_bid_0_};
    // assign io_slave_rresp = {io_slave_rresp_1_, io_slave_rresp_0_};
    // assign io_slave_rdata = {io_slave_rdata_31_, io_slave_rdata_30_, io_slave_rdata_29_, io_slave_rdata_28_, io_slave_rdata_27_, io_slave_rdata_26_, io_slave_rdata_25_, io_slave_rdata_24_, io_slave_rdata_23_, io_slave_rdata_22_, io_slave_rdata_21_, io_slave_rdata_20_, io_slave_rdata_19_, io_slave_rdata_18_, io_slave_rdata_17_, io_slave_rdata_16_, io_slave_rdata_15_, io_slave_rdata_14_, io_slave_rdata_13_, io_slave_rdata_12_, io_slave_rdata_11_, io_slave_rdata_10_, io_slave_rdata_9_, io_slave_rdata_8_, io_slave_rdata_7_, io_slave_rdata_6_, io_slave_rdata_5_, io_slave_rdata_4_, io_slave_rdata_3_, io_slave_rdata_2_, io_slave_rdata_1_, io_slave_rdata_0_};
    // assign io_slave_rid = {io_slave_rid_3_, io_slave_rid_2_, io_slave_rid_1_, io_slave_rid_0_};

    // ============================================
    // 网表例化
    // ============================================

    ysyx_25040102 u_ysyx_25040102 (
        .clock                  (clock),
        .reset                  (reset),
        .io_interrupt           (io_interrupt),

        // ----- Master 控制信号 -----
        .io_master_awready    (io_master_awready),
        .io_master_awvalid    (io_master_awvalid),
        .io_master_wready     (io_master_wready),
        .io_master_wvalid     (io_master_wvalid),
        .io_master_wlast      (io_master_wlast),
        .io_master_bready     (io_master_bready),
        .io_master_bvalid     (io_master_bvalid),
        .io_master_arready    (io_master_arready),
        .io_master_arvalid    (io_master_arvalid),
        .io_master_rready     (io_master_rready),
        .io_master_rvalid     (io_master_rvalid),
        .io_master_rlast      (io_master_rlast),

        // ----- Master AW Channel -----
        .io_master_awaddr_0_    (io_master_awaddr[0]),
        .io_master_awaddr_1_    (io_master_awaddr[1]),
        .io_master_awaddr_2_    (io_master_awaddr[2]),
        .io_master_awaddr_3_    (io_master_awaddr[3]),
        .io_master_awaddr_4_    (io_master_awaddr[4]),
        .io_master_awaddr_5_    (io_master_awaddr[5]),
        .io_master_awaddr_6_    (io_master_awaddr[6]),
        .io_master_awaddr_7_    (io_master_awaddr[7]),
        .io_master_awaddr_8_    (io_master_awaddr[8]),
        .io_master_awaddr_9_    (io_master_awaddr[9]),
        .io_master_awaddr_10_    (io_master_awaddr[10]),
        .io_master_awaddr_11_    (io_master_awaddr[11]),
        .io_master_awaddr_12_    (io_master_awaddr[12]),
        .io_master_awaddr_13_    (io_master_awaddr[13]),
        .io_master_awaddr_14_    (io_master_awaddr[14]),
        .io_master_awaddr_15_    (io_master_awaddr[15]),
        .io_master_awaddr_16_    (io_master_awaddr[16]),
        .io_master_awaddr_17_    (io_master_awaddr[17]),
        .io_master_awaddr_18_    (io_master_awaddr[18]),
        .io_master_awaddr_19_    (io_master_awaddr[19]),
        .io_master_awaddr_20_    (io_master_awaddr[20]),
        .io_master_awaddr_21_    (io_master_awaddr[21]),
        .io_master_awaddr_22_    (io_master_awaddr[22]),
        .io_master_awaddr_23_    (io_master_awaddr[23]),
        .io_master_awaddr_24_    (io_master_awaddr[24]),
        .io_master_awaddr_25_    (io_master_awaddr[25]),
        .io_master_awaddr_26_    (io_master_awaddr[26]),
        .io_master_awaddr_27_    (io_master_awaddr[27]),
        .io_master_awaddr_28_    (io_master_awaddr[28]),
        .io_master_awaddr_29_    (io_master_awaddr[29]),
        .io_master_awaddr_30_    (io_master_awaddr[30]),
        .io_master_awaddr_31_    (io_master_awaddr[31]),
        .io_master_awid_0_    (io_master_awid[0]),
        .io_master_awid_1_    (io_master_awid[1]),
        .io_master_awid_2_    (io_master_awid[2]),
        .io_master_awid_3_    (io_master_awid[3]),
        .io_master_awlen_0_    (io_master_awlen[0]),
        .io_master_awlen_1_    (io_master_awlen[1]),
        .io_master_awlen_2_    (io_master_awlen[2]),
        .io_master_awlen_3_    (io_master_awlen[3]),
        .io_master_awlen_4_    (io_master_awlen[4]),
        .io_master_awlen_5_    (io_master_awlen[5]),
        .io_master_awlen_6_    (io_master_awlen[6]),
        .io_master_awlen_7_    (io_master_awlen[7]),
        .io_master_awsize_0_    (io_master_awsize[0]),
        .io_master_awsize_1_    (io_master_awsize[1]),
        .io_master_awsize_2_    (io_master_awsize[2]),
        .io_master_awburst_0_    (io_master_awburst[0]),
        .io_master_awburst_1_    (io_master_awburst[1]),

        // ----- Master W Channel -----
        .io_master_wdata_0_    (io_master_wdata[0]),
        .io_master_wdata_1_    (io_master_wdata[1]),
        .io_master_wdata_2_    (io_master_wdata[2]),
        .io_master_wdata_3_    (io_master_wdata[3]),
        .io_master_wdata_4_    (io_master_wdata[4]),
        .io_master_wdata_5_    (io_master_wdata[5]),
        .io_master_wdata_6_    (io_master_wdata[6]),
        .io_master_wdata_7_    (io_master_wdata[7]),
        .io_master_wdata_8_    (io_master_wdata[8]),
        .io_master_wdata_9_    (io_master_wdata[9]),
        .io_master_wdata_10_    (io_master_wdata[10]),
        .io_master_wdata_11_    (io_master_wdata[11]),
        .io_master_wdata_12_    (io_master_wdata[12]),
        .io_master_wdata_13_    (io_master_wdata[13]),
        .io_master_wdata_14_    (io_master_wdata[14]),
        .io_master_wdata_15_    (io_master_wdata[15]),
        .io_master_wdata_16_    (io_master_wdata[16]),
        .io_master_wdata_17_    (io_master_wdata[17]),
        .io_master_wdata_18_    (io_master_wdata[18]),
        .io_master_wdata_19_    (io_master_wdata[19]),
        .io_master_wdata_20_    (io_master_wdata[20]),
        .io_master_wdata_21_    (io_master_wdata[21]),
        .io_master_wdata_22_    (io_master_wdata[22]),
        .io_master_wdata_23_    (io_master_wdata[23]),
        .io_master_wdata_24_    (io_master_wdata[24]),
        .io_master_wdata_25_    (io_master_wdata[25]),
        .io_master_wdata_26_    (io_master_wdata[26]),
        .io_master_wdata_27_    (io_master_wdata[27]),
        .io_master_wdata_28_    (io_master_wdata[28]),
        .io_master_wdata_29_    (io_master_wdata[29]),
        .io_master_wdata_30_    (io_master_wdata[30]),
        .io_master_wdata_31_    (io_master_wdata[31]),
        .io_master_wstrb_0_    (io_master_wstrb[0]),
        .io_master_wstrb_1_    (io_master_wstrb[1]),
        .io_master_wstrb_2_    (io_master_wstrb[2]),
        .io_master_wstrb_3_    (io_master_wstrb[3]),
        // .io_master_wlast        (io_master_wlast),

        // ----- Master B Channel -----
        .io_master_bresp_0_    (io_master_bresp[0]),
        .io_master_bresp_1_    (io_master_bresp[1]),
        .io_master_bid_0_    (io_master_bid[0]),
        .io_master_bid_1_    (io_master_bid[1]),
        .io_master_bid_2_    (io_master_bid[2]),
        .io_master_bid_3_    (io_master_bid[3]),

        // ----- Master AR Channel -----
        .io_master_araddr_0_    (io_master_araddr[0]),
        .io_master_araddr_1_    (io_master_araddr[1]),
        .io_master_araddr_2_    (io_master_araddr[2]),
        .io_master_araddr_3_    (io_master_araddr[3]),
        .io_master_araddr_4_    (io_master_araddr[4]),
        .io_master_araddr_5_    (io_master_araddr[5]),
        .io_master_araddr_6_    (io_master_araddr[6]),
        .io_master_araddr_7_    (io_master_araddr[7]),
        .io_master_araddr_8_    (io_master_araddr[8]),
        .io_master_araddr_9_    (io_master_araddr[9]),
        .io_master_araddr_10_    (io_master_araddr[10]),
        .io_master_araddr_11_    (io_master_araddr[11]),
        .io_master_araddr_12_    (io_master_araddr[12]),
        .io_master_araddr_13_    (io_master_araddr[13]),
        .io_master_araddr_14_    (io_master_araddr[14]),
        .io_master_araddr_15_    (io_master_araddr[15]),
        .io_master_araddr_16_    (io_master_araddr[16]),
        .io_master_araddr_17_    (io_master_araddr[17]),
        .io_master_araddr_18_    (io_master_araddr[18]),
        .io_master_araddr_19_    (io_master_araddr[19]),
        .io_master_araddr_20_    (io_master_araddr[20]),
        .io_master_araddr_21_    (io_master_araddr[21]),
        .io_master_araddr_22_    (io_master_araddr[22]),
        .io_master_araddr_23_    (io_master_araddr[23]),
        .io_master_araddr_24_    (io_master_araddr[24]),
        .io_master_araddr_25_    (io_master_araddr[25]),
        .io_master_araddr_26_    (io_master_araddr[26]),
        .io_master_araddr_27_    (io_master_araddr[27]),
        .io_master_araddr_28_    (io_master_araddr[28]),
        .io_master_araddr_29_    (io_master_araddr[29]),
        .io_master_araddr_30_    (io_master_araddr[30]),
        .io_master_araddr_31_    (io_master_araddr[31]),
        .io_master_arid_0_    (io_master_arid[0]),
        .io_master_arid_1_    (io_master_arid[1]),
        .io_master_arid_2_    (io_master_arid[2]),
        .io_master_arid_3_    (io_master_arid[3]),
        .io_master_arlen_0_    (io_master_arlen[0]),
        .io_master_arlen_1_    (io_master_arlen[1]),
        .io_master_arlen_2_    (io_master_arlen[2]),
        .io_master_arlen_3_    (io_master_arlen[3]),
        .io_master_arlen_4_    (io_master_arlen[4]),
        .io_master_arlen_5_    (io_master_arlen[5]),
        .io_master_arlen_6_    (io_master_arlen[6]),
        .io_master_arlen_7_    (io_master_arlen[7]),
        .io_master_arsize_0_    (io_master_arsize[0]),
        .io_master_arsize_1_    (io_master_arsize[1]),
        .io_master_arsize_2_    (io_master_arsize[2]),
        .io_master_arburst_0_    (io_master_arburst[0]),
        .io_master_arburst_1_    (io_master_arburst[1]),

        // ----- Master R Channel -----
        .io_master_rresp_0_    (io_master_rresp[0]),
        .io_master_rresp_1_    (io_master_rresp[1]),
        .io_master_rdata_0_    (io_master_rdata[0]),
        .io_master_rdata_1_    (io_master_rdata[1]),
        .io_master_rdata_2_    (io_master_rdata[2]),
        .io_master_rdata_3_    (io_master_rdata[3]),
        .io_master_rdata_4_    (io_master_rdata[4]),
        .io_master_rdata_5_    (io_master_rdata[5]),
        .io_master_rdata_6_    (io_master_rdata[6]),
        .io_master_rdata_7_    (io_master_rdata[7]),
        .io_master_rdata_8_    (io_master_rdata[8]),
        .io_master_rdata_9_    (io_master_rdata[9]),
        .io_master_rdata_10_    (io_master_rdata[10]),
        .io_master_rdata_11_    (io_master_rdata[11]),
        .io_master_rdata_12_    (io_master_rdata[12]),
        .io_master_rdata_13_    (io_master_rdata[13]),
        .io_master_rdata_14_    (io_master_rdata[14]),
        .io_master_rdata_15_    (io_master_rdata[15]),
        .io_master_rdata_16_    (io_master_rdata[16]),
        .io_master_rdata_17_    (io_master_rdata[17]),
        .io_master_rdata_18_    (io_master_rdata[18]),
        .io_master_rdata_19_    (io_master_rdata[19]),
        .io_master_rdata_20_    (io_master_rdata[20]),
        .io_master_rdata_21_    (io_master_rdata[21]),
        .io_master_rdata_22_    (io_master_rdata[22]),
        .io_master_rdata_23_    (io_master_rdata[23]),
        .io_master_rdata_24_    (io_master_rdata[24]),
        .io_master_rdata_25_    (io_master_rdata[25]),
        .io_master_rdata_26_    (io_master_rdata[26]),
        .io_master_rdata_27_    (io_master_rdata[27]),
        .io_master_rdata_28_    (io_master_rdata[28]),
        .io_master_rdata_29_    (io_master_rdata[29]),
        .io_master_rdata_30_    (io_master_rdata[30]),
        .io_master_rdata_31_    (io_master_rdata[31]),
        .io_master_rid_0_    (io_master_rid[0]),
        .io_master_rid_1_    (io_master_rid[1]),
        .io_master_rid_2_    (io_master_rid[2]),
        .io_master_rid_3_    (io_master_rid[3]),
        // .io_master_rlast        (io_master_rlast),

        // ----- Slave 控制信号 -----
        .io_slave_awready    (io_slave_awready),
        .io_slave_awvalid    (io_slave_awvalid),
        .io_slave_wready     (io_slave_wready),
        .io_slave_wvalid     (io_slave_wvalid),
        .io_slave_wlast      (io_slave_wlast),
        .io_slave_bready     (io_slave_bready),
        .io_slave_bvalid     (io_slave_bvalid),
        .io_slave_arready    (io_slave_arready),
        .io_slave_arvalid    (io_slave_arvalid),
        .io_slave_rready     (io_slave_rready),
        .io_slave_rvalid     (io_slave_rvalid),
        .io_slave_rlast      (io_slave_rlast),

        // ----- Slave AW Channel -----
        .io_slave_awaddr_0_     (io_slave_awaddr[0]),
        .io_slave_awaddr_1_     (io_slave_awaddr[1]),
        .io_slave_awaddr_2_     (io_slave_awaddr[2]),
        .io_slave_awaddr_3_     (io_slave_awaddr[3]),
        .io_slave_awaddr_4_     (io_slave_awaddr[4]),
        .io_slave_awaddr_5_     (io_slave_awaddr[5]),
        .io_slave_awaddr_6_     (io_slave_awaddr[6]),
        .io_slave_awaddr_7_     (io_slave_awaddr[7]),
        .io_slave_awaddr_8_     (io_slave_awaddr[8]),
        .io_slave_awaddr_9_     (io_slave_awaddr[9]),
        .io_slave_awaddr_10_     (io_slave_awaddr[10]),
        .io_slave_awaddr_11_     (io_slave_awaddr[11]),
        .io_slave_awaddr_12_     (io_slave_awaddr[12]),
        .io_slave_awaddr_13_     (io_slave_awaddr[13]),
        .io_slave_awaddr_14_     (io_slave_awaddr[14]),
        .io_slave_awaddr_15_     (io_slave_awaddr[15]),
        .io_slave_awaddr_16_     (io_slave_awaddr[16]),
        .io_slave_awaddr_17_     (io_slave_awaddr[17]),
        .io_slave_awaddr_18_     (io_slave_awaddr[18]),
        .io_slave_awaddr_19_     (io_slave_awaddr[19]),
        .io_slave_awaddr_20_     (io_slave_awaddr[20]),
        .io_slave_awaddr_21_     (io_slave_awaddr[21]),
        .io_slave_awaddr_22_     (io_slave_awaddr[22]),
        .io_slave_awaddr_23_     (io_slave_awaddr[23]),
        .io_slave_awaddr_24_     (io_slave_awaddr[24]),
        .io_slave_awaddr_25_     (io_slave_awaddr[25]),
        .io_slave_awaddr_26_     (io_slave_awaddr[26]),
        .io_slave_awaddr_27_     (io_slave_awaddr[27]),
        .io_slave_awaddr_28_     (io_slave_awaddr[28]),
        .io_slave_awaddr_29_     (io_slave_awaddr[29]),
        .io_slave_awaddr_30_     (io_slave_awaddr[30]),
        .io_slave_awaddr_31_     (io_slave_awaddr[31]),
        .io_slave_awid_0_     (io_slave_awid[0]),
        .io_slave_awid_1_     (io_slave_awid[1]),
        .io_slave_awid_2_     (io_slave_awid[2]),
        .io_slave_awid_3_     (io_slave_awid[3]),
        .io_slave_awlen_0_     (io_slave_awlen[0]),
        .io_slave_awlen_1_     (io_slave_awlen[1]),
        .io_slave_awlen_2_     (io_slave_awlen[2]),
        .io_slave_awlen_3_     (io_slave_awlen[3]),
        .io_slave_awlen_4_     (io_slave_awlen[4]),
        .io_slave_awlen_5_     (io_slave_awlen[5]),
        .io_slave_awlen_6_     (io_slave_awlen[6]),
        .io_slave_awlen_7_     (io_slave_awlen[7]),
        .io_slave_awsize_0_     (io_slave_awsize[0]),
        .io_slave_awsize_1_     (io_slave_awsize[1]),
        .io_slave_awsize_2_     (io_slave_awsize[2]),
        .io_slave_awburst_0_     (io_slave_awburst[0]),
        .io_slave_awburst_1_     (io_slave_awburst[1]),

        // ----- Slave W Channel -----
        .io_slave_wdata_0_     (io_slave_wdata[0]),
        .io_slave_wdata_1_     (io_slave_wdata[1]),
        .io_slave_wdata_2_     (io_slave_wdata[2]),
        .io_slave_wdata_3_     (io_slave_wdata[3]),
        .io_slave_wdata_4_     (io_slave_wdata[4]),
        .io_slave_wdata_5_     (io_slave_wdata[5]),
        .io_slave_wdata_6_     (io_slave_wdata[6]),
        .io_slave_wdata_7_     (io_slave_wdata[7]),
        .io_slave_wdata_8_     (io_slave_wdata[8]),
        .io_slave_wdata_9_     (io_slave_wdata[9]),
        .io_slave_wdata_10_     (io_slave_wdata[10]),
        .io_slave_wdata_11_     (io_slave_wdata[11]),
        .io_slave_wdata_12_     (io_slave_wdata[12]),
        .io_slave_wdata_13_     (io_slave_wdata[13]),
        .io_slave_wdata_14_     (io_slave_wdata[14]),
        .io_slave_wdata_15_     (io_slave_wdata[15]),
        .io_slave_wdata_16_     (io_slave_wdata[16]),
        .io_slave_wdata_17_     (io_slave_wdata[17]),
        .io_slave_wdata_18_     (io_slave_wdata[18]),
        .io_slave_wdata_19_     (io_slave_wdata[19]),
        .io_slave_wdata_20_     (io_slave_wdata[20]),
        .io_slave_wdata_21_     (io_slave_wdata[21]),
        .io_slave_wdata_22_     (io_slave_wdata[22]),
        .io_slave_wdata_23_     (io_slave_wdata[23]),
        .io_slave_wdata_24_     (io_slave_wdata[24]),
        .io_slave_wdata_25_     (io_slave_wdata[25]),
        .io_slave_wdata_26_     (io_slave_wdata[26]),
        .io_slave_wdata_27_     (io_slave_wdata[27]),
        .io_slave_wdata_28_     (io_slave_wdata[28]),
        .io_slave_wdata_29_     (io_slave_wdata[29]),
        .io_slave_wdata_30_     (io_slave_wdata[30]),
        .io_slave_wdata_31_     (io_slave_wdata[31]),
        .io_slave_wstrb_0_     (io_slave_wstrb[0]),
        .io_slave_wstrb_1_     (io_slave_wstrb[1]),
        .io_slave_wstrb_2_     (io_slave_wstrb[2]),
        .io_slave_wstrb_3_     (io_slave_wstrb[3]),
        // .io_slave_wlast         (io_slave_wlast),

        // ----- Slave B Channel -----
        .io_slave_bresp_0_     (io_slave_bresp[0]),
        .io_slave_bresp_1_     (io_slave_bresp[1]),
        .io_slave_bid_0_     (io_slave_bid[0]),
        .io_slave_bid_1_     (io_slave_bid[1]),
        .io_slave_bid_2_     (io_slave_bid[2]),
        .io_slave_bid_3_     (io_slave_bid[3]),

        // ----- Slave AR Channel -----
        .io_slave_araddr_0_     (io_slave_araddr[0]),
        .io_slave_araddr_1_     (io_slave_araddr[1]),
        .io_slave_araddr_2_     (io_slave_araddr[2]),
        .io_slave_araddr_3_     (io_slave_araddr[3]),
        .io_slave_araddr_4_     (io_slave_araddr[4]),
        .io_slave_araddr_5_     (io_slave_araddr[5]),
        .io_slave_araddr_6_     (io_slave_araddr[6]),
        .io_slave_araddr_7_     (io_slave_araddr[7]),
        .io_slave_araddr_8_     (io_slave_araddr[8]),
        .io_slave_araddr_9_     (io_slave_araddr[9]),
        .io_slave_araddr_10_     (io_slave_araddr[10]),
        .io_slave_araddr_11_     (io_slave_araddr[11]),
        .io_slave_araddr_12_     (io_slave_araddr[12]),
        .io_slave_araddr_13_     (io_slave_araddr[13]),
        .io_slave_araddr_14_     (io_slave_araddr[14]),
        .io_slave_araddr_15_     (io_slave_araddr[15]),
        .io_slave_araddr_16_     (io_slave_araddr[16]),
        .io_slave_araddr_17_     (io_slave_araddr[17]),
        .io_slave_araddr_18_     (io_slave_araddr[18]),
        .io_slave_araddr_19_     (io_slave_araddr[19]),
        .io_slave_araddr_20_     (io_slave_araddr[20]),
        .io_slave_araddr_21_     (io_slave_araddr[21]),
        .io_slave_araddr_22_     (io_slave_araddr[22]),
        .io_slave_araddr_23_     (io_slave_araddr[23]),
        .io_slave_araddr_24_     (io_slave_araddr[24]),
        .io_slave_araddr_25_     (io_slave_araddr[25]),
        .io_slave_araddr_26_     (io_slave_araddr[26]),
        .io_slave_araddr_27_     (io_slave_araddr[27]),
        .io_slave_araddr_28_     (io_slave_araddr[28]),
        .io_slave_araddr_29_     (io_slave_araddr[29]),
        .io_slave_araddr_30_     (io_slave_araddr[30]),
        .io_slave_araddr_31_     (io_slave_araddr[31]),
        .io_slave_arid_0_     (io_slave_arid[0]),
        .io_slave_arid_1_     (io_slave_arid[1]),
        .io_slave_arid_2_     (io_slave_arid[2]),
        .io_slave_arid_3_     (io_slave_arid[3]),
        .io_slave_arlen_0_     (io_slave_arlen[0]),
        .io_slave_arlen_1_     (io_slave_arlen[1]),
        .io_slave_arlen_2_     (io_slave_arlen[2]),
        .io_slave_arlen_3_     (io_slave_arlen[3]),
        .io_slave_arlen_4_     (io_slave_arlen[4]),
        .io_slave_arlen_5_     (io_slave_arlen[5]),
        .io_slave_arlen_6_     (io_slave_arlen[6]),
        .io_slave_arlen_7_     (io_slave_arlen[7]),
        .io_slave_arsize_0_     (io_slave_arsize[0]),
        .io_slave_arsize_1_     (io_slave_arsize[1]),
        .io_slave_arsize_2_     (io_slave_arsize[2]),
        .io_slave_arburst_0_     (io_slave_arburst[0]),
        .io_slave_arburst_1_     (io_slave_arburst[1]),

        // ----- Slave R Channel -----
        .io_slave_rresp_0_     (io_slave_rresp[0]),
        .io_slave_rresp_1_     (io_slave_rresp[1]),
        .io_slave_rdata_0_     (io_slave_rdata[0]),
        .io_slave_rdata_1_     (io_slave_rdata[1]),
        .io_slave_rdata_2_     (io_slave_rdata[2]),
        .io_slave_rdata_3_     (io_slave_rdata[3]),
        .io_slave_rdata_4_     (io_slave_rdata[4]),
        .io_slave_rdata_5_     (io_slave_rdata[5]),
        .io_slave_rdata_6_     (io_slave_rdata[6]),
        .io_slave_rdata_7_     (io_slave_rdata[7]),
        .io_slave_rdata_8_     (io_slave_rdata[8]),
        .io_slave_rdata_9_     (io_slave_rdata[9]),
        .io_slave_rdata_10_     (io_slave_rdata[10]),
        .io_slave_rdata_11_     (io_slave_rdata[11]),
        .io_slave_rdata_12_     (io_slave_rdata[12]),
        .io_slave_rdata_13_     (io_slave_rdata[13]),
        .io_slave_rdata_14_     (io_slave_rdata[14]),
        .io_slave_rdata_15_     (io_slave_rdata[15]),
        .io_slave_rdata_16_     (io_slave_rdata[16]),
        .io_slave_rdata_17_     (io_slave_rdata[17]),
        .io_slave_rdata_18_     (io_slave_rdata[18]),
        .io_slave_rdata_19_     (io_slave_rdata[19]),
        .io_slave_rdata_20_     (io_slave_rdata[20]),
        .io_slave_rdata_21_     (io_slave_rdata[21]),
        .io_slave_rdata_22_     (io_slave_rdata[22]),
        .io_slave_rdata_23_     (io_slave_rdata[23]),
        .io_slave_rdata_24_     (io_slave_rdata[24]),
        .io_slave_rdata_25_     (io_slave_rdata[25]),
        .io_slave_rdata_26_     (io_slave_rdata[26]),
        .io_slave_rdata_27_     (io_slave_rdata[27]),
        .io_slave_rdata_28_     (io_slave_rdata[28]),
        .io_slave_rdata_29_     (io_slave_rdata[29]),
        .io_slave_rdata_30_     (io_slave_rdata[30]),
        .io_slave_rdata_31_     (io_slave_rdata[31]),
        .io_slave_rid_0_     (io_slave_rid[0]),
        .io_slave_rid_1_     (io_slave_rid[1]),
        .io_slave_rid_2_     (io_slave_rid[2]),
        .io_slave_rid_3_     (io_slave_rid[3])
        // .io_slave_rlast         (io_slave_rlast)
    );

endmodule
