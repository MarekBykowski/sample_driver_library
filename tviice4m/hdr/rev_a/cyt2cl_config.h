/***************************************************************************//**
* \file cyt2cl_config.h
*
* \brief
* CYT2CL device configuration header
*
* \note
* Generator version: 1.6.0.481
* Database revision: TVIICE4M_CW2112
*
********************************************************************************
* \copyright
* Copyright 2016-2021, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _CYT2CL_CONFIG_H_
#define _CYT2CL_CONFIG_H_

/* Clock Connections */
typedef enum
{
    PCLK_CPUSS_CLOCK_TRACE_IN       = 0x0000u,  /* cpuss.clock_trace_in */
    PCLK_SMARTIO7_CLOCK             = 0x0001u,  /* smartio[7].clock */
    PCLK_CANFD0_CLOCK_CAN0          = 0x0002u,  /* canfd[0].clock_can[0] */
    PCLK_CANFD0_CLOCK_CAN1          = 0x0003u,  /* canfd[0].clock_can[1] */
    PCLK_CANFD1_CLOCK_CAN0          = 0x0004u,  /* canfd[1].clock_can[0] */
    PCLK_CANFD1_CLOCK_CAN1          = 0x0005u,  /* canfd[1].clock_can[1] */
    PCLK_LIN0_CLOCK_CH_EN0          = 0x0006u,  /* lin[0].clock_ch_en[0] */
    PCLK_LIN0_CLOCK_CH_EN1          = 0x0007u,  /* lin[0].clock_ch_en[1] */
    PCLK_CXPI0_CLOCK_CH_EN0         = 0x0008u,  /* cxpi[0].clock_ch_en[0] */
    PCLK_CXPI0_CLOCK_CH_EN1         = 0x0009u,  /* cxpi[0].clock_ch_en[1] */
    PCLK_SCB0_CLOCK                 = 0x000Au,  /* scb[0].clock */
    PCLK_SCB1_CLOCK                 = 0x000Bu,  /* scb[1].clock */
    PCLK_SCB2_CLOCK                 = 0x000Cu,  /* scb[2].clock */
    PCLK_SCB3_CLOCK                 = 0x000Du,  /* scb[3].clock */
    PCLK_SCB4_CLOCK                 = 0x000Eu,  /* scb[4].clock */
    PCLK_SCB5_CLOCK                 = 0x000Fu,  /* scb[5].clock */
    PCLK_SCB6_CLOCK                 = 0x0010u,  /* scb[6].clock */
    PCLK_SCB7_CLOCK                 = 0x0011u,  /* scb[7].clock */
    PCLK_SCB8_CLOCK                 = 0x0012u,  /* scb[8].clock */
    PCLK_SCB9_CLOCK                 = 0x0013u,  /* scb[9].clock */
    PCLK_SCB10_CLOCK                = 0x0014u,  /* scb[10].clock */
    PCLK_SCB11_CLOCK                = 0x0015u,  /* scb[11].clock */
    PCLK_PASS0_CLOCK_SAR0           = 0x0016u,  /* pass[0].clock_sar[0] */
    PCLK_LCD0_CLOCK                 = 0x0017u,  /* lcd[0].clock */
    PCLK_TCPWM0_CLOCKS0             = 0x0018u,  /* tcpwm[0].clocks[0] */
    PCLK_TCPWM0_CLOCKS1             = 0x0019u,  /* tcpwm[0].clocks[1] */
    PCLK_TCPWM0_CLOCKS2             = 0x001Au,  /* tcpwm[0].clocks[2] */
    PCLK_TCPWM0_CLOCKS3             = 0x001Bu,  /* tcpwm[0].clocks[3] */
    PCLK_TCPWM0_CLOCKS4             = 0x001Cu,  /* tcpwm[0].clocks[4] */
    PCLK_TCPWM0_CLOCKS5             = 0x001Du,  /* tcpwm[0].clocks[5] */
    PCLK_TCPWM0_CLOCKS6             = 0x001Eu,  /* tcpwm[0].clocks[6] */
    PCLK_TCPWM0_CLOCKS7             = 0x001Fu,  /* tcpwm[0].clocks[7] */
    PCLK_TCPWM0_CLOCKS8             = 0x0020u,  /* tcpwm[0].clocks[8] */
    PCLK_TCPWM0_CLOCKS9             = 0x0021u,  /* tcpwm[0].clocks[9] */
    PCLK_TCPWM0_CLOCKS10            = 0x0022u,  /* tcpwm[0].clocks[10] */
    PCLK_TCPWM0_CLOCKS11            = 0x0023u,  /* tcpwm[0].clocks[11] */
    PCLK_TCPWM0_CLOCKS12            = 0x0024u,  /* tcpwm[0].clocks[12] */
    PCLK_TCPWM0_CLOCKS13            = 0x0025u,  /* tcpwm[0].clocks[13] */
    PCLK_TCPWM0_CLOCKS14            = 0x0026u,  /* tcpwm[0].clocks[14] */
    PCLK_TCPWM0_CLOCKS15            = 0x0027u,  /* tcpwm[0].clocks[15] */
    PCLK_TCPWM0_CLOCKS16            = 0x0028u,  /* tcpwm[0].clocks[16] */
    PCLK_TCPWM0_CLOCKS17            = 0x0029u,  /* tcpwm[0].clocks[17] */
    PCLK_TCPWM0_CLOCKS18            = 0x002Au,  /* tcpwm[0].clocks[18] */
    PCLK_TCPWM0_CLOCKS19            = 0x002Bu,  /* tcpwm[0].clocks[19] */
    PCLK_TCPWM0_CLOCKS20            = 0x002Cu,  /* tcpwm[0].clocks[20] */
    PCLK_TCPWM0_CLOCKS21            = 0x002Du,  /* tcpwm[0].clocks[21] */
    PCLK_TCPWM0_CLOCKS22            = 0x002Eu,  /* tcpwm[0].clocks[22] */
    PCLK_TCPWM0_CLOCKS23            = 0x002Fu,  /* tcpwm[0].clocks[23] */
    PCLK_TCPWM0_CLOCKS24            = 0x0030u,  /* tcpwm[0].clocks[24] */
    PCLK_TCPWM0_CLOCKS25            = 0x0031u,  /* tcpwm[0].clocks[25] */
    PCLK_TCPWM0_CLOCKS26            = 0x0032u,  /* tcpwm[0].clocks[26] */
    PCLK_TCPWM0_CLOCKS27            = 0x0033u,  /* tcpwm[0].clocks[27] */
    PCLK_TCPWM0_CLOCKS28            = 0x0034u,  /* tcpwm[0].clocks[28] */
    PCLK_TCPWM0_CLOCKS29            = 0x0035u,  /* tcpwm[0].clocks[29] */
    PCLK_TCPWM0_CLOCKS30            = 0x0036u,  /* tcpwm[0].clocks[30] */
    PCLK_TCPWM0_CLOCKS31            = 0x0037u,  /* tcpwm[0].clocks[31] */
    PCLK_TCPWM0_CLOCKS32            = 0x0038u,  /* tcpwm[0].clocks[32] */
    PCLK_TCPWM0_CLOCKS33            = 0x0039u,  /* tcpwm[0].clocks[33] */
    PCLK_TCPWM0_CLOCKS256           = 0x003Au,  /* tcpwm[0].clocks[256] */
    PCLK_TCPWM0_CLOCKS257           = 0x003Bu,  /* tcpwm[0].clocks[257] */
    PCLK_TCPWM0_CLOCKS258           = 0x003Cu,  /* tcpwm[0].clocks[258] */
    PCLK_TCPWM0_CLOCKS259           = 0x003Du,  /* tcpwm[0].clocks[259] */
    PCLK_TCPWM0_CLOCKS260           = 0x003Eu,  /* tcpwm[0].clocks[260] */
    PCLK_TCPWM0_CLOCKS261           = 0x003Fu,  /* tcpwm[0].clocks[261] */
    PCLK_TCPWM0_CLOCKS262           = 0x0040u,  /* tcpwm[0].clocks[262] */
    PCLK_TCPWM0_CLOCKS263           = 0x0041u,  /* tcpwm[0].clocks[263] */
    PCLK_TCPWM0_CLOCKS264           = 0x0042u,  /* tcpwm[0].clocks[264] */
    PCLK_TCPWM0_CLOCKS265           = 0x0043u,  /* tcpwm[0].clocks[265] */
    PCLK_TCPWM0_CLOCKS266           = 0x0044u,  /* tcpwm[0].clocks[266] */
    PCLK_TCPWM0_CLOCKS267           = 0x0045u,  /* tcpwm[0].clocks[267] */
    PCLK_TCPWM0_CLOCKS512           = 0x0046u,  /* tcpwm[0].clocks[512] */
    PCLK_TCPWM0_CLOCKS513           = 0x0047u,  /* tcpwm[0].clocks[513] */
    PCLK_TCPWM0_CLOCKS514           = 0x0048u,  /* tcpwm[0].clocks[514] */
    PCLK_TCPWM0_CLOCKS515           = 0x0049u,  /* tcpwm[0].clocks[515] */
    PCLK_TCPWM0_CLOCKS516           = 0x004Au,  /* tcpwm[0].clocks[516] */
    PCLK_TCPWM0_CLOCKS517           = 0x004Bu,  /* tcpwm[0].clocks[517] */
    PCLK_TCPWM0_CLOCKS518           = 0x004Cu,  /* tcpwm[0].clocks[518] */
    PCLK_TCPWM0_CLOCKS519           = 0x004Du,  /* tcpwm[0].clocks[519] */
    PCLK_TCPWM0_CLOCKS520           = 0x004Eu,  /* tcpwm[0].clocks[520] */
    PCLK_TCPWM0_CLOCKS521           = 0x004Fu,  /* tcpwm[0].clocks[521] */
    PCLK_TCPWM0_CLOCKS522           = 0x0050u,  /* tcpwm[0].clocks[522] */
    PCLK_TCPWM0_CLOCKS523           = 0x0051u,  /* tcpwm[0].clocks[523] */
    PCLK_TCPWM0_CLOCKS524           = 0x0052u,  /* tcpwm[0].clocks[524] */
    PCLK_TCPWM0_CLOCKS525           = 0x0053u,  /* tcpwm[0].clocks[525] */
    PCLK_TCPWM0_CLOCKS526           = 0x0054u,  /* tcpwm[0].clocks[526] */
    PCLK_TCPWM0_CLOCKS527           = 0x0055u   /* tcpwm[0].clocks[527] */
} en_clk_dst_t;

/* Trigger Group */
/* This section contains the enums related to the Trigger multiplexer (TrigMux) driver. 
* The constants are divided into four types because each signal of the TrigMux driver has a path
* through two multiplexers: the reduction multiplexer and the distribution multiplexer. This 
* requires two calls for Cy_TrigMux_Connect() function. The first call - for the reduction 
* multiplexer, the second call - for the distribution multiplexer.
*
* The four types of inputs/output parameters:
* 1) Parameters for reduction multiplexer's inputs (input signals of TrigMux)
* 2) Parameters for reduction multiplexer's outputs (intermediate signals);
* 3) Parameters for distribution multiplexer's inputs (intermediate signals);
* 4) Parameters for distribution multiplexer's outputs (output signals of TrigMux).
*
* The Cy_TrigMux_Connect() inTrig parameter can have 1) and 3) types parameters. The outTrig 
* parameter can have 2) and 4) types parameters.
* The names of the constants for these parameters have the following format:
*
* 1) For reduction multiplexer's inputs:
* TRIG<REDMULT>_IN_<IPSOURCE><IPNUM>
* <REDMULT> the reduction multiplexer number;
* <IPSOURCE> - the name of the IP block which is the source of the signal;
* <IPNUM> - the source signal number in the IP block.
*
* Example:
* TRIG11_IN_TCPWM0_TR_OVERFLOW3 - the TCPWM0 tr_overflow[3] input of reduction multiplexer#11.
* 
* 2) For reduction multiplexer's outputs:
* TRIG<REDMULT>_OUT_TR_GROUP<DISTMULT >_INPUT<DISTMULTINPUT>
* <REDMULT> - the reduction multiplexer number;
* <DISTMULT> - the distribution multiplexer number;
* <DISTMULTINPUT> - the input number of the distribution multiplexer.
*
* Example:
* TRIG11_OUT_TR_GROUP0_INPUT23 - Input#23 of the distribution multiplexer#0 is the destination 
* of the reduction multiplexer#11.
*
* 3) For distribution multiplexer's inputs:
* TRIG<DISTMULT>_IN_TR_GROUP<REDMULT >_OUTPUT<REDMULTOUTPUT>
* <REDMULT> - the reduction multiplexer number;
* <DISTMULT> - the distribution multiplexer number;
* <REDMULTOUTPUT> - the output number of the reduction multiplexer;
*
* Example:
* TRIG0_IN_TR_GROUP11_OUTPUT15 - Output#15 of the reduction multiplexer#11 is the source of the 
* distribution multiplexer#0.
* 
* 4) For distribution multiplexer's outputs:
* TRIG<DISTMULT>_OUT_<IPDEST><IPNUM>
* <REDMULT> - the distribution multiplexer number;
* <IPDEST> - the name of the IP block which is the destination of the signal;
* <IPNUM> - the input signal number in the IP block.
*
* Example:
* TRIG0_OUT_CPUSS_DW0_TR_IN3 - the DW0 tr_out[3] ouput of the distribution multiplexer 0.*/
/* Trigger Group Inputs */
/* Trigger Input Group 0 - P-DMA0[0:15] Request Assignments */
typedef enum
{
    TRIG_IN_MUX_0_PDMA0_TR_OUT0     = 0x00000001u, /* cpuss.dw0_tr_out[0] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT1     = 0x00000002u, /* cpuss.dw0_tr_out[1] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT2     = 0x00000003u, /* cpuss.dw0_tr_out[2] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT3     = 0x00000004u, /* cpuss.dw0_tr_out[3] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT4     = 0x00000005u, /* cpuss.dw0_tr_out[4] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT5     = 0x00000006u, /* cpuss.dw0_tr_out[5] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT6     = 0x00000007u, /* cpuss.dw0_tr_out[6] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT7     = 0x00000008u, /* cpuss.dw0_tr_out[7] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT8     = 0x00000009u, /* cpuss.dw0_tr_out[8] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT9     = 0x0000000Au, /* cpuss.dw0_tr_out[9] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT10    = 0x0000000Bu, /* cpuss.dw0_tr_out[10] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT11    = 0x0000000Cu, /* cpuss.dw0_tr_out[11] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT12    = 0x0000000Du, /* cpuss.dw0_tr_out[12] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT13    = 0x0000000Eu, /* cpuss.dw0_tr_out[13] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT14    = 0x0000000Fu, /* cpuss.dw0_tr_out[14] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT15    = 0x00000010u, /* cpuss.dw0_tr_out[15] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT16    = 0x00000011u, /* cpuss.dw0_tr_out[16] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT17    = 0x00000012u, /* cpuss.dw0_tr_out[17] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT18    = 0x00000013u, /* cpuss.dw0_tr_out[18] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT19    = 0x00000014u, /* cpuss.dw0_tr_out[19] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT20    = 0x00000015u, /* cpuss.dw0_tr_out[20] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT21    = 0x00000016u, /* cpuss.dw0_tr_out[21] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT22    = 0x00000017u, /* cpuss.dw0_tr_out[22] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT23    = 0x00000018u, /* cpuss.dw0_tr_out[23] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT24    = 0x00000019u, /* cpuss.dw0_tr_out[24] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT25    = 0x0000001Au, /* cpuss.dw0_tr_out[25] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT26    = 0x0000001Bu, /* cpuss.dw0_tr_out[26] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT27    = 0x0000001Cu, /* cpuss.dw0_tr_out[27] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT28    = 0x0000001Du, /* cpuss.dw0_tr_out[28] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT29    = 0x0000001Eu, /* cpuss.dw0_tr_out[29] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT30    = 0x0000001Fu, /* cpuss.dw0_tr_out[30] */
    TRIG_IN_MUX_0_PDMA0_TR_OUT31    = 0x00000020u, /* cpuss.dw0_tr_out[31] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT0     = 0x00000021u, /* cpuss.dw1_tr_out[0] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT1     = 0x00000022u, /* cpuss.dw1_tr_out[1] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT2     = 0x00000023u, /* cpuss.dw1_tr_out[2] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT3     = 0x00000024u, /* cpuss.dw1_tr_out[3] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT4     = 0x00000025u, /* cpuss.dw1_tr_out[4] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT5     = 0x00000026u, /* cpuss.dw1_tr_out[5] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT6     = 0x00000027u, /* cpuss.dw1_tr_out[6] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT7     = 0x00000028u, /* cpuss.dw1_tr_out[7] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT8     = 0x00000029u, /* cpuss.dw1_tr_out[8] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT9     = 0x0000002Au, /* cpuss.dw1_tr_out[9] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT10    = 0x0000002Bu, /* cpuss.dw1_tr_out[10] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT11    = 0x0000002Cu, /* cpuss.dw1_tr_out[11] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT12    = 0x0000002Du, /* cpuss.dw1_tr_out[12] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT13    = 0x0000002Eu, /* cpuss.dw1_tr_out[13] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT14    = 0x0000002Fu, /* cpuss.dw1_tr_out[14] */
    TRIG_IN_MUX_0_PDMA1_TR_OUT15    = 0x00000030u, /* cpuss.dw1_tr_out[15] */
    TRIG_IN_MUX_0_MDMA_TR_OUT0      = 0x00000031u, /* cpuss.dmac_tr_out[0] */
    TRIG_IN_MUX_0_MDMA_TR_OUT1      = 0x00000032u, /* cpuss.dmac_tr_out[1] */
    TRIG_IN_MUX_0_MDMA_TR_OUT2      = 0x00000033u, /* cpuss.dmac_tr_out[2] */
    TRIG_IN_MUX_0_MDMA_TR_OUT3      = 0x00000034u, /* cpuss.dmac_tr_out[3] */
    TRIG_IN_MUX_0_CAN0_TT_TR_OUT0   = 0x00000039u, /* canfd[0].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_0_CAN0_TT_TR_OUT1   = 0x0000003Au, /* canfd[0].tr_tmp_rtp_out[1] */
    TRIG_IN_MUX_0_CAN1_TT_TR_OUT0   = 0x0000003Bu, /* canfd[1].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_0_CAN1_TT_TR_OUT1   = 0x0000003Cu, /* canfd[1].tr_tmp_rtp_out[1] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT0   = 0x0000003Du, /* peri.tr_io_input[0] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT1   = 0x0000003Eu, /* peri.tr_io_input[1] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT2   = 0x0000003Fu, /* peri.tr_io_input[2] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT3   = 0x00000040u, /* peri.tr_io_input[3] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT4   = 0x00000041u, /* peri.tr_io_input[4] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT5   = 0x00000042u, /* peri.tr_io_input[5] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT6   = 0x00000043u, /* peri.tr_io_input[6] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT7   = 0x00000044u, /* peri.tr_io_input[7] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT8   = 0x00000045u, /* peri.tr_io_input[8] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT9   = 0x00000046u, /* peri.tr_io_input[9] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT10  = 0x00000047u, /* peri.tr_io_input[10] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT11  = 0x00000048u, /* peri.tr_io_input[11] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT12  = 0x00000049u, /* peri.tr_io_input[12] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT13  = 0x0000004Au, /* peri.tr_io_input[13] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT14  = 0x0000004Bu, /* peri.tr_io_input[14] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT15  = 0x0000004Cu, /* peri.tr_io_input[15] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT16  = 0x0000004Du, /* peri.tr_io_input[16] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT17  = 0x0000004Eu, /* peri.tr_io_input[17] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT18  = 0x0000004Fu, /* peri.tr_io_input[18] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT19  = 0x00000050u, /* peri.tr_io_input[19] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT20  = 0x00000051u, /* peri.tr_io_input[20] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT21  = 0x00000052u, /* peri.tr_io_input[21] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT22  = 0x00000053u, /* peri.tr_io_input[22] */
    TRIG_IN_MUX_0_HSIOM_IO_INPUT23  = 0x00000054u, /* peri.tr_io_input[23] */
    TRIG_IN_MUX_0_FAULT_TR_OUT0     = 0x00000055u, /* cpuss.tr_fault[0] */
    TRIG_IN_MUX_0_FAULT_TR_OUT1     = 0x00000056u, /* cpuss.tr_fault[1] */
    TRIG_IN_MUX_0_FAULT_TR_OUT2     = 0x00000057u, /* cpuss.tr_fault[2] */
    TRIG_IN_MUX_0_FAULT_TR_OUT3     = 0x00000058u /* cpuss.tr_fault[3] */
} en_trig_input_pdma0_0_15_t;

/* Trigger Input Group 1 - P-DMA0[16:31] Request Assignments */
typedef enum
{
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT00 = 0x00000101u, /* tcpwm[0].tr_out0[0] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT01 = 0x00000102u, /* tcpwm[0].tr_out0[1] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT02 = 0x00000103u, /* tcpwm[0].tr_out0[2] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT03 = 0x00000104u, /* tcpwm[0].tr_out0[3] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT04 = 0x00000105u, /* tcpwm[0].tr_out0[4] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT05 = 0x00000106u, /* tcpwm[0].tr_out0[5] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT06 = 0x00000107u, /* tcpwm[0].tr_out0[6] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT07 = 0x00000108u, /* tcpwm[0].tr_out0[7] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT08 = 0x00000109u, /* tcpwm[0].tr_out0[8] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT09 = 0x0000010Au, /* tcpwm[0].tr_out0[9] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT010 = 0x0000010Bu, /* tcpwm[0].tr_out0[10] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT011 = 0x0000010Cu, /* tcpwm[0].tr_out0[11] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT012 = 0x0000010Du, /* tcpwm[0].tr_out0[12] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT013 = 0x0000010Eu, /* tcpwm[0].tr_out0[13] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT014 = 0x0000010Fu, /* tcpwm[0].tr_out0[14] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT015 = 0x00000110u, /* tcpwm[0].tr_out0[15] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT016 = 0x00000111u, /* tcpwm[0].tr_out0[16] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT017 = 0x00000112u, /* tcpwm[0].tr_out0[17] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT018 = 0x00000113u, /* tcpwm[0].tr_out0[18] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT019 = 0x00000114u, /* tcpwm[0].tr_out0[19] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT020 = 0x00000115u, /* tcpwm[0].tr_out0[20] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT021 = 0x00000116u, /* tcpwm[0].tr_out0[21] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT022 = 0x00000117u, /* tcpwm[0].tr_out0[22] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT023 = 0x00000118u, /* tcpwm[0].tr_out0[23] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT024 = 0x00000119u, /* tcpwm[0].tr_out0[24] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT025 = 0x0000011Au, /* tcpwm[0].tr_out0[25] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT026 = 0x0000011Bu, /* tcpwm[0].tr_out0[26] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT027 = 0x0000011Cu, /* tcpwm[0].tr_out0[27] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT028 = 0x0000011Du, /* tcpwm[0].tr_out0[28] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT029 = 0x0000011Eu, /* tcpwm[0].tr_out0[29] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT030 = 0x0000011Fu, /* tcpwm[0].tr_out0[30] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT031 = 0x00000120u, /* tcpwm[0].tr_out0[31] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT032 = 0x00000121u, /* tcpwm[0].tr_out0[32] */
    TRIG_IN_MUX_1_TCPWM0_16_TR_OUT033 = 0x00000122u, /* tcpwm[0].tr_out0[33] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT00 = 0x00000127u, /* tcpwm[0].tr_out0[256] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT01 = 0x00000128u, /* tcpwm[0].tr_out0[257] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT02 = 0x00000129u, /* tcpwm[0].tr_out0[258] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT03 = 0x0000012Au, /* tcpwm[0].tr_out0[259] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT04 = 0x0000012Bu, /* tcpwm[0].tr_out0[260] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT05 = 0x0000012Cu, /* tcpwm[0].tr_out0[261] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT06 = 0x0000012Du, /* tcpwm[0].tr_out0[262] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT07 = 0x0000012Eu, /* tcpwm[0].tr_out0[263] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT08 = 0x0000012Fu, /* tcpwm[0].tr_out0[264] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT09 = 0x00000130u, /* tcpwm[0].tr_out0[265] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT010 = 0x00000131u, /* tcpwm[0].tr_out0[266] */
    TRIG_IN_MUX_1_TCPWM0_16M_TR_OUT011 = 0x00000132u, /* tcpwm[0].tr_out0[267] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT00 = 0x00000133u, /* tcpwm[0].tr_out0[512] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT01 = 0x00000134u, /* tcpwm[0].tr_out0[513] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT02 = 0x00000135u, /* tcpwm[0].tr_out0[514] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT03 = 0x00000136u, /* tcpwm[0].tr_out0[515] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT04 = 0x00000137u, /* tcpwm[0].tr_out0[516] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT05 = 0x00000138u, /* tcpwm[0].tr_out0[517] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT06 = 0x00000139u, /* tcpwm[0].tr_out0[518] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT07 = 0x0000013Au, /* tcpwm[0].tr_out0[519] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT08 = 0x0000013Bu, /* tcpwm[0].tr_out0[520] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT09 = 0x0000013Cu, /* tcpwm[0].tr_out0[521] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT010 = 0x0000013Du, /* tcpwm[0].tr_out0[522] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT011 = 0x0000013Eu, /* tcpwm[0].tr_out0[523] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT012 = 0x0000013Fu, /* tcpwm[0].tr_out0[524] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT013 = 0x00000140u, /* tcpwm[0].tr_out0[525] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT014 = 0x00000141u, /* tcpwm[0].tr_out0[526] */
    TRIG_IN_MUX_1_TCPWM0_32_TR_OUT015 = 0x00000142u, /* tcpwm[0].tr_out0[527] */
    TRIG_IN_MUX_1_PASS_GEN_TR_OUT0  = 0x00000153u, /* pass[0].tr_sar_gen_out[0] */
    TRIG_IN_MUX_1_PASS_GEN_TR_OUT1  = 0x00000154u, /* pass[0].tr_sar_gen_out[1] */
    TRIG_IN_MUX_1_CTI_TR_OUT0       = 0x00000155u, /* cpuss.cti_tr_out[0] */
    TRIG_IN_MUX_1_CTI_TR_OUT1       = 0x00000156u, /* cpuss.cti_tr_out[1] */
    TRIG_IN_MUX_1_EVTGEN_TR_OUT0    = 0x00000157u, /* evtgen[0].tr_out[0] */
    TRIG_IN_MUX_1_EVTGEN_TR_OUT1    = 0x00000158u, /* evtgen[0].tr_out[1] */
    TRIG_IN_MUX_1_EVTGEN_TR_OUT2    = 0x00000159u, /* evtgen[0].tr_out[2] */
    TRIG_IN_MUX_1_EVTGEN_TR_OUT3    = 0x0000015Au /* evtgen[0].tr_out[3] */
} en_trig_input_pdma0_16_31_t;

/* Trigger Input Group 2 - P-DMA1[0:15] Request Assignments */
typedef enum
{
    TRIG_IN_MUX_2_PDMA1_TR_OUT0     = 0x00000201u, /* cpuss.dw1_tr_out[0] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT1     = 0x00000202u, /* cpuss.dw1_tr_out[1] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT2     = 0x00000203u, /* cpuss.dw1_tr_out[2] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT3     = 0x00000204u, /* cpuss.dw1_tr_out[3] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT4     = 0x00000205u, /* cpuss.dw1_tr_out[4] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT5     = 0x00000206u, /* cpuss.dw1_tr_out[5] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT6     = 0x00000207u, /* cpuss.dw1_tr_out[6] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT7     = 0x00000208u, /* cpuss.dw1_tr_out[7] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT8     = 0x00000209u, /* cpuss.dw1_tr_out[8] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT9     = 0x0000020Au, /* cpuss.dw1_tr_out[9] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT10    = 0x0000020Bu, /* cpuss.dw1_tr_out[10] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT11    = 0x0000020Cu, /* cpuss.dw1_tr_out[11] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT12    = 0x0000020Du, /* cpuss.dw1_tr_out[12] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT13    = 0x0000020Eu, /* cpuss.dw1_tr_out[13] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT14    = 0x0000020Fu, /* cpuss.dw1_tr_out[14] */
    TRIG_IN_MUX_2_PDMA1_TR_OUT15    = 0x00000210u, /* cpuss.dw1_tr_out[15] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT0     = 0x00000211u, /* cpuss.dw0_tr_out[0] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT1     = 0x00000212u, /* cpuss.dw0_tr_out[1] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT2     = 0x00000213u, /* cpuss.dw0_tr_out[2] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT3     = 0x00000214u, /* cpuss.dw0_tr_out[3] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT4     = 0x00000215u, /* cpuss.dw0_tr_out[4] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT5     = 0x00000216u, /* cpuss.dw0_tr_out[5] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT6     = 0x00000217u, /* cpuss.dw0_tr_out[6] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT7     = 0x00000218u, /* cpuss.dw0_tr_out[7] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT8     = 0x00000219u, /* cpuss.dw0_tr_out[8] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT9     = 0x0000021Au, /* cpuss.dw0_tr_out[9] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT10    = 0x0000021Bu, /* cpuss.dw0_tr_out[10] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT11    = 0x0000021Cu, /* cpuss.dw0_tr_out[11] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT12    = 0x0000021Du, /* cpuss.dw0_tr_out[12] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT13    = 0x0000021Eu, /* cpuss.dw0_tr_out[13] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT14    = 0x0000021Fu, /* cpuss.dw0_tr_out[14] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT15    = 0x00000220u, /* cpuss.dw0_tr_out[15] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT16    = 0x00000221u, /* cpuss.dw0_tr_out[16] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT17    = 0x00000222u, /* cpuss.dw0_tr_out[17] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT18    = 0x00000223u, /* cpuss.dw0_tr_out[18] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT19    = 0x00000224u, /* cpuss.dw0_tr_out[19] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT20    = 0x00000225u, /* cpuss.dw0_tr_out[20] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT21    = 0x00000226u, /* cpuss.dw0_tr_out[21] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT22    = 0x00000227u, /* cpuss.dw0_tr_out[22] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT23    = 0x00000228u, /* cpuss.dw0_tr_out[23] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT24    = 0x00000229u, /* cpuss.dw0_tr_out[24] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT25    = 0x0000022Au, /* cpuss.dw0_tr_out[25] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT26    = 0x0000022Bu, /* cpuss.dw0_tr_out[26] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT27    = 0x0000022Cu, /* cpuss.dw0_tr_out[27] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT28    = 0x0000022Du, /* cpuss.dw0_tr_out[28] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT29    = 0x0000022Eu, /* cpuss.dw0_tr_out[29] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT30    = 0x0000022Fu, /* cpuss.dw0_tr_out[30] */
    TRIG_IN_MUX_2_PDMA0_TR_OUT31    = 0x00000230u, /* cpuss.dw0_tr_out[31] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT24  = 0x00000231u, /* peri.tr_io_input[24] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT25  = 0x00000232u, /* peri.tr_io_input[25] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT26  = 0x00000233u, /* peri.tr_io_input[26] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT27  = 0x00000234u, /* peri.tr_io_input[27] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT28  = 0x00000235u, /* peri.tr_io_input[28] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT29  = 0x00000236u, /* peri.tr_io_input[29] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT30  = 0x00000237u, /* peri.tr_io_input[30] */
    TRIG_IN_MUX_2_HSIOM_IO_INPUT31  = 0x00000238u /* peri.tr_io_input[31] */
} en_trig_input_pdma1_0_15_t;

/* Trigger Input Group 3 - M-DMA Request Assignments */
typedef enum
{
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT00 = 0x00000301u, /* tcpwm[0].tr_out0[0] */
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT01 = 0x00000302u, /* tcpwm[0].tr_out0[1] */
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT02 = 0x00000303u, /* tcpwm[0].tr_out0[2] */
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT03 = 0x00000304u, /* tcpwm[0].tr_out0[3] */
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT04 = 0x00000305u, /* tcpwm[0].tr_out0[4] */
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT05 = 0x00000306u, /* tcpwm[0].tr_out0[5] */
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT06 = 0x00000307u, /* tcpwm[0].tr_out0[6] */
    TRIG_IN_MUX_3_TCPWM0_16_TR_OUT07 = 0x00000308u, /* tcpwm[0].tr_out0[7] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT00 = 0x00000309u, /* tcpwm[0].tr_out0[512] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT01 = 0x0000030Au, /* tcpwm[0].tr_out0[513] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT02 = 0x0000030Bu, /* tcpwm[0].tr_out0[514] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT03 = 0x0000030Cu, /* tcpwm[0].tr_out0[515] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT04 = 0x0000030Du, /* tcpwm[0].tr_out0[516] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT05 = 0x0000030Eu, /* tcpwm[0].tr_out0[517] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT06 = 0x0000030Fu, /* tcpwm[0].tr_out0[518] */
    TRIG_IN_MUX_3_TCPWM0_32_TR_OUT07 = 0x00000310u /* tcpwm[0].tr_out0[519] */
} en_trig_input_mdma_t;

