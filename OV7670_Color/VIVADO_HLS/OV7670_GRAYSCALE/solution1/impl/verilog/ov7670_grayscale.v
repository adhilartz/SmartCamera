// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="ov7670_grayscale,hls_ip_2016_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=1.370000,HLS_SYN_LAT=0,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=3,HLS_SYN_LUT=8}" *)

module ov7670_grayscale (
        ap_clk,
        ap_rst_n,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        inStream_V_V_TDATA,
        inStream_V_V_TVALID,
        inStream_V_V_TREADY,
        outStream_V_V_TDATA,
        outStream_V_V_TVALID,
        outStream_V_V_TREADY
);

parameter    ap_ST_st1_fsm_0 = 1'b1;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;

input   ap_clk;
input   ap_rst_n;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [7:0] inStream_V_V_TDATA;
input   inStream_V_V_TVALID;
output   inStream_V_V_TREADY;
output  [7:0] outStream_V_V_TDATA;
output   outStream_V_V_TVALID;
input   outStream_V_V_TREADY;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg inStream_V_V_TREADY;
reg outStream_V_V_TVALID;

reg    ap_rst_n_inv;
(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_18;
reg   [0:0] grayscale_valid;
reg    inStream_V_V_TDATA_blk_n;
reg    outStream_V_V_TDATA_blk_n;
wire   [0:0] grayscale_valid_load_load_fu_44_p1;
wire   [0:0] tmp_3_fu_48_p2;
reg    ap_sig_43;
reg    ap_sig_ioackin_outStream_V_V_TREADY;
reg    ap_reg_ioackin_outStream_V_V_TREADY;
reg   [0:0] ap_NS_fsm;
reg    ap_sig_75;
reg    ap_sig_39;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'b1;
#0 grayscale_valid = 1'b0;
#0 ap_reg_ioackin_outStream_V_V_TREADY = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_reg_ioackin_outStream_V_V_TREADY <= 1'b0;
    end else begin
        if (ap_sig_39) begin
            if (~(ap_sig_43 | (~(1'b0 == grayscale_valid_load_load_fu_44_p1) & (1'b0 == ap_sig_ioackin_outStream_V_V_TREADY)))) begin
                ap_reg_ioackin_outStream_V_V_TREADY <= 1'b0;
            end else if (ap_sig_75) begin
                ap_reg_ioackin_outStream_V_V_TREADY <= 1'b1;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        grayscale_valid <= 1'b0;
    end else begin
        if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_sig_43 | (~(1'b0 == grayscale_valid_load_load_fu_44_p1) & (1'b0 == ap_sig_ioackin_outStream_V_V_TREADY))))) begin
            grayscale_valid <= tmp_3_fu_48_p2;
        end
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_sig_43 | (~(1'b0 == grayscale_valid_load_load_fu_44_p1) & (1'b0 == ap_sig_ioackin_outStream_V_V_TREADY))))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_sig_43 | (~(1'b0 == grayscale_valid_load_load_fu_44_p1) & (1'b0 == ap_sig_ioackin_outStream_V_V_TREADY))))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_18) begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b0 == ap_reg_ioackin_outStream_V_V_TREADY)) begin
        ap_sig_ioackin_outStream_V_V_TREADY = outStream_V_V_TREADY;
    end else begin
        ap_sig_ioackin_outStream_V_V_TREADY = 1'b1;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st1_fsm_0)) begin
        inStream_V_V_TDATA_blk_n = inStream_V_V_TVALID;
    end else begin
        inStream_V_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_sig_43 | (~(1'b0 == grayscale_valid_load_load_fu_44_p1) & (1'b0 == ap_sig_ioackin_outStream_V_V_TREADY))))) begin
        inStream_V_V_TREADY = 1'b1;
    end else begin
        inStream_V_V_TREADY = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(1'b0 == grayscale_valid_load_load_fu_44_p1))) begin
        outStream_V_V_TDATA_blk_n = outStream_V_V_TREADY;
    end else begin
        outStream_V_V_TDATA_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(1'b0 == grayscale_valid_load_load_fu_44_p1) & ~ap_sig_43 & (1'b0 == ap_reg_ioackin_outStream_V_V_TREADY))) begin
        outStream_V_V_TVALID = 1'b1;
    end else begin
        outStream_V_V_TVALID = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

always @ (*) begin
    ap_sig_18 = (ap_CS_fsm[ap_const_lv32_0] == 1'b1);
end

always @ (*) begin
    ap_sig_39 = ((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~(1'b0 == grayscale_valid_load_load_fu_44_p1));
end

always @ (*) begin
    ap_sig_43 = ((inStream_V_V_TVALID == 1'b0) | (ap_start == 1'b0));
end

always @ (*) begin
    ap_sig_75 = (~ap_sig_43 & (1'b1 == outStream_V_V_TREADY));
end

assign grayscale_valid_load_load_fu_44_p1 = grayscale_valid;

assign outStream_V_V_TDATA = inStream_V_V_TDATA;

assign tmp_3_fu_48_p2 = (grayscale_valid ^ 1'b1);

endmodule //ov7670_grayscale
