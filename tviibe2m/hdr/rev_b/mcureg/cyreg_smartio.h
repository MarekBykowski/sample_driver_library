/***************************************************************************//**
* \file cyreg_smartio.h
*
* \brief
* SMARTIO register definition header
*
* \note
* Generator version: 1.4.0.1268
* Database revision: TVIIBE2M_WW1921_A1_MTO
*
********************************************************************************
* \copyright
* Copyright 2016-2019, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _CYREG_SMARTIO_H_
#define _CYREG_SMARTIO_H_

#include "cyip_smartio_v2.h"

/**
  * \brief Programmable IO port registers (SMARTIO_PRT12)
  */
#define CYREG_SMARTIO_PRT12_CTL         ((volatile un_SMARTIO_PRT_CTL_t*) 0x40320C00UL)
#define CYREG_SMARTIO_PRT12_SYNC_CTL    ((volatile un_SMARTIO_PRT_SYNC_CTL_t*) 0x40320C10UL)
#define CYREG_SMARTIO_PRT12_LUT_SEL0    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C20UL)
#define CYREG_SMARTIO_PRT12_LUT_SEL1    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C24UL)
#define CYREG_SMARTIO_PRT12_LUT_SEL2    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C28UL)
#define CYREG_SMARTIO_PRT12_LUT_SEL3    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C2CUL)
#define CYREG_SMARTIO_PRT12_LUT_SEL4    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C30UL)
#define CYREG_SMARTIO_PRT12_LUT_SEL5    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C34UL)
#define CYREG_SMARTIO_PRT12_LUT_SEL6    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C38UL)
#define CYREG_SMARTIO_PRT12_LUT_SEL7    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320C3CUL)
#define CYREG_SMARTIO_PRT12_LUT_CTL0    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C40UL)
#define CYREG_SMARTIO_PRT12_LUT_CTL1    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C44UL)
#define CYREG_SMARTIO_PRT12_LUT_CTL2    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C48UL)
#define CYREG_SMARTIO_PRT12_LUT_CTL3    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C4CUL)
#define CYREG_SMARTIO_PRT12_LUT_CTL4    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C50UL)
#define CYREG_SMARTIO_PRT12_LUT_CTL5    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C54UL)
#define CYREG_SMARTIO_PRT12_LUT_CTL6    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C58UL)
#define CYREG_SMARTIO_PRT12_LUT_CTL7    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320C5CUL)
#define CYREG_SMARTIO_PRT12_DU_SEL      ((volatile un_SMARTIO_PRT_DU_SEL_t*) 0x40320CC0UL)
#define CYREG_SMARTIO_PRT12_DU_CTL      ((volatile un_SMARTIO_PRT_DU_CTL_t*) 0x40320CC4UL)
#define CYREG_SMARTIO_PRT12_DATA        ((volatile un_SMARTIO_PRT_DATA_t*) 0x40320CF0UL)

/**
  * \brief Programmable IO port registers (SMARTIO_PRT13)
  */
#define CYREG_SMARTIO_PRT13_CTL         ((volatile un_SMARTIO_PRT_CTL_t*) 0x40320D00UL)
#define CYREG_SMARTIO_PRT13_SYNC_CTL    ((volatile un_SMARTIO_PRT_SYNC_CTL_t*) 0x40320D10UL)
#define CYREG_SMARTIO_PRT13_LUT_SEL0    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D20UL)
#define CYREG_SMARTIO_PRT13_LUT_SEL1    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D24UL)
#define CYREG_SMARTIO_PRT13_LUT_SEL2    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D28UL)
#define CYREG_SMARTIO_PRT13_LUT_SEL3    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D2CUL)
#define CYREG_SMARTIO_PRT13_LUT_SEL4    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D30UL)
#define CYREG_SMARTIO_PRT13_LUT_SEL5    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D34UL)
#define CYREG_SMARTIO_PRT13_LUT_SEL6    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D38UL)
#define CYREG_SMARTIO_PRT13_LUT_SEL7    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320D3CUL)
#define CYREG_SMARTIO_PRT13_LUT_CTL0    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D40UL)
#define CYREG_SMARTIO_PRT13_LUT_CTL1    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D44UL)
#define CYREG_SMARTIO_PRT13_LUT_CTL2    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D48UL)
#define CYREG_SMARTIO_PRT13_LUT_CTL3    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D4CUL)
#define CYREG_SMARTIO_PRT13_LUT_CTL4    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D50UL)
#define CYREG_SMARTIO_PRT13_LUT_CTL5    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D54UL)
#define CYREG_SMARTIO_PRT13_LUT_CTL6    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D58UL)
#define CYREG_SMARTIO_PRT13_LUT_CTL7    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320D5CUL)
#define CYREG_SMARTIO_PRT13_DU_SEL      ((volatile un_SMARTIO_PRT_DU_SEL_t*) 0x40320DC0UL)
#define CYREG_SMARTIO_PRT13_DU_CTL      ((volatile un_SMARTIO_PRT_DU_CTL_t*) 0x40320DC4UL)
#define CYREG_SMARTIO_PRT13_DATA        ((volatile un_SMARTIO_PRT_DATA_t*) 0x40320DF0UL)