/* Trigger Input Group 4 -  */
typedef enum
{
    TRIG_IN_MUX_4_PDMA0_TR_OUT0     = 0x00000401u, /* cpuss.dw0_tr_out[0] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT1     = 0x00000402u, /* cpuss.dw0_tr_out[1] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT2     = 0x00000403u, /* cpuss.dw0_tr_out[2] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT3     = 0x00000404u, /* cpuss.dw0_tr_out[3] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT4     = 0x00000405u, /* cpuss.dw0_tr_out[4] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT5     = 0x00000406u, /* cpuss.dw0_tr_out[5] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT6     = 0x00000407u, /* cpuss.dw0_tr_out[6] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT7     = 0x00000408u, /* cpuss.dw0_tr_out[7] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT8     = 0x00000409u, /* cpuss.dw0_tr_out[8] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT9     = 0x0000040Au, /* cpuss.dw0_tr_out[9] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT10    = 0x0000040Bu, /* cpuss.dw0_tr_out[10] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT11    = 0x0000040Cu, /* cpuss.dw0_tr_out[11] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT12    = 0x0000040Du, /* cpuss.dw0_tr_out[12] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT13    = 0x0000040Eu, /* cpuss.dw0_tr_out[13] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT14    = 0x0000040Fu, /* cpuss.dw0_tr_out[14] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT15    = 0x00000410u, /* cpuss.dw0_tr_out[15] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT16    = 0x00000411u, /* cpuss.dw0_tr_out[16] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT17    = 0x00000412u, /* cpuss.dw0_tr_out[17] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT18    = 0x00000413u, /* cpuss.dw0_tr_out[18] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT19    = 0x00000414u, /* cpuss.dw0_tr_out[19] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT20    = 0x00000415u, /* cpuss.dw0_tr_out[20] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT21    = 0x00000416u, /* cpuss.dw0_tr_out[21] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT22    = 0x00000417u, /* cpuss.dw0_tr_out[22] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT23    = 0x00000418u, /* cpuss.dw0_tr_out[23] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT24    = 0x00000419u, /* cpuss.dw0_tr_out[24] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT25    = 0x0000041Au, /* cpuss.dw0_tr_out[25] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT26    = 0x0000041Bu, /* cpuss.dw0_tr_out[26] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT27    = 0x0000041Cu, /* cpuss.dw0_tr_out[27] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT28    = 0x0000041Du, /* cpuss.dw0_tr_out[28] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT29    = 0x0000041Eu, /* cpuss.dw0_tr_out[29] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT30    = 0x0000041Fu, /* cpuss.dw0_tr_out[30] */
    TRIG_IN_MUX_4_PDMA0_TR_OUT31    = 0x00000420u, /* cpuss.dw0_tr_out[31] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT0     = 0x00000421u, /* cpuss.dw1_tr_out[0] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT1     = 0x00000422u, /* cpuss.dw1_tr_out[1] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT2     = 0x00000423u, /* cpuss.dw1_tr_out[2] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT3     = 0x00000424u, /* cpuss.dw1_tr_out[3] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT4     = 0x00000425u, /* cpuss.dw1_tr_out[4] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT5     = 0x00000426u, /* cpuss.dw1_tr_out[5] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT6     = 0x00000427u, /* cpuss.dw1_tr_out[6] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT7     = 0x00000428u, /* cpuss.dw1_tr_out[7] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT8     = 0x00000429u, /* cpuss.dw1_tr_out[8] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT9     = 0x0000042Au, /* cpuss.dw1_tr_out[9] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT10    = 0x0000042Bu, /* cpuss.dw1_tr_out[10] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT11    = 0x0000042Cu, /* cpuss.dw1_tr_out[11] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT12    = 0x0000042Du, /* cpuss.dw1_tr_out[12] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT13    = 0x0000042Eu, /* cpuss.dw1_tr_out[13] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT14    = 0x0000042Fu, /* cpuss.dw1_tr_out[14] */
    TRIG_IN_MUX_4_PDMA1_TR_OUT15    = 0x00000430u, /* cpuss.dw1_tr_out[15] */
    TRIG_IN_MUX_4_MDMA_TR_OUT0      = 0x00000431u, /* cpuss.dmac_tr_out[0] */
    TRIG_IN_MUX_4_MDMA_TR_OUT1      = 0x00000432u, /* cpuss.dmac_tr_out[1] */
    TRIG_IN_MUX_4_MDMA_TR_OUT2      = 0x00000433u, /* cpuss.dmac_tr_out[2] */
    TRIG_IN_MUX_4_MDMA_TR_OUT3      = 0x00000434u, /* cpuss.dmac_tr_out[3] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT00 = 0x00000439u, /* tcpwm[0].tr_out0[0] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT01 = 0x0000043Au, /* tcpwm[0].tr_out0[1] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT02 = 0x0000043Bu, /* tcpwm[0].tr_out0[2] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT03 = 0x0000043Cu, /* tcpwm[0].tr_out0[3] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT04 = 0x0000043Du, /* tcpwm[0].tr_out0[4] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT05 = 0x0000043Eu, /* tcpwm[0].tr_out0[5] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT06 = 0x0000043Fu, /* tcpwm[0].tr_out0[6] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT07 = 0x00000440u, /* tcpwm[0].tr_out0[7] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT08 = 0x00000441u, /* tcpwm[0].tr_out0[8] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT09 = 0x00000442u, /* tcpwm[0].tr_out0[9] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT010 = 0x00000443u, /* tcpwm[0].tr_out0[10] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT011 = 0x00000444u, /* tcpwm[0].tr_out0[11] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT012 = 0x00000445u, /* tcpwm[0].tr_out0[12] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT013 = 0x00000446u, /* tcpwm[0].tr_out0[13] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT014 = 0x00000447u, /* tcpwm[0].tr_out0[14] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT015 = 0x00000448u, /* tcpwm[0].tr_out0[15] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT016 = 0x00000449u, /* tcpwm[0].tr_out0[16] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT017 = 0x0000044Au, /* tcpwm[0].tr_out0[17] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT018 = 0x0000044Bu, /* tcpwm[0].tr_out0[18] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT019 = 0x0000044Cu, /* tcpwm[0].tr_out0[19] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT020 = 0x0000044Du, /* tcpwm[0].tr_out0[20] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT021 = 0x0000044Eu, /* tcpwm[0].tr_out0[21] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT022 = 0x0000044Fu, /* tcpwm[0].tr_out0[22] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT023 = 0x00000450u, /* tcpwm[0].tr_out0[23] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT024 = 0x00000451u, /* tcpwm[0].tr_out0[24] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT025 = 0x00000452u, /* tcpwm[0].tr_out0[25] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT026 = 0x00000453u, /* tcpwm[0].tr_out0[26] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT027 = 0x00000454u, /* tcpwm[0].tr_out0[27] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT028 = 0x00000455u, /* tcpwm[0].tr_out0[28] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT029 = 0x00000456u, /* tcpwm[0].tr_out0[29] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT030 = 0x00000457u, /* tcpwm[0].tr_out0[30] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT031 = 0x00000458u, /* tcpwm[0].tr_out0[31] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT032 = 0x00000459u, /* tcpwm[0].tr_out0[32] */
    TRIG_IN_MUX_4_TCPWM0_16_TR_OUT033 = 0x0000045Au, /* tcpwm[0].tr_out0[33] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT00 = 0x0000045Fu, /* tcpwm[0].tr_out0[256] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT01 = 0x00000460u, /* tcpwm[0].tr_out0[257] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT02 = 0x00000461u, /* tcpwm[0].tr_out0[258] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT03 = 0x00000462u, /* tcpwm[0].tr_out0[259] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT04 = 0x00000463u, /* tcpwm[0].tr_out0[260] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT05 = 0x00000464u, /* tcpwm[0].tr_out0[261] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT06 = 0x00000465u, /* tcpwm[0].tr_out0[262] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT07 = 0x00000466u, /* tcpwm[0].tr_out0[263] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT08 = 0x00000467u, /* tcpwm[0].tr_out0[264] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT09 = 0x00000468u, /* tcpwm[0].tr_out0[265] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT010 = 0x00000469u, /* tcpwm[0].tr_out0[266] */
    TRIG_IN_MUX_4_TCPWM0_16M_TR_OUT011 = 0x0000046Au, /* tcpwm[0].tr_out0[267] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT00 = 0x0000046Bu, /* tcpwm[0].tr_out0[512] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT01 = 0x0000046Cu, /* tcpwm[0].tr_out0[513] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT02 = 0x0000046Du, /* tcpwm[0].tr_out0[514] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT03 = 0x0000046Eu, /* tcpwm[0].tr_out0[515] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT04 = 0x0000046Fu, /* tcpwm[0].tr_out0[516] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT05 = 0x00000470u, /* tcpwm[0].tr_out0[517] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT06 = 0x00000471u, /* tcpwm[0].tr_out0[518] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT07 = 0x00000472u, /* tcpwm[0].tr_out0[519] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT08 = 0x00000473u, /* tcpwm[0].tr_out0[520] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT09 = 0x00000474u, /* tcpwm[0].tr_out0[521] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT010 = 0x00000475u, /* tcpwm[0].tr_out0[522] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT011 = 0x00000476u, /* tcpwm[0].tr_out0[523] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT012 = 0x00000477u, /* tcpwm[0].tr_out0[524] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT013 = 0x00000478u, /* tcpwm[0].tr_out0[525] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT014 = 0x00000479u, /* tcpwm[0].tr_out0[526] */
    TRIG_IN_MUX_4_TCPWM0_32_TR_OUT015 = 0x0000047Au, /* tcpwm[0].tr_out0[527] */
    TRIG_IN_MUX_4_SMIF0_TX_TR_OUT   = 0x0000048Bu, /* smif[0].tr_tx_req */
    TRIG_IN_MUX_4_SMIF0_RX_TR_OUT   = 0x0000048Cu, /* smif[0].tr_rx_req */
    TRIG_IN_MUX_4_TDM0_TX_TR_OUT0   = 0x00000497u, /* tdm[0].tr_tx_req[0] */
    TRIG_IN_MUX_4_TDM0_TX_TR_OUT1   = 0x00000498u, /* tdm[0].tr_tx_req[1] */
    TRIG_IN_MUX_4_TDM0_RX_TR_OUT0   = 0x0000049Bu, /* tdm[0].tr_rx_req[0] */
    TRIG_IN_MUX_4_TDM0_RX_TR_OUT1   = 0x0000049Cu, /* tdm[0].tr_rx_req[1] */
    TRIG_IN_MUX_4_SG0_TR_COMPLETE0  = 0x0000049Fu, /* sg[0].tr_complete[0] */
    TRIG_IN_MUX_4_SG0_TR_COMPLETE1  = 0x000004A0u, /* sg[0].tr_complete[1] */
    TRIG_IN_MUX_4_SG0_TR_COMPLETE2  = 0x000004A1u, /* sg[0].tr_complete[2] */
    TRIG_IN_MUX_4_SG0_TR_COMPLETE3  = 0x000004A2u, /* sg[0].tr_complete[3] */
    TRIG_IN_MUX_4_SG0_TR_COMPLETE4  = 0x000004A3u, /* sg[0].tr_complete[4] */
    TRIG_IN_MUX_4_PWM0_TX_TR_OUT0   = 0x000004A4u, /* pwm[0].tr_tx_req[0] */
    TRIG_IN_MUX_4_PWM0_TX_TR_OUT1   = 0x000004A5u, /* pwm[0].tr_tx_req[1] */
    TRIG_IN_MUX_4_MIXER0_TR_SRC_REQ_OUT0 = 0x000004A6u, /* mixer[0].tr_src_req[0] */
    TRIG_IN_MUX_4_MIXER0_TR_SRC_REQ_OUT1 = 0x000004A7u, /* mixer[0].tr_src_req[1] */
    TRIG_IN_MUX_4_MIXER0_TR_SRC_REQ_OUT2 = 0x000004A8u, /* mixer[0].tr_src_req[2] */
    TRIG_IN_MUX_4_MIXER0_TR_SRC_REQ_OUT3 = 0x000004A9u, /* mixer[0].tr_src_req[3] */
    TRIG_IN_MUX_4_MIXER0_TR_SRC_REQ_OUT4 = 0x000004AAu, /* mixer[0].tr_src_req[4] */
    TRIG_IN_MUX_4_MIXER0_TR_DST_REQ_OUT = 0x000004ABu /* mixer[0].tr_dst_req */
} en_trig_input_tcpwm0_t;

/* Trigger Input Group 5 -  */
typedef enum
{
    TRIG_IN_MUX_5_CAN0_DBG_TR_OUT0  = 0x00000501u, /* canfd[0].tr_dbg_dma_req[0] */
    TRIG_IN_MUX_5_CAN0_DBG_TR_OUT1  = 0x00000502u, /* canfd[0].tr_dbg_dma_req[1] */
    TRIG_IN_MUX_5_CAN0_FIFO0_TR_OUT0 = 0x00000503u, /* canfd[0].tr_fifo0[0] */
    TRIG_IN_MUX_5_CAN0_FIFO0_TR_OUT1 = 0x00000504u, /* canfd[0].tr_fifo0[1] */
    TRIG_IN_MUX_5_CAN0_FIFO1_TR_OUT0 = 0x00000505u, /* canfd[0].tr_fifo1[0] */
    TRIG_IN_MUX_5_CAN0_FIFO1_TR_OUT1 = 0x00000506u, /* canfd[0].tr_fifo1[1] */
    TRIG_IN_MUX_5_CAN1_DBG_TR_OUT0  = 0x00000507u, /* canfd[1].tr_dbg_dma_req[0] */
    TRIG_IN_MUX_5_CAN1_DBG_TR_OUT1  = 0x00000508u, /* canfd[1].tr_dbg_dma_req[1] */
    TRIG_IN_MUX_5_CAN1_FIFO0_TR_OUT0 = 0x00000509u, /* canfd[1].tr_fifo0[0] */
    TRIG_IN_MUX_5_CAN1_FIFO0_TR_OUT1 = 0x0000050Au, /* canfd[1].tr_fifo0[1] */
    TRIG_IN_MUX_5_CAN1_FIFO1_TR_OUT0 = 0x0000050Bu, /* canfd[1].tr_fifo1[0] */
    TRIG_IN_MUX_5_CAN1_FIFO1_TR_OUT1 = 0x0000050Cu, /* canfd[1].tr_fifo1[1] */
    TRIG_IN_MUX_5_CAN0_TT_TR_OUT0   = 0x0000050Du, /* canfd[0].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_5_CAN0_TT_TR_OUT1   = 0x0000050Eu, /* canfd[0].tr_tmp_rtp_out[1] */
    TRIG_IN_MUX_5_CAN1_TT_TR_OUT0   = 0x0000050Fu, /* canfd[1].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_5_CAN1_TT_TR_OUT1   = 0x00000510u, /* canfd[1].tr_tmp_rtp_out[1] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT4    = 0x00000511u, /* evtgen[0].tr_out[4] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT5    = 0x00000512u, /* evtgen[0].tr_out[5] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT6    = 0x00000513u, /* evtgen[0].tr_out[6] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT7    = 0x00000514u, /* evtgen[0].tr_out[7] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT8    = 0x00000515u, /* evtgen[0].tr_out[8] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT9    = 0x00000516u, /* evtgen[0].tr_out[9] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT10   = 0x00000517u, /* evtgen[0].tr_out[10] */
    TRIG_IN_MUX_5_EVTGEN_TR_OUT11   = 0x00000518u /* evtgen[0].tr_out[11] */
} en_trig_input_tcpwm0_20_31_t;

/* Trigger Input Group 6 - TCPWM trigger inputs */
typedef enum
{
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT10 = 0x00000601u, /* tcpwm[0].tr_out1[0] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT11 = 0x00000602u, /* tcpwm[0].tr_out1[1] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT12 = 0x00000603u, /* tcpwm[0].tr_out1[2] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT13 = 0x00000604u, /* tcpwm[0].tr_out1[3] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT14 = 0x00000605u, /* tcpwm[0].tr_out1[4] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT15 = 0x00000606u, /* tcpwm[0].tr_out1[5] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT16 = 0x00000607u, /* tcpwm[0].tr_out1[6] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT17 = 0x00000608u, /* tcpwm[0].tr_out1[7] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT18 = 0x00000609u, /* tcpwm[0].tr_out1[8] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT19 = 0x0000060Au, /* tcpwm[0].tr_out1[9] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT110 = 0x0000060Bu, /* tcpwm[0].tr_out1[10] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT111 = 0x0000060Cu, /* tcpwm[0].tr_out1[11] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT112 = 0x0000060Du, /* tcpwm[0].tr_out1[12] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT113 = 0x0000060Eu, /* tcpwm[0].tr_out1[13] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT114 = 0x0000060Fu, /* tcpwm[0].tr_out1[14] */
    TRIG_IN_MUX_6_TCPWM0_16_TR_OUT115 = 0x00000610u, /* tcpwm[0].tr_out1[15] */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT0    = 0x00000611u, /* scb[0].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT0    = 0x00000612u, /* scb[0].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT0 = 0x00000613u, /* scb[0].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT1    = 0x00000614u, /* scb[1].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT1    = 0x00000615u, /* scb[1].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT1 = 0x00000616u, /* scb[1].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT2    = 0x00000617u, /* scb[2].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT2    = 0x00000618u, /* scb[2].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT2 = 0x00000619u, /* scb[2].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT3    = 0x0000061Au, /* scb[3].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT3    = 0x0000061Bu, /* scb[3].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT3 = 0x0000061Cu, /* scb[3].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT4    = 0x0000061Du, /* scb[4].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT4    = 0x0000061Eu, /* scb[4].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT4 = 0x0000061Fu, /* scb[4].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT5    = 0x00000620u, /* scb[5].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT5    = 0x00000621u, /* scb[5].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT5 = 0x00000622u, /* scb[5].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT6    = 0x00000623u, /* scb[6].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT6    = 0x00000624u, /* scb[6].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT6 = 0x00000625u, /* scb[6].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT7    = 0x00000626u, /* scb[7].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT7    = 0x00000627u, /* scb[7].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT7 = 0x00000628u, /* scb[7].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT8    = 0x00000629u, /* scb[8].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT8    = 0x0000062Au, /* scb[8].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT8 = 0x0000062Bu, /* scb[8].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT9    = 0x0000062Cu, /* scb[9].tr_tx_req */
    TRIG_IN_MUX_6_CB_RX_TR_OUT9     = 0x0000062Du, /* scb[9].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT9 = 0x0000062Eu, /* scb[9].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT10   = 0x0000062Fu, /* scb[10].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT10   = 0x00000630u, /* scb[10].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT10 = 0x00000631u, /* scb[10].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_SCB_TX_TR_OUT11   = 0x00000632u, /* scb[11].tr_tx_req */
    TRIG_IN_MUX_6_SCB_RX_TR_OUT11   = 0x00000633u, /* scb[11].tr_rx_req */
    TRIG_IN_MUX_6_SCB_I2C_SCL_TR_OUT11 = 0x00000634u, /* scb[11].tr_i2c_scl_filtered */
    TRIG_IN_MUX_6_PASS_GEN_TR_OUT0  = 0x00000635u, /* pass[0].tr_sar_gen_out[0] */
    TRIG_IN_MUX_6_PASS_GEN_TR_OUT1  = 0x00000636u, /* pass[0].tr_sar_gen_out[1] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT0   = 0x00000637u, /* peri.tr_io_input[0] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT1   = 0x00000638u, /* peri.tr_io_input[1] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT2   = 0x00000639u, /* peri.tr_io_input[2] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT3   = 0x0000063Au, /* peri.tr_io_input[3] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT4   = 0x0000063Bu, /* peri.tr_io_input[4] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT5   = 0x0000063Cu, /* peri.tr_io_input[5] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT6   = 0x0000063Du, /* peri.tr_io_input[6] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT7   = 0x0000063Eu, /* peri.tr_io_input[7] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT8   = 0x0000063Fu, /* peri.tr_io_input[8] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT9   = 0x00000640u, /* peri.tr_io_input[9] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT10  = 0x00000641u, /* peri.tr_io_input[10] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT11  = 0x00000642u, /* peri.tr_io_input[11] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT12  = 0x00000643u, /* peri.tr_io_input[12] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT13  = 0x00000644u, /* peri.tr_io_input[13] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT14  = 0x00000645u, /* peri.tr_io_input[14] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT15  = 0x00000646u, /* peri.tr_io_input[15] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT16  = 0x00000647u, /* peri.tr_io_input[16] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT17  = 0x00000648u, /* peri.tr_io_input[17] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT18  = 0x00000649u, /* peri.tr_io_input[18] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT19  = 0x0000064Au, /* peri.tr_io_input[19] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT20  = 0x0000064Bu, /* peri.tr_io_input[20] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT21  = 0x0000064Cu, /* peri.tr_io_input[21] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT22  = 0x0000064Du, /* peri.tr_io_input[22] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT23  = 0x0000064Eu, /* peri.tr_io_input[23] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT24  = 0x0000064Fu, /* peri.tr_io_input[24] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT25  = 0x00000650u, /* peri.tr_io_input[25] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT26  = 0x00000651u, /* peri.tr_io_input[26] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT27  = 0x00000652u, /* peri.tr_io_input[27] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT28  = 0x00000653u, /* peri.tr_io_input[28] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT29  = 0x00000654u, /* peri.tr_io_input[29] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT30  = 0x00000655u, /* peri.tr_io_input[30] */
    TRIG_IN_MUX_6_HSIOM_IO_INPUT31  = 0x00000656u, /* peri.tr_io_input[31] */
    TRIG_IN_MUX_6_CTI_TR_OUT0       = 0x00000667u, /* cpuss.cti_tr_out[0] */
    TRIG_IN_MUX_6_CTI_TR_OUT1       = 0x00000668u, /* cpuss.cti_tr_out[1] */
    TRIG_IN_MUX_6_FAULT_TR_OUT0     = 0x00000669u, /* cpuss.tr_fault[0] */
    TRIG_IN_MUX_6_FAULT_TR_OUT1     = 0x0000066Au, /* cpuss.tr_fault[1] */
    TRIG_IN_MUX_6_FAULT_TR_OUT2     = 0x0000066Bu, /* cpuss.tr_fault[2] */
    TRIG_IN_MUX_6_FAULT_TR_OUT3     = 0x0000066Cu, /* cpuss.tr_fault[3] */
    TRIG_IN_MUX_6_CXPI_TX_TR_OUT0   = 0x0000066Du, /* cxpi[0].tr_tx_req[0] */
    TRIG_IN_MUX_6_CXPI_TX_TR_OUT1   = 0x0000066Eu, /* cxpi[0].tr_tx_req[1] */
    TRIG_IN_MUX_6_CXPI_RX_TR_OUT0   = 0x0000066Fu, /* cxpi[0].tr_rx_req[0] */
    TRIG_IN_MUX_6_CXPI_RX_TR_OUT1   = 0x00000670u /* cxpi[0].tr_rx_req[1] */
} en_trig_input_tcpwm0_32_59_t;

/* Trigger Input Group 7 - PASS trigger multiplexer */
typedef enum
{
    TRIG_IN_MUX_7_PDMA0_TR_OUT0     = 0x00000701u, /* cpuss.dw0_tr_out[0] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT1     = 0x00000702u, /* cpuss.dw0_tr_out[1] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT2     = 0x00000703u, /* cpuss.dw0_tr_out[2] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT3     = 0x00000704u, /* cpuss.dw0_tr_out[3] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT4     = 0x00000705u, /* cpuss.dw0_tr_out[4] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT5     = 0x00000706u, /* cpuss.dw0_tr_out[5] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT6     = 0x00000707u, /* cpuss.dw0_tr_out[6] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT7     = 0x00000708u, /* cpuss.dw0_tr_out[7] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT8     = 0x00000709u, /* cpuss.dw0_tr_out[8] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT9     = 0x0000070Au, /* cpuss.dw0_tr_out[9] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT10    = 0x0000070Bu, /* cpuss.dw0_tr_out[10] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT11    = 0x0000070Cu, /* cpuss.dw0_tr_out[11] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT12    = 0x0000070Du, /* cpuss.dw0_tr_out[12] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT13    = 0x0000070Eu, /* cpuss.dw0_tr_out[13] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT14    = 0x0000070Fu, /* cpuss.dw0_tr_out[14] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT15    = 0x00000710u, /* cpuss.dw0_tr_out[15] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT16    = 0x00000711u, /* cpuss.dw0_tr_out[16] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT17    = 0x00000712u, /* cpuss.dw0_tr_out[17] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT18    = 0x00000713u, /* cpuss.dw0_tr_out[18] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT19    = 0x00000714u, /* cpuss.dw0_tr_out[19] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT20    = 0x00000715u, /* cpuss.dw0_tr_out[20] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT21    = 0x00000716u, /* cpuss.dw0_tr_out[21] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT22    = 0x00000717u, /* cpuss.dw0_tr_out[22] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT23    = 0x00000718u, /* cpuss.dw0_tr_out[23] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT24    = 0x00000719u, /* cpuss.dw0_tr_out[24] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT25    = 0x0000071Au, /* cpuss.dw0_tr_out[25] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT26    = 0x0000071Bu, /* cpuss.dw0_tr_out[26] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT27    = 0x0000071Cu, /* cpuss.dw0_tr_out[27] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT28    = 0x0000071Du, /* cpuss.dw0_tr_out[28] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT29    = 0x0000071Eu, /* cpuss.dw0_tr_out[29] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT30    = 0x0000071Fu, /* cpuss.dw0_tr_out[30] */
    TRIG_IN_MUX_7_PDMA0_TR_OUT31    = 0x00000720u, /* cpuss.dw0_tr_out[31] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT00 = 0x00000721u, /* tcpwm[0].tr_out0[0] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT01 = 0x00000722u, /* tcpwm[0].tr_out0[1] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT02 = 0x00000723u, /* tcpwm[0].tr_out0[2] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT03 = 0x00000724u, /* tcpwm[0].tr_out0[3] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT04 = 0x00000725u, /* tcpwm[0].tr_out0[4] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT05 = 0x00000726u, /* tcpwm[0].tr_out0[5] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT06 = 0x00000727u, /* tcpwm[0].tr_out0[6] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT07 = 0x00000728u, /* tcpwm[0].tr_out0[7] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT08 = 0x00000729u, /* tcpwm[0].tr_out0[8] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT09 = 0x0000072Au, /* tcpwm[0].tr_out0[9] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT010 = 0x0000072Bu, /* tcpwm[0].tr_out0[10] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT011 = 0x0000072Cu, /* tcpwm[0].tr_out0[11] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT012 = 0x0000072Du, /* tcpwm[0].tr_out0[12] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT013 = 0x0000072Eu, /* tcpwm[0].tr_out0[13] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT014 = 0x0000072Fu, /* tcpwm[0].tr_out0[14] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT015 = 0x00000730u, /* tcpwm[0].tr_out0[15] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT016 = 0x00000731u, /* tcpwm[0].tr_out0[16] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT017 = 0x00000732u, /* tcpwm[0].tr_out0[17] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT018 = 0x00000733u, /* tcpwm[0].tr_out0[18] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT019 = 0x00000734u, /* tcpwm[0].tr_out0[19] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT020 = 0x00000735u, /* tcpwm[0].tr_out0[20] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT021 = 0x00000736u, /* tcpwm[0].tr_out0[21] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT022 = 0x00000737u, /* tcpwm[0].tr_out0[22] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT023 = 0x00000738u, /* tcpwm[0].tr_out0[23] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT024 = 0x00000739u, /* tcpwm[0].tr_out0[24] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT025 = 0x0000073Au, /* tcpwm[0].tr_out0[25] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT026 = 0x0000073Bu, /* tcpwm[0].tr_out0[26] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT027 = 0x0000073Cu, /* tcpwm[0].tr_out0[27] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT028 = 0x0000073Du, /* tcpwm[0].tr_out0[28] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT029 = 0x0000073Eu, /* tcpwm[0].tr_out0[29] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT030 = 0x0000073Fu, /* tcpwm[0].tr_out0[30] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT031 = 0x00000740u, /* tcpwm[0].tr_out0[31] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT032 = 0x00000741u, /* tcpwm[0].tr_out0[32] */
    TRIG_IN_MUX_7_TCPWM0_16_TR_OUT033 = 0x00000742u, /* tcpwm[0].tr_out0[33] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT00 = 0x00000747u, /* tcpwm[0].tr_out0[256] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT01 = 0x00000748u, /* tcpwm[0].tr_out0[257] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT02 = 0x00000749u, /* tcpwm[0].tr_out0[258] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT03 = 0x0000074Au, /* tcpwm[0].tr_out0[259] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT04 = 0x0000074Bu, /* tcpwm[0].tr_out0[260] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT05 = 0x0000074Cu, /* tcpwm[0].tr_out0[261] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT06 = 0x0000074Du, /* tcpwm[0].tr_out0[262] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT07 = 0x0000074Eu, /* tcpwm[0].tr_out0[263] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT08 = 0x0000074Fu, /* tcpwm[0].tr_out0[264] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT09 = 0x00000750u, /* tcpwm[0].tr_out0[265] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT010 = 0x00000751u, /* tcpwm[0].tr_out0[266] */
    TRIG_IN_MUX_7_TCPWM0_16M_TR_OUT011 = 0x00000752u, /* tcpwm[0].tr_out0[267] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT00 = 0x00000753u, /* tcpwm[0].tr_out0[512] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT01 = 0x00000754u, /* tcpwm[0].tr_out0[513] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT02 = 0x00000755u, /* tcpwm[0].tr_out0[514] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT03 = 0x00000756u, /* tcpwm[0].tr_out0[515] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT04 = 0x00000757u, /* tcpwm[0].tr_out0[516] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT05 = 0x00000758u, /* tcpwm[0].tr_out0[517] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT06 = 0x00000759u, /* tcpwm[0].tr_out0[518] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT07 = 0x0000075Au, /* tcpwm[0].tr_out0[519] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT08 = 0x0000075Bu, /* tcpwm[0].tr_out0[520] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT09 = 0x0000075Cu, /* tcpwm[0].tr_out0[521] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT010 = 0x0000075Du, /* tcpwm[0].tr_out0[522] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT011 = 0x0000075Eu, /* tcpwm[0].tr_out0[523] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT012 = 0x0000075Fu, /* tcpwm[0].tr_out0[524] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT013 = 0x00000760u, /* tcpwm[0].tr_out0[525] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT014 = 0x00000761u, /* tcpwm[0].tr_out0[526] */
    TRIG_IN_MUX_7_TCPWM0_32_TR_OUT015 = 0x00000762u, /* tcpwm[0].tr_out0[527] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT0   = 0x00000773u, /* peri.tr_io_input[0] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT1   = 0x00000774u, /* peri.tr_io_input[1] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT2   = 0x00000775u, /* peri.tr_io_input[2] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT3   = 0x00000776u, /* peri.tr_io_input[3] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT4   = 0x00000777u, /* peri.tr_io_input[4] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT5   = 0x00000778u, /* peri.tr_io_input[5] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT6   = 0x00000779u, /* peri.tr_io_input[6] */
    TRIG_IN_MUX_7_HSIOM_IO_INPUT7   = 0x0000077Au, /* peri.tr_io_input[7] */
    TRIG_IN_MUX_7_EVTGEN_TR_OUT12   = 0x0000077Bu /* evtgen[0].tr_out[12] */
} en_trig_input_pass_t;

/* Trigger Input Group 8 - CAN TT Synchronization triggers */
typedef enum
{
    TRIG_IN_MUX_8_CAN0_TT_TR_OUT0   = 0x00000801u, /* canfd[0].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_8_CAN0_TT_TR_OUT1   = 0x00000802u, /* canfd[0].tr_tmp_rtp_out[1] */
    TRIG_IN_MUX_8_CAN1_TT_TR_OUT0   = 0x00000803u, /* canfd[1].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_8_CAN1_TT_TR_OUT1   = 0x00000804u /* canfd[1].tr_tmp_rtp_out[1] */
} en_trig_input_can_t;

/* Trigger Input Group 9 - 2nd level MUX using input from MUX_11/12/13 */
typedef enum
{
    TRIG_IN_MUX_9_TR_GROUP10_OUTPUT0 = 0x00000901u, /* tr_group[10].output[0] */
    TRIG_IN_MUX_9_TR_GROUP10_OUTPUT1 = 0x00000902u, /* tr_group[10].output[1] */
    TRIG_IN_MUX_9_TR_GROUP10_OUTPUT2 = 0x00000903u, /* tr_group[10].output[2] */
    TRIG_IN_MUX_9_TR_GROUP10_OUTPUT3 = 0x00000904u, /* tr_group[10].output[3] */
    TRIG_IN_MUX_9_TR_GROUP10_OUTPUT4 = 0x00000905u, /* tr_group[10].output[4] */
    TRIG_IN_MUX_9_TR_GROUP11_OUTPUT0 = 0x00000906u, /* tr_group[11].output[0] */
    TRIG_IN_MUX_9_TR_GROUP11_OUTPUT1 = 0x00000907u, /* tr_group[11].output[1] */
    TRIG_IN_MUX_9_TR_GROUP11_OUTPUT2 = 0x00000908u, /* tr_group[11].output[2] */
    TRIG_IN_MUX_9_TR_GROUP11_OUTPUT3 = 0x00000909u, /* tr_group[11].output[3] */
    TRIG_IN_MUX_9_TR_GROUP11_OUTPUT4 = 0x0000090Au, /* tr_group[11].output[4] */
    TRIG_IN_MUX_9_TR_GROUP12_OUTPUT0 = 0x0000090Bu, /* tr_group[12].output[0] */
    TRIG_IN_MUX_9_TR_GROUP12_OUTPUT1 = 0x0000090Cu, /* tr_group[12].output[1] */
    TRIG_IN_MUX_9_TR_GROUP12_OUTPUT2 = 0x0000090Du, /* tr_group[12].output[2] */
    TRIG_IN_MUX_9_TR_GROUP12_OUTPUT3 = 0x0000090Eu, /* tr_group[12].output[3] */
    TRIG_IN_MUX_9_TR_GROUP12_OUTPUT4 = 0x0000090Fu /* tr_group[12].output[4] */
} en_trig_input_debugmain_t;

