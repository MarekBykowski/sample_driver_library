/***************************************************************************//**
* \file cyreg_peri_pclk.h
*
* \brief
* PERI_PCLK register definition header
*
* \note
* Generator version: 1.6.0.453
* Database revision: TVIIC2D6M_B0CFR_MTO
*
********************************************************************************
* \copyright
* Copyright 2016-2021, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _CYREG_PERI_PCLK_H_
#define _CYREG_PERI_PCLK_H_

#include "cyip_peri_pclk_v3.h"

/**
  * \brief PERI clock domains (PERI_PCLK_GR0)
  */
#define CYREG_PERI_PCLK_GR0_DIV_CMD     ((volatile un_PERI_PCLK_GR_DIV_CMD_t*) 0x40040000UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL0  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C00UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL1  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C04UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL2  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C08UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL3  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C0CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL4  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C10UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL5  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C14UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL6  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C18UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL7  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C1CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL8  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C20UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL9  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C24UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL10 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C28UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL11 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C2CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL12 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C30UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL13 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C34UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL14 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C38UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL15 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C3CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL16 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C40UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL17 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C44UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL18 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C48UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL19 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C4CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL20 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C50UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL21 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C54UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL22 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C58UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL23 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C5CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL24 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C60UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL25 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C64UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL26 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C68UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL27 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C6CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL28 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C70UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL29 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C74UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL30 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C78UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL31 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C7CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL32 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C80UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL33 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C84UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL34 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C88UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL35 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C8CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL36 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C90UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL37 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C94UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL38 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C98UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL39 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040C9CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL40 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CA0UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL41 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CA4UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL42 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CA8UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL43 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CACUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL44 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CB0UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL45 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CB4UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL46 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CB8UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL47 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CBCUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL48 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CC0UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL49 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CC4UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL50 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CC8UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL51 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CCCUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL52 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CD0UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL53 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CD4UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL54 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CD8UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL55 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CDCUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL56 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CE0UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL57 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CE4UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL58 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CE8UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL59 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CECUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL60 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CF0UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL61 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CF4UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL62 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CF8UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL63 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040CFCUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL64 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D00UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL65 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D04UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL66 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D08UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL67 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D0CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL68 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D10UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL69 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D14UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL70 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D18UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL71 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D1CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL72 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D20UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL73 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D24UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL74 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D28UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL75 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D2CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL76 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D30UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL77 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D34UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL78 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D38UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL79 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D3CUL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL80 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D40UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL81 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D44UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL82 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D48UL)
#define CYREG_PERI_PCLK_GR0_CLOCK_CTL83 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40040D4CUL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL0  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40041000UL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL1  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40041004UL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL2  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40041008UL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL3  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x4004100CUL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL4  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40041010UL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL5  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40041014UL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL6  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40041018UL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL7  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x4004101CUL)
#define CYREG_PERI_PCLK_GR0_DIV_8_CTL8  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40041020UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL0 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041400UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL1 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041404UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL2 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041408UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL3 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x4004140CUL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL4 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041410UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL5 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041414UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL6 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041418UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL7 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x4004141CUL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL8 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041420UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL9 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041424UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL10 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041428UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL11 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x4004142CUL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL12 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041430UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL13 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041434UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL14 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40041438UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_CTL15 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x4004143CUL)
#define CYREG_PERI_PCLK_GR0_DIV_16_5_CTL0 ((volatile un_PERI_PCLK_GR_DIV_16_5_CTL_t*) 0x40041800UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_5_CTL1 ((volatile un_PERI_PCLK_GR_DIV_16_5_CTL_t*) 0x40041804UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_5_CTL2 ((volatile un_PERI_PCLK_GR_DIV_16_5_CTL_t*) 0x40041808UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_5_CTL3 ((volatile un_PERI_PCLK_GR_DIV_16_5_CTL_t*) 0x4004180CUL)
#define CYREG_PERI_PCLK_GR0_DIV_16_5_CTL4 ((volatile un_PERI_PCLK_GR_DIV_16_5_CTL_t*) 0x40041810UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_5_CTL5 ((volatile un_PERI_PCLK_GR_DIV_16_5_CTL_t*) 0x40041814UL)
#define CYREG_PERI_PCLK_GR0_DIV_16_5_CTL6 ((volatile un_PERI_PCLK_GR_DIV_16_5_CTL_t*) 0x40041818UL)
#define CYREG_PERI_PCLK_GR0_DIV_24_5_CTL0 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40041C00UL)
#define CYREG_PERI_PCLK_GR0_DIV_24_5_CTL1 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40041C04UL)
#define CYREG_PERI_PCLK_GR0_DIV_24_5_CTL2 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40041C08UL)

/**
  * \brief PERI clock domains (PERI_PCLK_GR1)
  */
#define CYREG_PERI_PCLK_GR1_DIV_CMD     ((volatile un_PERI_PCLK_GR_DIV_CMD_t*) 0x40042000UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL0  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C00UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL1  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C04UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL2  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C08UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL3  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C0CUL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL4  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C10UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL5  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C14UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL6  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C18UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL7  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C1CUL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL8  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C20UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL9  ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C24UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL10 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C28UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL11 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C2CUL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL12 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C30UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL13 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C34UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL14 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C38UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL15 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C3CUL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL16 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C40UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL17 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C44UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL18 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C48UL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL19 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C4CUL)
#define CYREG_PERI_PCLK_GR1_CLOCK_CTL20 ((volatile un_PERI_PCLK_GR_CLOCK_CTL_t*) 0x40042C50UL)
#define CYREG_PERI_PCLK_GR1_DIV_8_CTL0  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40043000UL)
#define CYREG_PERI_PCLK_GR1_DIV_8_CTL1  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40043004UL)
#define CYREG_PERI_PCLK_GR1_DIV_8_CTL2  ((volatile un_PERI_PCLK_GR_DIV_8_CTL_t*) 0x40043008UL)
#define CYREG_PERI_PCLK_GR1_DIV_16_CTL0 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40043400UL)
#define CYREG_PERI_PCLK_GR1_DIV_16_CTL1 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40043404UL)
#define CYREG_PERI_PCLK_GR1_DIV_16_CTL2 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x40043408UL)
#define CYREG_PERI_PCLK_GR1_DIV_16_CTL3 ((volatile un_PERI_PCLK_GR_DIV_16_CTL_t*) 0x4004340CUL)
#define CYREG_PERI_PCLK_GR1_DIV_24_5_CTL0 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40043C00UL)
#define CYREG_PERI_PCLK_GR1_DIV_24_5_CTL1 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40043C04UL)
#define CYREG_PERI_PCLK_GR1_DIV_24_5_CTL2 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40043C08UL)
#define CYREG_PERI_PCLK_GR1_DIV_24_5_CTL3 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40043C0CUL)
#define CYREG_PERI_PCLK_GR1_DIV_24_5_CTL4 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40043C10UL)
#define CYREG_PERI_PCLK_GR1_DIV_24_5_CTL5 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40043C14UL)
#define CYREG_PERI_PCLK_GR1_DIV_24_5_CTL6 ((volatile un_PERI_PCLK_GR_DIV_24_5_CTL_t*) 0x40043C18UL)

#endif /* _CYREG_PERI_PCLK_H_ */


/* [] END OF FILE */