/**
  * \brief Programmable IO port registers (SMARTIO_PRT14)
  */
#define CYREG_SMARTIO_PRT14_CTL         ((volatile un_SMARTIO_PRT_CTL_t*) 0x40320E00UL)
#define CYREG_SMARTIO_PRT14_SYNC_CTL    ((volatile un_SMARTIO_PRT_SYNC_CTL_t*) 0x40320E10UL)
#define CYREG_SMARTIO_PRT14_LUT_SEL0    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E20UL)
#define CYREG_SMARTIO_PRT14_LUT_SEL1    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E24UL)
#define CYREG_SMARTIO_PRT14_LUT_SEL2    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E28UL)
#define CYREG_SMARTIO_PRT14_LUT_SEL3    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E2CUL)
#define CYREG_SMARTIO_PRT14_LUT_SEL4    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E30UL)
#define CYREG_SMARTIO_PRT14_LUT_SEL5    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E34UL)
#define CYREG_SMARTIO_PRT14_LUT_SEL6    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E38UL)
#define CYREG_SMARTIO_PRT14_LUT_SEL7    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320E3CUL)
#define CYREG_SMARTIO_PRT14_LUT_CTL0    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E40UL)
#define CYREG_SMARTIO_PRT14_LUT_CTL1    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E44UL)
#define CYREG_SMARTIO_PRT14_LUT_CTL2    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E48UL)
#define CYREG_SMARTIO_PRT14_LUT_CTL3    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E4CUL)
#define CYREG_SMARTIO_PRT14_LUT_CTL4    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E50UL)
#define CYREG_SMARTIO_PRT14_LUT_CTL5    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E54UL)
#define CYREG_SMARTIO_PRT14_LUT_CTL6    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E58UL)
#define CYREG_SMARTIO_PRT14_LUT_CTL7    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320E5CUL)
#define CYREG_SMARTIO_PRT14_DU_SEL      ((volatile un_SMARTIO_PRT_DU_SEL_t*) 0x40320EC0UL)
#define CYREG_SMARTIO_PRT14_DU_CTL      ((volatile un_SMARTIO_PRT_DU_CTL_t*) 0x40320EC4UL)
#define CYREG_SMARTIO_PRT14_DATA        ((volatile un_SMARTIO_PRT_DATA_t*) 0x40320EF0UL)

/**
  * \brief Programmable IO port registers (SMARTIO_PRT15)
  */