/* Trigger Input Group 10 - Makes all possible triggers visible as I/O signals for debug purposes, or to build external circuitry */
typedef enum
{
    TRIG_IN_MUX_10_PDMA0_TR_OUT0    = 0x00000A01u, /* cpuss.dw0_tr_out[0] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT1    = 0x00000A02u, /* cpuss.dw0_tr_out[1] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT2    = 0x00000A03u, /* cpuss.dw0_tr_out[2] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT3    = 0x00000A04u, /* cpuss.dw0_tr_out[3] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT4    = 0x00000A05u, /* cpuss.dw0_tr_out[4] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT5    = 0x00000A06u, /* cpuss.dw0_tr_out[5] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT6    = 0x00000A07u, /* cpuss.dw0_tr_out[6] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT7    = 0x00000A08u, /* cpuss.dw0_tr_out[7] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT8    = 0x00000A09u, /* cpuss.dw0_tr_out[8] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT9    = 0x00000A0Au, /* cpuss.dw0_tr_out[9] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT10   = 0x00000A0Bu, /* cpuss.dw0_tr_out[10] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT11   = 0x00000A0Cu, /* cpuss.dw0_tr_out[11] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT12   = 0x00000A0Du, /* cpuss.dw0_tr_out[12] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT13   = 0x00000A0Eu, /* cpuss.dw0_tr_out[13] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT14   = 0x00000A0Fu, /* cpuss.dw0_tr_out[14] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT15   = 0x00000A10u, /* cpuss.dw0_tr_out[15] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT16   = 0x00000A11u, /* cpuss.dw0_tr_out[16] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT17   = 0x00000A12u, /* cpuss.dw0_tr_out[17] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT18   = 0x00000A13u, /* cpuss.dw0_tr_out[18] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT19   = 0x00000A14u, /* cpuss.dw0_tr_out[19] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT20   = 0x00000A15u, /* cpuss.dw0_tr_out[20] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT21   = 0x00000A16u, /* cpuss.dw0_tr_out[21] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT22   = 0x00000A17u, /* cpuss.dw0_tr_out[22] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT23   = 0x00000A18u, /* cpuss.dw0_tr_out[23] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT24   = 0x00000A19u, /* cpuss.dw0_tr_out[24] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT25   = 0x00000A1Au, /* cpuss.dw0_tr_out[25] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT26   = 0x00000A1Bu, /* cpuss.dw0_tr_out[26] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT27   = 0x00000A1Cu, /* cpuss.dw0_tr_out[27] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT28   = 0x00000A1Du, /* cpuss.dw0_tr_out[28] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT29   = 0x00000A1Eu, /* cpuss.dw0_tr_out[29] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT30   = 0x00000A1Fu, /* cpuss.dw0_tr_out[30] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT31   = 0x00000A20u, /* cpuss.dw0_tr_out[31] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT32   = 0x00000A21u, /* cpuss.dw0_tr_out[32] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT33   = 0x00000A22u, /* cpuss.dw0_tr_out[33] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT34   = 0x00000A23u, /* cpuss.dw0_tr_out[34] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT35   = 0x00000A24u, /* cpuss.dw0_tr_out[35] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT36   = 0x00000A25u, /* cpuss.dw0_tr_out[36] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT37   = 0x00000A26u, /* cpuss.dw0_tr_out[37] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT38   = 0x00000A27u, /* cpuss.dw0_tr_out[38] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT39   = 0x00000A28u, /* cpuss.dw0_tr_out[39] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT40   = 0x00000A29u, /* cpuss.dw0_tr_out[40] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT41   = 0x00000A2Au, /* cpuss.dw0_tr_out[41] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT42   = 0x00000A2Bu, /* cpuss.dw0_tr_out[42] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT43   = 0x00000A2Cu, /* cpuss.dw0_tr_out[43] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT44   = 0x00000A2Du, /* cpuss.dw0_tr_out[44] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT45   = 0x00000A2Eu, /* cpuss.dw0_tr_out[45] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT46   = 0x00000A2Fu, /* cpuss.dw0_tr_out[46] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT47   = 0x00000A30u, /* cpuss.dw0_tr_out[47] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT48   = 0x00000A31u, /* cpuss.dw0_tr_out[48] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT49   = 0x00000A32u, /* cpuss.dw0_tr_out[49] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT50   = 0x00000A33u, /* cpuss.dw0_tr_out[50] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT51   = 0x00000A34u, /* cpuss.dw0_tr_out[51] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT52   = 0x00000A35u, /* cpuss.dw0_tr_out[52] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT53   = 0x00000A36u, /* cpuss.dw0_tr_out[53] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT54   = 0x00000A37u, /* cpuss.dw0_tr_out[54] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT55   = 0x00000A38u, /* cpuss.dw0_tr_out[55] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT56   = 0x00000A39u, /* cpuss.dw0_tr_out[56] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT57   = 0x00000A3Au, /* cpuss.dw0_tr_out[57] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT58   = 0x00000A3Bu, /* cpuss.dw0_tr_out[58] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT59   = 0x00000A3Cu, /* cpuss.dw0_tr_out[59] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT60   = 0x00000A3Du, /* cpuss.dw0_tr_out[60] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT61   = 0x00000A3Eu, /* cpuss.dw0_tr_out[61] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT62   = 0x00000A3Fu, /* cpuss.dw0_tr_out[62] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT63   = 0x00000A40u, /* cpuss.dw0_tr_out[63] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT64   = 0x00000A41u, /* cpuss.dw0_tr_out[64] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT65   = 0x00000A42u, /* cpuss.dw0_tr_out[65] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT66   = 0x00000A43u, /* cpuss.dw0_tr_out[66] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT67   = 0x00000A44u, /* cpuss.dw0_tr_out[67] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT68   = 0x00000A45u, /* cpuss.dw0_tr_out[68] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT69   = 0x00000A46u, /* cpuss.dw0_tr_out[69] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT70   = 0x00000A47u, /* cpuss.dw0_tr_out[70] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT71   = 0x00000A48u, /* cpuss.dw0_tr_out[71] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT72   = 0x00000A49u, /* cpuss.dw0_tr_out[72] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT73   = 0x00000A4Au, /* cpuss.dw0_tr_out[73] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT74   = 0x00000A4Bu, /* cpuss.dw0_tr_out[74] */
    TRIG_IN_MUX_10_PDMA0_TR_OUT75   = 0x00000A4Cu, /* cpuss.dw0_tr_out[75] */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT0   = 0x00000A4Du, /* scb[0].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT1   = 0x00000A4Eu, /* scb[1].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT2   = 0x00000A4Fu, /* scb[2].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT3   = 0x00000A50u, /* scb[3].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT4   = 0x00000A51u, /* scb[4].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT5   = 0x00000A52u, /* scb[5].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT6   = 0x00000A53u, /* scb[6].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT7   = 0x00000A54u, /* scb[7].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT8   = 0x00000A55u, /* scb[8].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT9   = 0x00000A56u, /* scb[9].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT10  = 0x00000A57u, /* scb[10].tr_tx_req */
    TRIG_IN_MUX_10_SCB_TX_TR_OUT11  = 0x00000A58u, /* scb[11].tr_tx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT0   = 0x00000A59u, /* scb[0].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT1   = 0x00000A5Au, /* scb[1].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT2   = 0x00000A5Bu, /* scb[2].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT3   = 0x00000A5Cu, /* scb[3].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT4   = 0x00000A5Du, /* scb[4].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT5   = 0x00000A5Eu, /* scb[5].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT6   = 0x00000A5Fu, /* scb[6].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT7   = 0x00000A60u, /* scb[7].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT8   = 0x00000A61u, /* scb[8].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT9   = 0x00000A62u, /* scb[9].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT10  = 0x00000A63u, /* scb[10].tr_rx_req */
    TRIG_IN_MUX_10_SCB_RX_TR_OUT11  = 0x00000A64u, /* scb[11].tr_rx_req */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT0 = 0x00000A65u, /* scb[0].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT1 = 0x00000A66u, /* scb[1].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT2 = 0x00000A67u, /* scb[2].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT3 = 0x00000A68u, /* scb[3].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT4 = 0x00000A69u, /* scb[4].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT5 = 0x00000A6Au, /* scb[5].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT6 = 0x00000A6Bu, /* scb[6].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT7 = 0x00000A6Cu, /* scb[7].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT8 = 0x00000A6Du, /* scb[8].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT9 = 0x00000A6Eu, /* scb[9].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT10 = 0x00000A6Fu, /* scb[10].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_SCB_I2C_SCL_TR_OUT11 = 0x00000A70u, /* scb[11].tr_i2c_scl_filtered */
    TRIG_IN_MUX_10_CAN0_DBG_TR_OUT0 = 0x00000A71u, /* canfd[0].tr_dbg_dma_req[0] */
    TRIG_IN_MUX_10_CAN0_DBG_TR_OUT1 = 0x00000A72u, /* canfd[0].tr_dbg_dma_req[1] */
    TRIG_IN_MUX_10_CAN0_FIFO0_TR_OUT0 = 0x00000A73u, /* canfd[0].tr_fifo0[0] */
    TRIG_IN_MUX_10_CAN0_FIFO0_TR_OUT1 = 0x00000A74u, /* canfd[0].tr_fifo0[1] */
    TRIG_IN_MUX_10_CAN0_FIFO1_TR_OUT0 = 0x00000A75u, /* canfd[0].tr_fifo1[0] */
    TRIG_IN_MUX_10_CAN0_FIFO1_TR_OUT1 = 0x00000A76u, /* canfd[0].tr_fifo1[1] */
    TRIG_IN_MUX_10_CAN0_TT_TR_OUT0  = 0x00000A77u, /* canfd[0].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_10_CAN0_TT_TR_OUT1  = 0x00000A78u, /* canfd[0].tr_tmp_rtp_out[1] */
    TRIG_IN_MUX_10_CAN1_DBG_TR_OUT0 = 0x00000A79u, /* canfd[1].tr_dbg_dma_req[0] */
    TRIG_IN_MUX_10_CAN1_DBG_TR_OUT1 = 0x00000A7Au, /* canfd[1].tr_dbg_dma_req[1] */
    TRIG_IN_MUX_10_CAN1_FIFO0_TR_OUT0 = 0x00000A7Bu, /* canfd[1].tr_fifo0[0] */
    TRIG_IN_MUX_10_CAN1_FIFO0_TR_OUT1 = 0x00000A7Cu, /* canfd[1].tr_fifo0[1] */
    TRIG_IN_MUX_10_CAN1_FIFO1_TR_OUT0 = 0x00000A7Du, /* canfd[1].tr_fifo1[0] */
    TRIG_IN_MUX_10_CAN1_FIFO1_TR_OUT1 = 0x00000A7Eu, /* canfd[1].tr_fifo1[1] */
    TRIG_IN_MUX_10_CAN1_TT_TR_OUT0  = 0x00000A7Fu, /* canfd[1].tr_tmp_rtp_out[0] */
    TRIG_IN_MUX_10_CAN1_TT_TR_OUT1  = 0x00000A80u, /* canfd[1].tr_tmp_rtp_out[1] */
    TRIG_IN_MUX_10_CTI_TR_OUT0      = 0x00000A81u, /* cpuss.cti_tr_out[0] */
    TRIG_IN_MUX_10_CTI_TR_OUT1      = 0x00000A82u, /* cpuss.cti_tr_out[1] */
    TRIG_IN_MUX_10_FAULT_TR_OUT0    = 0x00000A83u, /* cpuss.tr_fault[0] */
    TRIG_IN_MUX_10_FAULT_TR_OUT1    = 0x00000A84u, /* cpuss.tr_fault[1] */
    TRIG_IN_MUX_10_FAULT_TR_OUT2    = 0x00000A85u, /* cpuss.tr_fault[2] */
    TRIG_IN_MUX_10_FAULT_TR_OUT3    = 0x00000A86u, /* cpuss.tr_fault[3] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT0   = 0x00000A87u, /* evtgen[0].tr_out[0] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT1   = 0x00000A88u, /* evtgen[0].tr_out[1] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT2   = 0x00000A89u, /* evtgen[0].tr_out[2] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT3   = 0x00000A8Au, /* evtgen[0].tr_out[3] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT4   = 0x00000A8Bu, /* evtgen[0].tr_out[4] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT5   = 0x00000A8Cu, /* evtgen[0].tr_out[5] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT6   = 0x00000A8Du, /* evtgen[0].tr_out[6] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT7   = 0x00000A8Eu, /* evtgen[0].tr_out[7] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT8   = 0x00000A8Fu, /* evtgen[0].tr_out[8] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT9   = 0x00000A90u, /* evtgen[0].tr_out[9] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT10  = 0x00000A91u, /* evtgen[0].tr_out[10] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT11  = 0x00000A92u, /* evtgen[0].tr_out[11] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT12  = 0x00000A93u, /* evtgen[0].tr_out[12] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT13  = 0x00000A94u, /* evtgen[0].tr_out[13] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT14  = 0x00000A95u, /* evtgen[0].tr_out[14] */
    TRIG_IN_MUX_10_EVTGEN_TR_OUT15  = 0x00000A96u /* evtgen[0].tr_out[15] */
} en_trig_input_debugreduction1_t;

/* Trigger Input Group 11 - Makes all possible triggers visible as I/O signals for debug purposes, or to build external circuitry */
typedef enum
{
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT00 = 0x00000B01u, /* tcpwm[0].tr_out0[512] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT01 = 0x00000B02u, /* tcpwm[0].tr_out0[513] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT02 = 0x00000B03u, /* tcpwm[0].tr_out0[514] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT03 = 0x00000B04u, /* tcpwm[0].tr_out0[515] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT04 = 0x00000B05u, /* tcpwm[0].tr_out0[516] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT05 = 0x00000B06u, /* tcpwm[0].tr_out0[517] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT06 = 0x00000B07u, /* tcpwm[0].tr_out0[518] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT07 = 0x00000B08u, /* tcpwm[0].tr_out0[519] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT08 = 0x00000B09u, /* tcpwm[0].tr_out0[520] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT09 = 0x00000B0Au, /* tcpwm[0].tr_out0[521] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT010 = 0x00000B0Bu, /* tcpwm[0].tr_out0[522] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT011 = 0x00000B0Cu, /* tcpwm[0].tr_out0[523] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT012 = 0x00000B0Du, /* tcpwm[0].tr_out0[524] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT013 = 0x00000B0Eu, /* tcpwm[0].tr_out0[525] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT014 = 0x00000B0Fu, /* tcpwm[0].tr_out0[526] */
    TRIG_IN_MUX_11_TCPWM0_32_TR_OUT015 = 0x00000B10u, /* tcpwm[0].tr_out0[527] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT00 = 0x00000B21u, /* tcpwm[0].tr_out0[256] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT01 = 0x00000B22u, /* tcpwm[0].tr_out0[257] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT02 = 0x00000B23u, /* tcpwm[0].tr_out0[258] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT03 = 0x00000B24u, /* tcpwm[0].tr_out0[259] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT04 = 0x00000B25u, /* tcpwm[0].tr_out0[260] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT05 = 0x00000B26u, /* tcpwm[0].tr_out0[261] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT06 = 0x00000B27u, /* tcpwm[0].tr_out0[262] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT07 = 0x00000B28u, /* tcpwm[0].tr_out0[263] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT08 = 0x00000B29u, /* tcpwm[0].tr_out0[264] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT09 = 0x00000B2Au, /* tcpwm[0].tr_out0[265] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT010 = 0x00000B2Bu, /* tcpwm[0].tr_out0[266] */
    TRIG_IN_MUX_11_TCPWM0_16M_TR_OUT011 = 0x00000B2Cu, /* tcpwm[0].tr_out0[267] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT00 = 0x00000B2Du, /* tcpwm[0].tr_out0[0] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT01 = 0x00000B2Eu, /* tcpwm[0].tr_out0[1] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT02 = 0x00000B2Fu, /* tcpwm[0].tr_out0[2] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT03 = 0x00000B30u, /* tcpwm[0].tr_out0[3] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT04 = 0x00000B31u, /* tcpwm[0].tr_out0[4] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT05 = 0x00000B32u, /* tcpwm[0].tr_out0[5] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT06 = 0x00000B33u, /* tcpwm[0].tr_out0[6] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT07 = 0x00000B34u, /* tcpwm[0].tr_out0[7] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT08 = 0x00000B35u, /* tcpwm[0].tr_out0[8] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT09 = 0x00000B36u, /* tcpwm[0].tr_out0[9] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT010 = 0x00000B37u, /* tcpwm[0].tr_out0[10] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT011 = 0x00000B38u, /* tcpwm[0].tr_out0[11] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT012 = 0x00000B39u, /* tcpwm[0].tr_out0[12] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT013 = 0x00000B3Au, /* tcpwm[0].tr_out0[13] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT014 = 0x00000B3Bu, /* tcpwm[0].tr_out0[14] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT015 = 0x00000B3Cu, /* tcpwm[0].tr_out0[15] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT016 = 0x00000B3Du, /* tcpwm[0].tr_out0[16] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT017 = 0x00000B3Eu, /* tcpwm[0].tr_out0[17] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT018 = 0x00000B3Fu, /* tcpwm[0].tr_out0[18] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT019 = 0x00000B40u, /* tcpwm[0].tr_out0[19] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT020 = 0x00000B41u, /* tcpwm[0].tr_out0[20] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT021 = 0x00000B42u, /* tcpwm[0].tr_out0[21] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT022 = 0x00000B43u, /* tcpwm[0].tr_out0[22] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT023 = 0x00000B44u, /* tcpwm[0].tr_out0[23] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT024 = 0x00000B45u, /* tcpwm[0].tr_out0[24] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT025 = 0x00000B46u, /* tcpwm[0].tr_out0[25] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT026 = 0x00000B47u, /* tcpwm[0].tr_out0[26] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT027 = 0x00000B48u, /* tcpwm[0].tr_out0[27] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT028 = 0x00000B49u, /* tcpwm[0].tr_out0[28] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT029 = 0x00000B4Au, /* tcpwm[0].tr_out0[29] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT030 = 0x00000B4Bu, /* tcpwm[0].tr_out0[30] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT031 = 0x00000B4Cu, /* tcpwm[0].tr_out0[31] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT032 = 0x00000B4Du, /* tcpwm[0].tr_out0[32] */
    TRIG_IN_MUX_11_TCPWM0_16_TR_OUT033 = 0x00000B4Eu, /* tcpwm[0].tr_out0[33] */
    TRIG_IN_MUX_11_SMIF0_TX_TR_OUT  = 0x00000B53u, /* smif[0].tr_tx_req */
    TRIG_IN_MUX_11_SMIF0_RX_TR_OUT  = 0x00000B54u, /* smif[0].tr_rx_req */
    TRIG_IN_MUX_11_TDM0_TX_TR_OUT0  = 0x00000B5Fu, /* tdm[0].tr_tx_req[0] */
    TRIG_IN_MUX_11_TDM0_TX_TR_OUT1  = 0x00000B60u, /* tdm[0].tr_tx_req[1] */
    TRIG_IN_MUX_11_TDM0_RX_TR_OUT0  = 0x00000B63u, /* tdm[0].tr_rx_req[0] */
    TRIG_IN_MUX_11_TDM0_RX_TR_OUT1  = 0x00000B64u, /* tdm[0].tr_rx_req[1] */
    TRIG_IN_MUX_11_SG0_TX_TR_OUT0   = 0x00000B67u, /* sg[0].tr_complete[0] */
    TRIG_IN_MUX_11_SG0_TX_TR_OUT1   = 0x00000B68u, /* sg[0].tr_complete[1] */
    TRIG_IN_MUX_11_SG0_TX_TR_OUT2   = 0x00000B69u, /* sg[0].tr_complete[2] */
    TRIG_IN_MUX_11_SG0_TX_TR_OUT3   = 0x00000B6Au, /* sg[0].tr_complete[3] */
    TRIG_IN_MUX_11_SG0_TX_TR_OUT4   = 0x00000B6Bu, /* sg[0].tr_complete[4] */
    TRIG_IN_MUX_11_PWM0_TX_TR_OUT0  = 0x00000B6Cu, /* pwm[0].tr_tx_req[0] */
    TRIG_IN_MUX_11_PWM0_TX_TR_OUT1  = 0x00000B6Du, /* pwm[0].tr_tx_req[1] */
    TRIG_IN_MUX_11_MIXER0_TR_SRC_REQ_OUT0 = 0x00000B6Fu, /* mixer[0].tr_src_req[0] */
    TRIG_IN_MUX_11_MIXER0_TR_SRC_REQ_OUT1 = 0x00000B70u, /* mixer[0].tr_src_req[1] */
    TRIG_IN_MUX_11_MIXER0_TR_SRC_REQ_OUT2 = 0x00000B71u, /* mixer[0].tr_src_req[2] */
    TRIG_IN_MUX_11_MIXER0_TR_SRC_REQ_OUT3 = 0x00000B72u, /* mixer[0].tr_src_req[3] */
    TRIG_IN_MUX_11_MIXER0_TR_SRC_REQ_OUT4 = 0x00000B73u, /* mixer[0].tr_src_req[4] */
    TRIG_IN_MUX_11_MIXER0_TR_DST_REQ_OUT = 0x00000B74u, /* mixer[0].tr_dst_req */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT0  = 0x00000B7Bu, /* peri.tr_io_input[0] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT1  = 0x00000B7Cu, /* peri.tr_io_input[1] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT2  = 0x00000B7Du, /* peri.tr_io_input[2] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT3  = 0x00000B7Eu, /* peri.tr_io_input[3] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT4  = 0x00000B7Fu, /* peri.tr_io_input[4] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT5  = 0x00000B80u, /* peri.tr_io_input[5] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT6  = 0x00000B81u, /* peri.tr_io_input[6] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT7  = 0x00000B82u, /* peri.tr_io_input[7] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT8  = 0x00000B83u, /* peri.tr_io_input[8] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT9  = 0x00000B84u, /* peri.tr_io_input[9] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT10 = 0x00000B85u, /* peri.tr_io_input[10] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT11 = 0x00000B86u, /* peri.tr_io_input[11] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT12 = 0x00000B87u, /* peri.tr_io_input[12] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT13 = 0x00000B88u, /* peri.tr_io_input[13] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT14 = 0x00000B89u, /* peri.tr_io_input[14] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT15 = 0x00000B8Au, /* peri.tr_io_input[15] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT16 = 0x00000B8Bu, /* peri.tr_io_input[16] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT17 = 0x00000B8Cu, /* peri.tr_io_input[17] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT18 = 0x00000B8Du, /* peri.tr_io_input[18] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT19 = 0x00000B8Eu, /* peri.tr_io_input[19] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT20 = 0x00000B8Fu, /* peri.tr_io_input[20] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT21 = 0x00000B90u, /* peri.tr_io_input[21] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT22 = 0x00000B91u, /* peri.tr_io_input[22] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT23 = 0x00000B92u, /* peri.tr_io_input[23] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT24 = 0x00000B93u, /* peri.tr_io_input[24] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT25 = 0x00000B94u, /* peri.tr_io_input[25] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT26 = 0x00000B95u, /* peri.tr_io_input[26] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT27 = 0x00000B96u, /* peri.tr_io_input[27] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT28 = 0x00000B97u, /* peri.tr_io_input[28] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT29 = 0x00000B98u, /* peri.tr_io_input[29] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT30 = 0x00000B99u, /* peri.tr_io_input[30] */
    TRIG_IN_MUX_11_HSIOM_IO_INPUT31 = 0x00000B9Au, /* peri.tr_io_input[31] */
    TRIG_IN_MUX_11_CXPI_TX_TR_OUT0  = 0x00000BABu, /* cxpi[0].tr_tx_req[0] */
    TRIG_IN_MUX_11_CXPI_TX_TR_OUT1  = 0x00000BACu, /* cxpi[0].tr_tx_req[1] */
    TRIG_IN_MUX_11_CXPI_RX_TR_OUT0  = 0x00000BADu, /* cxpi[0].tr_rx_req[0] */
    TRIG_IN_MUX_11_CXPI_RX_TR_OUT1  = 0x00000BAEu /* cxpi[0].tr_rx_req[1] */
} en_trig_input_debugreduction2_t;

/* Trigger Input Group 12 - Makes all possible triggers visible as I/O signals for debug purposes, or to build external circuitry */
typedef enum
{
    TRIG_IN_MUX_12_PDMA1_TR_OUT0    = 0x00000C01u, /* cpuss.dw1_tr_out[0] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT1    = 0x00000C02u, /* cpuss.dw1_tr_out[1] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT2    = 0x00000C03u, /* cpuss.dw1_tr_out[2] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT3    = 0x00000C04u, /* cpuss.dw1_tr_out[3] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT4    = 0x00000C05u, /* cpuss.dw1_tr_out[4] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT5    = 0x00000C06u, /* cpuss.dw1_tr_out[5] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT6    = 0x00000C07u, /* cpuss.dw1_tr_out[6] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT7    = 0x00000C08u, /* cpuss.dw1_tr_out[7] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT8    = 0x00000C09u, /* cpuss.dw1_tr_out[8] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT9    = 0x00000C0Au, /* cpuss.dw1_tr_out[9] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT10   = 0x00000C0Bu, /* cpuss.dw1_tr_out[10] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT11   = 0x00000C0Cu, /* cpuss.dw1_tr_out[11] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT12   = 0x00000C0Du, /* cpuss.dw1_tr_out[12] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT13   = 0x00000C0Eu, /* cpuss.dw1_tr_out[13] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT14   = 0x00000C0Fu, /* cpuss.dw1_tr_out[14] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT15   = 0x00000C10u, /* cpuss.dw1_tr_out[15] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT16   = 0x00000C11u, /* cpuss.dw1_tr_out[16] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT17   = 0x00000C12u, /* cpuss.dw1_tr_out[17] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT18   = 0x00000C13u, /* cpuss.dw1_tr_out[18] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT19   = 0x00000C14u, /* cpuss.dw1_tr_out[19] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT20   = 0x00000C15u, /* cpuss.dw1_tr_out[20] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT21   = 0x00000C16u, /* cpuss.dw1_tr_out[21] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT22   = 0x00000C17u, /* cpuss.dw1_tr_out[22] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT23   = 0x00000C18u, /* cpuss.dw1_tr_out[23] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT24   = 0x00000C19u, /* cpuss.dw1_tr_out[24] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT25   = 0x00000C1Au, /* cpuss.dw1_tr_out[25] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT26   = 0x00000C1Bu, /* cpuss.dw1_tr_out[26] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT27   = 0x00000C1Cu, /* cpuss.dw1_tr_out[27] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT28   = 0x00000C1Du, /* cpuss.dw1_tr_out[28] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT29   = 0x00000C1Eu, /* cpuss.dw1_tr_out[29] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT30   = 0x00000C1Fu, /* cpuss.dw1_tr_out[30] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT31   = 0x00000C20u, /* cpuss.dw1_tr_out[31] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT32   = 0x00000C21u, /* cpuss.dw1_tr_out[32] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT33   = 0x00000C22u, /* cpuss.dw1_tr_out[33] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT34   = 0x00000C23u, /* cpuss.dw1_tr_out[34] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT35   = 0x00000C24u, /* cpuss.dw1_tr_out[35] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT36   = 0x00000C25u, /* cpuss.dw1_tr_out[36] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT37   = 0x00000C26u, /* cpuss.dw1_tr_out[37] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT38   = 0x00000C27u, /* cpuss.dw1_tr_out[38] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT39   = 0x00000C28u, /* cpuss.dw1_tr_out[39] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT40   = 0x00000C29u, /* cpuss.dw1_tr_out[40] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT41   = 0x00000C2Au, /* cpuss.dw1_tr_out[41] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT42   = 0x00000C2Bu, /* cpuss.dw1_tr_out[42] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT43   = 0x00000C2Cu, /* cpuss.dw1_tr_out[43] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT44   = 0x00000C2Du, /* cpuss.dw1_tr_out[44] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT45   = 0x00000C2Eu, /* cpuss.dw1_tr_out[45] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT46   = 0x00000C2Fu, /* cpuss.dw1_tr_out[46] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT47   = 0x00000C30u, /* cpuss.dw1_tr_out[47] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT48   = 0x00000C31u, /* cpuss.dw1_tr_out[48] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT49   = 0x00000C32u, /* cpuss.dw1_tr_out[49] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT50   = 0x00000C33u, /* cpuss.dw1_tr_out[50] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT51   = 0x00000C34u, /* cpuss.dw1_tr_out[51] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT52   = 0x00000C35u, /* cpuss.dw1_tr_out[52] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT53   = 0x00000C36u, /* cpuss.dw1_tr_out[53] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT54   = 0x00000C37u, /* cpuss.dw1_tr_out[54] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT55   = 0x00000C38u, /* cpuss.dw1_tr_out[55] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT56   = 0x00000C39u, /* cpuss.dw1_tr_out[56] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT57   = 0x00000C3Au, /* cpuss.dw1_tr_out[57] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT58   = 0x00000C3Bu, /* cpuss.dw1_tr_out[58] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT59   = 0x00000C3Cu, /* cpuss.dw1_tr_out[59] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT60   = 0x00000C3Du, /* cpuss.dw1_tr_out[60] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT61   = 0x00000C3Eu, /* cpuss.dw1_tr_out[61] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT62   = 0x00000C3Fu, /* cpuss.dw1_tr_out[62] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT63   = 0x00000C40u, /* cpuss.dw1_tr_out[63] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT64   = 0x00000C41u, /* cpuss.dw1_tr_out[64] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT65   = 0x00000C42u, /* cpuss.dw1_tr_out[65] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT66   = 0x00000C43u, /* cpuss.dw1_tr_out[66] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT67   = 0x00000C44u, /* cpuss.dw1_tr_out[67] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT68   = 0x00000C45u, /* cpuss.dw1_tr_out[68] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT69   = 0x00000C46u, /* cpuss.dw1_tr_out[69] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT70   = 0x00000C47u, /* cpuss.dw1_tr_out[70] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT71   = 0x00000C48u, /* cpuss.dw1_tr_out[71] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT72   = 0x00000C49u, /* cpuss.dw1_tr_out[72] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT73   = 0x00000C4Au, /* cpuss.dw1_tr_out[73] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT74   = 0x00000C4Bu, /* cpuss.dw1_tr_out[74] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT75   = 0x00000C4Cu, /* cpuss.dw1_tr_out[75] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT76   = 0x00000C4Du, /* cpuss.dw1_tr_out[76] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT77   = 0x00000C4Eu, /* cpuss.dw1_tr_out[77] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT78   = 0x00000C4Fu, /* cpuss.dw1_tr_out[78] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT79   = 0x00000C50u, /* cpuss.dw1_tr_out[79] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT80   = 0x00000C51u, /* cpuss.dw1_tr_out[80] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT81   = 0x00000C52u, /* cpuss.dw1_tr_out[81] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT82   = 0x00000C53u, /* cpuss.dw1_tr_out[82] */
    TRIG_IN_MUX_12_PDMA1_TR_OUT83   = 0x00000C54u, /* cpuss.dw1_tr_out[83] */
    TRIG_IN_MUX_12_MDMA_TR_OUT0     = 0x00000C55u, /* cpuss.dmac_tr_out[0] */
    TRIG_IN_MUX_12_MDMA_TR_OUT1     = 0x00000C56u, /* cpuss.dmac_tr_out[1] */
    TRIG_IN_MUX_12_MDMA_TR_OUT2     = 0x00000C57u, /* cpuss.dmac_tr_out[2] */
    TRIG_IN_MUX_12_MDMA_TR_OUT3     = 0x00000C58u, /* cpuss.dmac_tr_out[3] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT10 = 0x00000C5Du, /* tcpwm[0].tr_out1[512] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT11 = 0x00000C5Eu, /* tcpwm[0].tr_out1[513] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT12 = 0x00000C5Fu, /* tcpwm[0].tr_out1[514] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT13 = 0x00000C60u, /* tcpwm[0].tr_out1[515] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT14 = 0x00000C61u, /* tcpwm[0].tr_out1[516] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT15 = 0x00000C62u, /* tcpwm[0].tr_out1[517] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT16 = 0x00000C63u, /* tcpwm[0].tr_out1[518] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT17 = 0x00000C64u, /* tcpwm[0].tr_out1[519] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT18 = 0x00000C65u, /* tcpwm[0].tr_out1[520] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT19 = 0x00000C66u, /* tcpwm[0].tr_out1[521] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT110 = 0x00000C67u, /* tcpwm[0].tr_out1[522] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT111 = 0x00000C68u, /* tcpwm[0].tr_out1[523] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT112 = 0x00000C69u, /* tcpwm[0].tr_out1[524] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT113 = 0x00000C6Au, /* tcpwm[0].tr_out1[525] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT114 = 0x00000C6Bu, /* tcpwm[0].tr_out1[526] */
    TRIG_IN_MUX_12_TCPWM0_32_TR_OUT115 = 0x00000C6Cu, /* tcpwm[0].tr_out1[527] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT10 = 0x00000C7Du, /* tcpwm[0].tr_out1[256] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT11 = 0x00000C7Eu, /* tcpwm[0].tr_out1[257] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT12 = 0x00000C7Fu, /* tcpwm[0].tr_out1[258] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT13 = 0x00000C80u, /* tcpwm[0].tr_out1[259] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT14 = 0x00000C81u, /* tcpwm[0].tr_out1[260] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT15 = 0x00000C82u, /* tcpwm[0].tr_out1[261] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT16 = 0x00000C83u, /* tcpwm[0].tr_out1[262] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT17 = 0x00000C84u, /* tcpwm[0].tr_out1[263] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT18 = 0x00000C85u, /* tcpwm[0].tr_out1[264] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT19 = 0x00000C86u, /* tcpwm[0].tr_out1[265] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT110 = 0x00000C87u, /* tcpwm[0].tr_out1[266] */
    TRIG_IN_MUX_12_TCPWM0_16M_TR_OUT111 = 0x00000C88u, /* tcpwm[0].tr_out1[267] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT10 = 0x00000C89u, /* tcpwm[0].tr_out1[0] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT11 = 0x00000C8Au, /* tcpwm[0].tr_out1[1] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT12 = 0x00000C8Bu, /* tcpwm[0].tr_out1[2] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT13 = 0x00000C8Cu, /* tcpwm[0].tr_out1[3] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT14 = 0x00000C8Du, /* tcpwm[0].tr_out1[4] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT15 = 0x00000C8Eu, /* tcpwm[0].tr_out1[5] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT16 = 0x00000C8Fu, /* tcpwm[0].tr_out1[6] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT17 = 0x00000C90u, /* tcpwm[0].tr_out1[7] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT18 = 0x00000C91u, /* tcpwm[0].tr_out1[8] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT19 = 0x00000C92u, /* tcpwm[0].tr_out1[9] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT110 = 0x00000C93u, /* tcpwm[0].tr_out1[10] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT111 = 0x00000C94u, /* tcpwm[0].tr_out1[11] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT112 = 0x00000C95u, /* tcpwm[0].tr_out1[12] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT113 = 0x00000C96u, /* tcpwm[0].tr_out1[13] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT114 = 0x00000C97u, /* tcpwm[0].tr_out1[14] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT115 = 0x00000C98u, /* tcpwm[0].tr_out1[15] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT116 = 0x00000C99u, /* tcpwm[0].tr_out1[16] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT117 = 0x00000C9Au, /* tcpwm[0].tr_out1[17] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT118 = 0x00000C9Bu, /* tcpwm[0].tr_out1[18] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT119 = 0x00000C9Cu, /* tcpwm[0].tr_out1[19] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT120 = 0x00000C9Du, /* tcpwm[0].tr_out1[20] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT121 = 0x00000C9Eu, /* tcpwm[0].tr_out1[21] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT122 = 0x00000C9Fu, /* tcpwm[0].tr_out1[22] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT123 = 0x00000CA0u, /* tcpwm[0].tr_out1[23] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT124 = 0x00000CA1u, /* tcpwm[0].tr_out1[24] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT125 = 0x00000CA2u, /* tcpwm[0].tr_out1[25] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT126 = 0x00000CA3u, /* tcpwm[0].tr_out1[26] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT127 = 0x00000CA4u, /* tcpwm[0].tr_out1[27] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT128 = 0x00000CA5u, /* tcpwm[0].tr_out1[28] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT129 = 0x00000CA6u, /* tcpwm[0].tr_out1[29] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT130 = 0x00000CA7u, /* tcpwm[0].tr_out1[30] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT131 = 0x00000CA8u, /* tcpwm[0].tr_out1[31] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT132 = 0x00000CA9u, /* tcpwm[0].tr_out1[32] */
    TRIG_IN_MUX_12_TCPWM0_16_TR_OUT133 = 0x00000CAAu, /* tcpwm[0].tr_out1[33] */
    TRIG_IN_MUX_12_PASS_GEN_TR_OUT0 = 0x00000CAFu, /* pass[0].tr_sar_gen_out[0] */
    TRIG_IN_MUX_12_PASS_GEN_TR_OUT1 = 0x00000CB0u /* pass[0].tr_sar_gen_out[1] */
} en_trig_input_debugreduction3_t;

