// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sep_convolution_filter_HH_
#define _sep_convolution_filter_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sep_convolution_filter_sdiv_23s_8s_23_27.h"
#include "sep_convolution_filter_mac_muladd_8s_8ns_16s_17_1.h"
#include "sep_convolution_filter_mac_muladd_8s_8ns_17s_18_1.h"
#include "sep_convolution_filter_mac_muladd_19s_8s_22s_22_1.h"
#include "sep_convolution_filter_mul_mul_19s_8s_22_1.h"
#include "sep_convolution_filter_line_buffer_V_0.h"

namespace ap_rtl {

struct sep_convolution_filter : public sc_module {
    // Port declarations 15
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > kernel_config_V_address0;
    sc_out< sc_logic > kernel_config_V_ce0;
    sc_in< sc_lv<8> > kernel_config_V_q0;
    sc_in< sc_lv<8> > in_img_V_TDATA;
    sc_in< sc_logic > in_img_V_TVALID;
    sc_out< sc_logic > in_img_V_TREADY;
    sc_out< sc_lv<8> > out_img_V_TDATA;
    sc_out< sc_logic > out_img_V_TVALID;
    sc_in< sc_logic > out_img_V_TREADY;


    // Module declarations
    sep_convolution_filter(sc_module_name name);
    SC_HAS_PROCESS(sep_convolution_filter);

