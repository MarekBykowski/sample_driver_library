/***************************************************************************//**
* \file cyreg_tdm.h
*
* \brief
* TDM register definition header
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

#ifndef _CYREG_TDM_H_
#define _CYREG_TDM_H_

#include "cyip_tdm.h"

/**
  * \brief TDM TX structure (TDM_TDM_STRUCT_TDM_TX_STRUCT0)
  */
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_CTL_t*) 0x40818000UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_IF_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_IF_CTL_t*) 0x40818010UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_CH_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_CH_CTL_t*) 0x40818014UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_TEST_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_TEST_CTL_t*) 0x40818020UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_ROUTE_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_ROUTE_CTL_t*) 0x40818024UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_FIFO_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_FIFO_CTL_t*) 0x40818080UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_FIFO_STATUS ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_FIFO_STATUS_t*) 0x40818084UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_TX_FIFO_WR ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_FIFO_WR_t*) 0x40818088UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_INTR_TX ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_t*) 0x408180C0UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_INTR_TX_SET ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_SET_t*) 0x408180C4UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_INTR_TX_MASK ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_MASK_t*) 0x408180C8UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_TX_STRUCT_INTR_TX_MASKED ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_MASKED_t*) 0x408180CCUL)

/**
  * \brief TDM RX structure (TDM_TDM_STRUCT_TDM_RX_STRUCT0)
  */
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_CTL_t*) 0x40818100UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_IF_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_IF_CTL_t*) 0x40818110UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_CH_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_CH_CTL_t*) 0x40818114UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_TEST_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_TEST_CTL_t*) 0x40818120UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_ROUTE_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_ROUTE_CTL_t*) 0x40818124UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_FIFO_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_CTL_t*) 0x40818180UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_FIFO_STATUS ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_STATUS_t*) 0x40818184UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_FIFO_RD ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_RD_t*) 0x40818188UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_RX_FIFO_RD_SILENT ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_RD_SILENT_t*) 0x4081818CUL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_INTR_RX ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_t*) 0x408181C0UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_INTR_RX_SET ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_SET_t*) 0x408181C4UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_INTR_RX_MASK ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_MASK_t*) 0x408181C8UL)
#define CYREG_TDM0_TDM_STRUCT0_TDM_RX_STRUCT_INTR_RX_MASKED ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_MASKED_t*) 0x408181CCUL)

/**
  * \brief TDM TX structure (TDM_TDM_STRUCT_TDM_TX_STRUCT0)
  */
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_CTL_t*) 0x40818200UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_IF_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_IF_CTL_t*) 0x40818210UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_CH_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_CH_CTL_t*) 0x40818214UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_TEST_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_TEST_CTL_t*) 0x40818220UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_ROUTE_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_ROUTE_CTL_t*) 0x40818224UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_FIFO_CTL ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_FIFO_CTL_t*) 0x40818280UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_FIFO_STATUS ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_FIFO_STATUS_t*) 0x40818284UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_TX_FIFO_WR ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_TX_FIFO_WR_t*) 0x40818288UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_INTR_TX ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_t*) 0x408182C0UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_INTR_TX_SET ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_SET_t*) 0x408182C4UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_INTR_TX_MASK ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_MASK_t*) 0x408182C8UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_TX_STRUCT_INTR_TX_MASKED ((volatile un_TDM_TDM_STRUCT_TDM_TX_STRUCT_INTR_TX_MASKED_t*) 0x408182CCUL)

/**
  * \brief TDM RX structure (TDM_TDM_STRUCT_TDM_RX_STRUCT0)
  */
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_CTL_t*) 0x40818300UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_IF_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_IF_CTL_t*) 0x40818310UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_CH_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_CH_CTL_t*) 0x40818314UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_TEST_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_TEST_CTL_t*) 0x40818320UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_ROUTE_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_ROUTE_CTL_t*) 0x40818324UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_FIFO_CTL ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_CTL_t*) 0x40818380UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_FIFO_STATUS ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_STATUS_t*) 0x40818384UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_FIFO_RD ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_RD_t*) 0x40818388UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_RX_FIFO_RD_SILENT ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_RX_FIFO_RD_SILENT_t*) 0x4081838CUL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_INTR_RX ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_t*) 0x408183C0UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_INTR_RX_SET ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_SET_t*) 0x408183C4UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_INTR_RX_MASK ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_MASK_t*) 0x408183C8UL)
#define CYREG_TDM0_TDM_STRUCT1_TDM_RX_STRUCT_INTR_RX_MASKED ((volatile un_TDM_TDM_STRUCT_TDM_RX_STRUCT_INTR_RX_MASKED_t*) 0x408183CCUL)

#endif /* _CYREG_TDM_H_ */


/* [] END OF FILE */