/* Trigger Input Group 0 - Dedicated triggers to PDMA0 (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_0_CAN0_DBG_TO_PDMA0_0 = 0x00001000u, /* From canfd[0].tr_dbg_dma_req[0] to cpuss.dw0_tr_in[32] */
    TRIG_IN_1TO1_0_CAN0_FIFO0_TO_PDMA0_0 = 0x00001001u, /* From canfd[0].tr_fifo0[0] to cpuss.dw0_tr_in[33] */
    TRIG_IN_1TO1_0_CAN0_FIFO1_TO_PDMA0_0 = 0x00001002u, /* From canfd[0].tr_fifo1[0] to cpuss.dw0_tr_in[34] */
    TRIG_IN_1TO1_0_CAN0_DBG_TO_PDMA0_1 = 0x00001003u, /* From canfd[0].tr_dbg_dma_req[1] to cpuss.dw0_tr_in[35] */
    TRIG_IN_1TO1_0_CAN0_FIFO0_TO_PDMA0_1 = 0x00001004u, /* From canfd[0].tr_fifo0[1] to cpuss.dw0_tr_in[36] */
    TRIG_IN_1TO1_0_CAN0_FIFO1_TO_PDMA0_1 = 0x00001005u, /* From canfd[0].tr_fifo1[1] to cpuss.dw0_tr_in[37] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA00 = 0x00001006u, /* From pass[0].tr_sar_ch_done[0] to cpuss.dw0_tr_in[38] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA01 = 0x00001007u, /* From pass[0].tr_sar_ch_done[1] to cpuss.dw0_tr_in[39] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA02 = 0x00001008u, /* From pass[0].tr_sar_ch_done[2] to cpuss.dw0_tr_in[40] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA03 = 0x00001009u, /* From pass[0].tr_sar_ch_done[3] to cpuss.dw0_tr_in[41] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA04 = 0x0000100Au, /* From pass[0].tr_sar_ch_done[4] to cpuss.dw0_tr_in[42] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA05 = 0x0000100Bu, /* From pass[0].tr_sar_ch_done[5] to cpuss.dw0_tr_in[43] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA06 = 0x0000100Cu, /* From pass[0].tr_sar_ch_done[6] to cpuss.dw0_tr_in[44] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA07 = 0x0000100Du, /* From pass[0].tr_sar_ch_done[7] to cpuss.dw0_tr_in[45] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA08 = 0x0000100Eu, /* From pass[0].tr_sar_ch_done[8] to cpuss.dw0_tr_in[46] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA09 = 0x0000100Fu, /* From pass[0].tr_sar_ch_done[9] to cpuss.dw0_tr_in[47] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA010 = 0x00001010u, /* From pass[0].tr_sar_ch_done[10] to cpuss.dw0_tr_in[48] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA011 = 0x00001011u, /* From pass[0].tr_sar_ch_done[11] to cpuss.dw0_tr_in[49] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA012 = 0x00001012u, /* From pass[0].tr_sar_ch_done[12] to cpuss.dw0_tr_in[50] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA013 = 0x00001013u, /* From pass[0].tr_sar_ch_done[13] to cpuss.dw0_tr_in[51] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA014 = 0x00001014u, /* From pass[0].tr_sar_ch_done[14] to cpuss.dw0_tr_in[52] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA015 = 0x00001015u, /* From pass[0].tr_sar_ch_done[15] to cpuss.dw0_tr_in[53] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA016 = 0x00001016u, /* From pass[0].tr_sar_ch_done[16] to cpuss.dw0_tr_in[54] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA017 = 0x00001017u, /* From pass[0].tr_sar_ch_done[17] to cpuss.dw0_tr_in[55] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA018 = 0x00001018u, /* From pass[0].tr_sar_ch_done[18] to cpuss.dw0_tr_in[56] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA019 = 0x00001019u, /* From pass[0].tr_sar_ch_done[19] to cpuss.dw0_tr_in[57] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA020 = 0x0000101Au, /* From pass[0].tr_sar_ch_done[20] to cpuss.dw0_tr_in[58] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA021 = 0x0000101Bu, /* From pass[0].tr_sar_ch_done[21] to cpuss.dw0_tr_in[59] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA022 = 0x0000101Cu, /* From pass[0].tr_sar_ch_done[22] to cpuss.dw0_tr_in[60] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA023 = 0x0000101Du, /* From pass[0].tr_sar_ch_done[23] to cpuss.dw0_tr_in[61] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA024 = 0x0000101Eu, /* From pass[0].tr_sar_ch_done[24] to cpuss.dw0_tr_in[62] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA025 = 0x0000101Fu, /* From pass[0].tr_sar_ch_done[25] to cpuss.dw0_tr_in[63] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA026 = 0x00001020u, /* From pass[0].tr_sar_ch_done[26] to cpuss.dw0_tr_in[64] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA027 = 0x00001021u, /* From pass[0].tr_sar_ch_done[27] to cpuss.dw0_tr_in[65] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA028 = 0x00001022u, /* From pass[0].tr_sar_ch_done[28] to cpuss.dw0_tr_in[66] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA029 = 0x00001023u, /* From pass[0].tr_sar_ch_done[29] to cpuss.dw0_tr_in[67] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA030 = 0x00001024u, /* From pass[0].tr_sar_ch_done[30] to cpuss.dw0_tr_in[68] */
    TRIG_IN_1TO1_0_PASS_CH_DONE_TO_PDMA031 = 0x00001025u, /* From pass[0].tr_sar_ch_done[31] to cpuss.dw0_tr_in[69] */
    TRIG_IN_1TO1_0_SMIF_TX_TO_PDMA0 = 0x00001026u, /* From smif[0].tr_tx_req to cpuss.dw0_tr_in[70] */
    TRIG_IN_1TO1_0_SMIF_RX_TO_PDMA0 = 0x00001027u, /* From smif[0].tr_rx_req to cpuss.dw0_tr_in[71] */
    TRIG_IN_1TO1_0_CXPI_TR_TX_REQ0  = 0x00001028u, /* From cxpi[0].tr_tx_req[0] to cpuss.dw0_tr_in[72] */
    TRIG_IN_1TO1_0_CXPI_TR_TX_REQ1  = 0x00001029u, /* From cxpi[0].tr_tx_req[1] to cpuss.dw0_tr_in[73] */
    TRIG_IN_1TO1_0_CXPI_TR_RX_REQ0  = 0x0000102Au, /* From cxpi[0].tr_rx_req[0] to cpuss.dw0_tr_in[74] */
    TRIG_IN_1TO1_0_CXPI_TR_RX_REQ1  = 0x0000102Bu /* From cxpi[0].tr_rx_req[1] to cpuss.dw0_tr_in[75] */
} en_trig_input_1to1_to_pdma0_t;

/* Trigger Input Group 1 - Dedicated triggers to PDMA1 (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA10 = 0x00001100u, /* From scb[0].tr_tx_req to cpuss.dw1_tr_in[16] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA10 = 0x00001101u, /* From scb[0].tr_rx_req to cpuss.dw1_tr_in[17] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA11 = 0x00001102u, /* From scb[1].tr_tx_req to cpuss.dw1_tr_in[18] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA11 = 0x00001103u, /* From scb[1].tr_rx_req to cpuss.dw1_tr_in[19] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA12 = 0x00001104u, /* From scb[2].tr_tx_req to cpuss.dw1_tr_in[20] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA12 = 0x00001105u, /* From scb[2].tr_rx_req to cpuss.dw1_tr_in[21] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA13 = 0x00001106u, /* From scb[3].tr_tx_req to cpuss.dw1_tr_in[22] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA13 = 0x00001107u, /* From scb[3].tr_rx_req to cpuss.dw1_tr_in[23] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA14 = 0x00001108u, /* From scb[4].tr_tx_req to cpuss.dw1_tr_in[24] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA14 = 0x00001109u, /* From scb[4].tr_rx_req to cpuss.dw1_tr_in[25] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA15 = 0x0000110Au, /* From scb[5].tr_tx_req to cpuss.dw1_tr_in[26] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA15 = 0x0000110Bu, /* From scb[5].tr_rx_req to cpuss.dw1_tr_in[27] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA16 = 0x0000110Cu, /* From scb[6].tr_tx_req to cpuss.dw1_tr_in[28] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA16 = 0x0000110Du, /* From scb[6].tr_rx_req to cpuss.dw1_tr_in[29] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA17 = 0x0000110Eu, /* From scb[7].tr_tx_req to cpuss.dw1_tr_in[30] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA17 = 0x0000110Fu, /* From scb[7].tr_rx_req to cpuss.dw1_tr_in[31] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA18 = 0x00001110u, /* From scb[8].tr_tx_req to cpuss.dw1_tr_in[32] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA18 = 0x00001111u, /* From scb[8].tr_rx_req to cpuss.dw1_tr_in[33] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA19 = 0x00001112u, /* From scb[9].tr_tx_req to cpuss.dw1_tr_in[34] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA19 = 0x00001113u, /* From scb[9].tr_rx_req to cpuss.dw1_tr_in[35] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA110 = 0x00001114u, /* From scb[10].tr_tx_req to cpuss.dw1_tr_in[36] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA110 = 0x00001115u, /* From scb[10].tr_rx_req to cpuss.dw1_tr_in[37] */
    TRIG_IN_1TO1_1_SCB_TX_TO_PDMA111 = 0x00001116u, /* From scb[11].tr_tx_req to cpuss.dw1_tr_in[38] */
    TRIG_IN_1TO1_1_SCB_RX_TO_PDMA111 = 0x00001117u, /* From scb[11].tr_rx_req to cpuss.dw1_tr_in[39] */
    TRIG_IN_1TO1_1_CAN1_DBG_TO_PDMA1_0 = 0x00001118u, /* From canfd[1].tr_dbg_dma_req[0] to cpuss.dw1_tr_in[40] */
    TRIG_IN_1TO1_1_CAN1_FIFO0_TO_PDMA1_0 = 0x00001119u, /* From canfd[1].tr_fifo0[0] to cpuss.dw1_tr_in[41] */
    TRIG_IN_1TO1_1_CAN1_FIFO1_TO_PDMA1_0 = 0x0000111Au, /* From canfd[1].tr_fifo1[0] to cpuss.dw1_tr_in[42] */
    TRIG_IN_1TO1_1_CAN1_DBG_TO_PDMA1_1 = 0x0000111Bu, /* From canfd[1].tr_dbg_dma_req[1] to cpuss.dw1_tr_in[43] */
    TRIG_IN_1TO1_1_CAN1_FIFO0_TO_PDMA1_1 = 0x0000111Cu, /* From canfd[1].tr_fifo0[1] to cpuss.dw1_tr_in[44] */
    TRIG_IN_1TO1_1_CAN1_FIFO1_TO_PDMA1_1 = 0x0000111Du, /* From canfd[1].tr_fifo1[1] to cpuss.dw1_tr_in[45] */
    TRIG_IN_1TO1_1_MIXER_SRC_TO_PDMA10 = 0x00001120u, /* From mixer[0].tr_src_req[0] to cpuss.dw1_tr_in[48] */
    TRIG_IN_1TO1_1_MIXER_SRC_TO_PDMA11 = 0x00001121u, /* From mixer[0].tr_src_req[1] to cpuss.dw1_tr_in[49] */
    TRIG_IN_1TO1_1_MIXER_SRC_TO_PDMA12 = 0x00001122u, /* From mixer[0].tr_src_req[2] to cpuss.dw1_tr_in[50] */
    TRIG_IN_1TO1_1_MIXER_SRC_TO_PDMA13 = 0x00001123u, /* From mixer[0].tr_src_req[3] to cpuss.dw1_tr_in[51] */
    TRIG_IN_1TO1_1_MIXER_SRC_TO_PDMA14 = 0x00001124u, /* From mixer[0].tr_src_req[4] to cpuss.dw1_tr_in[52] */
    TRIG_IN_1TO1_1_MIXER_DST_TO_PDMA10 = 0x00001125u, /* From mixer[0].tr_dst_req to cpuss.dw1_tr_in[53] */
    TRIG_IN_1TO1_1_TDM_TX_TO_PDMA10 = 0x00001134u, /* From tdm[0].tr_tx_req[0] to cpuss.dw1_tr_in[68] */
    TRIG_IN_1TO1_1_TDM_TX_TO_PDMA11 = 0x00001135u, /* From tdm[0].tr_tx_req[1] to cpuss.dw1_tr_in[69] */
    TRIG_IN_1TO1_1_TDM_RX_TO_PDMA10 = 0x00001138u, /* From tdm[0].tr_rx_req[0] to cpuss.dw1_tr_in[72] */
    TRIG_IN_1TO1_1_TDM_RX_TO_PDMA11 = 0x00001139u, /* From tdm[0].tr_rx_req[1] to cpuss.dw1_tr_in[73] */
    TRIG_IN_1TO1_1_SG0_TR_COMPLETE0 = 0x0000113Cu, /* From sg[0].tr_complete[0] to cpuss.dw1_tr_in[76] */
    TRIG_IN_1TO1_1_SG0_TR_COMPLETE1 = 0x0000113Du, /* From sg[0].tr_complete[1] to cpuss.dw1_tr_in[77] */
    TRIG_IN_1TO1_1_SG0_TR_COMPLETE2 = 0x0000113Eu, /* From sg[0].tr_complete[2] to cpuss.dw1_tr_in[78] */
    TRIG_IN_1TO1_1_SG0_TR_COMPLETE3 = 0x0000113Fu, /* From sg[0].tr_complete[3] to cpuss.dw1_tr_in[79] */
    TRIG_IN_1TO1_1_SG0_TR_COMPLETE4 = 0x00001140u, /* From sg[0].tr_complete[4] to cpuss.dw1_tr_in[80] */
    TRIG_IN_1TO1_1_PWM_TX_TO_PDMA10 = 0x00001141u, /* From pwm[0].tr_tx_req[0] to cpuss.dw1_tr_in[81] */
    TRIG_IN_1TO1_1_PWM_TX_TO_PDMA11 = 0x00001142u /* From pwm[0].tr_tx_req[1] to cpuss.dw1_tr_in[82] */
} en_trig_input_1to1_to_pdma1_t;

/* Trigger Input Group 2 - Dedicated triggers to TCPWM[0] (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL0 = 0x00001200u, /* From pass[0].tr_sar_ch_rangevio[0] to tcpwm[0].tr_one_cnt_in[0] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL1 = 0x00001201u, /* From pass[0].tr_sar_ch_rangevio[1] to tcpwm[0].tr_one_cnt_in[1] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL2 = 0x00001202u, /* From pass[0].tr_sar_ch_rangevio[2] to tcpwm[0].tr_one_cnt_in[2] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL3 = 0x00001203u, /* From pass[0].tr_sar_ch_rangevio[3] to tcpwm[0].tr_one_cnt_in[3] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL4 = 0x00001204u, /* From pass[0].tr_sar_ch_rangevio[4] to tcpwm[0].tr_one_cnt_in[4] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL5 = 0x00001205u, /* From pass[0].tr_sar_ch_rangevio[5] to tcpwm[0].tr_one_cnt_in[5] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL6 = 0x00001206u, /* From pass[0].tr_sar_ch_rangevio[6] to tcpwm[0].tr_one_cnt_in[6] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL7 = 0x00001207u, /* From pass[0].tr_sar_ch_rangevio[7] to tcpwm[0].tr_one_cnt_in[7] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL8 = 0x00001208u, /* From pass[0].tr_sar_ch_rangevio[8] to tcpwm[0].tr_one_cnt_in[8] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL9 = 0x00001209u, /* From pass[0].tr_sar_ch_rangevio[9] to tcpwm[0].tr_one_cnt_in[9] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL10 = 0x0000120Au, /* From pass[0].tr_sar_ch_rangevio[10] to tcpwm[0].tr_one_cnt_in[10] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL11 = 0x0000120Bu, /* From pass[0].tr_sar_ch_rangevio[11] to tcpwm[0].tr_one_cnt_in[11] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL12 = 0x0000120Cu, /* From pass[0].tr_sar_ch_rangevio[12] to tcpwm[0].tr_one_cnt_in[12] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL13 = 0x0000120Du, /* From pass[0].tr_sar_ch_rangevio[13] to tcpwm[0].tr_one_cnt_in[13] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL14 = 0x0000120Eu, /* From pass[0].tr_sar_ch_rangevio[14] to tcpwm[0].tr_one_cnt_in[14] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL15 = 0x0000120Fu, /* From pass[0].tr_sar_ch_rangevio[15] to tcpwm[0].tr_one_cnt_in[15] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL16 = 0x00001210u, /* From pass[0].tr_sar_ch_rangevio[16] to tcpwm[0].tr_one_cnt_in[16] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL17 = 0x00001211u, /* From pass[0].tr_sar_ch_rangevio[17] to tcpwm[0].tr_one_cnt_in[17] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL18 = 0x00001212u, /* From pass[0].tr_sar_ch_rangevio[18] to tcpwm[0].tr_one_cnt_in[18] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL19 = 0x00001213u, /* From pass[0].tr_sar_ch_rangevio[19] to tcpwm[0].tr_one_cnt_in[19] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL20 = 0x00001214u, /* From pass[0].tr_sar_ch_rangevio[20] to tcpwm[0].tr_one_cnt_in[256] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL21 = 0x00001215u, /* From pass[0].tr_sar_ch_rangevio[21] to tcpwm[0].tr_one_cnt_in[257] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL22 = 0x00001216u, /* From pass[0].tr_sar_ch_rangevio[22] to tcpwm[0].tr_one_cnt_in[258] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL23 = 0x00001217u, /* From pass[0].tr_sar_ch_rangevio[23] to tcpwm[0].tr_one_cnt_in[259] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL24 = 0x00001218u, /* From pass[0].tr_sar_ch_rangevio[24] to tcpwm[0].tr_one_cnt_in[260] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL25 = 0x00001219u, /* From pass[0].tr_sar_ch_rangevio[25] to tcpwm[0].tr_one_cnt_in[261] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL26 = 0x0000121Au, /* From pass[0].tr_sar_ch_rangevio[26] to tcpwm[0].tr_one_cnt_in[262] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL27 = 0x0000121Bu, /* From pass[0].tr_sar_ch_rangevio[27] to tcpwm[0].tr_one_cnt_in[263] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL28 = 0x0000121Cu, /* From pass[0].tr_sar_ch_rangevio[28] to tcpwm[0].tr_one_cnt_in[264] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL29 = 0x0000121Du, /* From pass[0].tr_sar_ch_rangevio[29] to tcpwm[0].tr_one_cnt_in[265] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL30 = 0x0000121Eu, /* From pass[0].tr_sar_ch_rangevio[30] to tcpwm[0].tr_one_cnt_in[266] */
    TRIG_IN_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL31 = 0x0000121Fu /* From pass[0].tr_sar_ch_rangevio[31] to tcpwm[0].tr_one_cnt_in[267] */
} en_trig_input_1to1_to_tcpwm0_t;

/* Trigger Input Group 3 - Dedicated triggers to PASS[0] (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR0 = 0x00001300u, /* From tcpwm[0].tr_out1[0] to pass[0].tr_sar_ch_in[0] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR1 = 0x00001301u, /* From tcpwm[0].tr_out1[1] to pass[0].tr_sar_ch_in[1] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR2 = 0x00001302u, /* From tcpwm[0].tr_out1[2] to pass[0].tr_sar_ch_in[2] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR3 = 0x00001303u, /* From tcpwm[0].tr_out1[3] to pass[0].tr_sar_ch_in[3] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR4 = 0x00001304u, /* From tcpwm[0].tr_out1[4] to pass[0].tr_sar_ch_in[4] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR5 = 0x00001305u, /* From tcpwm[0].tr_out1[5] to pass[0].tr_sar_ch_in[5] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR6 = 0x00001306u, /* From tcpwm[0].tr_out1[6] to pass[0].tr_sar_ch_in[6] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR7 = 0x00001307u, /* From tcpwm[0].tr_out1[7] to pass[0].tr_sar_ch_in[7] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR8 = 0x00001308u, /* From tcpwm[0].tr_out1[8] to pass[0].tr_sar_ch_in[8] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR9 = 0x00001309u, /* From tcpwm[0].tr_out1[9] to pass[0].tr_sar_ch_in[9] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR10 = 0x0000130Au, /* From tcpwm[0].tr_out1[10] to pass[0].tr_sar_ch_in[10] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR11 = 0x0000130Bu, /* From tcpwm[0].tr_out1[11] to pass[0].tr_sar_ch_in[11] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR12 = 0x0000130Cu, /* From tcpwm[0].tr_out1[12] to pass[0].tr_sar_ch_in[12] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR13 = 0x0000130Du, /* From tcpwm[0].tr_out1[13] to pass[0].tr_sar_ch_in[13] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR14 = 0x0000130Eu, /* From tcpwm[0].tr_out1[14] to pass[0].tr_sar_ch_in[14] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR15 = 0x0000130Fu, /* From tcpwm[0].tr_out1[15] to pass[0].tr_sar_ch_in[15] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR16 = 0x00001310u, /* From tcpwm[0].tr_out1[16] to pass[0].tr_sar_ch_in[16] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR17 = 0x00001311u, /* From tcpwm[0].tr_out1[17] to pass[0].tr_sar_ch_in[17] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR18 = 0x00001312u, /* From tcpwm[0].tr_out1[18] to pass[0].tr_sar_ch_in[18] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR19 = 0x00001313u, /* From tcpwm[0].tr_out1[19] to pass[0].tr_sar_ch_in[19] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR20 = 0x00001314u, /* From tcpwm[0].tr_out1[256] to pass[0].tr_sar_ch_in[20] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR21 = 0x00001315u, /* From tcpwm[0].tr_out1[257] to pass[0].tr_sar_ch_in[21] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR22 = 0x00001316u, /* From tcpwm[0].tr_out1[258] to pass[0].tr_sar_ch_in[22] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR23 = 0x00001317u, /* From tcpwm[0].tr_out1[259] to pass[0].tr_sar_ch_in[23] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR24 = 0x00001318u, /* From tcpwm[0].tr_out1[260] to pass[0].tr_sar_ch_in[24] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR25 = 0x00001319u, /* From tcpwm[0].tr_out1[261] to pass[0].tr_sar_ch_in[25] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR26 = 0x0000131Au, /* From tcpwm[0].tr_out1[262] to pass[0].tr_sar_ch_in[26] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR27 = 0x0000131Bu, /* From tcpwm[0].tr_out1[263] to pass[0].tr_sar_ch_in[27] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR28 = 0x0000131Cu, /* From tcpwm[0].tr_out1[264] to pass[0].tr_sar_ch_in[28] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR29 = 0x0000131Du, /* From tcpwm[0].tr_out1[265] to pass[0].tr_sar_ch_in[29] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR30 = 0x0000131Eu, /* From tcpwm[0].tr_out1[266] to pass[0].tr_sar_ch_in[30] */
    TRIG_IN_1TO1_3_TCPWM0_TO_PASS_CH_TR31 = 0x0000131Fu /* From tcpwm[0].tr_out1[267] to pass[0].tr_sar_ch_in[31] */
} en_trig_input_1to1_to_pass0_t;

/* Trigger Input Group 4 - Dedicated triggers to CANFD[1] (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_4_PDMA1_ACK_TO_CAN1_0 = 0x00001400u, /* From cpuss.dw1_tr_out[40] to canfd[1].tr_dbg_dma_ack[0] */
    TRIG_IN_1TO1_4_PDMA1_ACK_TO_CAN1_1 = 0x00001401u /* From cpuss.dw1_tr_out[43] to canfd[1].tr_dbg_dma_ack[1] */
} en_trig_input_1to1_to_canfd1_t;

/* Trigger Input Group 5 - Dedicated triggers to CANFD[0] (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_5_PDMA0_ACK_TO_CAN0_0 = 0x00001500u, /* From cpuss.dw0_tr_out[32] to canfd[0].tr_dbg_dma_ack[0] */
    TRIG_IN_1TO1_5_PDMA0_ACK_TO_CAN0_1 = 0x00001501u /* From cpuss.dw0_tr_out[35] to canfd[0].tr_dbg_dma_ack[1] */
} en_trig_input_1to1_to_canfd0_t;

/* Trigger Input Group 6 - Dedicated triggers to LIN[0] (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_6_TCPWM0_TO_LIN_TR0 = 0x00001600u, /* From tcpwm[0].tr_out1[24] to lin[0].tr_cmd_tx_header[0] */
    TRIG_IN_1TO1_6_TCPWM0_TO_LIN_TR1 = 0x00001601u /* From tcpwm[0].tr_out1[25] to lin[0].tr_cmd_tx_header[1] */
} en_trig_input_1to1_to_lin0_t;

/* Trigger Input Group 7 - Dedicated triggers to CXPI[0] (OneToOne) */
typedef enum
{
    TRIG_IN_1TO1_7_TCPWM_TO_CXPI_TR0 = 0x00001700u, /* From tcpwm[0].tr_out1[26] to cxpi[0].tr_cmd_tx_header[0] */
    TRIG_IN_1TO1_7_TCPWM_TO_CXPI_TR1 = 0x00001701u /* From tcpwm[0].tr_out1[27] to cxpi[0].tr_cmd_tx_header[1] */
} en_trig_input_1to1_to_cxpi0_t;

/* Trigger Group Outputs */
/* Trigger Output Group 0 - P-DMA0[0:15] Request Assignments */
typedef enum
{
    TRIG_OUT_MUX_0_PDMA0_TR_IN0     = 0x40000000u, /* cpuss.dw0_tr_in[0] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN1     = 0x40000001u, /* cpuss.dw0_tr_in[1] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN2     = 0x40000002u, /* cpuss.dw0_tr_in[2] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN3     = 0x40000003u, /* cpuss.dw0_tr_in[3] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN4     = 0x40000004u, /* cpuss.dw0_tr_in[4] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN5     = 0x40000005u, /* cpuss.dw0_tr_in[5] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN6     = 0x40000006u, /* cpuss.dw0_tr_in[6] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN7     = 0x40000007u, /* cpuss.dw0_tr_in[7] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN8     = 0x40000008u, /* cpuss.dw0_tr_in[8] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN9     = 0x40000009u, /* cpuss.dw0_tr_in[9] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN10    = 0x4000000Au, /* cpuss.dw0_tr_in[10] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN11    = 0x4000000Bu, /* cpuss.dw0_tr_in[11] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN12    = 0x4000000Cu, /* cpuss.dw0_tr_in[12] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN13    = 0x4000000Du, /* cpuss.dw0_tr_in[13] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN14    = 0x4000000Eu, /* cpuss.dw0_tr_in[14] */
    TRIG_OUT_MUX_0_PDMA0_TR_IN15    = 0x4000000Fu /* cpuss.dw0_tr_in[15] */
} en_trig_output_pdma0_0_15_t;

/* Trigger Output Group 1 - P-DMA0[16:31] Request Assignments */
typedef enum
{
    TRIG_OUT_MUX_1_PDMA0_TR_IN16    = 0x40000100u, /* cpuss.dw0_tr_in[16] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN17    = 0x40000101u, /* cpuss.dw0_tr_in[17] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN18    = 0x40000102u, /* cpuss.dw0_tr_in[18] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN19    = 0x40000103u, /* cpuss.dw0_tr_in[19] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN20    = 0x40000104u, /* cpuss.dw0_tr_in[20] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN21    = 0x40000105u, /* cpuss.dw0_tr_in[21] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN22    = 0x40000106u, /* cpuss.dw0_tr_in[22] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN23    = 0x40000107u, /* cpuss.dw0_tr_in[23] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN24    = 0x40000108u, /* cpuss.dw0_tr_in[24] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN25    = 0x40000109u, /* cpuss.dw0_tr_in[25] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN26    = 0x4000010Au, /* cpuss.dw0_tr_in[26] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN27    = 0x4000010Bu, /* cpuss.dw0_tr_in[27] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN28    = 0x4000010Cu, /* cpuss.dw0_tr_in[28] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN29    = 0x4000010Du, /* cpuss.dw0_tr_in[29] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN30    = 0x4000010Eu, /* cpuss.dw0_tr_in[30] */
    TRIG_OUT_MUX_1_PDMA0_TR_IN31    = 0x4000010Fu /* cpuss.dw0_tr_in[31] */
} en_trig_output_pdma0_16_31_t;

/* Trigger Output Group 2 - P-DMA1[0:15] Request Assignments */
typedef enum
{
    TRIG_OUT_MUX_2_PDMA1_TR_IN0     = 0x40000200u, /* cpuss.dw1_tr_in[0] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN1     = 0x40000201u, /* cpuss.dw1_tr_in[1] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN2     = 0x40000202u, /* cpuss.dw1_tr_in[2] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN3     = 0x40000203u, /* cpuss.dw1_tr_in[3] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN4     = 0x40000204u, /* cpuss.dw1_tr_in[4] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN5     = 0x40000205u, /* cpuss.dw1_tr_in[5] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN6     = 0x40000206u, /* cpuss.dw1_tr_in[6] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN7     = 0x40000207u, /* cpuss.dw1_tr_in[7] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN8     = 0x40000208u, /* cpuss.dw1_tr_in[8] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN9     = 0x40000209u, /* cpuss.dw1_tr_in[9] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN10    = 0x4000020Au, /* cpuss.dw1_tr_in[10] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN11    = 0x4000020Bu, /* cpuss.dw1_tr_in[11] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN12    = 0x4000020Cu, /* cpuss.dw1_tr_in[12] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN13    = 0x4000020Du, /* cpuss.dw1_tr_in[13] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN14    = 0x4000020Eu, /* cpuss.dw1_tr_in[14] */
    TRIG_OUT_MUX_2_PDMA1_TR_IN15    = 0x4000020Fu /* cpuss.dw1_tr_in[15] */
} en_trig_output_pdma1_0_15_t;

/* Trigger Output Group 3 - M-DMA Request Assignments */
typedef enum
{
    TRIG_OUT_MUX_3_MDMA_TR_IN0      = 0x40000300u, /* cpuss.dmac_tr_in[0] */
    TRIG_OUT_MUX_3_MDMA_TR_IN1      = 0x40000301u, /* cpuss.dmac_tr_in[1] */
    TRIG_OUT_MUX_3_MDMA_TR_IN2      = 0x40000302u, /* cpuss.dmac_tr_in[2] */
    TRIG_OUT_MUX_3_MDMA_TR_IN3      = 0x40000303u /* cpuss.dmac_tr_in[3] */
} en_trig_output_mdma_t;

/* Trigger Output Group 4 -  */
typedef enum
{
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN0 = 0x40000400u, /* tcpwm[0].tr_all_cnt_in[0] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN1 = 0x40000401u, /* tcpwm[0].tr_all_cnt_in[1] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN2 = 0x40000402u, /* tcpwm[0].tr_all_cnt_in[2] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN3 = 0x40000403u, /* tcpwm[0].tr_all_cnt_in[3] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN4 = 0x40000404u, /* tcpwm[0].tr_all_cnt_in[4] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN5 = 0x40000405u, /* tcpwm[0].tr_all_cnt_in[5] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN6 = 0x40000406u, /* tcpwm[0].tr_all_cnt_in[6] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN7 = 0x40000407u, /* tcpwm[0].tr_all_cnt_in[7] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN8 = 0x40000408u, /* tcpwm[0].tr_all_cnt_in[8] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN9 = 0x40000409u, /* tcpwm[0].tr_all_cnt_in[9] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN10 = 0x4000040Au, /* tcpwm[0].tr_all_cnt_in[10] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN11 = 0x4000040Bu, /* tcpwm[0].tr_all_cnt_in[11] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN12 = 0x4000040Cu, /* tcpwm[0].tr_all_cnt_in[12] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN13 = 0x4000040Du, /* tcpwm[0].tr_all_cnt_in[13] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN14 = 0x4000040Eu, /* tcpwm[0].tr_all_cnt_in[14] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN15 = 0x4000040Fu, /* tcpwm[0].tr_all_cnt_in[15] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN16 = 0x40000410u, /* tcpwm[0].tr_all_cnt_in[16] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN17 = 0x40000411u, /* tcpwm[0].tr_all_cnt_in[17] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN18 = 0x40000412u, /* tcpwm[0].tr_all_cnt_in[18] */
    TRIG_OUT_MUX_4_TCPWM0_ALL_CNT_TR_IN19 = 0x40000413u /* tcpwm[0].tr_all_cnt_in[19] */
} en_trig_output_tcpwm0_t;

/* Trigger Output Group 5 -  */
typedef enum
{
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN20 = 0x40000500u, /* tcpwm[0].tr_all_cnt_in[20] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN21 = 0x40000501u, /* tcpwm[0].tr_all_cnt_in[21] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN22 = 0x40000502u, /* tcpwm[0].tr_all_cnt_in[22] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN23 = 0x40000503u, /* tcpwm[0].tr_all_cnt_in[23] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN24 = 0x40000504u, /* tcpwm[0].tr_all_cnt_in[24] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN25 = 0x40000505u, /* tcpwm[0].tr_all_cnt_in[25] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN26 = 0x40000506u, /* tcpwm[0].tr_all_cnt_in[26] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN27 = 0x40000507u, /* tcpwm[0].tr_all_cnt_in[27] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN28 = 0x40000508u, /* tcpwm[0].tr_all_cnt_in[28] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN29 = 0x40000509u, /* tcpwm[0].tr_all_cnt_in[29] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN30 = 0x4000050Au, /* tcpwm[0].tr_all_cnt_in[30] */
    TRIG_OUT_MUX_5_TCPWM0_ALL_CNT_TR_IN31 = 0x4000050Bu /* tcpwm[0].tr_all_cnt_in[31] */
} en_trig_output_tcpwm0_20_31_t;

/* Trigger Output Group 6 - TCPWM trigger inputs */
typedef enum
{
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN32 = 0x40000600u, /* tcpwm[0].tr_all_cnt_in[32] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN33 = 0x40000601u, /* tcpwm[0].tr_all_cnt_in[33] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN34 = 0x40000602u, /* tcpwm[0].tr_all_cnt_in[34] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN35 = 0x40000603u, /* tcpwm[0].tr_all_cnt_in[35] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN36 = 0x40000604u, /* tcpwm[0].tr_all_cnt_in[36] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN37 = 0x40000605u, /* tcpwm[0].tr_all_cnt_in[37] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN38 = 0x40000606u, /* tcpwm[0].tr_all_cnt_in[38] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN39 = 0x40000607u, /* tcpwm[0].tr_all_cnt_in[39] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN40 = 0x40000608u, /* tcpwm[0].tr_all_cnt_in[40] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN41 = 0x40000609u, /* tcpwm[0].tr_all_cnt_in[41] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN42 = 0x4000060Au, /* tcpwm[0].tr_all_cnt_in[42] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN43 = 0x4000060Bu, /* tcpwm[0].tr_all_cnt_in[43] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN44 = 0x4000060Cu, /* tcpwm[0].tr_all_cnt_in[44] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN45 = 0x4000060Du, /* tcpwm[0].tr_all_cnt_in[45] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN46 = 0x4000060Eu, /* tcpwm[0].tr_all_cnt_in[46] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN47 = 0x4000060Fu, /* tcpwm[0].tr_all_cnt_in[47] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN48 = 0x40000610u, /* tcpwm[0].tr_all_cnt_in[48] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN49 = 0x40000611u, /* tcpwm[0].tr_all_cnt_in[49] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN50 = 0x40000612u, /* tcpwm[0].tr_all_cnt_in[50] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN51 = 0x40000613u, /* tcpwm[0].tr_all_cnt_in[51] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN52 = 0x40000614u, /* tcpwm[0].tr_all_cnt_in[52] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN53 = 0x40000615u, /* tcpwm[0].tr_all_cnt_in[53] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN54 = 0x40000616u, /* tcpwm[0].tr_all_cnt_in[54] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN55 = 0x40000617u, /* tcpwm[0].tr_all_cnt_in[55] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN56 = 0x40000618u, /* tcpwm[0].tr_all_cnt_in[56] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN57 = 0x40000619u, /* tcpwm[0].tr_all_cnt_in[57] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN58 = 0x4000061Au, /* tcpwm[0].tr_all_cnt_in[58] */
    TRIG_OUT_MUX_6_TCPWM0_ALL_CNT_TR_IN59 = 0x4000061Bu /* tcpwm[0].tr_all_cnt_in[59] */
} en_trig_output_tcpwm0_32_59_t;

/* Trigger Output Group 7 - PASS trigger multiplexer */
typedef enum
{
    TRIG_OUT_MUX_7_PASS_GEN_TR_IN0  = 0x40000700u, /* pass[0].tr_sar_gen_in[0] */
    TRIG_OUT_MUX_7_PASS_GEN_TR_IN1  = 0x40000701u, /* pass[0].tr_sar_gen_in[1] */
    TRIG_OUT_MUX_7_PASS_GEN_TR_IN2  = 0x40000702u, /* pass[0].tr_sar_gen_in[2] */
    TRIG_OUT_MUX_7_PASS_GEN_TR_IN3  = 0x40000703u /* pass[0].tr_sar_gen_in[3] */
} en_trig_output_pass_t;

/* Trigger Output Group 8 - CAN TT Synchronization triggers */
typedef enum
{
    TRIG_OUT_MUX_8_CAN0_TT_TR_IN0   = 0x40000800u, /* canfd[0].tr_evt_swt_in[0] */
    TRIG_OUT_MUX_8_CAN0_TT_TR_IN1   = 0x40000801u, /* canfd[0].tr_evt_swt_in[1] */
    TRIG_OUT_MUX_8_CAN1_TT_TR_IN0   = 0x40000802u, /* canfd[1].tr_evt_swt_in[0] */
    TRIG_OUT_MUX_8_CAN1_TT_TR_IN1   = 0x40000803u /* canfd[1].tr_evt_swt_in[1] */
} en_trig_output_can_t;

