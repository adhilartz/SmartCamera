// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="axi_stream_to_vga_red_255,hls_ip_2018_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xczu9eg-ffvb1156-2-i,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=2.823250,HLS_SYN_LAT=420002,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=86,HLS_SYN_LUT=538}" *)

module axi_stream_to_vga_red_255 (
        ap_clk,
        ap_rst_n,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        selftest,
        inStream_V_V_TDATA,
        inStream_V_V_TVALID,
        inStream_V_V_TREADY,
        R_V,
        G_V,
        B_V,
        V_SYNC_V,
        H_SYNC_V
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_pp0_stage0 = 3'd2;
parameter    ap_ST_fsm_state4 = 3'd4;

input   ap_clk;
input   ap_rst_n;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   selftest;
input  [7:0] inStream_V_V_TDATA;
input   inStream_V_V_TVALID;
output   inStream_V_V_TREADY;
output  [3:0] R_V;
output  [3:0] G_V;
output  [3:0] B_V;
output  [0:0] V_SYNC_V;
output  [0:0] H_SYNC_V;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg inStream_V_V_TREADY;
reg[3:0] R_V;
reg[3:0] G_V;
reg[3:0] B_V;
reg[0:0] V_SYNC_V;
reg[0:0] H_SYNC_V;

reg    ap_rst_n_inv;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [3:0] color_blinking_V;
reg    inStream_V_V_TDATA_blk_n;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
wire   [0:0] exitcond_flatten_fu_311_p2;
wire   [0:0] or_cond2_fu_449_p2;
wire   [0:0] selftest_read_read_fu_136_p2;
reg   [0:0] tmp_reg_567;
reg   [18:0] indvar_flatten_reg_194;
reg   [9:0] y_reg_205;
reg   [9:0] x_reg_216;
wire   [3:0] op2_V_read_assign_fu_259_p2;
reg   [3:0] op2_V_read_assign_reg_562;
wire   [3:0] tmp_6_i_fu_271_p2;
reg   [3:0] tmp_6_i_reg_571;
reg    ap_predicate_op69_read_state2;
reg    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state3_pp0_stage0_iter1;
reg    ap_block_pp0_stage0_11001;
wire   [18:0] indvar_flatten_next_fu_317_p2;
wire   [0:0] not_mid2_fu_373_p3;
reg   [0:0] not_mid2_reg_585;
wire   [9:0] y_mid2_fu_407_p3;
wire   [0:0] not_1_fu_425_p2;
reg   [0:0] not_1_reg_595;
reg   [0:0] or_cond2_reg_600;
wire   [9:0] x_1_fu_516_p2;
reg    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
reg   [3:0] R_temp_V_read_assign_fu_124;
wire   [0:0] tmp_9_fu_455_p2;
wire   [20:0] tmp_2_i_fu_506_p4;
reg   [3:0] G_temp_V_read_assign_fu_128;
reg   [3:0] B_temp_V_read_assign_fu_132;
reg   [3:0] R_V_preg;
reg    ap_block_pp0_stage0_01001;
reg   [3:0] G_V_preg;
reg   [3:0] B_V_preg;
reg   [0:0] V_SYNC_V_preg;
reg   [0:0] H_SYNC_V_preg;
wire   [8:0] tmp_4_fu_277_p4;
wire   [0:0] tmp_2_fu_293_p2;
wire   [0:0] tmp_3_fu_299_p2;
wire   [0:0] tmp_s_fu_323_p2;
wire   [9:0] y_coordinate_V_mid2_s_fu_337_p3;
wire   [9:0] y_s_fu_351_p2;
wire   [8:0] tmp_5_fu_357_p4;
wire   [0:0] icmp1_fu_367_p2;
wire   [0:0] icmp_fu_287_p2;
wire   [0:0] tmp_2_mid1_fu_381_p2;
wire   [0:0] tmp_3_mid1_fu_387_p2;
wire   [0:0] tmp2_mid1_fu_393_p2;
wire   [0:0] tmp2_fu_305_p2;
wire   [9:0] x_mid2_fu_329_p3;
wire   [10:0] tmp_5_cast_fu_415_p1;
wire   [0:0] tmp_6_fu_431_p2;
wire   [0:0] tmp_7_fu_437_p2;
wire   [0:0] tmp2_mid2_fu_399_p3;
wire   [0:0] tmp1_fu_443_p2;
wire   [9:0] y_coordinate_V_mid2_fu_345_p2;
wire   [10:0] p_Val2_s_fu_419_p2;
wire   [0:0] tmp_10_fu_494_p3;
wire   [18:0] tmp_1_i_fu_502_p1;
wire   [0:0] tmp_8_fu_486_p3;
wire    ap_CS_fsm_state4;
reg   [2:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_condition_181;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
#0 color_blinking_V = 4'd0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 R_V_preg = 4'd0;
#0 G_V_preg = 4'd0;
#0 B_V_preg = 4'd0;
#0 V_SYNC_V_preg = 1'd0;
#0 H_SYNC_V_preg = 1'd0;
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        B_V_preg <= 4'd0;
    end else begin
        if ((1'b1 == ap_condition_181)) begin
            if ((or_cond2_reg_600 == 1'd1)) begin
                B_V_preg <= B_temp_V_read_assign_fu_132;
            end else if ((or_cond2_reg_600 == 1'd0)) begin
                B_V_preg <= 4'd0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        G_V_preg <= 4'd0;
    end else begin
        if ((1'b1 == ap_condition_181)) begin
            if ((or_cond2_reg_600 == 1'd1)) begin
                G_V_preg <= G_temp_V_read_assign_fu_128;
            end else if ((or_cond2_reg_600 == 1'd0)) begin
                G_V_preg <= 4'd0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        H_SYNC_V_preg <= 1'd0;
    end else begin
        if ((((or_cond2_reg_600 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)) | ((or_cond2_reg_600 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)))) begin
            H_SYNC_V_preg <= not_1_reg_595;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        R_V_preg <= 4'd0;
    end else begin
        if ((1'b1 == ap_condition_181)) begin
            if ((or_cond2_reg_600 == 1'd1)) begin
                R_V_preg <= R_temp_V_read_assign_fu_124;
            end else if ((or_cond2_reg_600 == 1'd0)) begin
                R_V_preg <= 4'd0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        V_SYNC_V_preg <= 1'd0;
    end else begin
        if ((((or_cond2_reg_600 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)) | ((or_cond2_reg_600 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)))) begin
            V_SYNC_V_preg <= not_mid2_reg_585;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state2);
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        color_blinking_V <= 4'd0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            color_blinking_V <= op2_V_read_assign_fu_259_p2;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd2)))) begin
        B_temp_V_read_assign_fu_132 <= tmp_6_i_reg_571;
    end else if (((1'b0 == ap_block_pp0_stage0_11001) & (tmp_reg_567 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (tmp_9_fu_455_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        B_temp_V_read_assign_fu_132 <= {{inStream_V_V_TDATA[7:4]}};
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd0)) | ((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd3)) | ((1'b0 == ap_block_pp0_stage0_11001) & (or_cond2_fu_449_p2 == 1'd1) & (tmp_reg_567 == 1'd0) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage0_11001) & (tmp_reg_567 == 1'd1) & (tmp_9_fu_455_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        B_temp_V_read_assign_fu_132 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (tmp_reg_567 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (tmp_9_fu_455_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        G_temp_V_read_assign_fu_128 <= {{inStream_V_V_TDATA[7:4]}};
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd0)) | ((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd2)) | ((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd3)) | ((1'b0 == ap_block_pp0_stage0_11001) & (or_cond2_fu_449_p2 == 1'd1) & (tmp_reg_567 == 1'd0) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage0_11001) & (tmp_reg_567 == 1'd1) & (tmp_9_fu_455_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        G_temp_V_read_assign_fu_128 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd1)) | ((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd2)))) begin
        R_temp_V_read_assign_fu_124 <= 4'd0;
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd0)) | ((1'b0 == ap_block_pp0_stage0_11001) & (selftest_read_read_fu_136_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (tmp_2_i_fu_506_p4 == 21'd3)))) begin
        R_temp_V_read_assign_fu_124 <= op2_V_read_assign_reg_562;
    end else if (((1'b0 == ap_block_pp0_stage0_11001) & (tmp_reg_567 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (tmp_9_fu_455_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        R_temp_V_read_assign_fu_124 <= {{inStream_V_V_TDATA[7:4]}};
    end else if ((((1'b0 == ap_block_pp0_stage0_11001) & (or_cond2_fu_449_p2 == 1'd1) & (tmp_reg_567 == 1'd0) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage0_11001) & (tmp_reg_567 == 1'd1) & (tmp_9_fu_455_p2 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        R_temp_V_read_assign_fu_124 <= 4'd15;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        indvar_flatten_reg_194 <= indvar_flatten_next_fu_317_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvar_flatten_reg_194 <= 19'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        x_reg_216 <= x_1_fu_516_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        x_reg_216 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_311_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        y_reg_205 <= y_mid2_fu_407_p3;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        y_reg_205 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_flatten_fu_311_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        not_1_reg_595 <= not_1_fu_425_p2;
        not_mid2_reg_585 <= not_mid2_fu_373_p3;
        or_cond2_reg_600 <= or_cond2_fu_449_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        op2_V_read_assign_reg_562 <= op2_V_read_assign_fu_259_p2;
        tmp_6_i_reg_571 <= tmp_6_i_fu_271_p2;
        tmp_reg_567 <= inStream_V_V_TVALID;
    end
end

always @ (*) begin
    if ((1'b1 == ap_condition_181)) begin
        if ((or_cond2_reg_600 == 1'd1)) begin
            B_V = B_temp_V_read_assign_fu_132;
        end else if ((or_cond2_reg_600 == 1'd0)) begin
            B_V = 4'd0;
        end else begin
            B_V = B_V_preg;
        end
    end else begin
        B_V = B_V_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_condition_181)) begin
        if ((or_cond2_reg_600 == 1'd1)) begin
            G_V = G_temp_V_read_assign_fu_128;
        end else if ((or_cond2_reg_600 == 1'd0)) begin
            G_V = 4'd0;
        end else begin
            G_V = G_V_preg;
        end
    end else begin
        G_V = G_V_preg;
    end
end

always @ (*) begin
    if ((((or_cond2_reg_600 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)) | ((or_cond2_reg_600 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)))) begin
        H_SYNC_V = not_1_reg_595;
    end else begin
        H_SYNC_V = H_SYNC_V_preg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_condition_181)) begin
        if ((or_cond2_reg_600 == 1'd1)) begin
            R_V = R_temp_V_read_assign_fu_124;
        end else if ((or_cond2_reg_600 == 1'd0)) begin
            R_V = 4'd0;
        end else begin
            R_V = R_V_preg;
        end
    end else begin
        R_V = R_V_preg;
    end
end

always @ (*) begin
    if ((((or_cond2_reg_600 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)) | ((or_cond2_reg_600 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001)))) begin
        V_SYNC_V = not_mid2_reg_585;
    end else begin
        V_SYNC_V = V_SYNC_V_preg;
    end
end

always @ (*) begin
    if ((exitcond_flatten_fu_311_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_reg_567 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        inStream_V_V_TDATA_blk_n = inStream_V_V_TVALID;
    end else begin
        inStream_V_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_predicate_op69_read_state2 == 1'b1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        inStream_V_V_TREADY = 1'b1;
    end else begin
        inStream_V_V_TREADY = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((exitcond_flatten_fu_311_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((exitcond_flatten_fu_311_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd2];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_01001 = ((inStream_V_V_TVALID == 1'b0) & (ap_predicate_op69_read_state2 == 1'b1) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((inStream_V_V_TVALID == 1'b0) & (ap_predicate_op69_read_state2 == 1'b1) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((inStream_V_V_TVALID == 1'b0) & (ap_predicate_op69_read_state2 == 1'b1) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_block_state2_pp0_stage0_iter0 = ((inStream_V_V_TVALID == 1'b0) & (ap_predicate_op69_read_state2 == 1'b1));
end

assign ap_block_state3_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_condition_181 = ((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0_01001));
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

always @ (*) begin
    ap_predicate_op69_read_state2 = ((tmp_reg_567 == 1'd1) & (or_cond2_fu_449_p2 == 1'd1) & (selftest_read_read_fu_136_p2 == 1'd0) & (exitcond_flatten_fu_311_p2 == 1'd0));
end

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign exitcond_flatten_fu_311_p2 = ((indvar_flatten_reg_194 == 19'd420000) ? 1'b1 : 1'b0);

assign icmp1_fu_367_p2 = ((tmp_5_fu_357_p4 != 9'd0) ? 1'b1 : 1'b0);

assign icmp_fu_287_p2 = ((tmp_4_fu_277_p4 != 9'd0) ? 1'b1 : 1'b0);

assign indvar_flatten_next_fu_317_p2 = (indvar_flatten_reg_194 + 19'd1);

assign not_1_fu_425_p2 = ((x_mid2_fu_329_p3 > 10'd95) ? 1'b1 : 1'b0);

assign not_mid2_fu_373_p3 = ((tmp_s_fu_323_p2[0:0] === 1'b1) ? icmp1_fu_367_p2 : icmp_fu_287_p2);

assign op2_V_read_assign_fu_259_p2 = (color_blinking_V + 4'd1);

assign or_cond2_fu_449_p2 = (tmp2_mid2_fu_399_p3 & tmp1_fu_443_p2);

assign p_Val2_s_fu_419_p2 = ($signed(tmp_5_cast_fu_415_p1) + $signed(11'd1904));

assign selftest_read_read_fu_136_p2 = selftest;

assign tmp1_fu_443_p2 = (tmp_7_fu_437_p2 & tmp_6_fu_431_p2);

assign tmp2_fu_305_p2 = (tmp_3_fu_299_p2 & tmp_2_fu_293_p2);

assign tmp2_mid1_fu_393_p2 = (tmp_3_mid1_fu_387_p2 & tmp_2_mid1_fu_381_p2);

assign tmp2_mid2_fu_399_p3 = ((tmp_s_fu_323_p2[0:0] === 1'b1) ? tmp2_mid1_fu_393_p2 : tmp2_fu_305_p2);

assign tmp_10_fu_494_p3 = p_Val2_s_fu_419_p2[32'd5];

assign tmp_1_i_fu_502_p1 = tmp_10_fu_494_p3;

assign tmp_2_fu_293_p2 = ((y_reg_205 > 10'd34) ? 1'b1 : 1'b0);

assign tmp_2_i_fu_506_p4 = {{{{1'd0}, {tmp_1_i_fu_502_p1}}}, {tmp_8_fu_486_p3}};

assign tmp_2_mid1_fu_381_p2 = ((y_s_fu_351_p2 > 10'd34) ? 1'b1 : 1'b0);

assign tmp_3_fu_299_p2 = ((y_reg_205 < 10'd515) ? 1'b1 : 1'b0);

assign tmp_3_mid1_fu_387_p2 = ((y_s_fu_351_p2 < 10'd515) ? 1'b1 : 1'b0);

assign tmp_4_fu_277_p4 = {{y_reg_205[9:1]}};

assign tmp_5_cast_fu_415_p1 = x_mid2_fu_329_p3;

assign tmp_5_fu_357_p4 = {{y_s_fu_351_p2[9:1]}};

assign tmp_6_fu_431_p2 = ((x_mid2_fu_329_p3 > 10'd143) ? 1'b1 : 1'b0);

assign tmp_6_i_fu_271_p2 = ($signed(4'd14) - $signed(color_blinking_V));

assign tmp_7_fu_437_p2 = ((x_mid2_fu_329_p3 < 10'd784) ? 1'b1 : 1'b0);

assign tmp_8_fu_486_p3 = y_coordinate_V_mid2_fu_345_p2[32'd5];

assign tmp_9_fu_455_p2 = ((inStream_V_V_TDATA == 8'd255) ? 1'b1 : 1'b0);

assign tmp_s_fu_323_p2 = ((x_reg_216 == 10'd800) ? 1'b1 : 1'b0);

assign x_1_fu_516_p2 = (x_mid2_fu_329_p3 + 10'd1);

assign x_mid2_fu_329_p3 = ((tmp_s_fu_323_p2[0:0] === 1'b1) ? 10'd0 : x_reg_216);

assign y_coordinate_V_mid2_fu_345_p2 = (y_reg_205 + y_coordinate_V_mid2_s_fu_337_p3);

assign y_coordinate_V_mid2_s_fu_337_p3 = ((tmp_s_fu_323_p2[0:0] === 1'b1) ? 10'd990 : 10'd989);

assign y_mid2_fu_407_p3 = ((tmp_s_fu_323_p2[0:0] === 1'b1) ? y_s_fu_351_p2 : y_reg_205);

assign y_s_fu_351_p2 = (y_reg_205 + 10'd1);

endmodule //axi_stream_to_vga_red_255