#define CYREG_SMARTIO_PRT15_CTL         ((volatile un_SMARTIO_PRT_CTL_t*) 0x40320F00UL)
#define CYREG_SMARTIO_PRT15_SYNC_CTL    ((volatile un_SMARTIO_PRT_SYNC_CTL_t*) 0x40320F10UL)
#define CYREG_SMARTIO_PRT15_LUT_SEL0    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F20UL)
#define CYREG_SMARTIO_PRT15_LUT_SEL1    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F24UL)
#define CYREG_SMARTIO_PRT15_LUT_SEL2    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F28UL)
#define CYREG_SMARTIO_PRT15_LUT_SEL3    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F2CUL)
#define CYREG_SMARTIO_PRT15_LUT_SEL4    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F30UL)
#define CYREG_SMARTIO_PRT15_LUT_SEL5    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F34UL)
#define CYREG_SMARTIO_PRT15_LUT_SEL6    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F38UL)
#define CYREG_SMARTIO_PRT15_LUT_SEL7    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40320F3CUL)
#define CYREG_SMARTIO_PRT15_LUT_CTL0    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F40UL)
#define CYREG_SMARTIO_PRT15_LUT_CTL1    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F44UL)
#define CYREG_SMARTIO_PRT15_LUT_CTL2    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F48UL)
#define CYREG_SMARTIO_PRT15_LUT_CTL3    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F4CUL)
#define CYREG_SMARTIO_PRT15_LUT_CTL4    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F50UL)
#define CYREG_SMARTIO_PRT15_LUT_CTL5    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F54UL)
#define CYREG_SMARTIO_PRT15_LUT_CTL6    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F58UL)
#define CYREG_SMARTIO_PRT15_LUT_CTL7    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40320F5CUL)
#define CYREG_SMARTIO_PRT15_DU_SEL      ((volatile un_SMARTIO_PRT_DU_SEL_t*) 0x40320FC0UL)
#define CYREG_SMARTIO_PRT15_DU_CTL      ((volatile un_SMARTIO_PRT_DU_CTL_t*) 0x40320FC4UL)
#define CYREG_SMARTIO_PRT15_DATA        ((volatile un_SMARTIO_PRT_DATA_t*) 0x40320FF0UL)

/**
  * \brief Programmable IO port registers (SMARTIO_PRT17)
  */
#define CYREG_SMARTIO_PRT17_CTL         ((volatile un_SMARTIO_PRT_CTL_t*) 0x40321100UL)
#define CYREG_SMARTIO_PRT17_SYNC_CTL    ((volatile un_SMARTIO_PRT_SYNC_CTL_t*) 0x40321110UL)
#define CYREG_SMARTIO_PRT17_LUT_SEL0    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40321120UL)
#define CYREG_SMARTIO_PRT17_LUT_SEL1    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40321124UL)
#define CYREG_SMARTIO_PRT17_LUT_SEL2    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40321128UL)
#define CYREG_SMARTIO_PRT17_LUT_SEL3    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x4032112CUL)
#define CYREG_SMARTIO_PRT17_LUT_SEL4    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40321130UL)
#define CYREG_SMARTIO_PRT17_LUT_SEL5    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40321134UL)
#define CYREG_SMARTIO_PRT17_LUT_SEL6    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x40321138UL)
#define CYREG_SMARTIO_PRT17_LUT_SEL7    ((volatile un_SMARTIO_PRT_LUT_SEL_t*) 0x4032113CUL)
#define CYREG_SMARTIO_PRT17_LUT_CTL0    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40321140UL)
#define CYREG_SMARTIO_PRT17_LUT_CTL1    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40321144UL)
#define CYREG_SMARTIO_PRT17_LUT_CTL2    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40321148UL)
#define CYREG_SMARTIO_PRT17_LUT_CTL3    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x4032114CUL)
#define CYREG_SMARTIO_PRT17_LUT_CTL4    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40321150UL)
#define CYREG_SMARTIO_PRT17_LUT_CTL5    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40321154UL)
#define CYREG_SMARTIO_PRT17_LUT_CTL6    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x40321158UL)
#define CYREG_SMARTIO_PRT17_LUT_CTL7    ((volatile un_SMARTIO_PRT_LUT_CTL_t*) 0x4032115CUL)
#define CYREG_SMARTIO_PRT17_DU_SEL      ((volatile un_SMARTIO_PRT_DU_SEL_t*) 0x403211C0UL)
#define CYREG_SMARTIO_PRT17_DU_CTL      ((volatile un_SMARTIO_PRT_DU_CTL_t*) 0x403211C4UL)
#define CYREG_SMARTIO_PRT17_DATA        ((volatile un_SMARTIO_PRT_DATA_t*) 0x403211F0UL)

#endif /* _CYREG_SMARTIO_H_ */


/* [] END OF FILE */