/* Trigger Output Group 9 - 2nd level MUX using input from MUX_11/12/13 */
typedef enum
{
    TRIG_OUT_MUX_9_HSIOM_IO_OUTPUT0 = 0x40000900u, /* peri.tr_io_output[0] */
    TRIG_OUT_MUX_9_HSIOM_IO_OUTPUT1 = 0x40000901u, /* peri.tr_io_output[1] */
    TRIG_OUT_MUX_9_CTI_TR_IN0       = 0x40000902u, /* cpuss.cti_tr_in[0] */
    TRIG_OUT_MUX_9_CTI_TR_IN1       = 0x40000903u, /* cpuss.cti_tr_in[1] */
    TRIG_OUT_MUX_9_PERI_DEBUG_FREEZE_TR_IN = 0x40000904u, /* peri.tr_dbg_freeze */
    TRIG_OUT_MUX_9_PASS_DEBUG_FREEZE_TR_IN = 0x40000905u, /* pass[0].tr_debug_freeze */
    TRIG_OUT_MUX_9_SRSS_WDT_DEBUG_FREEZE_TR_IN = 0x40000906u, /* srss.tr_debug_freeze_wdt */
    TRIG_OUT_MUX_9_SRSS_MCWDT_DEBUG_FREEZE_TR_IN1 = 0x40000908u, /* srss.tr_debug_freeze_mcwdt[1] */
    TRIG_OUT_MUX_9_SRSS_MCWDT_DEBUG_FREEZE_TR_IN0 = 0x40000909u, /* srss.tr_debug_freeze_mcwdt[0] */
    TRIG_OUT_MUX_9_TCPWM0_DEBUG_FREEZE_TR_IN = 0x4000090Au, /* tcpwm[0].tr_debug_freeze */
    TRIG_OUT_MUX_9_TDM0_DEBUG_FREEZE_TR_IN = 0x4000090Cu, /* tdm[0].tr_dbg_freeze */
    TRIG_OUT_MUX_9_SG0_DEBUG_FREEZE_TR_IN = 0x4000090Du, /* sg[0].tr_dbg_freeze */
    TRIG_OUT_MUX_9_PWM0_DEBUG_FREEZE_TR_IN = 0x4000090Eu, /* pwm[0].tr_dbg_freeze */
    TRIG_OUT_MUX_9_MIXER0_DEBUG_FREEZE_TR_IN = 0x4000090Fu /* mixer[0].tr_dbg_freeze */
} en_trig_output_debugmain_t;

/* Trigger Output Group 10 - Makes all possible triggers visible as I/O signals for debug purposes, or to build external circuitry */
typedef enum
{
    TRIG_OUT_MUX_10_TR_GROUP9_INPUT1 = 0x40000A00u, /* tr_group[9].input[1] */
    TRIG_OUT_MUX_10_TR_GROUP9_INPUT2 = 0x40000A01u, /* tr_group[9].input[2] */
    TRIG_OUT_MUX_10_TR_GROUP9_INPUT3 = 0x40000A02u, /* tr_group[9].input[3] */
    TRIG_OUT_MUX_10_TR_GROUP9_INPUT4 = 0x40000A03u, /* tr_group[9].input[4] */
    TRIG_OUT_MUX_10_TR_GROUP9_INPUT5 = 0x40000A04u /* tr_group[9].input[5] */
} en_trig_output_debugreduction1_t;

/* Trigger Output Group 11 - Makes all possible triggers visible as I/O signals for debug purposes, or to build external circuitry */
typedef enum
{
    TRIG_OUT_MUX_11_TR_GROUP9_INPUT6 = 0x40000B00u, /* tr_group[9].input[6] */
    TRIG_OUT_MUX_11_TR_GROUP9_INPUT7 = 0x40000B01u, /* tr_group[9].input[7] */
    TRIG_OUT_MUX_11_TR_GROUP9_INPUT8 = 0x40000B02u, /* tr_group[9].input[8] */
    TRIG_OUT_MUX_11_TR_GROUP9_INPUT9 = 0x40000B03u, /* tr_group[9].input[9] */
    TRIG_OUT_MUX_11_TR_GROUP9_INPUT10 = 0x40000B04u /* tr_group[9].input[10] */
} en_trig_output_debugreduction2_t;

/* Trigger Output Group 12 - Makes all possible triggers visible as I/O signals for debug purposes, or to build external circuitry */
typedef enum
{
    TRIG_OUT_MUX_12_TR_GROUP9_INPUT11 = 0x40000C00u, /* tr_group[9].input[11] */
    TRIG_OUT_MUX_12_TR_GROUP9_INPUT12 = 0x40000C01u, /* tr_group[9].input[12] */
    TRIG_OUT_MUX_12_TR_GROUP9_INPUT13 = 0x40000C02u, /* tr_group[9].input[13] */
    TRIG_OUT_MUX_12_TR_GROUP9_INPUT14 = 0x40000C03u, /* tr_group[9].input[14] */
    TRIG_OUT_MUX_12_TR_GROUP9_INPUT15 = 0x40000C04u /* tr_group[9].input[15] */
} en_trig_output_debugreduction3_t;

/* Trigger Output Group 0 - Dedicated triggers to PDMA0 (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_0_CAN0_DBG_TO_PDMA0_0 = 0x40001000u, /* From canfd[0].tr_dbg_dma_req[0] to cpuss.dw0_tr_in[32] */
    TRIG_OUT_1TO1_0_CAN0_FIFO0_TO_PDMA0_0 = 0x40001001u, /* From canfd[0].tr_fifo0[0] to cpuss.dw0_tr_in[33] */
    TRIG_OUT_1TO1_0_CAN0_FIFO1_TO_PDMA0_0 = 0x40001002u, /* From canfd[0].tr_fifo1[0] to cpuss.dw0_tr_in[34] */
    TRIG_OUT_1TO1_0_CAN0_DBG_TO_PDMA0_1 = 0x40001003u, /* From canfd[0].tr_dbg_dma_req[1] to cpuss.dw0_tr_in[35] */
    TRIG_OUT_1TO1_0_CAN0_FIFO0_TO_PDMA0_1 = 0x40001004u, /* From canfd[0].tr_fifo0[1] to cpuss.dw0_tr_in[36] */
    TRIG_OUT_1TO1_0_CAN0_FIFO1_TO_PDMA0_1 = 0x40001005u, /* From canfd[0].tr_fifo1[1] to cpuss.dw0_tr_in[37] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA00 = 0x40001006u, /* From pass[0].tr_sar_ch_done[0] to cpuss.dw0_tr_in[38] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA01 = 0x40001007u, /* From pass[0].tr_sar_ch_done[1] to cpuss.dw0_tr_in[39] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA02 = 0x40001008u, /* From pass[0].tr_sar_ch_done[2] to cpuss.dw0_tr_in[40] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA03 = 0x40001009u, /* From pass[0].tr_sar_ch_done[3] to cpuss.dw0_tr_in[41] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA04 = 0x4000100Au, /* From pass[0].tr_sar_ch_done[4] to cpuss.dw0_tr_in[42] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA05 = 0x4000100Bu, /* From pass[0].tr_sar_ch_done[5] to cpuss.dw0_tr_in[43] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA06 = 0x4000100Cu, /* From pass[0].tr_sar_ch_done[6] to cpuss.dw0_tr_in[44] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA07 = 0x4000100Du, /* From pass[0].tr_sar_ch_done[7] to cpuss.dw0_tr_in[45] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA08 = 0x4000100Eu, /* From pass[0].tr_sar_ch_done[8] to cpuss.dw0_tr_in[46] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA09 = 0x4000100Fu, /* From pass[0].tr_sar_ch_done[9] to cpuss.dw0_tr_in[47] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA010 = 0x40001010u, /* From pass[0].tr_sar_ch_done[10] to cpuss.dw0_tr_in[48] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA011 = 0x40001011u, /* From pass[0].tr_sar_ch_done[11] to cpuss.dw0_tr_in[49] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA012 = 0x40001012u, /* From pass[0].tr_sar_ch_done[12] to cpuss.dw0_tr_in[50] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA013 = 0x40001013u, /* From pass[0].tr_sar_ch_done[13] to cpuss.dw0_tr_in[51] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA014 = 0x40001014u, /* From pass[0].tr_sar_ch_done[14] to cpuss.dw0_tr_in[52] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA015 = 0x40001015u, /* From pass[0].tr_sar_ch_done[15] to cpuss.dw0_tr_in[53] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA016 = 0x40001016u, /* From pass[0].tr_sar_ch_done[16] to cpuss.dw0_tr_in[54] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA017 = 0x40001017u, /* From pass[0].tr_sar_ch_done[17] to cpuss.dw0_tr_in[55] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA018 = 0x40001018u, /* From pass[0].tr_sar_ch_done[18] to cpuss.dw0_tr_in[56] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA019 = 0x40001019u, /* From pass[0].tr_sar_ch_done[19] to cpuss.dw0_tr_in[57] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA020 = 0x4000101Au, /* From pass[0].tr_sar_ch_done[20] to cpuss.dw0_tr_in[58] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA021 = 0x4000101Bu, /* From pass[0].tr_sar_ch_done[21] to cpuss.dw0_tr_in[59] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA022 = 0x4000101Cu, /* From pass[0].tr_sar_ch_done[22] to cpuss.dw0_tr_in[60] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA023 = 0x4000101Du, /* From pass[0].tr_sar_ch_done[23] to cpuss.dw0_tr_in[61] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA024 = 0x4000101Eu, /* From pass[0].tr_sar_ch_done[24] to cpuss.dw0_tr_in[62] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA025 = 0x4000101Fu, /* From pass[0].tr_sar_ch_done[25] to cpuss.dw0_tr_in[63] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA026 = 0x40001020u, /* From pass[0].tr_sar_ch_done[26] to cpuss.dw0_tr_in[64] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA027 = 0x40001021u, /* From pass[0].tr_sar_ch_done[27] to cpuss.dw0_tr_in[65] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA028 = 0x40001022u, /* From pass[0].tr_sar_ch_done[28] to cpuss.dw0_tr_in[66] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA029 = 0x40001023u, /* From pass[0].tr_sar_ch_done[29] to cpuss.dw0_tr_in[67] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA030 = 0x40001024u, /* From pass[0].tr_sar_ch_done[30] to cpuss.dw0_tr_in[68] */
    TRIG_OUT_1TO1_0_PASS_CH_DONE_TO_PDMA031 = 0x40001025u, /* From pass[0].tr_sar_ch_done[31] to cpuss.dw0_tr_in[69] */
    TRIG_OUT_1TO1_0_SMIF_TX_TO_PDMA0 = 0x40001026u, /* From smif[0].tr_tx_req to cpuss.dw0_tr_in[70] */
    TRIG_OUT_1TO1_0_SMIF_RX_TO_PDMA0 = 0x40001027u, /* From smif[0].tr_rx_req to cpuss.dw0_tr_in[71] */
    TRIG_OUT_1TO1_0_CXPI_TR_TX_REQ0 = 0x40001028u, /* From cxpi[0].tr_tx_req[0] to cpuss.dw0_tr_in[72] */
    TRIG_OUT_1TO1_0_CXPI_TR_TX_REQ1 = 0x40001029u, /* From cxpi[0].tr_tx_req[1] to cpuss.dw0_tr_in[73] */
    TRIG_OUT_1TO1_0_CXPI_TR_RX_REQ0 = 0x4000102Au, /* From cxpi[0].tr_rx_req[0] to cpuss.dw0_tr_in[74] */
    TRIG_OUT_1TO1_0_CXPI_TR_RX_REQ1 = 0x4000102Bu /* From cxpi[0].tr_rx_req[1] to cpuss.dw0_tr_in[75] */
} en_trig_output_1to1_to_pdma0_t;

/* Trigger Output Group 1 - Dedicated triggers to PDMA1 (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA10 = 0x40001100u, /* From scb[0].tr_tx_req to cpuss.dw1_tr_in[16] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA10 = 0x40001101u, /* From scb[0].tr_rx_req to cpuss.dw1_tr_in[17] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA11 = 0x40001102u, /* From scb[1].tr_tx_req to cpuss.dw1_tr_in[18] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA11 = 0x40001103u, /* From scb[1].tr_rx_req to cpuss.dw1_tr_in[19] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA12 = 0x40001104u, /* From scb[2].tr_tx_req to cpuss.dw1_tr_in[20] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA12 = 0x40001105u, /* From scb[2].tr_rx_req to cpuss.dw1_tr_in[21] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA13 = 0x40001106u, /* From scb[3].tr_tx_req to cpuss.dw1_tr_in[22] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA13 = 0x40001107u, /* From scb[3].tr_rx_req to cpuss.dw1_tr_in[23] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA14 = 0x40001108u, /* From scb[4].tr_tx_req to cpuss.dw1_tr_in[24] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA14 = 0x40001109u, /* From scb[4].tr_rx_req to cpuss.dw1_tr_in[25] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA15 = 0x4000110Au, /* From scb[5].tr_tx_req to cpuss.dw1_tr_in[26] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA15 = 0x4000110Bu, /* From scb[5].tr_rx_req to cpuss.dw1_tr_in[27] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA16 = 0x4000110Cu, /* From scb[6].tr_tx_req to cpuss.dw1_tr_in[28] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA16 = 0x4000110Du, /* From scb[6].tr_rx_req to cpuss.dw1_tr_in[29] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA17 = 0x4000110Eu, /* From scb[7].tr_tx_req to cpuss.dw1_tr_in[30] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA17 = 0x4000110Fu, /* From scb[7].tr_rx_req to cpuss.dw1_tr_in[31] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA18 = 0x40001110u, /* From scb[8].tr_tx_req to cpuss.dw1_tr_in[32] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA18 = 0x40001111u, /* From scb[8].tr_rx_req to cpuss.dw1_tr_in[33] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA19 = 0x40001112u, /* From scb[9].tr_tx_req to cpuss.dw1_tr_in[34] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA19 = 0x40001113u, /* From scb[9].tr_rx_req to cpuss.dw1_tr_in[35] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA110 = 0x40001114u, /* From scb[10].tr_tx_req to cpuss.dw1_tr_in[36] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA110 = 0x40001115u, /* From scb[10].tr_rx_req to cpuss.dw1_tr_in[37] */
    TRIG_OUT_1TO1_1_SCB_TX_TO_PDMA111 = 0x40001116u, /* From scb[11].tr_tx_req to cpuss.dw1_tr_in[38] */
    TRIG_OUT_1TO1_1_SCB_RX_TO_PDMA111 = 0x40001117u, /* From scb[11].tr_rx_req to cpuss.dw1_tr_in[39] */
    TRIG_OUT_1TO1_1_CAN1_DBG_TO_PDMA1_0 = 0x40001118u, /* From canfd[1].tr_dbg_dma_req[0] to cpuss.dw1_tr_in[40] */
    TRIG_OUT_1TO1_1_CAN1_FIFO0_TO_PDMA1_0 = 0x40001119u, /* From canfd[1].tr_fifo0[0] to cpuss.dw1_tr_in[41] */
    TRIG_OUT_1TO1_1_CAN1_FIFO1_TO_PDMA1_0 = 0x4000111Au, /* From canfd[1].tr_fifo1[0] to cpuss.dw1_tr_in[42] */
    TRIG_OUT_1TO1_1_CAN1_DBG_TO_PDMA1_1 = 0x4000111Bu, /* From canfd[1].tr_dbg_dma_req[1] to cpuss.dw1_tr_in[43] */
    TRIG_OUT_1TO1_1_CAN1_FIFO0_TO_PDMA1_1 = 0x4000111Cu, /* From canfd[1].tr_fifo0[1] to cpuss.dw1_tr_in[44] */
    TRIG_OUT_1TO1_1_CAN1_FIFO1_TO_PDMA1_1 = 0x4000111Du, /* From canfd[1].tr_fifo1[1] to cpuss.dw1_tr_in[45] */
    TRIG_OUT_1TO1_1_NOCONNECT       = 0x4000111Eu, /* From  to cpuss.dw1_tr_in[46] */
    TRIG_OUT_1TO1_1_MIXER_SRC_TO_PDMA10 = 0x40001120u, /* From mixer[0].tr_src_req[0] to cpuss.dw1_tr_in[48] */
    TRIG_OUT_1TO1_1_MIXER_SRC_TO_PDMA11 = 0x40001121u, /* From mixer[0].tr_src_req[1] to cpuss.dw1_tr_in[49] */
    TRIG_OUT_1TO1_1_MIXER_SRC_TO_PDMA12 = 0x40001122u, /* From mixer[0].tr_src_req[2] to cpuss.dw1_tr_in[50] */
    TRIG_OUT_1TO1_1_MIXER_SRC_TO_PDMA13 = 0x40001123u, /* From mixer[0].tr_src_req[3] to cpuss.dw1_tr_in[51] */
    TRIG_OUT_1TO1_1_MIXER_SRC_TO_PDMA14 = 0x40001124u, /* From mixer[0].tr_src_req[4] to cpuss.dw1_tr_in[52] */
    TRIG_OUT_1TO1_1_MIXER_DST_TO_PDMA10 = 0x40001125u, /* From mixer[0].tr_dst_req to cpuss.dw1_tr_in[53] */
    TRIG_OUT_1TO1_1_TDM_TX_TO_PDMA10 = 0x40001134u, /* From tdm[0].tr_tx_req[0] to cpuss.dw1_tr_in[68] */
    TRIG_OUT_1TO1_1_TDM_TX_TO_PDMA11 = 0x40001135u, /* From tdm[0].tr_tx_req[1] to cpuss.dw1_tr_in[69] */
    TRIG_OUT_1TO1_1_TDM_RX_TO_PDMA10 = 0x40001138u, /* From tdm[0].tr_rx_req[0] to cpuss.dw1_tr_in[72] */
    TRIG_OUT_1TO1_1_TDM_RX_TO_PDMA11 = 0x40001139u, /* From tdm[0].tr_rx_req[1] to cpuss.dw1_tr_in[73] */
    TRIG_OUT_1TO1_1_SG0_TR_COMPLETE0 = 0x4000113Cu, /* From sg[0].tr_complete[0] to cpuss.dw1_tr_in[76] */
    TRIG_OUT_1TO1_1_SG0_TR_COMPLETE1 = 0x4000113Du, /* From sg[0].tr_complete[1] to cpuss.dw1_tr_in[77] */
    TRIG_OUT_1TO1_1_SG0_TR_COMPLETE2 = 0x4000113Eu, /* From sg[0].tr_complete[2] to cpuss.dw1_tr_in[78] */
    TRIG_OUT_1TO1_1_SG0_TR_COMPLETE3 = 0x4000113Fu, /* From sg[0].tr_complete[3] to cpuss.dw1_tr_in[79] */
    TRIG_OUT_1TO1_1_SG0_TR_COMPLETE4 = 0x40001140u, /* From sg[0].tr_complete[4] to cpuss.dw1_tr_in[80] */
    TRIG_OUT_1TO1_1_PWM_TX_TO_PDMA10 = 0x40001141u, /* From pwm[0].tr_tx_req[0] to cpuss.dw1_tr_in[81] */
    TRIG_OUT_1TO1_1_PWM_TX_TO_PDMA11 = 0x40001142u /* From pwm[0].tr_tx_req[1] to cpuss.dw1_tr_in[82] */
} en_trig_output_1to1_to_pdma1_t;

/* Trigger Output Group 2 - Dedicated triggers to TCPWM[0] (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL0 = 0x40001200u, /* From pass[0].tr_sar_ch_rangevio[0] to tcpwm[0].tr_one_cnt_in[0] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL1 = 0x40001201u, /* From pass[0].tr_sar_ch_rangevio[1] to tcpwm[0].tr_one_cnt_in[1] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL2 = 0x40001202u, /* From pass[0].tr_sar_ch_rangevio[2] to tcpwm[0].tr_one_cnt_in[2] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL3 = 0x40001203u, /* From pass[0].tr_sar_ch_rangevio[3] to tcpwm[0].tr_one_cnt_in[3] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL4 = 0x40001204u, /* From pass[0].tr_sar_ch_rangevio[4] to tcpwm[0].tr_one_cnt_in[4] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL5 = 0x40001205u, /* From pass[0].tr_sar_ch_rangevio[5] to tcpwm[0].tr_one_cnt_in[5] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL6 = 0x40001206u, /* From pass[0].tr_sar_ch_rangevio[6] to tcpwm[0].tr_one_cnt_in[6] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL7 = 0x40001207u, /* From pass[0].tr_sar_ch_rangevio[7] to tcpwm[0].tr_one_cnt_in[7] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL8 = 0x40001208u, /* From pass[0].tr_sar_ch_rangevio[8] to tcpwm[0].tr_one_cnt_in[8] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL9 = 0x40001209u, /* From pass[0].tr_sar_ch_rangevio[9] to tcpwm[0].tr_one_cnt_in[9] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL10 = 0x4000120Au, /* From pass[0].tr_sar_ch_rangevio[10] to tcpwm[0].tr_one_cnt_in[10] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL11 = 0x4000120Bu, /* From pass[0].tr_sar_ch_rangevio[11] to tcpwm[0].tr_one_cnt_in[11] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL12 = 0x4000120Cu, /* From pass[0].tr_sar_ch_rangevio[12] to tcpwm[0].tr_one_cnt_in[12] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL13 = 0x4000120Du, /* From pass[0].tr_sar_ch_rangevio[13] to tcpwm[0].tr_one_cnt_in[13] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL14 = 0x4000120Eu, /* From pass[0].tr_sar_ch_rangevio[14] to tcpwm[0].tr_one_cnt_in[14] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL15 = 0x4000120Fu, /* From pass[0].tr_sar_ch_rangevio[15] to tcpwm[0].tr_one_cnt_in[15] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL16 = 0x40001210u, /* From pass[0].tr_sar_ch_rangevio[16] to tcpwm[0].tr_one_cnt_in[16] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL17 = 0x40001211u, /* From pass[0].tr_sar_ch_rangevio[17] to tcpwm[0].tr_one_cnt_in[17] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL18 = 0x40001212u, /* From pass[0].tr_sar_ch_rangevio[18] to tcpwm[0].tr_one_cnt_in[18] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL19 = 0x40001213u, /* From pass[0].tr_sar_ch_rangevio[19] to tcpwm[0].tr_one_cnt_in[19] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL20 = 0x40001214u, /* From pass[0].tr_sar_ch_rangevio[20] to tcpwm[0].tr_one_cnt_in[256] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL21 = 0x40001215u, /* From pass[0].tr_sar_ch_rangevio[21] to tcpwm[0].tr_one_cnt_in[257] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL22 = 0x40001216u, /* From pass[0].tr_sar_ch_rangevio[22] to tcpwm[0].tr_one_cnt_in[258] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL23 = 0x40001217u, /* From pass[0].tr_sar_ch_rangevio[23] to tcpwm[0].tr_one_cnt_in[259] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL24 = 0x40001218u, /* From pass[0].tr_sar_ch_rangevio[24] to tcpwm[0].tr_one_cnt_in[260] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL25 = 0x40001219u, /* From pass[0].tr_sar_ch_rangevio[25] to tcpwm[0].tr_one_cnt_in[261] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL26 = 0x4000121Au, /* From pass[0].tr_sar_ch_rangevio[26] to tcpwm[0].tr_one_cnt_in[262] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL27 = 0x4000121Bu, /* From pass[0].tr_sar_ch_rangevio[27] to tcpwm[0].tr_one_cnt_in[263] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL28 = 0x4000121Cu, /* From pass[0].tr_sar_ch_rangevio[28] to tcpwm[0].tr_one_cnt_in[264] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL29 = 0x4000121Du, /* From pass[0].tr_sar_ch_rangevio[29] to tcpwm[0].tr_one_cnt_in[265] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL30 = 0x4000121Eu, /* From pass[0].tr_sar_ch_rangevio[30] to tcpwm[0].tr_one_cnt_in[266] */
    TRIG_OUT_1TO1_2_PASS_CH_RANGEVIO_TO_PWM0_KILL31 = 0x4000121Fu /* From pass[0].tr_sar_ch_rangevio[31] to tcpwm[0].tr_one_cnt_in[267] */
} en_trig_output_1to1_to_tcpwm0_t;

/* Trigger Output Group 3 - Dedicated triggers to PASS[0] (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR0 = 0x40001300u, /* From tcpwm[0].tr_out1[0] to pass[0].tr_sar_ch_in[0] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR1 = 0x40001301u, /* From tcpwm[0].tr_out1[1] to pass[0].tr_sar_ch_in[1] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR2 = 0x40001302u, /* From tcpwm[0].tr_out1[2] to pass[0].tr_sar_ch_in[2] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR3 = 0x40001303u, /* From tcpwm[0].tr_out1[3] to pass[0].tr_sar_ch_in[3] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR4 = 0x40001304u, /* From tcpwm[0].tr_out1[4] to pass[0].tr_sar_ch_in[4] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR5 = 0x40001305u, /* From tcpwm[0].tr_out1[5] to pass[0].tr_sar_ch_in[5] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR6 = 0x40001306u, /* From tcpwm[0].tr_out1[6] to pass[0].tr_sar_ch_in[6] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR7 = 0x40001307u, /* From tcpwm[0].tr_out1[7] to pass[0].tr_sar_ch_in[7] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR8 = 0x40001308u, /* From tcpwm[0].tr_out1[8] to pass[0].tr_sar_ch_in[8] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR9 = 0x40001309u, /* From tcpwm[0].tr_out1[9] to pass[0].tr_sar_ch_in[9] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR10 = 0x4000130Au, /* From tcpwm[0].tr_out1[10] to pass[0].tr_sar_ch_in[10] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR11 = 0x4000130Bu, /* From tcpwm[0].tr_out1[11] to pass[0].tr_sar_ch_in[11] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR12 = 0x4000130Cu, /* From tcpwm[0].tr_out1[12] to pass[0].tr_sar_ch_in[12] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR13 = 0x4000130Du, /* From tcpwm[0].tr_out1[13] to pass[0].tr_sar_ch_in[13] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR14 = 0x4000130Eu, /* From tcpwm[0].tr_out1[14] to pass[0].tr_sar_ch_in[14] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR15 = 0x4000130Fu, /* From tcpwm[0].tr_out1[15] to pass[0].tr_sar_ch_in[15] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR16 = 0x40001310u, /* From tcpwm[0].tr_out1[16] to pass[0].tr_sar_ch_in[16] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR17 = 0x40001311u, /* From tcpwm[0].tr_out1[17] to pass[0].tr_sar_ch_in[17] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR18 = 0x40001312u, /* From tcpwm[0].tr_out1[18] to pass[0].tr_sar_ch_in[18] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR19 = 0x40001313u, /* From tcpwm[0].tr_out1[19] to pass[0].tr_sar_ch_in[19] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR20 = 0x40001314u, /* From tcpwm[0].tr_out1[256] to pass[0].tr_sar_ch_in[20] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR21 = 0x40001315u, /* From tcpwm[0].tr_out1[257] to pass[0].tr_sar_ch_in[21] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR22 = 0x40001316u, /* From tcpwm[0].tr_out1[258] to pass[0].tr_sar_ch_in[22] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR23 = 0x40001317u, /* From tcpwm[0].tr_out1[259] to pass[0].tr_sar_ch_in[23] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR24 = 0x40001318u, /* From tcpwm[0].tr_out1[260] to pass[0].tr_sar_ch_in[24] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR25 = 0x40001319u, /* From tcpwm[0].tr_out1[261] to pass[0].tr_sar_ch_in[25] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR26 = 0x4000131Au, /* From tcpwm[0].tr_out1[262] to pass[0].tr_sar_ch_in[26] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR27 = 0x4000131Bu, /* From tcpwm[0].tr_out1[263] to pass[0].tr_sar_ch_in[27] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR28 = 0x4000131Cu, /* From tcpwm[0].tr_out1[264] to pass[0].tr_sar_ch_in[28] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR29 = 0x4000131Du, /* From tcpwm[0].tr_out1[265] to pass[0].tr_sar_ch_in[29] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR30 = 0x4000131Eu, /* From tcpwm[0].tr_out1[266] to pass[0].tr_sar_ch_in[30] */
    TRIG_OUT_1TO1_3_TCPWM0_TO_PASS_CH_TR31 = 0x4000131Fu /* From tcpwm[0].tr_out1[267] to pass[0].tr_sar_ch_in[31] */
} en_trig_output_1to1_to_pass0_t;

/* Trigger Output Group 4 - Dedicated triggers to CANFD[1] (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_4_PDMA1_ACK_TO_CAN1_0 = 0x40001400u, /* From cpuss.dw1_tr_out[40] to canfd[1].tr_dbg_dma_ack[0] */
    TRIG_OUT_1TO1_4_PDMA1_ACK_TO_CAN1_1 = 0x40001401u /* From cpuss.dw1_tr_out[43] to canfd[1].tr_dbg_dma_ack[1] */
} en_trig_output_1to1_to_canfd1_t;

/* Trigger Output Group 5 - Dedicated triggers to CANFD[0] (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_5_PDMA0_ACK_TO_CAN0_0 = 0x40001500u, /* From cpuss.dw0_tr_out[32] to canfd[0].tr_dbg_dma_ack[0] */
    TRIG_OUT_1TO1_5_PDMA0_ACK_TO_CAN0_1 = 0x40001501u /* From cpuss.dw0_tr_out[35] to canfd[0].tr_dbg_dma_ack[1] */
} en_trig_output_1to1_to_canfd0_t;

/* Trigger Output Group 6 - Dedicated triggers to LIN[0] (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_6_TCPWM0_TO_LIN_TR0 = 0x40001600u, /* From tcpwm[0].tr_out1[24] to lin[0].tr_cmd_tx_header[0] */
    TRIG_OUT_1TO1_6_TCPWM0_TO_LIN_TR1 = 0x40001601u /* From tcpwm[0].tr_out1[25] to lin[0].tr_cmd_tx_header[1] */
} en_trig_output_1to1_to_lin0_t;

/* Trigger Output Group 7 - Dedicated triggers to CXPI[0] (OneToOne) */
typedef enum
{
    TRIG_OUT_1TO1_7_TCPWM_TO_CXPI_TR0 = 0x40001700u, /* From tcpwm[0].tr_out1[26] to cxpi[0].tr_cmd_tx_header[0] */
    TRIG_OUT_1TO1_7_TCPWM_TO_CXPI_TR1 = 0x40001701u /* From tcpwm[0].tr_out1[27] to cxpi[0].tr_cmd_tx_header[1] */
} en_trig_output_1to1_to_cxpi0_t;

/* Level or edge detection setting for a trigger mux */
typedef enum
{
    /* The trigger is a simple level output */
    TRIGGER_TYPE_LEVEL = 0u,
    /* The trigger is synchronized to the consumer blocks clock
       and a two cycle pulse is generated on this clock */
    TRIGGER_TYPE_EDGE = 1u
} en_trig_type_t;

/* Trigger Type Defines */
/* CANFD Trigger Types */
#define TRIGGER_TYPE_CANFD_TR_DBG_DMA_ACK       TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CANFD_TR_DBG_DMA_REQ       TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_CANFD_TR_EVT_SWT_IN        TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CANFD_TR_FIFO0             TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_CANFD_TR_FIFO1             TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_CANFD_TR_TMP_RTP_OUT       TRIGGER_TYPE_EDGE
/* CPUSS Trigger Types */
#define TRIGGER_TYPE_CPUSS_CTI_TR_IN            TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_CTI_TR_OUT           TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_DMAC_TR_IN__LEVEL    TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_CPUSS_DMAC_TR_IN__EDGE     TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_DMAC_TR_OUT          TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_DW0_TR_IN__LEVEL     TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_CPUSS_DW0_TR_IN__EDGE      TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_DW0_TR_OUT           TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_DW1_TR_IN__LEVEL     TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_CPUSS_DW1_TR_IN__EDGE      TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_DW1_TR_OUT           TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CPUSS_TR_FAULT             TRIGGER_TYPE_EDGE
/* CXPI Trigger Types */
#define TRIGGER_TYPE_CXPI_TR_CMD_TX_HEADER      TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_CXPI_TR_RX_REQ             TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_CXPI_TR_TX_REQ             TRIGGER_TYPE_LEVEL
/* LIN Trigger Types */
#define TRIGGER_TYPE_LIN_TR_CMD_TX_HEADER       TRIGGER_TYPE_EDGE
/* MIXER Trigger Types */
#define TRIGGER_TYPE_MIXER_TR_DBG_FREEZE        TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_MIXER_TR_DST_REQ           TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_MIXER_TR_SRC_REQ           TRIGGER_TYPE_LEVEL
/* PASS Trigger Types */
#define TRIGGER_TYPE_PASS_TR_DEBUG_FREEZE       TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PASS_TR_SAR_CH_DONE__LEVEL TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PASS_TR_SAR_CH_DONE__EDGE  TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_PASS_TR_SAR_CH_IN__LEVEL   TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PASS_TR_SAR_CH_IN__EDGE    TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_PASS_TR_SAR_CH_RANGEVIO    TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_PASS_TR_SAR_GEN_IN__LEVEL  TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PASS_TR_SAR_GEN_IN__EDGE   TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_PASS_TR_SAR_GEN_OUT__LEVEL TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PASS_TR_SAR_GEN_OUT__EDGE  TRIGGER_TYPE_EDGE
/* PERI Trigger Types */
#define TRIGGER_TYPE_PERI_TR_DBG_FREEZE         TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PERI_TR_IO_INPUT__LEVEL    TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PERI_TR_IO_INPUT__EDGE     TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_PERI_TR_IO_OUTPUT__LEVEL   TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PERI_TR_IO_OUTPUT__EDGE    TRIGGER_TYPE_EDGE
/* PWM Trigger Types */
#define TRIGGER_TYPE_PWM_TR_DBG_FREEZE          TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_PWM_TR_TX_REQ              TRIGGER_TYPE_LEVEL
/* SCB Trigger Types */
#define TRIGGER_TYPE_SCB_TR_I2C_SCL_FILTERED    TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_SCB_TR_RX_REQ              TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_SCB_TR_TX_REQ              TRIGGER_TYPE_LEVEL
/* SG Trigger Types */
#define TRIGGER_TYPE_SG_TR_COMPLETE             TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_SG_TR_DBG_FREEZE           TRIGGER_TYPE_LEVEL
/* SMIF Trigger Types */
#define TRIGGER_TYPE_SMIF_TR_RX_REQ             TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_SMIF_TR_TX_REQ             TRIGGER_TYPE_LEVEL
/* SRSS Trigger Types */
#define TRIGGER_TYPE_SRSS_TR_DEBUG_FREEZE_MCWDT TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_SRSS_TR_DEBUG_FREEZE_WDT   TRIGGER_TYPE_LEVEL
/* TCPWM Trigger Types */
#define TRIGGER_TYPE_TCPWM_TR_DEBUG_FREEZE      TRIGGER_TYPE_LEVEL
/* TDM Trigger Types */
#define TRIGGER_TYPE_TDM_TR_DBG_FREEZE          TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_TDM_TR_RX_REQ              TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_TDM_TR_TX_REQ              TRIGGER_TYPE_LEVEL
/* TR_GROUP Trigger Types */
#define TRIGGER_TYPE_TR_GROUP_OUTPUT__LEVEL     TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_TR_GROUP_OUTPUT__EDGE      TRIGGER_TYPE_EDGE
#define TRIGGER_TYPE_TR_GROUP_INPUT__LEVEL      TRIGGER_TYPE_LEVEL
#define TRIGGER_TYPE_TR_GROUP_INPUT__EDGE       TRIGGER_TYPE_EDGE

