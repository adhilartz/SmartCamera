// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _axis_to_ddr_writer_HH_
#define _axis_to_ddr_writer_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "axis_to_ddr_writer_mul_32ns_8ns_40_3.h"
#include "axis_to_ddr_writer_buffer.h"
#include "axis_to_ddr_writer_AXILiteS_s_axi.h"
#include "axis_to_ddr_writer_base_ddr_addr_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_BASE_DDR_ADDR_ID_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH = 64,
         unsigned int C_M_AXI_BASE_DDR_ADDR_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_BASE_DDR_ADDR_BUSER_WIDTH = 1,
         unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct axis_to_ddr_writer : public sc_module {
    // Port declarations 70
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<8> > inputStream_V_TDATA;
    sc_in< sc_logic > inputStream_V_TVALID;
    sc_out< sc_logic > inputStream_V_TREADY;
    sc_out< sc_logic > m_axi_base_ddr_addr_AWVALID;
    sc_in< sc_logic > m_axi_base_ddr_addr_AWREADY;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH> > m_axi_base_ddr_addr_AWADDR;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_AWID;
    sc_out< sc_lv<8> > m_axi_base_ddr_addr_AWLEN;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_AWSIZE;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_AWBURST;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_AWLOCK;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_AWCACHE;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_AWPROT;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_AWQOS;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_AWREGION;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_AWUSER_WIDTH> > m_axi_base_ddr_addr_AWUSER;
    sc_out< sc_logic > m_axi_base_ddr_addr_WVALID;
    sc_in< sc_logic > m_axi_base_ddr_addr_WREADY;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH> > m_axi_base_ddr_addr_WDATA;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH/8> > m_axi_base_ddr_addr_WSTRB;
    sc_out< sc_logic > m_axi_base_ddr_addr_WLAST;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_WID;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_WUSER_WIDTH> > m_axi_base_ddr_addr_WUSER;
    sc_out< sc_logic > m_axi_base_ddr_addr_ARVALID;
    sc_in< sc_logic > m_axi_base_ddr_addr_ARREADY;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH> > m_axi_base_ddr_addr_ARADDR;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_ARID;
    sc_out< sc_lv<8> > m_axi_base_ddr_addr_ARLEN;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_ARSIZE;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_ARBURST;
    sc_out< sc_lv<2> > m_axi_base_ddr_addr_ARLOCK;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_ARCACHE;
    sc_out< sc_lv<3> > m_axi_base_ddr_addr_ARPROT;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_ARQOS;
    sc_out< sc_lv<4> > m_axi_base_ddr_addr_ARREGION;
    sc_out< sc_uint<C_M_AXI_BASE_DDR_ADDR_ARUSER_WIDTH> > m_axi_base_ddr_addr_ARUSER;
    sc_in< sc_logic > m_axi_base_ddr_addr_RVALID;
    sc_out< sc_logic > m_axi_base_ddr_addr_RREADY;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH> > m_axi_base_ddr_addr_RDATA;
    sc_in< sc_logic > m_axi_base_ddr_addr_RLAST;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_RID;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_RUSER_WIDTH> > m_axi_base_ddr_addr_RUSER;
    sc_in< sc_lv<2> > m_axi_base_ddr_addr_RRESP;
    sc_in< sc_logic > m_axi_base_ddr_addr_BVALID;
    sc_out< sc_logic > m_axi_base_ddr_addr_BREADY;
    sc_in< sc_lv<2> > m_axi_base_ddr_addr_BRESP;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_ID_WIDTH> > m_axi_base_ddr_addr_BID;
    sc_in< sc_uint<C_M_AXI_BASE_DDR_ADDR_BUSER_WIDTH> > m_axi_base_ddr_addr_BUSER;
    sc_out< sc_lv<8> > frame_index_V;
    sc_out< sc_lv<32> > frame_count;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;


    // Module declarations
    axis_to_ddr_writer(sc_module_name name);
    SC_HAS_PROCESS(axis_to_ddr_writer);

    ~axis_to_ddr_writer();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    axis_to_ddr_writer_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* axis_to_ddr_writer_AXILiteS_s_axi_U;
    axis_to_ddr_writer_base_ddr_addr_m_axi<64,32,5,C_M_AXI_BASE_DDR_ADDR_ID_WIDTH,C_M_AXI_BASE_DDR_ADDR_ADDR_WIDTH,C_M_AXI_BASE_DDR_ADDR_DATA_WIDTH,C_M_AXI_BASE_DDR_ADDR_AWUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_ARUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_WUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_RUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_BUSER_WIDTH,C_M_AXI_BASE_DDR_ADDR_TARGET_ADDR,C_M_AXI_BASE_DDR_ADDR_USER_VALUE,C_M_AXI_BASE_DDR_ADDR_PROT_VALUE,C_M_AXI_BASE_DDR_ADDR_CACHE_VALUE>* axis_to_ddr_writer_base_ddr_addr_m_axi_U;
    axis_to_ddr_writer_buffer* buffer_U;
    axis_to_ddr_writer_mul_32ns_8ns_40_3<1,3,32,8,40>* axis_to_ddr_writer_mul_32ns_8ns_40_3_U0;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<14> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_32;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<32> > base_address;
    sc_signal< sc_lv<32> > frame_buffer_dim;
    sc_signal< sc_lv<32> > frame_buffer_offset;
    sc_signal< sc_lv<8> > frame_buffer_number;
    sc_signal< sc_logic > update_intr;
    sc_signal< sc_lv<8> > inner_index_V;
    sc_signal< sc_lv<32> > FRAME_OFFSET;
    sc_signal< sc_lv<29> > BASE_ADDRESS_r;
    sc_signal< sc_lv<32> > FRAME_BUFFER_DIM_r;
    sc_signal< sc_lv<8> > FRAME_BUFFER_NUMBER_r;
    sc_signal< sc_lv<32> > frame_count_inner;
    sc_signal< sc_logic > axis_to_ddr_writer_AXILiteS_s_axi_U_ap_dummy_ce;
    sc_signal< sc_logic > base_ddr_addr_AWVALID;
    sc_signal< sc_logic > base_ddr_addr_AWREADY;
    sc_signal< sc_lv<32> > base_ddr_addr_AWADDR;
    sc_signal< sc_lv<1> > base_ddr_addr_AWID;
    sc_signal< sc_lv<32> > base_ddr_addr_AWLEN;
    sc_signal< sc_lv<3> > base_ddr_addr_AWSIZE;
    sc_signal< sc_lv<2> > base_ddr_addr_AWBURST;
    sc_signal< sc_lv<2> > base_ddr_addr_AWLOCK;
    sc_signal< sc_lv<4> > base_ddr_addr_AWCACHE;
    sc_signal< sc_lv<3> > base_ddr_addr_AWPROT;
    sc_signal< sc_lv<4> > base_ddr_addr_AWQOS;
    sc_signal< sc_lv<4> > base_ddr_addr_AWREGION;
    sc_signal< sc_lv<1> > base_ddr_addr_AWUSER;
    sc_signal< sc_logic > base_ddr_addr_WVALID;
    sc_signal< sc_logic > base_ddr_addr_WREADY;
    sc_signal< sc_lv<64> > base_ddr_addr_WDATA;
    sc_signal< sc_lv<8> > base_ddr_addr_WSTRB;
    sc_signal< sc_logic > base_ddr_addr_WLAST;
    sc_signal< sc_lv<1> > base_ddr_addr_WID;
    sc_signal< sc_lv<1> > base_ddr_addr_WUSER;
    sc_signal< sc_logic > base_ddr_addr_ARVALID;
    sc_signal< sc_logic > base_ddr_addr_ARREADY;
    sc_signal< sc_lv<32> > base_ddr_addr_ARADDR;
    sc_signal< sc_lv<1> > base_ddr_addr_ARID;
    sc_signal< sc_lv<32> > base_ddr_addr_ARLEN;
    sc_signal< sc_lv<3> > base_ddr_addr_ARSIZE;
    sc_signal< sc_lv<2> > base_ddr_addr_ARBURST;
    sc_signal< sc_lv<2> > base_ddr_addr_ARLOCK;
    sc_signal< sc_lv<4> > base_ddr_addr_ARCACHE;
    sc_signal< sc_lv<3> > base_ddr_addr_ARPROT;
    sc_signal< sc_lv<4> > base_ddr_addr_ARQOS;
    sc_signal< sc_lv<4> > base_ddr_addr_ARREGION;
    sc_signal< sc_lv<1> > base_ddr_addr_ARUSER;
    sc_signal< sc_logic > base_ddr_addr_RVALID;
    sc_signal< sc_logic > base_ddr_addr_RREADY;
    sc_signal< sc_lv<64> > base_ddr_addr_RDATA;
    sc_signal< sc_logic > base_ddr_addr_RLAST;
    sc_signal< sc_lv<1> > base_ddr_addr_RID;
    sc_signal< sc_lv<1> > base_ddr_addr_RUSER;
    sc_signal< sc_lv<2> > base_ddr_addr_RRESP;
    sc_signal< sc_logic > base_ddr_addr_BVALID;
    sc_signal< sc_logic > base_ddr_addr_BREADY;
    sc_signal< sc_lv<2> > base_ddr_addr_BRESP;
    sc_signal< sc_lv<1> > base_ddr_addr_BID;
    sc_signal< sc_lv<1> > base_ddr_addr_BUSER;
    sc_signal< sc_logic > axis_to_ddr_writer_base_ddr_addr_m_axi_U_ap_dummy_ce;
    sc_signal< sc_lv<10> > indvar_reg_328;
    sc_signal< sc_lv<8> > t_V_reg_633;
    sc_signal< sc_lv<1> > update_intr_read_read_fu_162_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_251;
    sc_signal< sc_lv<32> > tmp_8_reg_665;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_262;
    sc_signal< sc_lv<32> > offset_fu_413_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_bdd_271;
    sc_signal< sc_lv<1> > tmp_1_fu_436_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_bdd_280;
    sc_signal< sc_lv<32> > idx_1_fu_442_p2;
    sc_signal< sc_lv<32> > idx_1_reg_679;
    sc_signal< sc_lv<13> > indvar_flatten_next_fu_513_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_6;
    sc_signal< bool > ap_sig_bdd_291;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_507_p2;
    sc_signal< bool > ap_sig_bdd_297;
    sc_signal< sc_lv<10> > j_mid2_fu_531_p3;
    sc_signal< sc_lv<64> > temp_2_fu_557_p3;
    sc_signal< sc_lv<4> > i_1_fu_572_p3;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_bdd_314;
    sc_signal< sc_logic > ap_sig_ioackin_base_ddr_addr_AWREADY;
    sc_signal< sc_lv<1> > exitcond2_fu_602_p2;
    sc_signal< sc_lv<1> > exitcond2_reg_715;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp1_stg0_fsm_8;
    sc_signal< bool > ap_sig_bdd_327;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it1;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond2_reg_715_pp1_it1;
    sc_signal< sc_logic > ap_sig_ioackin_base_ddr_addr_WREADY;
    sc_signal< sc_logic > ap_reg_ppiten_pp1_it2;
    sc_signal< sc_lv<10> > indvar_next_fu_608_p2;
    sc_signal< sc_lv<64> > buffer_q0;
    sc_signal< sc_lv<64> > buffer_load_reg_729;
    sc_signal< sc_lv<32> > offset_1_fu_619_p2;
    sc_signal< sc_lv<32> > offset_1_reg_734;
    sc_signal< sc_logic > ap_sig_cseq_ST_st12_fsm_9;
    sc_signal< bool > ap_sig_bdd_365;
    sc_signal< sc_lv<9> > buffer_address0;
    sc_signal< sc_logic > buffer_ce0;
    sc_signal< sc_lv<9> > buffer_address1;
    sc_signal< sc_logic > buffer_ce1;
    sc_signal< sc_logic > buffer_we1;
    sc_signal< sc_lv<64> > buffer_d1;
    sc_signal< sc_lv<32> > i_op_assign_reg_244;
    sc_signal< sc_lv<29> > i_op_assign_1_reg_253;
    sc_signal< sc_lv<32> > offset1_reg_263;
    sc_signal< sc_logic > ap_sig_cseq_ST_st16_fsm_13;
    sc_signal< bool > ap_sig_bdd_393;
    sc_signal< sc_lv<32> > idx_reg_273;
    sc_signal< sc_lv<13> > indvar_flatten_reg_284;
    sc_signal< sc_lv<10> > j_reg_295;
    sc_signal< sc_lv<64> > temp_reg_306;
    sc_signal< sc_lv<4> > i_reg_317;
    sc_signal< sc_lv<64> > tmp_4_fu_586_p1;
    sc_signal< sc_lv<1> > ifzero_fu_580_p2;
    sc_signal< sc_lv<64> > tmp_9_fu_614_p1;
    sc_signal< sc_lv<64> > tmp_fu_591_p1;
    sc_signal< sc_logic > ap_reg_ioackin_base_ddr_addr_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_base_ddr_addr_WREADY;
    sc_signal< sc_lv<8> > p_tmp_6_fu_476_p3;
    sc_signal< sc_lv<32> > tmp_7_fu_494_p2;
    sc_signal< sc_lv<8> > frame_index_V_preg;
    sc_signal< sc_lv<32> > grp_fu_393_p0;
    sc_signal< sc_lv<8> > grp_fu_393_p1;
    sc_signal< sc_lv<40> > grp_fu_393_p2;
    sc_signal< sc_lv<32> > i_op_assign_1_cast_fu_409_p1;
    sc_signal< sc_lv<20> > tmp_s_fu_422_p4;
    sc_signal< sc_lv<32> > tmp_3_fu_432_p1;
    sc_signal< sc_lv<9> > tmp_2_cast_fu_452_p1;
    sc_signal< sc_lv<9> > tmp_4_cast_fu_462_p1;
    sc_signal< sc_lv<9> > op2_assign_fu_456_p2;
    sc_signal< sc_lv<1> > tmp_5_fu_465_p2;
    sc_signal< sc_lv<8> > tmp_6_fu_471_p2;
    sc_signal< sc_lv<1> > exitcond5_fu_525_p2;
    sc_signal< sc_lv<10> > j_s_fu_519_p2;
    sc_signal< sc_lv<56> > tmp_11_fu_539_p4;
    sc_signal< sc_lv<56> > temp_1_fu_549_p3;
    sc_signal< sc_lv<4> > i_op_fu_566_p2;
    sc_signal< sc_logic > grp_fu_393_ce;
    sc_signal< sc_lv<14> > ap_NS_fsm;
    sc_signal< sc_lv<40> > grp_fu_393_p00;
    sc_signal< sc_lv<40> > grp_fu_393_p10;
    sc_signal< bool > ap_sig_bdd_439;
    sc_signal< bool > ap_sig_bdd_231;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<14> ap_ST_st1_fsm_0;
    static const sc_lv<14> ap_ST_st2_fsm_1;
    static const sc_lv<14> ap_ST_st3_fsm_2;
    static const sc_lv<14> ap_ST_st4_fsm_3;
    static const sc_lv<14> ap_ST_st5_fsm_4;
    static const sc_lv<14> ap_ST_st6_fsm_5;
    static const sc_lv<14> ap_ST_st7_fsm_6;
    static const sc_lv<14> ap_ST_st8_fsm_7;
    static const sc_lv<14> ap_ST_pp1_stg0_fsm_8;
    static const sc_lv<14> ap_ST_st12_fsm_9;
    static const sc_lv<14> ap_ST_st13_fsm_10;
    static const sc_lv<14> ap_ST_st14_fsm_11;
    static const sc_lv<14> ap_ST_st15_fsm_12;
    static const sc_lv<14> ap_ST_st16_fsm_13;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_M_AXI_DATA_WIDTH;
    static const int C_M_AXI_BASE_DDR_ADDR_TARGET_ADDR;
    static const int C_M_AXI_BASE_DDR_ADDR_USER_VALUE;
    static const int C_M_AXI_BASE_DDR_ADDR_PROT_VALUE;
    static const int C_M_AXI_BASE_DDR_ADDR_CACHE_VALUE;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_200;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<9> ap_const_lv9_1FF;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<13> ap_const_lv13_1000;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<56> ap_const_lv56_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<10> ap_const_lv10_200;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_bdd_231();
    void thread_ap_sig_bdd_251();
    void thread_ap_sig_bdd_262();
    void thread_ap_sig_bdd_271();
    void thread_ap_sig_bdd_280();
    void thread_ap_sig_bdd_291();
    void thread_ap_sig_bdd_297();
    void thread_ap_sig_bdd_314();
    void thread_ap_sig_bdd_32();
    void thread_ap_sig_bdd_327();
    void thread_ap_sig_bdd_365();
    void thread_ap_sig_bdd_393();
    void thread_ap_sig_bdd_439();
    void thread_ap_sig_cseq_ST_pp1_stg0_fsm_8();
    void thread_ap_sig_cseq_ST_st12_fsm_9();
    void thread_ap_sig_cseq_ST_st16_fsm_13();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st7_fsm_6();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_ioackin_base_ddr_addr_AWREADY();
    void thread_ap_sig_ioackin_base_ddr_addr_WREADY();
    void thread_axis_to_ddr_writer_AXILiteS_s_axi_U_ap_dummy_ce();
    void thread_axis_to_ddr_writer_base_ddr_addr_m_axi_U_ap_dummy_ce();
    void thread_base_ddr_addr_ARADDR();
    void thread_base_ddr_addr_ARBURST();
    void thread_base_ddr_addr_ARCACHE();
    void thread_base_ddr_addr_ARID();
    void thread_base_ddr_addr_ARLEN();
    void thread_base_ddr_addr_ARLOCK();
    void thread_base_ddr_addr_ARPROT();
    void thread_base_ddr_addr_ARQOS();
    void thread_base_ddr_addr_ARREGION();
    void thread_base_ddr_addr_ARSIZE();
    void thread_base_ddr_addr_ARUSER();
    void thread_base_ddr_addr_ARVALID();
    void thread_base_ddr_addr_AWADDR();
    void thread_base_ddr_addr_AWBURST();
    void thread_base_ddr_addr_AWCACHE();
    void thread_base_ddr_addr_AWID();
    void thread_base_ddr_addr_AWLEN();
    void thread_base_ddr_addr_AWLOCK();
    void thread_base_ddr_addr_AWPROT();
    void thread_base_ddr_addr_AWQOS();
    void thread_base_ddr_addr_AWREGION();
    void thread_base_ddr_addr_AWSIZE();
    void thread_base_ddr_addr_AWUSER();
    void thread_base_ddr_addr_AWVALID();
    void thread_base_ddr_addr_BREADY();
    void thread_base_ddr_addr_RREADY();
    void thread_base_ddr_addr_WDATA();
    void thread_base_ddr_addr_WID();
    void thread_base_ddr_addr_WLAST();
    void thread_base_ddr_addr_WSTRB();
    void thread_base_ddr_addr_WUSER();
    void thread_base_ddr_addr_WVALID();
    void thread_buffer_address0();
    void thread_buffer_address1();
    void thread_buffer_ce0();
    void thread_buffer_ce1();
    void thread_buffer_d1();
    void thread_buffer_we1();
    void thread_exitcond2_fu_602_p2();
    void thread_exitcond5_fu_525_p2();
    void thread_exitcond_flatten_fu_507_p2();
    void thread_frame_count();
    void thread_frame_index_V();
    void thread_grp_fu_393_ce();
    void thread_grp_fu_393_p0();
    void thread_grp_fu_393_p00();
    void thread_grp_fu_393_p1();
    void thread_grp_fu_393_p10();
    void thread_i_1_fu_572_p3();
    void thread_i_op_assign_1_cast_fu_409_p1();
    void thread_i_op_fu_566_p2();
    void thread_idx_1_fu_442_p2();
    void thread_ifzero_fu_580_p2();
    void thread_indvar_flatten_next_fu_513_p2();
    void thread_indvar_next_fu_608_p2();
    void thread_inputStream_V_TREADY();
    void thread_j_mid2_fu_531_p3();
    void thread_j_s_fu_519_p2();
    void thread_offset_1_fu_619_p2();
    void thread_offset_fu_413_p2();
    void thread_op2_assign_fu_456_p2();
    void thread_p_tmp_6_fu_476_p3();
    void thread_temp_1_fu_549_p3();
    void thread_temp_2_fu_557_p3();
    void thread_tmp_11_fu_539_p4();
    void thread_tmp_1_fu_436_p2();
    void thread_tmp_2_cast_fu_452_p1();
    void thread_tmp_3_fu_432_p1();
    void thread_tmp_4_cast_fu_462_p1();
    void thread_tmp_4_fu_586_p1();
    void thread_tmp_5_fu_465_p2();
    void thread_tmp_6_fu_471_p2();
    void thread_tmp_7_fu_494_p2();
    void thread_tmp_9_fu_614_p1();
    void thread_tmp_fu_591_p1();
    void thread_tmp_s_fu_422_p4();
    void thread_update_intr_read_read_fu_162_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
