/***************************************************************************//**
* \file cyreg_mixer.h
*
* \brief
* MIXER register definition header
*
* \note
* Generator version: 1.6.0.264
* Database revision: TVIIC2D4M_A0
*
********************************************************************************
* \copyright
* Copyright 2016-2020, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _CYREG_MIXER_H_
#define _CYREG_MIXER_H_

#include "cyip_mixer.h"

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT0)
  */
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40888000UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40888004UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40888014UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40888018UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4088801CUL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40888020UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40888080UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40888084UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40888088UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408880C0UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408880C4UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408880C8UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT0_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408880CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT1)
  */
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40888100UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40888104UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40888114UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40888118UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4088811CUL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40888120UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40888180UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40888184UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40888188UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408881C0UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408881C4UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408881C8UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT1_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408881CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT2)
  */
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40888200UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40888204UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40888214UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40888218UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4088821CUL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40888220UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40888280UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40888284UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40888288UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408882C0UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408882C4UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408882C8UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT2_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408882CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT3)
  */
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40888300UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40888304UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40888314UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40888318UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4088831CUL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40888320UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40888380UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40888384UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40888388UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408883C0UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408883C4UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408883C8UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT3_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408883CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT4)
  */
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40888400UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40888404UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40888414UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40888418UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4088841CUL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40888420UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40888480UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40888484UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40888488UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408884C0UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408884C4UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408884C8UL)
#define CYREG_MIXER0_MIXER_SRC_STRUCT4_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408884CCUL)

/**
  * \brief Mixer destination structure (MIXER_MIXER_DST_STRUCT0)
  */
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_CTL_t*) 0x4088C000UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_FADE_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FADE_CTL_t*) 0x4088C014UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_FADE_STATUS ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FADE_STATUS_t*) 0x4088C018UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_FADE_CMD ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FADE_CMD_t*) 0x4088C01CUL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_GAIN_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_GAIN_CTL_t*) 0x4088C020UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_FIFO_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_CTL_t*) 0x4088C080UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_FIFO_STATUS ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_STATUS_t*) 0x4088C084UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_FIFO_RD ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_RD_t*) 0x4088C088UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_DST_FIFO_RD_SILENT ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_RD_SILENT_t*) 0x4088C08CUL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_INTR_DST ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_t*) 0x4088C0C0UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_INTR_DST_SET ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_SET_t*) 0x4088C0C4UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_INTR_DST_MASK ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_MASK_t*) 0x4088C0C8UL)
#define CYREG_MIXER0_MIXER_DST_STRUCT_INTR_DST_MASKED ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_MASKED_t*) 0x4088C0CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT0)
  */
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40898000UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40898004UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40898014UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40898018UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4089801CUL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40898020UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40898080UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40898084UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40898088UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408980C0UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408980C4UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408980C8UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT0_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408980CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT1)
  */
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40898100UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40898104UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40898114UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40898118UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4089811CUL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40898120UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40898180UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40898184UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40898188UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408981C0UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408981C4UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408981C8UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT1_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408981CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT2)
  */
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40898200UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40898204UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40898214UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40898218UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4089821CUL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40898220UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40898280UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40898284UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40898288UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408982C0UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408982C4UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408982C8UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT2_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408982CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT3)
  */
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40898300UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40898304UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40898314UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40898318UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4089831CUL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40898320UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40898380UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40898384UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40898388UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408983C0UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408983C4UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408983C8UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT3_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408983CCUL)

/**
  * \brief Mixer source structure (MIXER_MIXER_SRC_STRUCT4)
  */
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_CTL_t*) 0x40898400UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_STATUS_t*) 0x40898404UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_FADE_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CTL_t*) 0x40898414UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_FADE_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_STATUS_t*) 0x40898418UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_FADE_CMD ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FADE_CMD_t*) 0x4089841CUL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_GAIN_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_GAIN_CTL_t*) 0x40898420UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_FIFO_CTL ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_CTL_t*) 0x40898480UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_FIFO_STATUS ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_STATUS_t*) 0x40898484UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_SRC_FIFO_WR ((volatile un_MIXER_MIXER_SRC_STRUCT_SRC_FIFO_WR_t*) 0x40898488UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_INTR_SRC ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_t*) 0x408984C0UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_INTR_SRC_SET ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_SET_t*) 0x408984C4UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_INTR_SRC_MASK ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASK_t*) 0x408984C8UL)
#define CYREG_MIXER1_MIXER_SRC_STRUCT4_INTR_SRC_MASKED ((volatile un_MIXER_MIXER_SRC_STRUCT_INTR_SRC_MASKED_t*) 0x408984CCUL)

/**
  * \brief Mixer destination structure (MIXER_MIXER_DST_STRUCT0)
  */
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_CTL_t*) 0x4089C000UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_FADE_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FADE_CTL_t*) 0x4089C014UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_FADE_STATUS ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FADE_STATUS_t*) 0x4089C018UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_FADE_CMD ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FADE_CMD_t*) 0x4089C01CUL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_GAIN_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_GAIN_CTL_t*) 0x4089C020UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_FIFO_CTL ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_CTL_t*) 0x4089C080UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_FIFO_STATUS ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_STATUS_t*) 0x4089C084UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_FIFO_RD ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_RD_t*) 0x4089C088UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_DST_FIFO_RD_SILENT ((volatile un_MIXER_MIXER_DST_STRUCT_DST_FIFO_RD_SILENT_t*) 0x4089C08CUL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_INTR_DST ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_t*) 0x4089C0C0UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_INTR_DST_SET ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_SET_t*) 0x4089C0C4UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_INTR_DST_MASK ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_MASK_t*) 0x4089C0C8UL)
#define CYREG_MIXER1_MIXER_DST_STRUCT_INTR_DST_MASKED ((volatile un_MIXER_MIXER_DST_STRUCT_INTR_DST_MASKED_t*) 0x4089C0CCUL)

#endif /* _CYREG_MIXER_H_ */


/* [] END OF FILE */