/* Fault connections */
typedef enum
{
    CPUSS_MPU_VIO_0                 = 0x0000u,
    CPUSS_MPU_VIO_1                 = 0x0001u,
    CPUSS_MPU_VIO_2                 = 0x0002u,
    CPUSS_MPU_VIO_3                 = 0x0003u,
    CPUSS_MPU_VIO_4                 = 0x0004u,
    CPUSS_MPU_VIO_15                = 0x000Fu,
    CPUSS_MPU_VIO_16                = 0x0010u,
    CPUSS_MPU_VIO_17                = 0x0011u,
    CPUSS_MPU_VIO_18                = 0x0012u,
    PERI_PERI_C_ECC                 = 0x001Au,
    PERI_PERI_NC_ECC                = 0x001Bu,
    PERI_MS_VIO_0                   = 0x001Cu,
    PERI_MS_VIO_1                   = 0x001Du,
    PERI_MS_VIO_2                   = 0x001Eu,
    PERI_MS_VIO_3                   = 0x001Fu,
    PERI_GROUP_VIO_0                = 0x0020u,
    PERI_GROUP_VIO_1                = 0x0021u,
    PERI_GROUP_VIO_2                = 0x0022u,
    PERI_GROUP_VIO_3                = 0x0023u,
    PERI_GROUP_VIO_4                = 0x0024u,
    PERI_GROUP_VIO_5                = 0x0025u,
    PERI_GROUP_VIO_6                = 0x0026u,
    PERI_GROUP_VIO_8                = 0x0028u,
    PERI_GROUP_VIO_9                = 0x0029u,
    CPUSS_FLASHC_MAIN_BUS_ERR       = 0x0030u,
    CPUSS_FLASHC_MAIN_C_ECC         = 0x0031u,
    CPUSS_FLASHC_MAIN_NC_ECC        = 0x0032u,
    CPUSS_FLASHC_WORK_BUS_ERR       = 0x0033u,
    CPUSS_FLASHC_WORK_C_ECC         = 0x0034u,
    CPUSS_FLASHC_WORK_NC_ECC        = 0x0035u,
    CPUSS_FLASHC_CM0_CA_C_ECC       = 0x0036u,
    CPUSS_FLASHC_CM0_CA_NC_ECC      = 0x0037u,
    CPUSS_FLASHC_CM4_CA_C_ECC       = 0x0038u,
    CPUSS_FLASHC_CM4_CA_NC_ECC      = 0x0039u,
    CPUSS_RAMC0_C_ECC               = 0x003Au,
    CPUSS_RAMC0_NC_ECC              = 0x003Bu,
    CPUSS_RAMC1_C_ECC               = 0x003Cu,
    CPUSS_RAMC1_NC_ECC              = 0x003Du,
    CPUSS_CRYPTO_C_ECC              = 0x0040u,
    CPUSS_CRYPTO_NC_ECC             = 0x0041u,
    CPUSS_DW0_C_ECC                 = 0x0046u,
    CPUSS_DW0_NC_ECC                = 0x0047u,
    CPUSS_DW1_C_ECC                 = 0x0048u,
    CPUSS_DW1_NC_ECC                = 0x0049u,
    CPUSS_FM_SRAM_C_ECC             = 0x004Au,
    CPUSS_FM_SRAM_NC_ECC            = 0x004Bu,
    CANFD_0_CAN_C_ECC               = 0x0050u,
    CANFD_0_CAN_NC_ECC              = 0x0051u,
    CANFD_1_CAN_C_ECC               = 0x0052u,
    CANFD_1_CAN_NC_ECC              = 0x0053u,
    SRSS_FAULT_CSV                  = 0x005Au,
    SRSS_FAULT_SSV                  = 0x005Bu,
    SRSS_FAULT_MCWDT0               = 0x005Cu,
    SRSS_FAULT_MCWDT1               = 0x005Du
} en_sysflt_source_t;

/* Bus masters */
typedef enum
{
    CPUSS_MS_ID_CM0                 =  0,
    CPUSS_MS_ID_CRYPTO              =  1,
    CPUSS_MS_ID_DW0                 =  2,
    CPUSS_MS_ID_DW1                 =  3,
    CPUSS_MS_ID_DMAC                =  4,
    CPUSS_MS_ID_SLOW0               =  5,
    CPUSS_MS_ID_SLOW1               =  6,
    CPUSS_MS_ID_CM4                 = 14,
    CPUSS_MS_ID_TC                  = 15
} en_prot_master_t;

/* Parameter Defines */
/* Number of TTCAN instances */
#define CANFD0_CAN_NR                   2u
/* ECC logic present or not */
#define CANFD0_ECC_PRESENT              1u
/* address included in ECC logic or not */
#define CANFD0_ECC_ADDR_PRESENT         1u
/* Time Stamp counter present or not (required for instance 0, otherwise not
   allowed) */
#define CANFD0_TS_PRESENT               1u
/* Message RAM size in KB */
#define CANFD0_MRAM_SIZE                16u
/* Message RAM address width */
#define CANFD0_MRAM_ADDR_WIDTH          12u
/* Number of TTCAN instances */
#define CANFD1_CAN_NR                   2u
/* ECC logic present or not */
#define CANFD1_ECC_PRESENT              1u
/* address included in ECC logic or not */
#define CANFD1_ECC_ADDR_PRESENT         1u
/* Time Stamp counter present or not (required for instance 0, otherwise not
   allowed) */
#define CANFD1_TS_PRESENT               0u
/* Message RAM size in KB */
#define CANFD1_MRAM_SIZE                16u
/* Message RAM address width */
#define CANFD1_MRAM_ADDR_WIDTH          12u
/* UDB present or not ('0': no, '1': yes) */
#define CPUSS_UDB_PRESENT               0u
/* MBIST MMIO for Synopsys MBIST ('0': no, '1': yes). Set this to '1' only for the
   chips which doesn't use mxdft. */
#define CPUSS_MBIST_MMIO_PRESENT        0u
/* System RAM 0 size in KB */
#define CPUSS_SRAM0_SIZE                256u
/* Number of macros used to implement system RAM 0. Example: 8 if 256 KB system
   SRAM 0 is implemented with 8 32KB macros. */
#define CPUSS_RAMC0_MACRO_NR            8u
/* System RAM 1 present or not ('0': no, '1': yes) */
#define CPUSS_RAMC1_PRESENT             1u
/* System RAM 1 size in KB */
#define CPUSS_SRAM1_SIZE                256u
/* Number of macros used to implement system RAM 1. */
#define CPUSS_RAMC1_MACRO_NR            8u
/* System RAM 2 present or not ('0': no, '1': yes) */
#define CPUSS_RAMC2_PRESENT             0u
/* System RAM 2 size in KB */
#define CPUSS_SRAM2_SIZE                1u
/* Number of macros used to implement System RAM 2. */
#define CPUSS_RAMC2_MACRO_NR            0u
/* System SRAM(s) ECC present or not ('0': no, '1': yes) */
#define CPUSS_RAMC_ECC_PRESENT          1u
/* System SRAM(s) address ECC present or not ('0': no, '1': yes) */
#define CPUSS_RAMC_ECC_ADDR_PRESENT     1u
/* ECC present in either system RAM or interrupt handler (RAMC_ECC_PRESENT) */
#define CPUSS_ECC_PRESENT               1u
/* DataWire SRAMs ECC present or not ('0': no, '1': yes) */
#define CPUSS_DW_ECC_PRESENT            1u
/* DataWire SRAMs address ECC present or not ('0': no, '1': yes) */
#define CPUSS_DW_ECC_ADDR_PRESENT       1u
/* System ROM size in KB */
#define CPUSS_ROM_SIZE                  32u
/* Number of macros used to implement system ROM. Example: 4 if 512 KB system ROM
   is implemented with 4 128KB macros. */
#define CPUSS_ROMC_MACRO_NR             1u
/* Flash memory present or not ('0': no, '1': yes) */
#define CPUSS_FLASHC_PRESENT            1u
/* Flash memory type ('0' : SONOS, '1': ECT) */
#define CPUSS_FLASHC_ECT                1u
/* Flash main region size in KB */
#define CPUSS_FLASH_SIZE                4096u
/* Flash work region size in KB (EEPROM emulation, data) */
#define CPUSS_WFLASH_SIZE               128u
/* Flash supervisory region size in KB */
#define CPUSS_SFLASH_SIZE               32u
/* Flash data output word size (in Bytes) */
#define CPUSS_FLASHC_MAIN_DATA_WIDTH    32u
/* SONOS Flash RWW present or not ('0': no, '1': yes) When RWW is '0', No special
   sectors present in Flash. Part of main sector 0 is allowcated for Supervisory
   Flash, and no Work Flash present. */
#define CPUSS_FLASHC_SONOS_RWW          0u
/* SONOS Flash, number of main sectors. */
#define CPUSS_FLASHC_SONOS_MAIN_SECTORS 0u
/* SONOS Flash, number of rows per main sector. */
#define CPUSS_FLASHC_SONOS_MAIN_ROWS    0u
/* SONOS Flash, number of words per row of main sector. */
#define CPUSS_FLASHC_SONOS_MAIN_WORDS   0u
/* SONOS Flash, number of special sectors. */
#define CPUSS_FLASHC_SONOS_SPL_SECTORS  0u
/* SONOS Flash, number of rows per special sector. */
#define CPUSS_FLASHC_SONOS_SPL_ROWS     0u
/* Flash memory ECC present or not ('0': no, '1': yes) */
#define CPUSS_FLASHC_FLASH_ECC_PRESENT  1u
/* Flash cache SRAM(s) ECC present or not ('0': no, '1': yes) */
#define CPUSS_FLASHC_RAM_ECC_PRESENT    1u
/* Number of external slaves directly connected to slow AHB-Lite infrastructure.
   Maximum nubmer of slave supported is 4. Width of this parameter is 4-bits.
   1-bit mask for each slave indicating present or not. Example: 4'b0011 - slave
   0 and slave 1 are present. Note: The SLOW_SLx_ADDR and SLOW_SLx_MASK
   parameters (for the slaves present) should be derived from the Memory Map. */
#define CPUSS_SLOW_SL_PRESENT           1u
/* Number of external slaves directly connected to fast AHB-Lite infrastructure.
   Maximum nubmer of slave supported is 4. Width of this parameter is 4-bits.
   1-bit mask for each slave indicating present or not. Example: 4'b0011 - slave
   0 and slave 1 are present. Note: The FAST_SLx_ADDR and FAST_SLx_MASK
   parameters (for the slaves present) should be derived from the Memory Map. */
#define CPUSS_FAST_SL_PRESENT           1u
/* Number of external masters driving the slow AHB-Lite infrastructure. Maximum
   number of masters supported is 2. Width of this parameter is 2-bits. 1-bit
   mask for each master indicating present or not. Example: 2'b01 - master 0 is
   present. */
#define CPUSS_SLOW_MS_PRESENT           0u
/* System interrupt functionality present or not ('0': no; '1': yes). Not used for
   CM0+ PCU, which always uses system interrupt functionality. */
#define CPUSS_SYSTEM_IRQ_PRESENT        1u
/* Number of system interrupt inputs to CPUSS */
#define CPUSS_SYSTEM_INT_NR             798u
/* Number of DeepSleep system interrupt inputs to CPUSS */
#define CPUSS_SYSTEM_DPSLP_INT_NR       50u
/* CM4 CPU present or not ('0': no, '1': yes) */
#define CPUSS_CM4_PRESENT               1u
/* Width of the CM4 interrupt priority bits. Legal range [3,8] Example: 3 = 8
   levels of priority 8 = 256 levels of priority */
#define CPUSS_CM4_LVL_WIDTH             3u
/* CM4 Floating point unit present or not ('0': no, '1': yes) */
#define CPUSS_CM4_FPU_PRESENT           1u
/* Debug level. Legal range [0,3] */
#define CPUSS_DEBUG_LVL                 3u
/* Trace level. Legal range [0,2] Note: CM4 HTM is not supported. Hence vaule 3
   for trace level is not supported in CPUSS. */
#define CPUSS_TRACE_LVL                 2u
/* Embedded Trace Buffer present or not ('0': no, '1': yes) */
#define CPUSS_ETB_PRESENT               1u
/* CM0+ MTB SRAM buffer size in kilobytes. Legal vaules 4, 8 or 16 */
#define CPUSS_MTB_SRAM_SIZE             4u
/* CM4 ETB SRAM buffer size in kilobytes. Legal vaules 4, 8 or 16 */
#define CPUSS_ETB_SRAM_SIZE             8u
/* PTM interface present (0=No, 1=Yes) */
#define CPUSS_PTM_PRESENT               0u
/* Width of the PTM interface in bits ([2,32]) */
#define CPUSS_PTM_WIDTH                 1u
/* Width of the TPIU interface in bits ([1,4]) */
#define CPUSS_TPIU_WIDTH                4u
/* CoreSight Part Identification Number */
#define CPUSS_JEPID                     52u
/* CoreSight Part Identification Number */
#define CPUSS_JEPCONTINUATION           0u
/* CoreSight Part Identification Number */
#define CPUSS_FAMILYID                  275u
/* ROM trim register width (for ARM 3, for Synopsys 5) */
#define CPUSS_ROM_TRIM_WIDTH            3u
/* ROM trim register default (for both ARM and Synopsys 0x0000_0002) */
#define CPUSS_ROM_TRIM_DEFAULT          2u
/* RAM trim register width (for ARM 8, for Synopsys 15) */
#define CPUSS_RAM_TRIM_WIDTH            8u
/* RAM trim register default (for ARM 0x0000_0062 and for Synopsys 0x0000_6012) */
#define CPUSS_RAM_TRIM_DEFAULT          98u
/* Cryptography IP present or not ('0': no, '1': yes) */
#define CPUSS_CRYPTO_PRESENT            1u
/* DataWire and DMAC SW trigger per channel present or not ('0': no, '1': yes) */
#define CPUSS_SW_TR_PRESENT             1u
/* DataWire 0 present or not ('0': no, '1': yes) */
#define CPUSS_DW0_PRESENT               1u
/* Number of DataWire 0 channels ([1, 1024]) */
#define CPUSS_DW0_CH_NR                 76u
/* DataWire 1 present or not ('0': no, '1': yes) */
#define CPUSS_DW1_PRESENT               1u
/* Number of DataWire 1 channels ([1, 1024]) */
#define CPUSS_DW1_CH_NR                 84u
/* DMA controller present or not ('0': no, '1': yes) */
#define CPUSS_DMAC_PRESENT              1u
/* Number of DMA controller channels ([1, 8]) */
#define CPUSS_DMAC_CH_NR                4u
/* DMAC SW trigger per channel present or not ('0': no, '1': yes) */
#define CPUSS_CH_SW_TR_PRESENT          1u
/* See MMIO2 instantiation or not */
#define CPUSS_CHIP_TOP_PROFILER_PRESENT 0u
/* ETAS Calibration support pin out present (automotive only) */
#define CPUSS_CHIP_TOP_CAL_SUP_NZ_PRESENT 1u
/* TRACE_LVL>0 */
#define CPUSS_CHIP_TOP_TRACE_PRESENT    1u
/* DataWire SW trigger per channel present or not ('0': no, '1': yes) */
#define CPUSS_CH_STRUCT_SW_TR_PRESENT   1u
/* Number of DataWire controllers present (max 2) (same as DW.NR above) */
#define CPUSS_CPUSS_DW_DW_NR            2u
/* Number of channels in each DataWire controller */
#define CPUSS_CPUSS_DW_DW_NR0_DW_CH_NR  76u
/* Width of a channel number in bits */
#define CPUSS_CPUSS_DW_DW_NR0_DW_CH_NR_WIDTH 7u
/* Number of channels in each DataWire controller */
#define CPUSS_CPUSS_DW_DW_NR1_DW_CH_NR  84u
/* Width of a channel number in bits */
#define CPUSS_CPUSS_DW_DW_NR1_DW_CH_NR_WIDTH 7u
/* Cryptography SRAMs ECC present or not ('0': no, '1': yes) */
#define CPUSS_CRYPTO_ECC_PRESENT        1u
/* Cryptography SRAMs address ECC present or not ('0': no, '1': yes) */
#define CPUSS_CRYPTO_ECC_ADDR_PRESENT   1u
/* AES cipher support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_AES                1u
/* (Tripple) DES cipher support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_DES                1u
/* Chacha support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_CHACHA             1u
/* Pseudo random number generation support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_PR                 1u
/* SHA1 hash support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_SHA1               1u
/* SHA2 hash support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_SHA2               1u
/* SHA3 hash support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_SHA3               1u
/* Cyclic Redundancy Check support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_CRC                1u
/* True random number generation support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_TR                 1u
/* Vector unit support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_VU                 1u
/* Galios/Counter Mode (GCM) support ('0': no, '1': yes) */
#define CPUSS_CRYPTO_GCM                1u
/* Number of 32-bit words in the IP internal memory buffer (from the set [64, 128,
   256, 512, 1024, 2048, 4096], to allow for a 256 B, 512 B, 1 kB, 2 kB, 4 kB, 8
   kB and 16 kB memory buffer) */
#define CPUSS_CRYPTO_BUFF_SIZE          2048u
/* Number of DMA controller channels ([1, 8]) */
#define CPUSS_DMAC_CH_NR                4u
/* Number of DataWire controllers present (max 2) */
#define CPUSS_DW_NR                     2u
/* DataWire SRAMs ECC present or not ('0': no, '1': yes) */
#define CPUSS_DW_ECC_PRESENT            1u
/* Number of fault structures. Legal range [1, 4] */
#define CPUSS_FAULT_FAULT_NR            4u
/* CM4 CPU present or not ('0': no, '1': yes) */
#define CPUSS_FLASHC_CM4_PRESENT        1u
/* Number of Flash BIST_DATA registers */
#define CPUSS_FLASHC_FLASHC_BIST_DATA_NR 8u
/* Page size in # of 32-bit words (1: 4 bytes, 2: 8 bytes, ... */
#define CPUSS_FLASHC_PA_SIZE            128u
/* SONOS Flash is used or not ('0': no, '1': yes) */
#define CPUSS_FLASHC_FLASHC_IS_SONOS    0u
/* eCT Flash is used or not ('0': no, '1': yes) */
#define CPUSS_FLASHC_FLASHC_IS_ECT      1u
/* Number of IPC structures. Legal range [1, 16] */
#define CPUSS_IPC_IPC_NR                8u
/* Number of IPC interrupt structures. Legal range [1, 16] */
#define CPUSS_IPC_IPC_IRQ_NR            8u
/* Master 0 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS0_PC_NR_MINUS1 7u
/* Master 1 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS1_PC_NR_MINUS1 0u
/* Master 2 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS2_PC_NR_MINUS1 0u
/* Master 3 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS3_PC_NR_MINUS1 0u
/* Master 4 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS4_PC_NR_MINUS1 0u
/* Master 5 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS5_PC_NR_MINUS1 0u
/* Master 6 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS6_PC_NR_MINUS1 0u
/* Master 7 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS7_PC_NR_MINUS1 0u
/* Master 8 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS8_PC_NR_MINUS1 0u
/* Master 9 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS9_PC_NR_MINUS1 0u
/* Master 10 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS10_PC_NR_MINUS1 0u
/* Master 11 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS11_PC_NR_MINUS1 0u
/* Master 12 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS12_PC_NR_MINUS1 0u
/* Master 13 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS13_PC_NR_MINUS1 0u
/* Master 14 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS14_PC_NR_MINUS1 7u
/* Master 15 protect contexts minus one */
#define CPUSS_PROT_SMPU_MS15_PC_NR_MINUS1 7u
/* Number of SMPU protection structures */
#define CPUSS_PROT_SMPU_STRUCT_NR       16u
/* Number of protection contexts supported minus 1. Legal range [1,16] */
#define CPUSS_SMPU_STRUCT_PC_NR_MINUS1  7u
/* Number of CXPI channels ([2, 32]). For test functionality (two channels are
   connected), the minimal number of CXPI channels is 2. */
#define CXPI_CH_NR                      2u
/* Spare Enable 0=no spare, 1=max, 2=min */
#define CXPI_SPARE_EN                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define CXPI_MASTER_WIDTH               8u
/* Number of HFCLK roots present. Must be > 0. Must be same as set for SRSS */
#define DFT_NUM_HFROOT                  7u
/* Width of clk_occ_fast output bus (number of external OCCs) */
#define DFT_EXT_OCC                     2u
/* Number of MBIST controllers with corresponding mbist(pg)_done and mbist(pg)_go
   signals. Value defined by CIC during Pass 1 */
#define DFT_MBIST_C_NUM                 7u
/* Number of instantiated eFUSE macros (256 bit macros). Legal range [1, 16] */
#define EFUSE_EFUSE_NR                  4u
/* Number of comparator structures ([1, 32]) */
#define EVTGEN_COMP_STRUCT_NR           16u
/* Number of GPIO ports in range 0..31 */
#define IOSS_GPIO_GPIO_PORT_NR_0_31     20u
/* Number of GPIO ports in range 32..63 */
#define IOSS_GPIO_GPIO_PORT_NR_32_63    0u
/* Number of GPIO ports in range 64..95 */
#define IOSS_GPIO_GPIO_PORT_NR_64_95    0u
/* Number of GPIO ports in range 96..127 */
#define IOSS_GPIO_GPIO_PORT_NR_96_127   0u
/* Number of GPIO ports in device */
#define IOSS_GPIO_GPIO_PORT_NR          20u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR0_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR1_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR2_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR3_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR4_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO0 1u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO1 1u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO2 1u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO3 1u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO4 1u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO5 1u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO6 1u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR5_GPIO_PRT_SLOW_IO7 1u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO0 1u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO1 1u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO2 1u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO3 1u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO4 1u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO5 1u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO6 1u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR6_GPIO_PRT_SLOW_IO7 1u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO0 1u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO1 1u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO2 1u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO3 1u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO4 1u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO5 1u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO6 1u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR7_GPIO_PRT_SLOW_IO7 1u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLEW_EXT 1u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_DRIVE_EXT 1u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLEW_WIDTH 1u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_DRIVE_WIDTH 3u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR8_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLEW_EXT 1u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_DRIVE_EXT 1u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLEW_WIDTH 1u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_DRIVE_WIDTH 3u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR9_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR10_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR11_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR12_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR13_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO0 1u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO1 1u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO2 1u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO3 1u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO4 1u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO5 1u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO6 1u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR14_GPIO_PRT_SLOW_IO7 1u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR15_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR16_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR17_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR18_GPIO_PRT_SLOW_IO7 0u
/* Indicates port is either GPIO or SIO (i.e. all GPIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_GPIO 1u
/* Indicates port is an SIO port (i.e. both GPIO and SIO registers present) */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SIO 0u
/* Indicates port is a GPIO port including the "AUTO" input threshold */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_AUTOLVL 1u
/* Indicates port supports drive select trims (new in GPIO_rev4) */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_DS_CTRL 0u
/* Indicates port supports slew extension bits */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLEW_EXT 0u
/* Indicates port supports drive select extension bits */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_DRIVE_EXT 0u
/* Indicates slew bit width */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLEW_WIDTH 0u
/* Indicates drive sel bit width */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_DRIVE_WIDTH 0u
/* Indicates that pin #0 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO0 0u
/* Indicates that pin #1 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO1 0u
/* Indicates that pin #2 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO2 0u
/* Indicates that pin #3 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO3 0u
/* Indicates that pin #4 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO4 0u
/* Indicates that pin #5 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO5 0u
/* Indicates that pin #6 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO6 0u
/* Indicates that pin #7 exists for this port with slew control feature */
#define IOSS_GPIO_GPIO_PORT_NR19_GPIO_PRT_SLOW_IO7 0u
/* Level Detector present */
#define IOSS_GPIO_LVL_DET_PRESENT       0u
/* Number of AMUX splitter cells */
#define IOSS_HSIOM_AMUX_SPLIT_NR        3u
/* Number of HSIOM ports in device */
#define IOSS_HSIOM_HSIOM_PORT_NR        20u
/* Number of PWR/GND MONITOR CELLs in the device */
#define IOSS_HSIOM_MONITOR_NR           15u
/* Number of PWR/GND MONITOR CELLs in range 0..31 */
#define IOSS_HSIOM_MONITOR_NR_0_31      15u
/* Number of PWR/GND MONITOR CELLs in range 32..63 */
#define IOSS_HSIOM_MONITOR_NR_32_63     0u
/* Number of PWR/GND MONITOR CELLs in range 64..95 */
#define IOSS_HSIOM_MONITOR_NR_64_95     0u
/* Number of PWR/GND MONITOR CELLs in range 96..127 */
#define IOSS_HSIOM_MONITOR_NR_96_127    0u
/* Indicates the presence of alternate JTAG interface */
#define IOSS_HSIOM_ALTJTAG_PRESENT      0u
/* Mask of SMARTIO instances presence */
#define IOSS_SMARTIO_SMARTIO_MASK       128u
/* Number of ports supoprting up to 4 COMs */
#define LCD_NUMPORTS                    5u
/* Number of ports supporting up to 8 COMs */
#define LCD_NUMPORTS8                   0u
/* Number of ports supporting up to 16 COMs */
#define LCD_NUMPORTS16                  0u
/* Max number of LCD commons supported */
#define LCD_CHIP_TOP_COM_NR             4u
/* Max number of LCD pins (total) supported */
#define LCD_CHIP_TOP_PIN_NR             36u
/* Number of LIN channels ([2, 32]). For test functionality (two channels are
   connected), the minimal number of LIN channels is 2. */
#define LIN_CH_NR                       2u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define LIN_MASTER_WIDTH                8u
/* Platform variant (0=ULL65, 1=MXS40S-ULP, 2=MXS40E, 3=M0S8, 4=MXS40S-HD) */
#define LIN_CHIP_TOP_PLATFORM_VARIANT   2u
/* Number of mixer source ({1, 2, 3, 4, 5, 6, 7, 8}]). */
#define MIXER_NR                        5u
/* I2S transmitter functionality. */
#define MIXER_TX_PRESENT                0u
/* Spare Enable 0=no spare, 1=max, 2=min */
#define MIXER_SPARE_EN                  1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define MIXER_MASTER_WIDTH              8u
/* Platform variant (0=ULL65, 1=MXS40S-ULP, 2=MXS40E, 3=M0S8, 4=MXS40S-HD) */
#define MIXER_PLATFORM_VARIANT          2u
/* RAM vendor (0=CYP, 1=SNPS, 2=ARM) */
#define MIXER_RAM_VEND                  2u
/* Number of SAR blocks */
#define PASS_SAR_ADC_NR                 1u
/* Number of ADC slices. Each slice will contain one SARMUX block and optionally a
   SAR and associated sequencer logic. */
#define PASS_SAR_SLICE_NR               2u
/* Number of MUX inputs (per SAR), must be 8, 16, 24, or 32 for each valid ADC
   slice. For ADC slices without a SAR, the mux connects to slice zero through
   the mux borrowing mechanism, performance is degraded. All connections from IO
   for a single mux must be on the same VDDIO domain */
#define PASS_SAR_SLICE_NR0_SAR_SAR_MUX_IN 24u
/* Is ADC is present on slice (1 = Yes, 0 = No). Calculated from SAR_ADC_NR such
   that lower numbered slices contain the ADCs that are present. */
#define PASS_SAR_SLICE_NR0_SAR_SAR_ADC_PRESENT 1u
/* Number of SAR sequencer channels (per SAR) */
#define PASS_SAR_SLICE_NR0_SAR_SAR_CHAN_NR 32u
/* Averaging logic present in SAR */
#define PASS_SAR_SLICE_NR0_SAR_SAR_AVERAGE 1u
/* Range detect logic present in SAR */
#define PASS_SAR_SLICE_NR0_SAR_SAR_RANGEDET 1u
/* Pulse detect logic present in SAR */
#define PASS_SAR_SLICE_NR0_SAR_SAR_PULSEDET 1u
/* Number of MUX inputs (per SAR), must be 8, 16, 24, or 32 for each valid ADC
   slice. For ADC slices without a SAR, the mux connects to slice zero through
   the mux borrowing mechanism, performance is degraded. All connections from IO
   for a single mux must be on the same VDDIO domain */
#define PASS_SAR_SLICE_NR1_SAR_SAR_MUX_IN 24u
/* Is ADC is present on slice (1 = Yes, 0 = No). Calculated from SAR_ADC_NR such
   that lower numbered slices contain the ADCs that are present. */
#define PASS_SAR_SLICE_NR1_SAR_SAR_ADC_PRESENT 0u
/* Number of SAR sequencer channels (per SAR) */
#define PASS_SAR_SLICE_NR1_SAR_SAR_CHAN_NR 0u
/* Averaging logic present in SAR */
#define PASS_SAR_SLICE_NR1_SAR_SAR_AVERAGE 0u
/* Range detect logic present in SAR */
#define PASS_SAR_SLICE_NR1_SAR_SAR_RANGEDET 0u
/* Pulse detect logic present in SAR */
#define PASS_SAR_SLICE_NR1_SAR_SAR_PULSEDET 0u
/* Parameter that is 1 for ADC0 only if ADC1 or, if SAR_SLICE_NR > SAR_ADC_NR */
#define PASS_SAR_SAR_ADC0               1u
/* The number of protection contexts ([2, 16]). */
#define PERI_PC_NR                      8u
/* Master interface presence mask (4 bits) */
#define PERI_MS_PRESENT                 15u
/* Protection structures SRAM ECC present or not ('0': no, '1': yes) */
#define PERI_ECC_PRESENT                1u
/* Protection structures SRAM address ECC present or not ('0': no, '1': yes) */
#define PERI_ECC_ADDR_PRESENT           1u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL1_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT0_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT1_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL1_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL2_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL3_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL4_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL5_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL6_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL7_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL8_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL9_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL10_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL11_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT2_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_CLOCK_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL1_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL2_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL3_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL4_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL5_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT3_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_CLOCK_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT4_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_CLOCK_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL1_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL2_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL3_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT5_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_CLOCK_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL1_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL2_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL3_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL4_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL5_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL6_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL7_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL8_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL9_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL10_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL11_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT6_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL0_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT7_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_CLOCK_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL1_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL2_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL3_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT8_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_CLOCK_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL0_PRESENT 1u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT9_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL0_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT10_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL0_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT11_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL0_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT12_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL0_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT13_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL0_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT14_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Clock control functionality present ('0': no, '1': yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_CLOCK_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL0_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL1_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL2_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL3_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL4_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL5_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL6_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL7_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL8_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL9_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL10_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL11_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL12_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL13_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL14_PRESENT 0u
/* Slave present (0:No, 1:Yes) */
#define PERI_GROUP_PRESENT15_PERI_GROUP_STRUCT_SL15_PRESENT 0u
/* Number of programmable clocks (outputs) */
#define PERI_CLOCK_NR                   86u
/* Number of 8.0 dividers */
#define PERI_DIV_8_NR                   11u
/* Number of 16.0 dividers */
#define PERI_DIV_16_NR                  16u
/* Number of 16.5 (fractional) dividers */
#define PERI_DIV_16_5_NR                4u
/* Number of 24.5 (fractional) dividers */
#define PERI_DIV_24_5_NR                11u
/* Divider number width: max(1,roundup(log2(max(DIV_*_NR))) */
#define PERI_DIV_ADDR_WIDTH             4u
/* Timeout functionality present ('0': no, '1': yes) */
#define PERI_TIMEOUT_PRESENT            1u
/* Trigger module present (0=No, 1=Yes) */
#define PERI_TR                         1u
/* Number of trigger groups */
#define PERI_TR_GROUP_NR                13u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR0_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR1_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR2_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR3_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR4_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR5_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR6_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR7_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR8_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR9_TR_GROUP_TR_MANIPULATION_PRESENT 1u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR10_TR_GROUP_TR_MANIPULATION_PRESENT 0u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR11_TR_GROUP_TR_MANIPULATION_PRESENT 0u
/* Trigger group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_GROUP_NR12_TR_GROUP_TR_MANIPULATION_PRESENT 0u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR0_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR1_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR2_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR3_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR4_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR5_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR6_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Trigger 1-to-1 group trigger manipulation logic present ('0': no, '1': yes) */
#define PERI_TR_1TO1_GROUP_NR7_TR_1TO1_GROUP_TR_1TO1_MANIPULATION_PRESENT 1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define PERI_MASTER_WIDTH               8u
/* Number of PWM structures ({1, 2, 3, 4, 5, 6, 7, 8}]). */
#define PWM_NR                          2u
/* Spare Enable 0=no spare, 1=max, 2=min */
#define PWM_SPARE_EN                    1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define PWM_MASTER_WIDTH                8u
/* Platform variant (0=ULL65, 1=MXS40S-ULP, 2=MXS40E, 3=M0S8, 4=MXS40S-HD) */
#define PWM_PLATFORM_VARIANT            2u
/* RAM vendor (0=CYP, 1=SNPS, 2=ARM) */
#define PWM_RAM_VEND                    2u
/* Number of connected clocks at the IP's top level ([1, 4]). */
#define PWM_CHIP_TOP_CLK_NR             3u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB0_DEEPSLEEP                  1u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB0_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB0_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB0_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB0_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB0_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB0_I2C_EC                     1u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB0_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB0_I2C_S_EC                   1u
/* SPI master support? ('0': no, '1': yes) */
#define SCB0_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB0_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB0_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB0_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB0_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB0_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB0_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB0_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB0_CMD_RESP                   1u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB0_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB0_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB0_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB0_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB0_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB0_CHIP_TOP_SPI_SEL_NR        4u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB0_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB1_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB1_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB1_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB1_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB1_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB1_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB1_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB1_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB1_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB1_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB1_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB1_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB1_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB1_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB1_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB1_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB1_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB1_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB1_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB1_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB1_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB1_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB1_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB1_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB1_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB2_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB2_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB2_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB2_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB2_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB2_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB2_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB2_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB2_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB2_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB2_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB2_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB2_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB2_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB2_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB2_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB2_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB2_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB2_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB2_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB2_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB2_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB2_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB2_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB2_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB3_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB3_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB3_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB3_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB3_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB3_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB3_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB3_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB3_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB3_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB3_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB3_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB3_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB3_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB3_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB3_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB3_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB3_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB3_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB3_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB3_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB3_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB3_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB3_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB3_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB4_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB4_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB4_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB4_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB4_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB4_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB4_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB4_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB4_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB4_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB4_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB4_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB4_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB4_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB4_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB4_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB4_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB4_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB4_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB4_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB4_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB4_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB4_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB4_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB4_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB5_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB5_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB5_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB5_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB5_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB5_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB5_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB5_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB5_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB5_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB5_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB5_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB5_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB5_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB5_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB5_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB5_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB5_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB5_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB5_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB5_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB5_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB5_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB5_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB5_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB6_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB6_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB6_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB6_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB6_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB6_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB6_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB6_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB6_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB6_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB6_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB6_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB6_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB6_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB6_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB6_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB6_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB6_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB6_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB6_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB6_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB6_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB6_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB6_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB6_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB7_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB7_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB7_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB7_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB7_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB7_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB7_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB7_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB7_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB7_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB7_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB7_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB7_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB7_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB7_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB7_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB7_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB7_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB7_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB7_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB7_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB7_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB7_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB7_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB7_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB8_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB8_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB8_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB8_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB8_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB8_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB8_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB8_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB8_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB8_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB8_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB8_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB8_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB8_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB8_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB8_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB8_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB8_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB8_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB8_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB8_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB8_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB8_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB8_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB8_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB9_DEEPSLEEP                  0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB9_EC                         1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB9_I2C_M                      1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB9_I2C_S                      1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB9_I2C_GLITCH                 1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB9_I2C                        1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB9_I2C_EC                     0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB9_I2C_M_S                    1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB9_I2C_S_EC                   0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB9_SPI_M                      1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB9_SPI_S                      1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB9_SPI                        1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB9_SPI_EC                     1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB9_SPI_S_EC                   1u
/* UART support? ('0': no, '1': yes) */
#define SCB9_UART                       1u
/* SPI or UART (SPI | UART) */
#define SCB9_SPI_UART                   1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB9_EZ_DATA_NR                 256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB9_CMD_RESP                   0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB9_EZ                         1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB9_EZ_CMD_RESP                1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB9_I2C_S_EZ                   1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB9_SPI_S_EZ                   1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB9_MASTER_WIDTH               8u
/* Number of used spi_select signals (max 4) */
#define SCB9_CHIP_TOP_SPI_SEL_NR        2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB9_CHIP_TOP_I2C_FAST_PLUS     1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB10_DEEPSLEEP                 0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB10_EC                        1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB10_I2C_M                     1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB10_I2C_S                     1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB10_I2C_GLITCH                1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB10_I2C                       1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB10_I2C_EC                    0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB10_I2C_M_S                   1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB10_I2C_S_EC                  0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB10_SPI_M                     1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB10_SPI_S                     1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB10_SPI                       1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB10_SPI_EC                    1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB10_SPI_S_EC                  1u
/* UART support? ('0': no, '1': yes) */
#define SCB10_UART                      1u
/* SPI or UART (SPI | UART) */
#define SCB10_SPI_UART                  1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB10_EZ_DATA_NR                256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB10_CMD_RESP                  0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB10_EZ                        1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB10_EZ_CMD_RESP               1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB10_I2C_S_EZ                  1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB10_SPI_S_EZ                  1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB10_MASTER_WIDTH              8u
/* Number of used spi_select signals (max 4) */
#define SCB10_CHIP_TOP_SPI_SEL_NR       2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB10_CHIP_TOP_I2C_FAST_PLUS    1u
/* DeepSleep support ('0':no, '1': yes) */
#define SCB11_DEEPSLEEP                 0u
/* Externally clocked support? ('0': no, '1': yes) */
#define SCB11_EC                        1u
/* I2C master support? ('0': no, '1': yes) */
#define SCB11_I2C_M                     1u
/* I2C slave support? ('0': no, '1': yes) */
#define SCB11_I2C_S                     1u
/* I2C glitch filters present? ('0': no, '1': yes) */
#define SCB11_I2C_GLITCH                1u
/* I2C support? (I2C_M | I2C_S) */
#define SCB11_I2C                       1u
/* I2C externally clocked support? ('0': no, '1': yes) */
#define SCB11_I2C_EC                    0u
/* I2C master and slave support? (I2C_M & I2C_S) */
#define SCB11_I2C_M_S                   1u
/* I2C slave with EC? (I2C_S & I2C_EC) */
#define SCB11_I2C_S_EC                  0u
/* SPI master support? ('0': no, '1': yes) */
#define SCB11_SPI_M                     1u
/* SPI slave support? ('0': no, '1': yes) */
#define SCB11_SPI_S                     1u
/* SPI support? (SPI_M | SPI_S) */
#define SCB11_SPI                       1u
/* SPI externally clocked support? ('0': no, '1': yes) */
#define SCB11_SPI_EC                    1u
/* SPI slave with EC? (SPI_S & SPI_EC) */
#define SCB11_SPI_S_EC                  1u
/* UART support? ('0': no, '1': yes) */
#define SCB11_UART                      1u
/* SPI or UART (SPI | UART) */
#define SCB11_SPI_UART                  1u
/* Number of EZ memory Bytes ([32, 256, 512]). This memory is used in EZ mode,
   CMD_RESP mode and FIFO mode. Note that in EZ mode, if EZ_DATA_NR is 512, only
   256 B are used. This is because the EZ mode uses 8-bit addresses. */
