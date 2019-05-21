// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xddr_to_axis_reader.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XDdr_to_axis_reader_CfgInitialize(XDdr_to_axis_reader *InstancePtr, XDdr_to_axis_reader_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XDdr_to_axis_reader_Start(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_AP_CTRL) & 0x80;
    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XDdr_to_axis_reader_IsDone(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XDdr_to_axis_reader_IsIdle(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XDdr_to_axis_reader_IsReady(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XDdr_to_axis_reader_EnableAutoRestart(XDdr_to_axis_reader *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XDdr_to_axis_reader_DisableAutoRestart(XDdr_to_axis_reader *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_AP_CTRL, 0);
}

void XDdr_to_axis_reader_Set_base_address(XDdr_to_axis_reader *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_BASE_ADDRESS_DATA, Data);
}

u32 XDdr_to_axis_reader_Get_base_address(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_BASE_ADDRESS_DATA);
    return Data;
}

void XDdr_to_axis_reader_Set_frame_buffer_dim(XDdr_to_axis_reader *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_FRAME_BUFFER_DIM_DATA, Data);
}

u32 XDdr_to_axis_reader_Get_frame_buffer_dim(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_FRAME_BUFFER_DIM_DATA);
    return Data;
}

void XDdr_to_axis_reader_Set_frame_buffer_offset(XDdr_to_axis_reader *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_FRAME_BUFFER_OFFSET_DATA, Data);
}

u32 XDdr_to_axis_reader_Get_frame_buffer_offset(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_FRAME_BUFFER_OFFSET_DATA);
    return Data;
}

void XDdr_to_axis_reader_Set_frame_buffer_number(XDdr_to_axis_reader *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_FRAME_BUFFER_NUMBER_DATA, Data);
}

u32 XDdr_to_axis_reader_Get_frame_buffer_number(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_FRAME_BUFFER_NUMBER_DATA);
    return Data;
}

void XDdr_to_axis_reader_Set_update_intr(XDdr_to_axis_reader *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_UPDATE_INTR_DATA, Data);
}

u32 XDdr_to_axis_reader_Get_update_intr(XDdr_to_axis_reader *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_UPDATE_INTR_DATA);
    return Data;
}

void XDdr_to_axis_reader_InterruptGlobalEnable(XDdr_to_axis_reader *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_GIE, 1);
}

void XDdr_to_axis_reader_InterruptGlobalDisable(XDdr_to_axis_reader *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_GIE, 0);
}

void XDdr_to_axis_reader_InterruptEnable(XDdr_to_axis_reader *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_IER);
    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_IER, Register | Mask);
}

void XDdr_to_axis_reader_InterruptDisable(XDdr_to_axis_reader *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_IER);
    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_IER, Register & (~Mask));
}

void XDdr_to_axis_reader_InterruptClear(XDdr_to_axis_reader *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDdr_to_axis_reader_WriteReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_ISR, Mask);
}

u32 XDdr_to_axis_reader_InterruptGetEnabled(XDdr_to_axis_reader *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_IER);
}

u32 XDdr_to_axis_reader_InterruptGetStatus(XDdr_to_axis_reader *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDdr_to_axis_reader_ReadReg(InstancePtr->Axilites_BaseAddress, XDDR_TO_AXIS_READER_AXILITES_ADDR_ISR);
}