    ~sep_convolution_filter();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sep_convolution_filter_line_buffer_V_0* line_buffer_V_0_U;
    sep_convolution_filter_line_buffer_V_0* line_buffer_V_1_U;
    sep_convolution_filter_line_buffer_V_0* line_buffer_V_2_U;
    sep_convolution_filter_line_buffer_V_0* line_buffer_V_3_U;
    sep_convolution_filter_line_buffer_V_0* line_buffer_V_4_U;
    sep_convolution_filter_line_buffer_V_0* line_buffer_V_5_U;
    sep_convolution_filter_sdiv_23s_8s_23_27<1,27,23,8,23>* sep_convolution_filter_sdiv_23s_8s_23_27_U0;
    sep_convolution_filter_mac_muladd_8s_8ns_16s_17_1<1,1,8,8,16,17>* sep_convolution_filter_mac_muladd_8s_8ns_16s_17_1_U1;
    sep_convolution_filter_mac_muladd_8s_8ns_16s_17_1<1,1,8,8,16,17>* sep_convolution_filter_mac_muladd_8s_8ns_16s_17_1_U2;
    sep_convolution_filter_mac_muladd_8s_8ns_16s_17_1<1,1,8,8,16,17>* sep_convolution_filter_mac_muladd_8s_8ns_16s_17_1_U3;
    sep_convolution_filter_mac_muladd_8s_8ns_17s_18_1<1,1,8,8,17,18>* sep_convolution_filter_mac_muladd_8s_8ns_17s_18_1_U4;
    sep_convolution_filter_mac_muladd_19s_8s_22s_22_1<1,1,19,8,22,22>* sep_convolution_filter_mac_muladd_19s_8s_22s_22_1_U5;
    sep_convolution_filter_mac_muladd_19s_8s_22s_22_1<1,1,19,8,22,22>* sep_convolution_filter_mac_muladd_19s_8s_22s_22_1_U6;
    sep_convolution_filter_mac_muladd_19s_8s_22s_22_1<1,1,19,8,22,22>* sep_convolution_filter_mac_muladd_19s_8s_22s_22_1_U7;
    sep_convolution_filter_mul_mul_19s_8s_22_1<1,1,19,8,22>* sep_convolution_filter_mul_mul_19s_8s_22_1_U8;
    sep_convolution_filter_mul_mul_19s_8s_22_1<1,1,19,8,22>* sep_convolution_filter_mul_mul_19s_8s_22_1_U9;
    sep_convolution_filter_mul_mul_19s_8s_22_1<1,1,19,8,22>* sep_convolution_filter_mul_mul_19s_8s_22_1_U10;
    sep_convolution_filter_mac_muladd_19s_8s_22s_22_1<1,1,19,8,22,22>* sep_convolution_filter_mac_muladd_19s_8s_22s_22_1_U11;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_20;
    sc_signal< sc_lv<8> > kernel_h_V_0;
    sc_signal< sc_lv<8> > kernel_v_V_0;
    sc_signal< sc_lv<8> > kernel_sum_V;
    sc_signal< sc_lv<8> > kernel_off_V;
    sc_signal< sc_lv<8> > kernel_bit_shift_V;
    sc_signal< sc_lv<10> > line_buffer_V_0_address0;
    sc_signal< sc_logic > line_buffer_V_0_ce0;
    sc_signal< sc_lv<8> > line_buffer_V_0_q0;
    sc_signal< sc_logic > line_buffer_V_0_ce1;
    sc_signal< sc_logic > line_buffer_V_0_we1;
    sc_signal< sc_lv<8> > window_V_0;
    sc_signal< sc_lv<10> > line_buffer_V_1_address0;
    sc_signal< sc_logic > line_buffer_V_1_ce0;
    sc_signal< sc_lv<8> > line_buffer_V_1_q0;
    sc_signal< sc_logic > line_buffer_V_1_ce1;
    sc_signal< sc_logic > line_buffer_V_1_we1;
    sc_signal< sc_lv<8> > window_V_1;
    sc_signal< sc_lv<10> > line_buffer_V_2_address0;
    sc_signal< sc_logic > line_buffer_V_2_ce0;
    sc_signal< sc_lv<8> > line_buffer_V_2_q0;
    sc_signal< sc_logic > line_buffer_V_2_ce1;
    sc_signal< sc_logic > line_buffer_V_2_we1;
    sc_signal< sc_lv<8> > window_V_2;
    sc_signal< sc_lv<10> > line_buffer_V_3_address0;
    sc_signal< sc_logic > line_buffer_V_3_ce0;
    sc_signal< sc_lv<8> > line_buffer_V_3_q0;
    sc_signal< sc_logic > line_buffer_V_3_ce1;
    sc_signal< sc_logic > line_buffer_V_3_we1;
    sc_signal< sc_lv<8> > window_V_3;
    sc_signal< sc_lv<10> > line_buffer_V_4_address0;
    sc_signal< sc_logic > line_buffer_V_4_ce0;
    sc_signal< sc_lv<8> > line_buffer_V_4_q0;
    sc_signal< sc_logic > line_buffer_V_4_ce1;
    sc_signal< sc_logic > line_buffer_V_4_we1;
    sc_signal< sc_lv<8> > window_V_4;
    sc_signal< sc_lv<10> > line_buffer_V_5_address0;
    sc_signal< sc_logic > line_buffer_V_5_ce0;
    sc_signal< sc_lv<8> > line_buffer_V_5_q0;
    sc_signal< sc_lv<10> > line_buffer_V_5_address1;
    sc_signal< sc_logic > line_buffer_V_5_ce1;
    sc_signal< sc_logic > line_buffer_V_5_we1;
    sc_signal< sc_lv<8> > window_V_5;
    sc_signal< sc_lv<8> > window_V_6;
    sc_signal< sc_lv<8> > kernel_v_V_1;
    sc_signal< sc_lv<8> > kernel_v_V_2;
    sc_signal< sc_lv<8> > kernel_v_V_3;
    sc_signal< sc_lv<8> > kernel_v_V_4;
    sc_signal< sc_lv<8> > kernel_v_V_5;
    sc_signal< sc_lv<8> > kernel_v_V_6;
    sc_signal< sc_lv<19> > convolution_buffer_V_1;
    sc_signal< sc_lv<19> > convolution_buffer_V_2;
    sc_signal< sc_lv<8> > kernel_h_V_1;
    sc_signal< sc_lv<19> > convolution_buffer_V_3;
    sc_signal< sc_lv<8> > kernel_h_V_2;
    sc_signal< sc_lv<19> > convolution_buffer_V_4;
    sc_signal< sc_lv<8> > kernel_h_V_3;
    sc_signal< sc_lv<19> > convolution_buffer_V_5;
    sc_signal< sc_lv<8> > kernel_h_V_4;
    sc_signal< sc_lv<19> > convolution_buffer_V_6;
    sc_signal< sc_lv<8> > kernel_h_V_5;
    sc_signal< sc_lv<8> > kernel_h_V_6;
    sc_signal< sc_logic > in_img_V_TDATA_blk_n;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_1;
    sc_signal< bool > ap_sig_145;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it2;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it3;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it4;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it5;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it6;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it7;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it8;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it9;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it10;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it11;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it12;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it13;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it14;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it15;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it16;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it17;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it18;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it19;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it20;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it21;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it22;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it23;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it24;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it25;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it26;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it27;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it28;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it29;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_431_p2;
    sc_signal< sc_lv<1> > or_cond_fu_638_p2;
    sc_signal< sc_logic > out_img_V_TDATA_blk_n;
    sc_signal< sc_lv<1> > or_cond1_reg_1451;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter28;
    sc_signal< sc_lv<19> > indvar_flatten_reg_348;
    sc_signal< sc_lv<19> > sep_mulconvolution_filter_ap_int_reg_359;
    sc_signal< sc_lv<9> > row_reg_370;
    sc_signal< sc_lv<19> > sep_convolution_filter_ap_int_3_reg_381;
    sc_signal< sc_lv<10> > col_reg_392;
    sc_signal< sc_lv<8> > reg_408;
    sc_signal< bool > ap_sig_236;
    sc_signal< sc_logic > ap_sig_ioackin_out_img_V_TREADY;
    sc_signal< sc_lv<1> > tmp_4_reg_1391;
    sc_signal< sc_lv<1> > tmp_8_reg_1407;
    sc_signal< sc_lv<1> > tmp_s_reg_1411;
    sc_signal< sc_lv<19> > indvar_flatten_next_fu_437_p2;
    sc_signal< sc_lv<10> > col_mid2_fu_463_p3;
    sc_signal< sc_lv<10> > col_mid2_reg_1375;
    sc_signal< sc_lv<10> > ap_reg_ppstg_col_mid2_reg_1375_pp0_iter1;
    sc_signal< sc_lv<19> > sep_convolution_filter_ap_int_7_fu_517_p3;
    sc_signal< sc_lv<9> > row_mid2_fu_525_p3;
    sc_signal< sc_lv<1> > tmp_4_fu_533_p2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_4_reg_1391_pp0_iter1;
    sc_signal< sc_lv<1> > tmp_6_fu_539_p2;
    sc_signal< sc_lv<1> > tmp_6_reg_1395;
    sc_signal< sc_lv<1> > tmp_9_fu_545_p2;
    sc_signal< sc_lv<1> > tmp_9_reg_1399;
    sc_signal< sc_lv<1> > tmp_12_fu_551_p2;
    sc_signal< sc_lv<1> > tmp_12_reg_1403;
    sc_signal< sc_lv<1> > tmp_8_fu_592_p2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_8_reg_1407_pp0_iter1;
    sc_signal< sc_lv<1> > grp_fu_403_p2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_s_reg_1411_pp0_iter1;
    sc_signal< sc_lv<3> > tmp_31_fu_603_p1;
    sc_signal< sc_lv<3> > tmp_31_reg_1420;
    sc_signal< sc_lv<3> > ap_reg_ppstg_tmp_31_reg_1420_pp0_iter1;
    sc_signal< sc_lv<3> > tmp_29_fu_612_p1;
    sc_signal< sc_lv<3> > tmp_29_reg_1429;
    sc_signal< sc_lv<3> > ap_reg_ppstg_tmp_29_reg_1429_pp0_iter1;
    sc_signal< sc_lv<1> > tmp_10_reg_1433;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_10_reg_1433_pp0_iter1;
    sc_signal< sc_lv<1> > tmp_15_fu_632_p2;
    sc_signal< sc_lv<1> > tmp_15_reg_1437;
    sc_signal< sc_lv<1> > ap_reg_ppstg_tmp_15_reg_1437_pp0_iter1;
    sc_signal< sc_lv<1> > or_cond_reg_1441;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond_reg_1441_pp0_iter1;
    sc_signal< sc_lv<8> > in_temp_V_reg_1445;
    sc_signal< sc_lv<8> > ap_reg_ppstg_in_temp_V_reg_1445_pp0_iter1;
    sc_signal< sc_lv<1> > or_cond1_fu_650_p2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter1;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter2;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter3;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter4;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter5;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter6;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter7;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter8;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter9;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter10;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter11;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter12;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter13;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter14;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter15;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter16;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter17;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter18;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter19;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter20;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter21;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter22;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter23;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter24;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter25;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter26;
    sc_signal< sc_lv<1> > ap_reg_ppstg_or_cond1_reg_1451_pp0_iter27;
    sc_signal< sc_lv<19> > tmp_30_fu_656_p2;
    sc_signal< sc_lv<10> > col_1_fu_662_p2;
    sc_signal< sc_lv<10> > line_buffer_V_0_addr_reg_1465;
    sc_signal< sc_lv<10> > line_buffer_V_1_addr_reg_1471;
    sc_signal< sc_lv<10> > line_buffer_V_2_addr_reg_1477;
    sc_signal< sc_lv<10> > line_buffer_V_3_addr_reg_1483;
    sc_signal< sc_lv<10> > line_buffer_V_4_addr_reg_1489;
    sc_signal< sc_lv<8> > kernel_h_V_0_loc_1_load_reg_1500;
    sc_signal< sc_lv<8> > kernel_off_V_load_reg_1505;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter3;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter4;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter5;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter6;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter7;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter8;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter9;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter10;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter11;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter12;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter13;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter14;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter15;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter16;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter17;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter18;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter19;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter20;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter21;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter22;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter23;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter24;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter25;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter26;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter27;
    sc_signal< sc_lv<8> > ap_reg_ppstg_kernel_off_V_load_reg_1505_pp0_iter28;
    sc_signal< sc_lv<8> > r_V_1_fu_891_p3;
    sc_signal< sc_lv<8> > r_V_1_reg_1510;
    sc_signal< sc_lv<64> > tmp_11_fu_598_p1;
    sc_signal< sc_lv<64> > tmp_3_fu_607_p1;
    sc_signal< sc_lv<64> > tmp_16_fu_697_p1;
    sc_signal< sc_lv<64> > tmp_17_fu_834_p1;
    sc_signal< sc_lv<19> > temp_v_V_6_fu_1063_p2;
    sc_signal< sc_lv<8> > kernel_h_V_0_loc_1_fu_176;
    sc_signal< sc_lv<32> > sep_convolution_filter_ap_int_2_fu_180;
    sc_signal< sc_lv<32> > tmp_14_fu_616_p2;
    sc_signal< sc_lv<32> > sep_convolution_filter_ap_int_1_fu_184;
    sc_signal< sc_lv<32> > sel_SEBB_fu_575_p3;
    sc_signal< sc_logic > ap_reg_ioackin_out_img_V_TREADY;
    sc_signal< sc_lv<32> > sel_SEBB1_fu_583_p3;
    sc_signal< sc_lv<1> > exitcond_fu_449_p2;
    sc_signal< sc_lv<19> > tmp_1_fu_443_p2;
    sc_signal< sc_lv<9> > row_s_fu_471_p2;
    sc_signal< sc_lv<1> > tmp_mid1_fu_477_p2;
    sc_signal< sc_lv<1> > tmp_fu_483_p2;
    sc_signal< sc_lv<1> > tmp_2_mid1_fu_497_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_503_p2;
    sc_signal< sc_lv<19> > sep_convolution_filter_ap_int_6_fu_455_p3;
    sc_signal< sc_lv<1> > tmp_5_fu_563_p2;
    sc_signal< sc_lv<32> > tmp_7_fu_569_p2;
    sc_signal< sc_lv<1> > tmp_mid2_fu_489_p3;
    sc_signal< sc_lv<1> > tmp_2_mid2_fu_509_p3;
    sc_signal< sc_lv<1> > tmp_18_fu_644_p2;
    sc_signal< sc_lv<8> > sh_V_1_fu_861_p2;
    sc_signal< sc_lv<32> > tmp_25_fu_867_p1;
    sc_signal< sc_lv<32> > tmp_27_fu_877_p1;
    sc_signal< sc_lv<32> > tmp_28_fu_881_p2;
    sc_signal< sc_lv<1> > tmp_32_fu_853_p3;
    sc_signal< sc_lv<8> > tmp_26_fu_871_p2;
    sc_signal< sc_lv<8> > tmp_33_fu_887_p1;
    sc_signal< sc_lv<8> > r_V_fu_915_p0;
    sc_signal< sc_lv<8> > r_V_fu_915_p1;
    sc_signal< sc_lv<16> > r_V_fu_915_p2;
    sc_signal< sc_lv<8> > r_V_s_fu_941_p0;
    sc_signal< sc_lv<8> > r_V_s_fu_941_p1;
    sc_signal< sc_lv<16> > r_V_s_fu_941_p2;
    sc_signal< sc_lv<8> > r_V_5_fu_1015_p0;
    sc_signal< sc_lv<8> > r_V_5_fu_1015_p1;
    sc_signal< sc_lv<16> > r_V_5_fu_1015_p2;
    sc_signal< sc_lv<17> > grp_fu_1249_p3;
    sc_signal< sc_lv<18> > grp_fu_1267_p3;
    sc_signal< sc_lv<17> > grp_fu_1240_p3;
    sc_signal< sc_lv<17> > grp_fu_1258_p3;
    sc_signal< sc_lv<18> > tmp9_cast_fu_1050_p1;
    sc_signal< sc_lv<18> > tmp8_cast_fu_1047_p1;
    sc_signal< sc_lv<18> > tmp7_fu_1053_p2;
    sc_signal< sc_lv<19> > tmp7_cast_fu_1059_p1;
    sc_signal< sc_lv<19> > tmp5_cast_fu_1044_p1;
    sc_signal< sc_lv<22> > grp_fu_1292_p3;
    sc_signal< sc_lv<22> > grp_fu_1320_p3;
    sc_signal< sc_lv<22> > tmp10_fu_1202_p2;
    sc_signal< sc_lv<22> > grp_fu_1276_p3;
    sc_signal< sc_lv<22> > temp_h_V_fu_1206_p2;
    sc_signal< sc_lv<23> > grp_fu_1224_p0;
    sc_signal< sc_lv<23> > grp_fu_1224_p2;
    sc_signal< sc_lv<8> > tmp_34_fu_1230_p1;
    sc_signal< sc_lv<8> > grp_fu_1240_p1;
    sc_signal< sc_lv<8> > grp_fu_1249_p1;
    sc_signal< sc_lv<8> > grp_fu_1258_p1;
    sc_signal< sc_lv<8> > grp_fu_1267_p1;
    sc_signal< sc_lv<22> > grp_fu_1284_p3;
    sc_signal< sc_lv<22> > tmp_36_1_fu_1306_p2;
    sc_signal< sc_lv<22> > tmp_36_5_fu_1313_p2;
    sc_signal< sc_lv<22> > tmp_36_3_fu_1300_p2;
    sc_signal< sc_logic > grp_fu_1224_ce;
    sc_signal< sc_logic > ap_sig_cseq_ST_st32_fsm_2;
    sc_signal< bool > ap_sig_1216;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_lv<16> > grp_fu_1240_p10;
    sc_signal< sc_lv<16> > grp_fu_1249_p10;
    sc_signal< sc_lv<16> > grp_fu_1258_p10;
    sc_signal< sc_lv<16> > grp_fu_1267_p10;
    sc_signal< sc_lv<16> > r_V_5_fu_1015_p10;
    sc_signal< sc_lv<16> > r_V_fu_915_p10;
    sc_signal< sc_lv<16> > r_V_s_fu_941_p10;
    sc_signal< bool > ap_sig_1259;
    sc_signal< bool > ap_sig_222;
    sc_signal< bool > ap_sig_1265;
    sc_signal< bool > ap_sig_1267;
    sc_signal< bool > ap_sig_1269;
    sc_signal< bool > ap_sig_1272;
    sc_signal< bool > ap_sig_1274;
    sc_signal< bool > ap_sig_1262;
    sc_signal< bool > ap_sig_1279;
    sc_signal< bool > ap_sig_1281;
    sc_signal< bool > ap_sig_1277;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_st1_fsm_0;
    static const sc_lv<3> ap_ST_pp0_stg0_fsm_1;
    static const sc_lv<3> ap_ST_st32_fsm_2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<19> ap_const_lv19_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<64> ap_const_lv64_31;
    static const sc_lv<64> ap_const_lv64_32;
    static const sc_lv<64> ap_const_lv64_33;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<19> ap_const_lv19_4BD29;
    static const sc_lv<19> ap_const_lv19_1;
    static const sc_lv<19> ap_const_lv19_283;
    static const sc_lv<10> ap_const_lv10_283;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<9> ap_const_lv9_1E0;
    static const sc_lv<9> ap_const_lv9_2;
    static const sc_lv<19> ap_const_lv19_31;
    static const sc_lv<19> ap_const_lv19_32;
    static const sc_lv<19> ap_const_lv19_33;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<10> ap_const_lv10_280;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_1216();
    void thread_ap_sig_1259();
    void thread_ap_sig_1262();
    void thread_ap_sig_1265();
    void thread_ap_sig_1267();
    void thread_ap_sig_1269();
    void thread_ap_sig_1272();
    void thread_ap_sig_1274();
    void thread_ap_sig_1277();
    void thread_ap_sig_1279();
    void thread_ap_sig_1281();
    void thread_ap_sig_145();
    void thread_ap_sig_20();
    void thread_ap_sig_222();
    void thread_ap_sig_236();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_1();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st32_fsm_2();
    void thread_ap_sig_ioackin_out_img_V_TREADY();
    void thread_col_1_fu_662_p2();
    void thread_col_mid2_fu_463_p3();
    void thread_exitcond_flatten_fu_431_p2();
    void thread_exitcond_fu_449_p2();
    void thread_grp_fu_1224_ce();
    void thread_grp_fu_1224_p0();
    void thread_grp_fu_1240_p1();
    void thread_grp_fu_1240_p10();
    void thread_grp_fu_1249_p1();
    void thread_grp_fu_1249_p10();
    void thread_grp_fu_1258_p1();
    void thread_grp_fu_1258_p10();
    void thread_grp_fu_1267_p1();
    void thread_grp_fu_1267_p10();
    void thread_grp_fu_403_p2();
    void thread_in_img_V_TDATA_blk_n();
    void thread_in_img_V_TREADY();
    void thread_indvar_flatten_next_fu_437_p2();
    void thread_kernel_config_V_address0();
    void thread_kernel_config_V_ce0();
    void thread_line_buffer_V_0_address0();
    void thread_line_buffer_V_0_ce0();
    void thread_line_buffer_V_0_ce1();
    void thread_line_buffer_V_0_we1();
    void thread_line_buffer_V_1_address0();
    void thread_line_buffer_V_1_ce0();
    void thread_line_buffer_V_1_ce1();
    void thread_line_buffer_V_1_we1();
    void thread_line_buffer_V_2_address0();
    void thread_line_buffer_V_2_ce0();
    void thread_line_buffer_V_2_ce1();
    void thread_line_buffer_V_2_we1();
    void thread_line_buffer_V_3_address0();
    void thread_line_buffer_V_3_ce0();
    void thread_line_buffer_V_3_ce1();
    void thread_line_buffer_V_3_we1();
    void thread_line_buffer_V_4_address0();
    void thread_line_buffer_V_4_ce0();
    void thread_line_buffer_V_4_ce1();
    void thread_line_buffer_V_4_we1();
    void thread_line_buffer_V_5_address0();
    void thread_line_buffer_V_5_address1();
    void thread_line_buffer_V_5_ce0();
    void thread_line_buffer_V_5_ce1();
    void thread_line_buffer_V_5_we1();
    void thread_or_cond1_fu_650_p2();
    void thread_or_cond_fu_638_p2();
    void thread_out_img_V_TDATA();
    void thread_out_img_V_TDATA_blk_n();
    void thread_out_img_V_TVALID();
    void thread_r_V_1_fu_891_p3();
    void thread_r_V_5_fu_1015_p0();
    void thread_r_V_5_fu_1015_p1();
    void thread_r_V_5_fu_1015_p10();
    void thread_r_V_5_fu_1015_p2();
    void thread_r_V_fu_915_p0();
    void thread_r_V_fu_915_p1();
    void thread_r_V_fu_915_p10();
    void thread_r_V_fu_915_p2();
    void thread_r_V_s_fu_941_p0();
    void thread_r_V_s_fu_941_p1();
    void thread_r_V_s_fu_941_p10();
    void thread_r_V_s_fu_941_p2();
    void thread_row_mid2_fu_525_p3();
    void thread_row_s_fu_471_p2();
    void thread_sel_SEBB1_fu_583_p3();
    void thread_sel_SEBB_fu_575_p3();
    void thread_sep_convolution_filter_ap_int_6_fu_455_p3();
    void thread_sep_convolution_filter_ap_int_7_fu_517_p3();
    void thread_sh_V_1_fu_861_p2();
    void thread_temp_h_V_fu_1206_p2();
    void thread_temp_v_V_6_fu_1063_p2();
    void thread_tmp10_fu_1202_p2();
    void thread_tmp5_cast_fu_1044_p1();
    void thread_tmp7_cast_fu_1059_p1();
    void thread_tmp7_fu_1053_p2();
    void thread_tmp8_cast_fu_1047_p1();
    void thread_tmp9_cast_fu_1050_p1();
    void thread_tmp_11_fu_598_p1();
    void thread_tmp_12_fu_551_p2();
    void thread_tmp_14_fu_616_p2();
    void thread_tmp_15_fu_632_p2();
    void thread_tmp_16_fu_697_p1();
    void thread_tmp_17_fu_834_p1();
    void thread_tmp_18_fu_644_p2();
    void thread_tmp_1_fu_443_p2();
    void thread_tmp_25_fu_867_p1();
    void thread_tmp_26_fu_871_p2();
    void thread_tmp_27_fu_877_p1();
    void thread_tmp_28_fu_881_p2();
    void thread_tmp_29_fu_612_p1();
    void thread_tmp_2_fu_503_p2();
    void thread_tmp_2_mid1_fu_497_p2();
    void thread_tmp_2_mid2_fu_509_p3();
    void thread_tmp_30_fu_656_p2();
    void thread_tmp_31_fu_603_p1();
    void thread_tmp_32_fu_853_p3();
    void thread_tmp_33_fu_887_p1();
    void thread_tmp_34_fu_1230_p1();
    void thread_tmp_3_fu_607_p1();
    void thread_tmp_4_fu_533_p2();
    void thread_tmp_5_fu_563_p2();
    void thread_tmp_6_fu_539_p2();
    void thread_tmp_7_fu_569_p2();
    void thread_tmp_8_fu_592_p2();
    void thread_tmp_9_fu_545_p2();
    void thread_tmp_fu_483_p2();
    void thread_tmp_mid1_fu_477_p2();
    void thread_tmp_mid2_fu_489_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