#define SCB11_EZ_DATA_NR                256u
/* Command/response mode support? ('0': no, '1': yes) */
#define SCB11_CMD_RESP                  0u
/* EZ mode support? ('0': no, '1': yes) */
#define SCB11_EZ                        1u
/* Command/response mode or EZ mode support? (CMD_RESP | EZ) */
#define SCB11_EZ_CMD_RESP               1u
/* I2C slave with EZ mode (I2C_S & EZ) */
#define SCB11_I2C_S_EZ                  1u
/* SPI slave with EZ mode (SPI_S & EZ) */
#define SCB11_SPI_S_EZ                  1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SCB11_MASTER_WIDTH              8u
/* Number of used spi_select signals (max 4) */
#define SCB11_CHIP_TOP_SPI_SEL_NR       2u
/* Support I2C FM+/1Mbps speed ('0': no, '1': yes) */
#define SCB11_CHIP_TOP_I2C_FAST_PLUS    1u
/* SONOS Flash is used or not ('0': no, '1': yes) */
#define SFLASH_FLASHC_IS_SONOS          0u
/* WOUND_PRESENT or not ('0': no, '1': yes) */
#define SFLASH_WOUND_PRESENT            1u
/* RAM_VEND_PRESENT or not ('0': no, '1': yes) */
#define SFLASH_RAM_VEND_PRESENT         1u
/* Number of sound generator structures ({1, 2, 3, 4, 5, 6, 7, 8}]). */
#define SG_NR                           5u
/* Spare Enable 0=no spare, 1=max, 2=min */
#define SG_SPARE_EN                     1u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SG_MASTER_WIDTH                 8u
/* Number of connected clocks at the IP's top level ([1, 4]). */
#define SG_CHIP_TOP_CLK_NR              3u
/* Slow AHB XIP cache is present ([0,1]). If SLOW_AHB_XIP_IF_PRESENT=0 then set
   this to 0 as well. */
#define SMIF_SLOW_CACHE_PRESENT         1u
/* Fast AHB XIP cache is present ([0,1]). If FAST_AHB_XIP_IF_PRESENT=0 then set
   this to 0 as well. */
#define SMIF_FAST_CACHE_PRESENT         1u
/* Base address of the SMIF XIP memory region. This address must be a multiple of
   the SMIF XIP memory capacity. This address must be a multiple of the SMIF XIP
   memory region capacity (see SMIP_XIP_MASK below). The SMIF XIP memory region
   should NOT overlap with other memory regions. This adress must be in the
   [0x0000:0000, 0xffff:0000] memory region. However, for MXS40 CM4 based
   platform variant, this address must be in the [0x0000:0000, 0x1fff:0000]
   memory region (to ensure a connection to the ARM CM4 CPU ICode/DCode memory
   region [0x0000:0000, 0x1fff:ffff]). The external memory devices are located
   within the SMIF XIP memory region. */
#define SMIF_SMIF_XIP_ADDR              402653184u
/* Capacity of the SMIF XIP memory region. The capacity must be a power of 2 and
   greater or equal than 64 KB). The more significant bits of this parameter are
   '1' and the lesser significant bits of this parameter are '0'. E.g.,
   0xfff0:0000 specifies a 1 MB memory region. Legal values are {0xffff:0000,
   0xfffe:0000, 0xfffc:0000, 0xfff8:0000, 0xfff0:0000, 0xffe0:0000, ...,
   0x8000:0000, 0x0000:0000}. */
#define SMIF_SMIF_XIP_MASK              4160749568u
/* Cryptography (AES) support. This is a 1-bit parameter: '0' = no support, '1' =
   support. */
#define SMIF_CRYPTO_PRESENT             1u
/* Number of cryptography keys [0,1,2,4,8]; set to 0 if CRYPTO=0 */
#define SMIF_CRYPTO_KEY_NR              4u
/* Hardcoded 8-bit parameter (do NOT override) that allows crypto key 0 to take on
   additional registers to support MMIO encryption */
#define SMIF_CRYPTO_KEY_MMIO_CAPABLE    1u
/* Bus CRC support is present ([0,1]) Note: In MXS40 SMIF version 2 this option is
   currently not available (BUS_CRC_PRESENT=0). Based on project schedules this
   feature may be added already to MXS40 SMIF version 2 or to a later SMIF
   version. */
#define SMIF_BUS_CRC_PRESENT            0u
/* Number of external memory devices supported. This parameter is in the range
   [1,4]. */
#define SMIF_DEVICE_NR                  2u
/* External memory devices write support. This is a 4-bit field. Each external
   memory device has a dedicated bit. E.g., if bit 2 is '1', external device 2
   has write support. */
#define SMIF_DEVICE_WR_EN               3u
/* Number of delay lines ([1..8]). */
#define SMIF_DELAY_LINES_NR             4u
/* Number of delay taps in clock delay line. */
#define SMIF_DELAY_TAPS_NR              32u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define SMIF_MASTER_WIDTH               8u
/* AXI ID width. Legal range [11,16] */
#define SMIF_AXIS_ID_WIDTH              13u
/* Number of Protection Contexts [1..8] for MPC; only valid when V2_PLATFORM=1 */
#define SMIF_PC_NR                      8u
/* Granularity of the MPC block size; 0: 32B, 1: 64B, ... 15: 1MB; only valid when
   V2_PLATFORM=1 */
#define SMIF_BLOCK_SIZE                 15u
/* Chip top connect all 8 data pins (0= connect 4 data pins, 1= connect 8 data
   pins) */
#define SMIF_CHIP_TOP_DATA8_PRESENT     1u
/* Number of used spi_select signals (max 4) */
#define SMIF_CHIP_TOP_SPI_SEL_NR        2u
/* ULP variant. Must be 1 when targeting S40S and 0 otherwise. */
#define SRSS_ULP_VARIANT                0u
/* HT variant. Must be 1 when targeting S40E and 0 otherwise. */
#define SRSS_HT_VARIANT                 1u
/* Number of regulator modules instantiated within SRSS. Must be > 0. */
#define SRSS_NUM_ACTREG_PWRMOD          3u
/* Number of shorting switches between vccd and vccact. Must be > 0. */
#define SRSS_NUM_ACTIVE_SWITCH          4u
/* ULP linear regulator system is present */
#define SRSS_ULPLINREG_PRESENT          0u
/* HT linear regulator system is present */
#define SRSS_HTLINREG_PRESENT           1u
/* SIMO buck core regulator is present. Only compatible with ULP linear regulator
   system (ULPLINREG_PRESENT==1). */
#define SRSS_SIMOBUCK_PRESENT           0u
/* Precision ILO (PILO) is present */
#define SRSS_PILO_PRESENT               0u
/* External Crystal Oscillator is present (high frequency) */
#define SRSS_ECO_PRESENT                1u
/* System Buck-Boost is present */
#define SRSS_SYSBB_PRESENT              0u
/* Number of additional HIBERNATE wakeup sources */
#define SRSS_NUM_HIB_WAKE               4u
/* Number of PWR_HIB_DATA registers. Min is zero. */
#define SRSS_NUM_HIBDATA                1u
/* Number of clock paths. Must be > 0. Recommend
   NUM_CLKPATH>=NUM_PLL+CSV_PRESENT+2. CSV and FLL requires special paths, and
   one extra is recommended for programming flexibility. */
#define SRSS_NUM_CLKPATH                6u
/* Number of PLLs present. Must be < NUM_CLKPATH */
#define SRSS_NUM_PLL                    2u
/* Number of HFCLK roots present. Must be > 0. Recommend NUM_HFROOT=<# chipwide
   roots>+CSV_PRESENT. */
#define SRSS_NUM_HFROOT                 7u
/* Number of DSI inputs into clock muxes. This is used for logic optimization.
   Must be > 0 */
#define SRSS_NUM_DSI                    0u
/* Alternate high-frequency clock is present. This is used for logic optimization. */
#define SRSS_ALTHF_PRESENT              0u
/* Alternate low-frequency clock is present. This is used for logic optimization. */
#define SRSS_ALTLF_PRESENT              0u
/* Backup domain is present. See VBCK_PRESENT for whether it is supplied by vddd
   or by an independent vbackup supply. */
#define SRSS_BACKUP_PRESENT             1u
/* CSV present. User must add one NUM_CLKPATH and one NUM_HFROOT to monitor ILO0
   with CSV_HF_REF clock. */
#define SRSS_CSV_PRESENT                1u
/* CSV_BAK is present. Monitors clk_bak_hv using clk_ilo0_hv. */
#define SRSS_CSV_BAK_PRESENT            1u
/* Number of multi-counter watchdog timers. Min is zero. */
#define SRSS_NUM_MCWDT                  2u
/* Use the hardened clkactfllmux block */
#define SRSS_USE_HARD_CLKACTFLLMUX      1u
/* Number of clock paths, including direct paths in hardened clkactfllmux block */
#define SRSS_HARD_CLKPATH               8u
/* Number of clock paths with muxes in hardened clkactfllmux block */
#define SRSS_HARD_CLKPATHMUX            8u
/* Number of HFCLKS present in hardened clkactfllmux block */
#define SRSS_HARD_HFROOT                8u
/* ECO mux is present in hardened clkactfllmux block */
#define SRSS_HARD_ECOMUX_PRESENT        1u
/* ALTHF mux is present in hardened clkactfllmux block */
#define SRSS_HARD_ALTHFMUX_PRESENT      1u
/* LPECO mux is present in hardened clkactfllmux block */
#define SRSS_HARD_LPECOMUX_PRESENT      1u
/* POR present. */
#define SRSS_POR_PRESENT                1u
/* Low-current buck regulator present. Can be derived from S40S_SISOBUCKLC_PRESENT
   or SIMOBUCK_PRESENT. */
#define SRSS_BUCKCTL_PRESENT            0u
/* Low-current SISO buck core regulator is present. Only compatible with ULP
   linear regulator system (ULPLINREG_PRESENT==1). */
#define SRSS_S40S_SISOBUCKLC_PRESENT    0u
/* HT linear regulator system is present */
#define SRSS_S40E_HTREGHC_PRESENT       0u
/* PMIC control of vccd is present (without REGHC). */
#define SRSS_S40E_PMIC_PRESENT          0u
/* Low power external crystal oscillator (LPECO) is present. */
#define SRSS_S40E_LPECO_PRESENT         1u
/* Number of 400MHz PLLs present. */
#define SRSS_NUM_PLL400M                1u
/* Number of 400MHz digital PLLs present. */
#define SRSS_NUM_DPLL400M               0u
/* Instantiates the DPLL400M after other PLLs. DPLL400M is recommended to be first
   so it can be used for TDF scan. This parameter is to allow putting a DPLL on
   an existing product for testing purposes, without affecting the
   customer-visible sources. */
#define SRSS_DPLL400M_LAST              1u
/* Total number of PLLs present. */
#define SRSS_NUM_TOTAL_PLL              3u
/* Mask of DIRECT_MUX defaults. For each clock root i, if bit[i] is low the
   DIRECT_MUX defaults to IMO. If bit[0] is high, the DIRECT_MUX selects the
   output of ROOT_MUX. For backward compatibility, M4 systems can have all mask
   bits high. BootROM needs either Bit0 high or a code change to pick predivider
   output before using the FLL. */
#define SRSS_MASK_DIRECTMUX_DEF         65535u
/* Mask of which HFCLK roots are enabled when the debugger requests power up
   (CDBGPWRUPREQ). For each clock root i, SRSS enables the clock in response to
   CDBGPWRUPREQ, if bit[i] of mask is high. SRSS automatically enables clk_hf0,
   regardless of setting of mask bit0. */
#define SRSS_MASK_DEBUG_CLK             65535u
/* Separate power supply Vbackup is present (only used when BACKUP_PRESENT==1) */
#define SRSS_BACKUP_VBCK_PRESENT        0u
/* Alarm1 present in RTC */
#define SRSS_BACKUP_ALM1_PRESENT        1u
/* Alarm2 present in RTC */
#define SRSS_BACKUP_ALM2_PRESENT        1u
/* CSV_BAK is present. Monitors clk_bak_hv using clk_ilo0_hv. */
#define SRSS_BACKUP_CSV_BAK_PRESENT     1u
/* Backup memory is present (only used when BACKUP_PRESENT==1) */
#define SRSS_BACKUP_BMEM_PRESENT        0u
/* Number of Backup registers to include (each is 32b). Only used when
   BACKUP_PRESENT==1. Approximate size is 850squm per register. */
#define SRSS_BACKUP_NUM_BREG            4u
/* Low power external crystal oscillator (LPECO) is present. */
#define SRSS_BACKUP_S40E_LPECO_PRESENT  1u
/* ULP variant. Must be 1 when targeting S40S and 0 otherwise. */
#define SRSS_CLK_TRIM_DPLL400M_ULP_VARIANT 0u
/* ULP variant. Must be 1 when targeting S40S and 0 otherwise. */
#define SRSS_CLK_TRIM_PLL400M_ULP_VARIANT 0u
/* Mask of HFCLK root clock supervisors (CSV). For each clock root i, bit[i] of
   mask indicates presence of a CSV. */
#define SRSS_CSV_HF_MASK_HFCSV          127u
/* Number of input triggers per counter only routed to one counter (0..8) */
#define TCPWM_TR_ONE_CNT_NR             1u
/* Number of input triggers routed to all counters (0..254),
   NR_TR_ONE_CNT+NR_TR_ALL CNT <= 254 */
#define TCPWM_TR_ALL_CNT_NR             60u
/* Number of TCPWM counter groups (1..4) */
#define TCPWM_GRP_NR                    3u
/* Counter width in number of bits per TCPWM group (16: 16-bits, 32: 32-bits) */
#define TCPWM_GRP_NR0_CNT_GRP_CNT_WIDTH 16u
/* Second Capture / Compare Unit is present (0, 1) */
#define TCPWM_GRP_NR0_CNT_GRP_CC1_PRESENT 1u
/* Advanced Motor Control features are present (0, 1). Should only be 1 when
   group_CC1_PRESENT = 1 */
#define TCPWM_GRP_NR0_CNT_GRP_AMC_PRESENT 0u
/* Stepper Motor Control features are present (0, 1). */
#define TCPWM_GRP_NR0_CNT_GRP_SMC_PRESENT 0u
/* Number of counters per TCPWM group (1..256) */
#define TCPWM_GRP_NR0_GRP_GRP_CNT_NR    34u
/* Counter width in number of bits per TCPWM group (16: 16-bits, 32: 32-bits) */
#define TCPWM_GRP_NR1_CNT_GRP_CNT_WIDTH 16u
/* Second Capture / Compare Unit is present (0, 1) */
#define TCPWM_GRP_NR1_CNT_GRP_CC1_PRESENT 1u
/* Advanced Motor Control features are present (0, 1). Should only be 1 when
   group_CC1_PRESENT = 1 */
#define TCPWM_GRP_NR1_CNT_GRP_AMC_PRESENT 1u
/* Stepper Motor Control features are present (0, 1). */
#define TCPWM_GRP_NR1_CNT_GRP_SMC_PRESENT 1u
/* Number of counters per TCPWM group (1..256) */
#define TCPWM_GRP_NR1_GRP_GRP_CNT_NR    12u
/* Counter width in number of bits per TCPWM group (16: 16-bits, 32: 32-bits) */
#define TCPWM_GRP_NR2_CNT_GRP_CNT_WIDTH 32u
/* Second Capture / Compare Unit is present (0, 1) */
#define TCPWM_GRP_NR2_CNT_GRP_CC1_PRESENT 1u
/* Advanced Motor Control features are present (0, 1). Should only be 1 when
   group_CC1_PRESENT = 1 */
#define TCPWM_GRP_NR2_CNT_GRP_AMC_PRESENT 0u
/* Stepper Motor Control features are present (0, 1). */
#define TCPWM_GRP_NR2_CNT_GRP_SMC_PRESENT 0u
/* Number of counters per TCPWM group (1..256) */
#define TCPWM_GRP_NR2_GRP_GRP_CNT_NR    16u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define TCPWM_MASTER_WIDTH              8u
/* Number of TDM structures ({1, 2, 3, 4}]). */
#define TDM_NR                          2u
/* Number of channels per TDM structure. */
#define TDM_NR0_CH_NR                   16u
/* Number of channels per TDM structure. */
#define TDM_NR0_TDM_RX_STRUCT_CH_NR     16u
/* Number of channels per TDM structure. */
#define TDM_NR0_TDM_TX_STRUCT_CH_NR     16u
/* Number of channels per TDM structure. */
#define TDM_NR1_CH_NR                   16u
/* Number of channels per TDM structure. */
#define TDM_NR1_TDM_RX_STRUCT_CH_NR     16u
/* Number of channels per TDM structure. */
#define TDM_NR1_TDM_TX_STRUCT_CH_NR     16u
/* Spare Enable 0=no spare, 1=max, 2=min */
#define TDM_SPARE_EN                    1u
/* Use mxsramwrap IP */
#define TDM_MXSRAMWRAP_EN               0u
/* Number of AHB-Lite "hmaster[]" bits ([1, 8]). */
#define TDM_MASTER_WIDTH                8u
/* Platform variant (0=ULL65, 1=MXS40S-ULP, 2=MXS40E, 3=M0S8, 4=MXS40S-HD) */
#define TDM_PLATFORM_VARIANT            2u
/* RAM vendor (0=CYP, 1=SNPS, 2=ARM) */
#define TDM_RAM_VEND                    2u
/* Number of connected clocks at the IP's top level ([1, 4]). */
#define TDM_CHIP_TOP_CLK_NR             3u
/* Replay functionality for transmitter. This functionality adds significant
   silicon area. */
#define TDM_TDM_TX_STRUCT_REPLAY_PRESENT 0u

/* MMIO Targets Defines */
#define CY_MMIO_CRYPTO_GROUP_NR         1u
#define CY_MMIO_CRYPTO_SLAVE_NR         0u
#define CY_MMIO_CPUSS_GROUP_NR          2u
#define CY_MMIO_CPUSS_SLAVE_NR          0u
#define CY_MMIO_FAULT_GROUP_NR          2u
#define CY_MMIO_FAULT_SLAVE_NR          1u
#define CY_MMIO_IPC_GROUP_NR            2u
#define CY_MMIO_IPC_SLAVE_NR            2u
#define CY_MMIO_PROT_GROUP_NR           2u
#define CY_MMIO_PROT_SLAVE_NR           3u
#define CY_MMIO_FLASHC_GROUP_NR         2u
#define CY_MMIO_FLASHC_SLAVE_NR         4u
#define CY_MMIO_SRSS_GROUP_NR           2u
#define CY_MMIO_SRSS_SLAVE_NR           5u
#define CY_MMIO_BACKUP_GROUP_NR         2u
#define CY_MMIO_BACKUP_SLAVE_NR         6u
#define CY_MMIO_DW_GROUP_NR             2u
#define CY_MMIO_DW_SLAVE_NR             7u
#define CY_MMIO_DMAC_GROUP_NR           2u
#define CY_MMIO_DMAC_SLAVE_NR           9u
#define CY_MMIO_EFUSE_GROUP_NR          2u
#define CY_MMIO_EFUSE_SLAVE_NR          10u
#define CY_MMIO_DFT_GROUP_NR            2u
#define CY_MMIO_DFT_SLAVE_NR            11u
#define CY_MMIO_HSIOM_GROUP_NR          3u
#define CY_MMIO_HSIOM_SLAVE_NR          0u
#define CY_MMIO_GPIO_GROUP_NR           3u
#define CY_MMIO_GPIO_SLAVE_NR           1u
#define CY_MMIO_SMARTIO_GROUP_NR        3u
#define CY_MMIO_SMARTIO_SLAVE_NR        2u
#define CY_MMIO_TCPWM0_GROUP_NR         3u
#define CY_MMIO_TCPWM0_SLAVE_NR         3u
#define CY_MMIO_LCD0_GROUP_NR           3u
#define CY_MMIO_LCD0_SLAVE_NR           4u
#define CY_MMIO_EVTGEN0_GROUP_NR        3u
#define CY_MMIO_EVTGEN0_SLAVE_NR        5u
#define CY_MMIO_SMIF0_GROUP_NR          4u
#define CY_MMIO_SMIF0_SLAVE_NR          0u
#define CY_MMIO_LIN0_GROUP_NR           5u
#define CY_MMIO_LIN0_SLAVE_NR           0u
#define CY_MMIO_CXPI0_GROUP_NR          5u
#define CY_MMIO_CXPI0_SLAVE_NR          1u
#define CY_MMIO_CANFD0_GROUP_NR         5u
#define CY_MMIO_CANFD0_SLAVE_NR         2u
#define CY_MMIO_CANFD1_GROUP_NR         5u
#define CY_MMIO_CANFD1_SLAVE_NR         3u
#define CY_MMIO_SCB0_GROUP_NR           6u
#define CY_MMIO_SCB0_SLAVE_NR           0u
#define CY_MMIO_SCB1_GROUP_NR           6u
#define CY_MMIO_SCB1_SLAVE_NR           1u
#define CY_MMIO_SCB2_GROUP_NR           6u
#define CY_MMIO_SCB2_SLAVE_NR           2u
#define CY_MMIO_SCB3_GROUP_NR           6u
#define CY_MMIO_SCB3_SLAVE_NR           3u
#define CY_MMIO_SCB4_GROUP_NR           6u
#define CY_MMIO_SCB4_SLAVE_NR           4u
#define CY_MMIO_SCB5_GROUP_NR           6u
#define CY_MMIO_SCB5_SLAVE_NR           5u
#define CY_MMIO_SCB6_GROUP_NR           6u
#define CY_MMIO_SCB6_SLAVE_NR           6u
#define CY_MMIO_SCB7_GROUP_NR           6u
#define CY_MMIO_SCB7_SLAVE_NR           7u
#define CY_MMIO_SCB8_GROUP_NR           6u
#define CY_MMIO_SCB8_SLAVE_NR           8u
#define CY_MMIO_SCB9_GROUP_NR           6u
#define CY_MMIO_SCB9_SLAVE_NR           9u
#define CY_MMIO_SCB10_GROUP_NR          6u
#define CY_MMIO_SCB10_SLAVE_NR          10u
#define CY_MMIO_SCB11_GROUP_NR          6u
#define CY_MMIO_SCB11_SLAVE_NR          11u
#define CY_MMIO_TDM0_GROUP_NR           8u
#define CY_MMIO_TDM0_SLAVE_NR           0u
#define CY_MMIO_SG0_GROUP_NR            8u
#define CY_MMIO_SG0_SLAVE_NR            1u
#define CY_MMIO_PWM0_GROUP_NR           8u
#define CY_MMIO_PWM0_SLAVE_NR           2u
#define CY_MMIO_MIXER0_GROUP_NR         8u
#define CY_MMIO_MIXER0_SLAVE_NR         3u
#define CY_MMIO_PASS0_GROUP_NR          9u
#define CY_MMIO_PASS0_SLAVE_NR          0u

