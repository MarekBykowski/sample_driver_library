/***************************************************************************//**
* \file main_cm4.c
*
* \version 1.0
*
* \brief Main example file for CM4
*
********************************************************************************
* \copyright
* Copyright 2016-2020, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "cy_project.h"
#include "cy_device_headers.h"

#include "flash_ex_rand_data.h"

/* Select flash address to be tested.                                */
/* By default, last large sector and last small sector will be tested */
#define TEST_LS_ADDR    (CY_FLASH_LG_SBM_END - CY_CODE_LES_SIZE_IN_BYTE)
#define TEST_SS_ADDR    (CY_FLASH_SM_SBM_END - CY_CODE_SES_SIZE_IN_BYTE)

void BasicCodeFlashNonBlockingTest(uint32_t SectorAddr, uint32_t SectorSizeInByte);

int main(void)
{
    SystemInit();

    __enable_irq(); /* Enable global interrupts. */

    // Wait 3 [s] to avoid breaking debugger connection.
    Cy_SysTick_DelayInUs(3000000);

    // Initialization 
    Cy_FlashInit(true /*non-blocking*/);

    // Test for Large Sector
    BasicCodeFlashNonBlockingTest(TEST_LS_ADDR, CY_CODE_LES_SIZE_IN_BYTE);

    // Test for Small Sector
    BasicCodeFlashNonBlockingTest(TEST_SS_ADDR, CY_CODE_SES_SIZE_IN_BYTE);

    while(1); // success erase program test
}


// In this routine, whole one sector erased/written/read/verified
uint32_t g_Task1 = 0;
uint32_t g_Task2 = 0;
uint32_t g_Task3 = 0;
void BasicCodeFlashNonBlockingTest(uint32_t SectorAddr, uint32_t SectorSizeInByte)
{
    uint32_t* p_TestFlsTop = (uint32_t*)SectorAddr;

    uint32_t SectorSizeInWord = SectorSizeInByte / 4ul;

    /** Erasing **/
    // Erase
    Cy_FlashSectorErase(SectorAddr, CY_FLASH_DRIVER_NON_BLOCKING);

    // Wait for completion with counting
    while(Cy_Is_SROM_API_Completed() == false){g_Task1++;}

    // Verify
    for(uint32_t i_wordId = 0; i_wordId < SectorSizeInWord; i_wordId++)
    {
        CY_ASSERT(p_TestFlsTop[i_wordId ] == 0xFFFFFFFF);
    }

    /** Programming **/
    for(uint32_t i_addr = SectorAddr; i_addr < SectorAddr + SectorSizeInByte; i_addr+=SIZE_4096_BIT_IN_BYTE)
    {
        // Flash 
        Cy_FlashWriteCode(i_addr, (uint32_t*)programData, CY_FLASH_PROGRAMROW_DATA_SIZE_4096BIT,CY_FLASH_DRIVER_NON_BLOCKING);

        // Wait for completion with counting
        while(Cy_Is_SROM_API_Completed() == false){g_Task2++;}
    }

    // Verify 
    uint32_t* pProgramData = (uint32_t*)programData;
    for(uint32_t i_wordId = 0; i_wordId < SectorSizeInWord; i_wordId++)
    {
        uint32_t i_dataPos = i_wordId % SIZE_4096_BIT_IN_WORD;
        CY_ASSERT(p_TestFlsTop[i_wordId] == pProgramData[i_dataPos]);
    }

    /** Erasing Again **/
    // Erase
    Cy_FlashSectorErase(SectorAddr, CY_FLASH_DRIVER_NON_BLOCKING);

    // Wait for completion with counting
    while(Cy_Is_SROM_API_Completed() == false){g_Task3++;}

    // Verify
    for(uint32_t i_wordId = 0; i_wordId < SectorSizeInWord; i_wordId++)
    {
        CY_ASSERT(p_TestFlsTop[i_wordId] == 0xFFFFFFFF);
    }
}


/* [] END OF FILE */