/* Protection regions */
typedef enum
{
    PROT_PERI_MAIN                  =   0,      /* Address 0x40000000, size 0x00002000 */
    PROT_PERI_SECURE                =   1,      /* Address 0x40002000, size 0x00000004 */
    PROT_PERI_GR0_GROUP             =   2,      /* Address 0x40004010, size 0x00000004 */
    PROT_PERI_GR1_GROUP             =   3,      /* Address 0x40004030, size 0x00000004 */
    PROT_PERI_GR2_GROUP             =   4,      /* Address 0x40004050, size 0x00000004 */
    PROT_PERI_GR3_GROUP             =   5,      /* Address 0x40004060, size 0x00000020 */
    PROT_PERI_GR4_GROUP             =   6,      /* Address 0x40004080, size 0x00000020 */
    PROT_PERI_GR5_GROUP             =   7,      /* Address 0x400040a0, size 0x00000020 */
    PROT_PERI_GR6_GROUP             =   8,      /* Address 0x400040c0, size 0x00000020 */
    PROT_PERI_GR8_GROUP             =   9,      /* Address 0x40004100, size 0x00000020 */
    PROT_PERI_GR9_GROUP             =  10,      /* Address 0x40004120, size 0x00000020 */
    PROT_PERI_TR                    =  11,      /* Address 0x40008000, size 0x00008000 */
    PROT_CRYPTO_MAIN                =  12,      /* Address 0x40100000, size 0x00000400 */
    PROT_CRYPTO_CRYPTO              =  13,      /* Address 0x40101000, size 0x00000800 */
    PROT_CRYPTO_BOOT                =  14,      /* Address 0x40102000, size 0x00000100 */
    PROT_CRYPTO_KEY0                =  15,      /* Address 0x40102100, size 0x00000004 */
    PROT_CRYPTO_KEY1                =  16,      /* Address 0x40102120, size 0x00000004 */
    PROT_CRYPTO_BUF                 =  17,      /* Address 0x40108000, size 0x00002000 */
    PROT_CPUSS_CM4                  =  18,      /* Address 0x40200000, size 0x00000400 */
    PROT_CPUSS_CM0                  =  19,      /* Address 0x40201000, size 0x00001000 */
    PROT_CPUSS_BOOT                 =  20,      /* Address 0x40202000, size 0x00000200 */
    PROT_CPUSS_CM0_INT              =  21,      /* Address 0x40208000, size 0x00001000 */
    PROT_CPUSS_CM4_INT              =  22,      /* Address 0x4020a000, size 0x00001000 */
    PROT_FAULT_STRUCT0_MAIN         =  23,      /* Address 0x40210000, size 0x00000100 */
    PROT_FAULT_STRUCT1_MAIN         =  24,      /* Address 0x40210100, size 0x00000100 */
    PROT_FAULT_STRUCT2_MAIN         =  25,      /* Address 0x40210200, size 0x00000100 */
    PROT_FAULT_STRUCT3_MAIN         =  26,      /* Address 0x40210300, size 0x00000100 */
    PROT_IPC_STRUCT0_IPC            =  27,      /* Address 0x40220000, size 0x00000020 */
    PROT_IPC_STRUCT1_IPC            =  28,      /* Address 0x40220020, size 0x00000020 */
    PROT_IPC_STRUCT2_IPC            =  29,      /* Address 0x40220040, size 0x00000020 */
    PROT_IPC_STRUCT3_IPC            =  30,      /* Address 0x40220060, size 0x00000020 */
    PROT_IPC_STRUCT4_IPC            =  31,      /* Address 0x40220080, size 0x00000020 */
    PROT_IPC_STRUCT5_IPC            =  32,      /* Address 0x402200a0, size 0x00000020 */
    PROT_IPC_STRUCT6_IPC            =  33,      /* Address 0x402200c0, size 0x00000020 */
    PROT_IPC_STRUCT7_IPC            =  34,      /* Address 0x402200e0, size 0x00000020 */
    PROT_IPC_INTR_STRUCT0_INTR      =  35,      /* Address 0x40221000, size 0x00000010 */
    PROT_IPC_INTR_STRUCT1_INTR      =  36,      /* Address 0x40221020, size 0x00000010 */
    PROT_IPC_INTR_STRUCT2_INTR      =  37,      /* Address 0x40221040, size 0x00000010 */
    PROT_IPC_INTR_STRUCT3_INTR      =  38,      /* Address 0x40221060, size 0x00000010 */
    PROT_IPC_INTR_STRUCT4_INTR      =  39,      /* Address 0x40221080, size 0x00000010 */
    PROT_IPC_INTR_STRUCT5_INTR      =  40,      /* Address 0x402210a0, size 0x00000010 */
    PROT_IPC_INTR_STRUCT6_INTR      =  41,      /* Address 0x402210c0, size 0x00000010 */
    PROT_IPC_INTR_STRUCT7_INTR      =  42,      /* Address 0x402210e0, size 0x00000010 */
    PROT_PROT_SMPU_MAIN             =  43,      /* Address 0x40230000, size 0x00000040 */
    PROT_PROT_MPU0_MAIN             =  44,      /* Address 0x40234000, size 0x00000004 */
    PROT_PROT_MPU14_MAIN            =  45,      /* Address 0x40237800, size 0x00000004 */
    PROT_PROT_MPU15_MAIN            =  46,      /* Address 0x40237c00, size 0x00000400 */
    PROT_FLASHC_MAIN                =  47,      /* Address 0x40240000, size 0x00000008 */
    PROT_FLASHC_CMD                 =  48,      /* Address 0x40240008, size 0x00000004 */
    PROT_FLASHC_DFT                 =  49,      /* Address 0x40240200, size 0x00000100 */
    PROT_FLASHC_CM0                 =  50,      /* Address 0x40240400, size 0x00000080 */
    PROT_FLASHC_CM4                 =  51,      /* Address 0x40240480, size 0x00000080 */
    PROT_FLASHC_CRYPTO              =  52,      /* Address 0x40240500, size 0x00000004 */
    PROT_FLASHC_DW0                 =  53,      /* Address 0x40240580, size 0x00000004 */
    PROT_FLASHC_DW1                 =  54,      /* Address 0x40240600, size 0x00000004 */
    PROT_FLASHC_DMAC                =  55,      /* Address 0x40240680, size 0x00000004 */
    PROT_FLASHC_FlashMgmt           =  56,      /* Address 0x4024f000, size 0x00000080 */
    PROT_FLASHC_MainSafety          =  57,      /* Address 0x4024f400, size 0x00000008 */
    PROT_FLASHC_WorkSafety          =  58,      /* Address 0x4024f500, size 0x00000004 */
    PROT_SRSS_GENERAL               =  59,      /* Address 0x40260000, size 0x00000400 */
    PROT_SRSS_MAIN                  =  60,      /* Address 0x40261000, size 0x00001000 */
    PROT_SRSS_SECURE                =  61,      /* Address 0x40262000, size 0x00002000 */
    PROT_MCWDT0_CONFIG              =  62,      /* Address 0x40268000, size 0x00000080 */
    PROT_MCWDT1_CONFIG              =  63,      /* Address 0x40268100, size 0x00000080 */
    PROT_MCWDT0_MAIN                =  64,      /* Address 0x40268080, size 0x00000040 */
    PROT_MCWDT1_MAIN                =  65,      /* Address 0x40268180, size 0x00000040 */
    PROT_WDT_CONFIG                 =  66,      /* Address 0x4026c000, size 0x00000020 */
    PROT_WDT_MAIN                   =  67,      /* Address 0x4026c040, size 0x00000020 */
    PROT_BACKUP_BACKUP              =  68,      /* Address 0x40270000, size 0x00010000 */
    PROT_DW0_DW                     =  69,      /* Address 0x40280000, size 0x00000100 */
    PROT_DW1_DW                     =  70,      /* Address 0x40290000, size 0x00000100 */
    PROT_DW0_DW_CRC                 =  71,      /* Address 0x40280100, size 0x00000080 */
    PROT_DW1_DW_CRC                 =  72,      /* Address 0x40290100, size 0x00000080 */
    PROT_DW0_CH_STRUCT0_CH          =  73,      /* Address 0x40288000, size 0x00000040 */
    PROT_DW0_CH_STRUCT1_CH          =  74,      /* Address 0x40288040, size 0x00000040 */
    PROT_DW0_CH_STRUCT2_CH          =  75,      /* Address 0x40288080, size 0x00000040 */
    PROT_DW0_CH_STRUCT3_CH          =  76,      /* Address 0x402880c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT4_CH          =  77,      /* Address 0x40288100, size 0x00000040 */
    PROT_DW0_CH_STRUCT5_CH          =  78,      /* Address 0x40288140, size 0x00000040 */
    PROT_DW0_CH_STRUCT6_CH          =  79,      /* Address 0x40288180, size 0x00000040 */
    PROT_DW0_CH_STRUCT7_CH          =  80,      /* Address 0x402881c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT8_CH          =  81,      /* Address 0x40288200, size 0x00000040 */
    PROT_DW0_CH_STRUCT9_CH          =  82,      /* Address 0x40288240, size 0x00000040 */
    PROT_DW0_CH_STRUCT10_CH         =  83,      /* Address 0x40288280, size 0x00000040 */
    PROT_DW0_CH_STRUCT11_CH         =  84,      /* Address 0x402882c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT12_CH         =  85,      /* Address 0x40288300, size 0x00000040 */
    PROT_DW0_CH_STRUCT13_CH         =  86,      /* Address 0x40288340, size 0x00000040 */
    PROT_DW0_CH_STRUCT14_CH         =  87,      /* Address 0x40288380, size 0x00000040 */
    PROT_DW0_CH_STRUCT15_CH         =  88,      /* Address 0x402883c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT16_CH         =  89,      /* Address 0x40288400, size 0x00000040 */
    PROT_DW0_CH_STRUCT17_CH         =  90,      /* Address 0x40288440, size 0x00000040 */
    PROT_DW0_CH_STRUCT18_CH         =  91,      /* Address 0x40288480, size 0x00000040 */
    PROT_DW0_CH_STRUCT19_CH         =  92,      /* Address 0x402884c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT20_CH         =  93,      /* Address 0x40288500, size 0x00000040 */
    PROT_DW0_CH_STRUCT21_CH         =  94,      /* Address 0x40288540, size 0x00000040 */
    PROT_DW0_CH_STRUCT22_CH         =  95,      /* Address 0x40288580, size 0x00000040 */
    PROT_DW0_CH_STRUCT23_CH         =  96,      /* Address 0x402885c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT24_CH         =  97,      /* Address 0x40288600, size 0x00000040 */
    PROT_DW0_CH_STRUCT25_CH         =  98,      /* Address 0x40288640, size 0x00000040 */
    PROT_DW0_CH_STRUCT26_CH         =  99,      /* Address 0x40288680, size 0x00000040 */
    PROT_DW0_CH_STRUCT27_CH         = 100,      /* Address 0x402886c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT28_CH         = 101,      /* Address 0x40288700, size 0x00000040 */
    PROT_DW0_CH_STRUCT29_CH         = 102,      /* Address 0x40288740, size 0x00000040 */
    PROT_DW0_CH_STRUCT30_CH         = 103,      /* Address 0x40288780, size 0x00000040 */
    PROT_DW0_CH_STRUCT31_CH         = 104,      /* Address 0x402887c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT32_CH         = 105,      /* Address 0x40288800, size 0x00000040 */
    PROT_DW0_CH_STRUCT33_CH         = 106,      /* Address 0x40288840, size 0x00000040 */
    PROT_DW0_CH_STRUCT34_CH         = 107,      /* Address 0x40288880, size 0x00000040 */
    PROT_DW0_CH_STRUCT35_CH         = 108,      /* Address 0x402888c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT36_CH         = 109,      /* Address 0x40288900, size 0x00000040 */
    PROT_DW0_CH_STRUCT37_CH         = 110,      /* Address 0x40288940, size 0x00000040 */
    PROT_DW0_CH_STRUCT38_CH         = 111,      /* Address 0x40288980, size 0x00000040 */
    PROT_DW0_CH_STRUCT39_CH         = 112,      /* Address 0x402889c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT40_CH         = 113,      /* Address 0x40288a00, size 0x00000040 */
    PROT_DW0_CH_STRUCT41_CH         = 114,      /* Address 0x40288a40, size 0x00000040 */
    PROT_DW0_CH_STRUCT42_CH         = 115,      /* Address 0x40288a80, size 0x00000040 */
    PROT_DW0_CH_STRUCT43_CH         = 116,      /* Address 0x40288ac0, size 0x00000040 */
    PROT_DW0_CH_STRUCT44_CH         = 117,      /* Address 0x40288b00, size 0x00000040 */
    PROT_DW0_CH_STRUCT45_CH         = 118,      /* Address 0x40288b40, size 0x00000040 */
    PROT_DW0_CH_STRUCT46_CH         = 119,      /* Address 0x40288b80, size 0x00000040 */
    PROT_DW0_CH_STRUCT47_CH         = 120,      /* Address 0x40288bc0, size 0x00000040 */
    PROT_DW0_CH_STRUCT48_CH         = 121,      /* Address 0x40288c00, size 0x00000040 */
    PROT_DW0_CH_STRUCT49_CH         = 122,      /* Address 0x40288c40, size 0x00000040 */
    PROT_DW0_CH_STRUCT50_CH         = 123,      /* Address 0x40288c80, size 0x00000040 */
    PROT_DW0_CH_STRUCT51_CH         = 124,      /* Address 0x40288cc0, size 0x00000040 */
    PROT_DW0_CH_STRUCT52_CH         = 125,      /* Address 0x40288d00, size 0x00000040 */
    PROT_DW0_CH_STRUCT53_CH         = 126,      /* Address 0x40288d40, size 0x00000040 */
    PROT_DW0_CH_STRUCT54_CH         = 127,      /* Address 0x40288d80, size 0x00000040 */
    PROT_DW0_CH_STRUCT55_CH         = 128,      /* Address 0x40288dc0, size 0x00000040 */
    PROT_DW0_CH_STRUCT56_CH         = 129,      /* Address 0x40288e00, size 0x00000040 */
    PROT_DW0_CH_STRUCT57_CH         = 130,      /* Address 0x40288e40, size 0x00000040 */
    PROT_DW0_CH_STRUCT58_CH         = 131,      /* Address 0x40288e80, size 0x00000040 */
    PROT_DW0_CH_STRUCT59_CH         = 132,      /* Address 0x40288ec0, size 0x00000040 */
    PROT_DW0_CH_STRUCT60_CH         = 133,      /* Address 0x40288f00, size 0x00000040 */
    PROT_DW0_CH_STRUCT61_CH         = 134,      /* Address 0x40288f40, size 0x00000040 */
    PROT_DW0_CH_STRUCT62_CH         = 135,      /* Address 0x40288f80, size 0x00000040 */
    PROT_DW0_CH_STRUCT63_CH         = 136,      /* Address 0x40288fc0, size 0x00000040 */
    PROT_DW0_CH_STRUCT64_CH         = 137,      /* Address 0x40289000, size 0x00000040 */
    PROT_DW0_CH_STRUCT65_CH         = 138,      /* Address 0x40289040, size 0x00000040 */
    PROT_DW0_CH_STRUCT66_CH         = 139,      /* Address 0x40289080, size 0x00000040 */
    PROT_DW0_CH_STRUCT67_CH         = 140,      /* Address 0x402890c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT68_CH         = 141,      /* Address 0x40289100, size 0x00000040 */
    PROT_DW0_CH_STRUCT69_CH         = 142,      /* Address 0x40289140, size 0x00000040 */
    PROT_DW0_CH_STRUCT70_CH         = 143,      /* Address 0x40289180, size 0x00000040 */
    PROT_DW0_CH_STRUCT71_CH         = 144,      /* Address 0x402891c0, size 0x00000040 */
    PROT_DW0_CH_STRUCT72_CH         = 145,      /* Address 0x40289200, size 0x00000040 */
    PROT_DW0_CH_STRUCT73_CH         = 146,      /* Address 0x40289240, size 0x00000040 */
    PROT_DW0_CH_STRUCT74_CH         = 147,      /* Address 0x40289280, size 0x00000040 */
    PROT_DW0_CH_STRUCT75_CH         = 148,      /* Address 0x402892c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT0_CH          = 149,      /* Address 0x40298000, size 0x00000040 */
    PROT_DW1_CH_STRUCT1_CH          = 150,      /* Address 0x40298040, size 0x00000040 */
    PROT_DW1_CH_STRUCT2_CH          = 151,      /* Address 0x40298080, size 0x00000040 */
    PROT_DW1_CH_STRUCT3_CH          = 152,      /* Address 0x402980c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT4_CH          = 153,      /* Address 0x40298100, size 0x00000040 */
    PROT_DW1_CH_STRUCT5_CH          = 154,      /* Address 0x40298140, size 0x00000040 */
    PROT_DW1_CH_STRUCT6_CH          = 155,      /* Address 0x40298180, size 0x00000040 */
    PROT_DW1_CH_STRUCT7_CH          = 156,      /* Address 0x402981c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT8_CH          = 157,      /* Address 0x40298200, size 0x00000040 */
    PROT_DW1_CH_STRUCT9_CH          = 158,      /* Address 0x40298240, size 0x00000040 */
    PROT_DW1_CH_STRUCT10_CH         = 159,      /* Address 0x40298280, size 0x00000040 */
    PROT_DW1_CH_STRUCT11_CH         = 160,      /* Address 0x402982c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT12_CH         = 161,      /* Address 0x40298300, size 0x00000040 */
    PROT_DW1_CH_STRUCT13_CH         = 162,      /* Address 0x40298340, size 0x00000040 */
    PROT_DW1_CH_STRUCT14_CH         = 163,      /* Address 0x40298380, size 0x00000040 */
    PROT_DW1_CH_STRUCT15_CH         = 164,      /* Address 0x402983c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT16_CH         = 165,      /* Address 0x40298400, size 0x00000040 */
    PROT_DW1_CH_STRUCT17_CH         = 166,      /* Address 0x40298440, size 0x00000040 */
    PROT_DW1_CH_STRUCT18_CH         = 167,      /* Address 0x40298480, size 0x00000040 */
    PROT_DW1_CH_STRUCT19_CH         = 168,      /* Address 0x402984c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT20_CH         = 169,      /* Address 0x40298500, size 0x00000040 */
    PROT_DW1_CH_STRUCT21_CH         = 170,      /* Address 0x40298540, size 0x00000040 */
    PROT_DW1_CH_STRUCT22_CH         = 171,      /* Address 0x40298580, size 0x00000040 */
    PROT_DW1_CH_STRUCT23_CH         = 172,      /* Address 0x402985c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT24_CH         = 173,      /* Address 0x40298600, size 0x00000040 */
    PROT_DW1_CH_STRUCT25_CH         = 174,      /* Address 0x40298640, size 0x00000040 */
    PROT_DW1_CH_STRUCT26_CH         = 175,      /* Address 0x40298680, size 0x00000040 */
    PROT_DW1_CH_STRUCT27_CH         = 176,      /* Address 0x402986c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT28_CH         = 177,      /* Address 0x40298700, size 0x00000040 */
    PROT_DW1_CH_STRUCT29_CH         = 178,      /* Address 0x40298740, size 0x00000040 */
    PROT_DW1_CH_STRUCT30_CH         = 179,      /* Address 0x40298780, size 0x00000040 */
    PROT_DW1_CH_STRUCT31_CH         = 180,      /* Address 0x402987c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT32_CH         = 181,      /* Address 0x40298800, size 0x00000040 */
    PROT_DW1_CH_STRUCT33_CH         = 182,      /* Address 0x40298840, size 0x00000040 */
    PROT_DW1_CH_STRUCT34_CH         = 183,      /* Address 0x40298880, size 0x00000040 */
    PROT_DW1_CH_STRUCT35_CH         = 184,      /* Address 0x402988c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT36_CH         = 185,      /* Address 0x40298900, size 0x00000040 */
    PROT_DW1_CH_STRUCT37_CH         = 186,      /* Address 0x40298940, size 0x00000040 */
    PROT_DW1_CH_STRUCT38_CH         = 187,      /* Address 0x40298980, size 0x00000040 */
    PROT_DW1_CH_STRUCT39_CH         = 188,      /* Address 0x402989c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT40_CH         = 189,      /* Address 0x40298a00, size 0x00000040 */
    PROT_DW1_CH_STRUCT41_CH         = 190,      /* Address 0x40298a40, size 0x00000040 */
    PROT_DW1_CH_STRUCT42_CH         = 191,      /* Address 0x40298a80, size 0x00000040 */
    PROT_DW1_CH_STRUCT43_CH         = 192,      /* Address 0x40298ac0, size 0x00000040 */
    PROT_DW1_CH_STRUCT44_CH         = 193,      /* Address 0x40298b00, size 0x00000040 */
    PROT_DW1_CH_STRUCT45_CH         = 194,      /* Address 0x40298b40, size 0x00000040 */
    PROT_DW1_CH_STRUCT46_CH         = 195,      /* Address 0x40298b80, size 0x00000040 */
    PROT_DW1_CH_STRUCT47_CH         = 196,      /* Address 0x40298bc0, size 0x00000040 */
    PROT_DW1_CH_STRUCT48_CH         = 197,      /* Address 0x40298c00, size 0x00000040 */
    PROT_DW1_CH_STRUCT49_CH         = 198,      /* Address 0x40298c40, size 0x00000040 */
    PROT_DW1_CH_STRUCT50_CH         = 199,      /* Address 0x40298c80, size 0x00000040 */
    PROT_DW1_CH_STRUCT51_CH         = 200,      /* Address 0x40298cc0, size 0x00000040 */
    PROT_DW1_CH_STRUCT52_CH         = 201,      /* Address 0x40298d00, size 0x00000040 */
    PROT_DW1_CH_STRUCT53_CH         = 202,      /* Address 0x40298d40, size 0x00000040 */
    PROT_DW1_CH_STRUCT54_CH         = 203,      /* Address 0x40298d80, size 0x00000040 */
    PROT_DW1_CH_STRUCT55_CH         = 204,      /* Address 0x40298dc0, size 0x00000040 */
    PROT_DW1_CH_STRUCT56_CH         = 205,      /* Address 0x40298e00, size 0x00000040 */
    PROT_DW1_CH_STRUCT57_CH         = 206,      /* Address 0x40298e40, size 0x00000040 */
    PROT_DW1_CH_STRUCT58_CH         = 207,      /* Address 0x40298e80, size 0x00000040 */
    PROT_DW1_CH_STRUCT59_CH         = 208,      /* Address 0x40298ec0, size 0x00000040 */
    PROT_DW1_CH_STRUCT60_CH         = 209,      /* Address 0x40298f00, size 0x00000040 */
    PROT_DW1_CH_STRUCT61_CH         = 210,      /* Address 0x40298f40, size 0x00000040 */
    PROT_DW1_CH_STRUCT62_CH         = 211,      /* Address 0x40298f80, size 0x00000040 */
    PROT_DW1_CH_STRUCT63_CH         = 212,      /* Address 0x40298fc0, size 0x00000040 */
    PROT_DW1_CH_STRUCT64_CH         = 213,      /* Address 0x40299000, size 0x00000040 */
    PROT_DW1_CH_STRUCT65_CH         = 214,      /* Address 0x40299040, size 0x00000040 */
    PROT_DW1_CH_STRUCT66_CH         = 215,      /* Address 0x40299080, size 0x00000040 */
    PROT_DW1_CH_STRUCT67_CH         = 216,      /* Address 0x402990c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT68_CH         = 217,      /* Address 0x40299100, size 0x00000040 */
    PROT_DW1_CH_STRUCT69_CH         = 218,      /* Address 0x40299140, size 0x00000040 */
    PROT_DW1_CH_STRUCT70_CH         = 219,      /* Address 0x40299180, size 0x00000040 */
    PROT_DW1_CH_STRUCT71_CH         = 220,      /* Address 0x402991c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT72_CH         = 221,      /* Address 0x40299200, size 0x00000040 */
    PROT_DW1_CH_STRUCT73_CH         = 222,      /* Address 0x40299240, size 0x00000040 */
    PROT_DW1_CH_STRUCT74_CH         = 223,      /* Address 0x40299280, size 0x00000040 */
    PROT_DW1_CH_STRUCT75_CH         = 224,      /* Address 0x402992c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT76_CH         = 225,      /* Address 0x40299300, size 0x00000040 */
    PROT_DW1_CH_STRUCT77_CH         = 226,      /* Address 0x40299340, size 0x00000040 */
    PROT_DW1_CH_STRUCT78_CH         = 227,      /* Address 0x40299380, size 0x00000040 */
    PROT_DW1_CH_STRUCT79_CH         = 228,      /* Address 0x402993c0, size 0x00000040 */
    PROT_DW1_CH_STRUCT80_CH         = 229,      /* Address 0x40299400, size 0x00000040 */
    PROT_DW1_CH_STRUCT81_CH         = 230,      /* Address 0x40299440, size 0x00000040 */
    PROT_DW1_CH_STRUCT82_CH         = 231,      /* Address 0x40299480, size 0x00000040 */
    PROT_DW1_CH_STRUCT83_CH         = 232,      /* Address 0x402994c0, size 0x00000040 */
    PROT_DMAC_TOP                   = 233,      /* Address 0x402a0000, size 0x00000010 */
    PROT_DMAC_CH0_CH                = 234,      /* Address 0x402a1000, size 0x00000100 */
    PROT_DMAC_CH1_CH                = 235,      /* Address 0x402a1100, size 0x00000100 */
    PROT_DMAC_CH2_CH                = 236,      /* Address 0x402a1200, size 0x00000100 */
    PROT_DMAC_CH3_CH                = 237,      /* Address 0x402a1300, size 0x00000100 */
    PROT_EFUSE_CTL                  = 238,      /* Address 0x402c0000, size 0x00000200 */
    PROT_EFUSE_DATA                 = 239,      /* Address 0x402c0800, size 0x00000200 */
    PROT_BIST                       = 240,      /* Address 0x402f0000, size 0x00001000 */
    PROT_HSIOM_PRT0_PRT             = 241,      /* Address 0x40300000, size 0x00000008 */
    PROT_HSIOM_PRT1_PRT             = 242,      /* Address 0x40300010, size 0x00000008 */
    PROT_HSIOM_PRT2_PRT             = 243,      /* Address 0x40300020, size 0x00000008 */
    PROT_HSIOM_PRT3_PRT             = 244,      /* Address 0x40300030, size 0x00000008 */
    PROT_HSIOM_PRT4_PRT             = 245,      /* Address 0x40300040, size 0x00000008 */
    PROT_HSIOM_PRT5_PRT             = 246,      /* Address 0x40300050, size 0x00000008 */
    PROT_HSIOM_PRT6_PRT             = 247,      /* Address 0x40300060, size 0x00000008 */
    PROT_HSIOM_PRT7_PRT             = 248,      /* Address 0x40300070, size 0x00000008 */
    PROT_HSIOM_PRT8_PRT             = 249,      /* Address 0x40300080, size 0x00000008 */
    PROT_HSIOM_PRT9_PRT             = 250,      /* Address 0x40300090, size 0x00000008 */
    PROT_HSIOM_PRT10_PRT            = 251,      /* Address 0x403000a0, size 0x00000008 */
    PROT_HSIOM_PRT11_PRT            = 252,      /* Address 0x403000b0, size 0x00000008 */
    PROT_HSIOM_PRT12_PRT            = 253,      /* Address 0x403000c0, size 0x00000008 */
    PROT_HSIOM_PRT13_PRT            = 254,      /* Address 0x403000d0, size 0x00000008 */
    PROT_HSIOM_PRT14_PRT            = 255,      /* Address 0x403000e0, size 0x00000008 */
    PROT_HSIOM_PRT15_PRT            = 256,      /* Address 0x403000f0, size 0x00000008 */
    PROT_HSIOM_PRT16_PRT            = 257,      /* Address 0x40300100, size 0x00000008 */
    PROT_HSIOM_PRT17_PRT            = 258,      /* Address 0x40300110, size 0x00000008 */
    PROT_HSIOM_PRT18_PRT            = 259,      /* Address 0x40300120, size 0x00000008 */
    PROT_HSIOM_PRT19_PRT            = 260,      /* Address 0x40300130, size 0x00000008 */
    PROT_HSIOM_AMUX                 = 261,      /* Address 0x40302000, size 0x00000010 */
    PROT_HSIOM_MON                  = 262,      /* Address 0x40302200, size 0x00000010 */
    PROT_GPIO_PRT0_PRT              = 263,      /* Address 0x40310000, size 0x00000040 */
    PROT_GPIO_PRT1_PRT              = 264,      /* Address 0x40310080, size 0x00000040 */
    PROT_GPIO_PRT2_PRT              = 265,      /* Address 0x40310100, size 0x00000040 */
    PROT_GPIO_PRT3_PRT              = 266,      /* Address 0x40310180, size 0x00000040 */
    PROT_GPIO_PRT4_PRT              = 267,      /* Address 0x40310200, size 0x00000040 */
    PROT_GPIO_PRT5_PRT              = 268,      /* Address 0x40310280, size 0x00000040 */
    PROT_GPIO_PRT6_PRT              = 269,      /* Address 0x40310300, size 0x00000040 */
    PROT_GPIO_PRT7_PRT              = 270,      /* Address 0x40310380, size 0x00000040 */
    PROT_GPIO_PRT8_PRT              = 271,      /* Address 0x40310400, size 0x00000040 */
    PROT_GPIO_PRT9_PRT              = 272,      /* Address 0x40310480, size 0x00000040 */
    PROT_GPIO_PRT10_PRT             = 273,      /* Address 0x40310500, size 0x00000040 */
    PROT_GPIO_PRT11_PRT             = 274,      /* Address 0x40310580, size 0x00000040 */
    PROT_GPIO_PRT12_PRT             = 275,      /* Address 0x40310600, size 0x00000040 */
    PROT_GPIO_PRT13_PRT             = 276,      /* Address 0x40310680, size 0x00000040 */
    PROT_GPIO_PRT14_PRT             = 277,      /* Address 0x40310700, size 0x00000040 */
    PROT_GPIO_PRT15_PRT             = 278,      /* Address 0x40310780, size 0x00000040 */
    PROT_GPIO_PRT16_PRT             = 279,      /* Address 0x40310800, size 0x00000040 */
    PROT_GPIO_PRT17_PRT             = 280,      /* Address 0x40310880, size 0x00000040 */
    PROT_GPIO_PRT18_PRT             = 281,      /* Address 0x40310900, size 0x00000040 */
    PROT_GPIO_PRT19_PRT             = 282,      /* Address 0x40310980, size 0x00000040 */
    PROT_GPIO_PRT0_CFG              = 283,      /* Address 0x40310040, size 0x00000020 */
    PROT_GPIO_PRT1_CFG              = 284,      /* Address 0x403100c0, size 0x00000020 */
    PROT_GPIO_PRT2_CFG              = 285,      /* Address 0x40310140, size 0x00000020 */
    PROT_GPIO_PRT3_CFG              = 286,      /* Address 0x403101c0, size 0x00000020 */
    PROT_GPIO_PRT4_CFG              = 287,      /* Address 0x40310240, size 0x00000020 */
    PROT_GPIO_PRT5_CFG              = 288,      /* Address 0x403102c0, size 0x00000020 */
    PROT_GPIO_PRT6_CFG              = 289,      /* Address 0x40310340, size 0x00000020 */
    PROT_GPIO_PRT7_CFG              = 290,      /* Address 0x403103c0, size 0x00000020 */
    PROT_GPIO_PRT8_CFG              = 291,      /* Address 0x40310440, size 0x00000040 */
    PROT_GPIO_PRT9_CFG              = 292,      /* Address 0x403104c0, size 0x00000040 */
    PROT_GPIO_PRT10_CFG             = 293,      /* Address 0x40310540, size 0x00000020 */
    PROT_GPIO_PRT11_CFG             = 294,      /* Address 0x403105c0, size 0x00000020 */
    PROT_GPIO_PRT12_CFG             = 295,      /* Address 0x40310640, size 0x00000020 */
    PROT_GPIO_PRT13_CFG             = 296,      /* Address 0x403106c0, size 0x00000020 */
    PROT_GPIO_PRT14_CFG             = 297,      /* Address 0x40310740, size 0x00000020 */
    PROT_GPIO_PRT15_CFG             = 298,      /* Address 0x403107c0, size 0x00000020 */
    PROT_GPIO_PRT16_CFG             = 299,      /* Address 0x40310840, size 0x00000020 */
    PROT_GPIO_PRT17_CFG             = 300,      /* Address 0x403108c0, size 0x00000020 */
    PROT_GPIO_PRT18_CFG             = 301,      /* Address 0x40310940, size 0x00000020 */
    PROT_GPIO_PRT19_CFG             = 302,      /* Address 0x403109c0, size 0x00000020 */
    PROT_GPIO_GPIO                  = 303,      /* Address 0x40314000, size 0x00000040 */
    PROT_GPIO_TEST                  = 304,      /* Address 0x40315000, size 0x00000008 */
    PROT_SMARTIO_PRT7_PRT           = 305,      /* Address 0x40320700, size 0x00000100 */
    PROT_TCPWM0_GRP0_CNT0_CNT       = 306,      /* Address 0x40380000, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT1_CNT       = 307,      /* Address 0x40380080, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT2_CNT       = 308,      /* Address 0x40380100, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT3_CNT       = 309,      /* Address 0x40380180, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT4_CNT       = 310,      /* Address 0x40380200, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT5_CNT       = 311,      /* Address 0x40380280, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT6_CNT       = 312,      /* Address 0x40380300, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT7_CNT       = 313,      /* Address 0x40380380, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT8_CNT       = 314,      /* Address 0x40380400, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT9_CNT       = 315,      /* Address 0x40380480, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT10_CNT      = 316,      /* Address 0x40380500, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT11_CNT      = 317,      /* Address 0x40380580, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT12_CNT      = 318,      /* Address 0x40380600, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT13_CNT      = 319,      /* Address 0x40380680, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT14_CNT      = 320,      /* Address 0x40380700, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT15_CNT      = 321,      /* Address 0x40380780, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT16_CNT      = 322,      /* Address 0x40380800, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT17_CNT      = 323,      /* Address 0x40380880, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT18_CNT      = 324,      /* Address 0x40380900, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT19_CNT      = 325,      /* Address 0x40380980, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT20_CNT      = 326,      /* Address 0x40380a00, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT21_CNT      = 327,      /* Address 0x40380a80, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT22_CNT      = 328,      /* Address 0x40380b00, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT23_CNT      = 329,      /* Address 0x40380b80, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT24_CNT      = 330,      /* Address 0x40380c00, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT25_CNT      = 331,      /* Address 0x40380c80, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT26_CNT      = 332,      /* Address 0x40380d00, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT27_CNT      = 333,      /* Address 0x40380d80, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT28_CNT      = 334,      /* Address 0x40380e00, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT29_CNT      = 335,      /* Address 0x40380e80, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT30_CNT      = 336,      /* Address 0x40380f00, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT31_CNT      = 337,      /* Address 0x40380f80, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT32_CNT      = 338,      /* Address 0x40381000, size 0x00000080 */
    PROT_TCPWM0_GRP0_CNT33_CNT      = 339,      /* Address 0x40381080, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT0_CNT       = 340,      /* Address 0x40388000, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT1_CNT       = 341,      /* Address 0x40388080, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT2_CNT       = 342,      /* Address 0x40388100, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT3_CNT       = 343,      /* Address 0x40388180, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT4_CNT       = 344,      /* Address 0x40388200, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT5_CNT       = 345,      /* Address 0x40388280, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT6_CNT       = 346,      /* Address 0x40388300, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT7_CNT       = 347,      /* Address 0x40388380, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT8_CNT       = 348,      /* Address 0x40388400, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT9_CNT       = 349,      /* Address 0x40388480, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT10_CNT      = 350,      /* Address 0x40388500, size 0x00000080 */
    PROT_TCPWM0_GRP1_CNT11_CNT      = 351,      /* Address 0x40388580, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT0_CNT       = 352,      /* Address 0x40390000, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT1_CNT       = 353,      /* Address 0x40390080, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT2_CNT       = 354,      /* Address 0x40390100, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT3_CNT       = 355,      /* Address 0x40390180, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT4_CNT       = 356,      /* Address 0x40390200, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT5_CNT       = 357,      /* Address 0x40390280, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT6_CNT       = 358,      /* Address 0x40390300, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT7_CNT       = 359,      /* Address 0x40390380, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT8_CNT       = 360,      /* Address 0x40390400, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT9_CNT       = 361,      /* Address 0x40390480, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT10_CNT      = 362,      /* Address 0x40390500, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT11_CNT      = 363,      /* Address 0x40390580, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT12_CNT      = 364,      /* Address 0x40390600, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT13_CNT      = 365,      /* Address 0x40390680, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT14_CNT      = 366,      /* Address 0x40390700, size 0x00000080 */
    PROT_TCPWM0_GRP2_CNT15_CNT      = 367,      /* Address 0x40390780, size 0x00000080 */
    PROT_LCD0                       = 368,      /* Address 0x403b0000, size 0x00010000 */
    PROT_EVTGEN0                    = 369,      /* Address 0x403f0000, size 0x00001000 */
    PROT_SMIF0_MAIN                 = 370,      /* Address 0x40420000, size 0x00001000 */
    PROT_LIN0_MAIN                  = 371,      /* Address 0x40500000, size 0x00000008 */
    PROT_LIN0_CH0_CH                = 372,      /* Address 0x40508000, size 0x00000100 */
    PROT_LIN0_CH1_CH                = 373,      /* Address 0x40508100, size 0x00000100 */
    PROT_CXPI0_MAIN                 = 374,      /* Address 0x40510000, size 0x00000008 */
    PROT_CXPI0_CH0_CH               = 375,      /* Address 0x40518000, size 0x00000100 */
    PROT_CXPI0_CH1_CH               = 376,      /* Address 0x40518100, size 0x00000100 */
    PROT_CANFD0_CH0_CH              = 377,      /* Address 0x40520000, size 0x00000200 */
    PROT_CANFD0_CH1_CH              = 378,      /* Address 0x40520200, size 0x00000200 */
    PROT_CANFD1_CH0_CH              = 379,      /* Address 0x40540000, size 0x00000200 */
    PROT_CANFD1_CH1_CH              = 380,      /* Address 0x40540200, size 0x00000200 */
    PROT_CANFD0_MAIN                = 381,      /* Address 0x40521000, size 0x00000100 */
    PROT_CANFD1_MAIN                = 382,      /* Address 0x40541000, size 0x00000100 */
    PROT_CANFD0_BUF                 = 383,      /* Address 0x40530000, size 0x00010000 */
    PROT_CANFD1_BUF                 = 384,      /* Address 0x40550000, size 0x00010000 */
    PROT_SCB0                       = 385,      /* Address 0x40600000, size 0x00010000 */
    PROT_SCB1                       = 386,      /* Address 0x40610000, size 0x00010000 */
    PROT_SCB2                       = 387,      /* Address 0x40620000, size 0x00010000 */
    PROT_SCB3                       = 388,      /* Address 0x40630000, size 0x00010000 */
    PROT_SCB4                       = 389,      /* Address 0x40640000, size 0x00010000 */
    PROT_SCB5                       = 390,      /* Address 0x40650000, size 0x00010000 */
    PROT_SCB6                       = 391,      /* Address 0x40660000, size 0x00010000 */
    PROT_SCB7                       = 392,      /* Address 0x40670000, size 0x00010000 */
    PROT_SCB8                       = 393,      /* Address 0x40680000, size 0x00010000 */
    PROT_SCB9                       = 394,      /* Address 0x40690000, size 0x00010000 */
    PROT_SCB10                      = 395,      /* Address 0x406a0000, size 0x00010000 */
    PROT_SCB11                      = 396,      /* Address 0x406b0000, size 0x00010000 */
    PROT_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX = 397, /* Address 0x40818000, size 0x00000100 */
    PROT_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX = 398, /* Address 0x40818200, size 0x00000100 */
    PROT_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX = 399, /* Address 0x40818100, size 0x00000100 */
    PROT_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX = 400, /* Address 0x40818300, size 0x00000100 */
    PROT_SG0_SG_STRUCT0_TX          = 401,      /* Address 0x40828000, size 0x00000100 */
    PROT_SG0_SG_STRUCT1_TX          = 402,      /* Address 0x40828100, size 0x00000100 */
    PROT_SG0_SG_STRUCT2_TX          = 403,      /* Address 0x40828200, size 0x00000100 */
    PROT_SG0_SG_STRUCT3_TX          = 404,      /* Address 0x40828300, size 0x00000100 */
    PROT_SG0_SG_STRUCT4_TX          = 405,      /* Address 0x40828400, size 0x00000100 */
    PROT_PWM0_MAIN                  = 406,      /* Address 0x40830000, size 0x00000010 */
    PROT_PWM0_TX0_TX                = 407,      /* Address 0x40838000, size 0x00000100 */
    PROT_PWM0_TX1_TX                = 408,      /* Address 0x40838100, size 0x00000100 */
    PROT_MIXER0_MIXER_SRC_STRUCT0_SRC = 409,    /* Address 0x40888000, size 0x00000100 */
    PROT_MIXER0_MIXER_SRC_STRUCT1_SRC = 410,    /* Address 0x40888100, size 0x00000100 */
    PROT_MIXER0_MIXER_SRC_STRUCT2_SRC = 411,    /* Address 0x40888200, size 0x00000100 */
    PROT_MIXER0_MIXER_SRC_STRUCT3_SRC = 412,    /* Address 0x40888300, size 0x00000100 */
    PROT_MIXER0_MIXER_SRC_STRUCT4_SRC = 413,    /* Address 0x40888400, size 0x00000100 */
    PROT_MIXER0_MIXER_DST_STRUCT_DST = 414,     /* Address 0x4088c000, size 0x00000100 */
    PROT_PASS0_SAR0_SAR             = 415,      /* Address 0x40900000, size 0x00000400 */
    PROT_PASS0_SAR1_SAR             = 416,      /* Address 0x40901000, size 0x00000008 */
    PROT_PASS0_SAR0_CH0_CH          = 417,      /* Address 0x40900800, size 0x00000040 */
    PROT_PASS0_SAR0_CH1_CH          = 418,      /* Address 0x40900840, size 0x00000040 */
    PROT_PASS0_SAR0_CH2_CH          = 419,      /* Address 0x40900880, size 0x00000040 */
    PROT_PASS0_SAR0_CH3_CH          = 420,      /* Address 0x409008c0, size 0x00000040 */
    PROT_PASS0_SAR0_CH4_CH          = 421,      /* Address 0x40900900, size 0x00000040 */
    PROT_PASS0_SAR0_CH5_CH          = 422,      /* Address 0x40900940, size 0x00000040 */
    PROT_PASS0_SAR0_CH6_CH          = 423,      /* Address 0x40900980, size 0x00000040 */
    PROT_PASS0_SAR0_CH7_CH          = 424,      /* Address 0x409009c0, size 0x00000040 */
    PROT_PASS0_SAR0_CH8_CH          = 425,      /* Address 0x40900a00, size 0x00000040 */
    PROT_PASS0_SAR0_CH9_CH          = 426,      /* Address 0x40900a40, size 0x00000040 */
    PROT_PASS0_SAR0_CH10_CH         = 427,      /* Address 0x40900a80, size 0x00000040 */
    PROT_PASS0_SAR0_CH11_CH         = 428,      /* Address 0x40900ac0, size 0x00000040 */
    PROT_PASS0_SAR0_CH12_CH         = 429,      /* Address 0x40900b00, size 0x00000040 */
    PROT_PASS0_SAR0_CH13_CH         = 430,      /* Address 0x40900b40, size 0x00000040 */
    PROT_PASS0_SAR0_CH14_CH         = 431,      /* Address 0x40900b80, size 0x00000040 */
    PROT_PASS0_SAR0_CH15_CH         = 432,      /* Address 0x40900bc0, size 0x00000040 */
    PROT_PASS0_SAR0_CH16_CH         = 433,      /* Address 0x40900c00, size 0x00000040 */
    PROT_PASS0_SAR0_CH17_CH         = 434,      /* Address 0x40900c40, size 0x00000040 */
    PROT_PASS0_SAR0_CH18_CH         = 435,      /* Address 0x40900c80, size 0x00000040 */
    PROT_PASS0_SAR0_CH19_CH         = 436,      /* Address 0x40900cc0, size 0x00000040 */
    PROT_PASS0_SAR0_CH20_CH         = 437,      /* Address 0x40900d00, size 0x00000040 */
    PROT_PASS0_SAR0_CH21_CH         = 438,      /* Address 0x40900d40, size 0x00000040 */
    PROT_PASS0_SAR0_CH22_CH         = 439,      /* Address 0x40900d80, size 0x00000040 */
    PROT_PASS0_SAR0_CH23_CH         = 440,      /* Address 0x40900dc0, size 0x00000040 */
    PROT_PASS0_SAR0_CH24_CH         = 441,      /* Address 0x40900e00, size 0x00000040 */
    PROT_PASS0_SAR0_CH25_CH         = 442,      /* Address 0x40900e40, size 0x00000040 */
    PROT_PASS0_SAR0_CH26_CH         = 443,      /* Address 0x40900e80, size 0x00000040 */
    PROT_PASS0_SAR0_CH27_CH         = 444,      /* Address 0x40900ec0, size 0x00000040 */
    PROT_PASS0_SAR0_CH28_CH         = 445,      /* Address 0x40900f00, size 0x00000040 */
    PROT_PASS0_SAR0_CH29_CH         = 446,      /* Address 0x40900f40, size 0x00000040 */
    PROT_PASS0_SAR0_CH30_CH         = 447,      /* Address 0x40900f80, size 0x00000040 */
    PROT_PASS0_SAR0_CH31_CH         = 448,      /* Address 0x40900fc0, size 0x00000040 */
    PROT_PASS0_TOP                  = 449       /* Address 0x409f0000, size 0x00001000 */
} cy_en_prot_region_t;

#endif /* _CYT2CL_CONFIG_H_ */


/* [] END OF FILE */
