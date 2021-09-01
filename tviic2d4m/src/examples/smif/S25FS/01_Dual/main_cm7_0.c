/***************************************************************************//**
* \file main_cm7_0.c
*
* \version 1.0
*
* \brief Main example file for CM7_0
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
#include "SMIF_TestData.h"
#include "tvii_series_smif_ex_adopter.h"

/***** User Modifiable definitions *****/
#define TEST_WRITE_LC        CY_SMIF_S25FS_WT_LATENCY0
#define TEST_READ_LC         CY_SMIF_S25FS_RD_LATENCY2
#define TEST_ADDR_LEN        CY_TRX_ADDR_4BYTE
#define TEST_SLAVE_NO        (0)
/**************************************/

#define TEST_PROGRAM_SECTOR (0x00123400ul)

#define DEVICE_PROGRAM_BUFFER_SIZE (0x100) // 256B
#define DEVICE_SECTOR_ERASE_SIZE   (0x00040000) // 256KB

#define DATA_WIDTH_1_OR_2_BITS (0)
#define DATA_WIDTH_4_BITS      (1)
#define TRX_DATA_WIDTH         (CY_SPI_TRANSACTION_1S1S1S)
#if TEST_SLAVE_NO == 0
  #define TEST_SLAVE            (CY_SMIF_SLAVE_SELECT_0)
  #define TEST_SLAVE_DEVICE     (SMIF_DEVICE0)
  #define TEST_DEVICE_BIT_ALLOC (CY_SMIF_DEV_DUAL_BIT_0To1)
#else
  #define TEST_SLAVE            (CY_SMIF_SLAVE_SELECT_1)
  #define TEST_SLAVE_DEVICE     (SMIF_DEVICE1)
  #define TEST_DEVICE_BIT_ALLOC (CY_SMIF_DEV_DUAL_BIT_4To5)
#endif

typedef struct
{
    volatile stc_GPIO_PRT_t*  port;
    uint8_t                   pin;
    en_hsiom_sel_t            hsiom;
    uint32_t                  driveMode;
} cy_stc_smif_port_t;

cy_stc_smif_port_t smifPortCfg[] =
{
    {CY_SMIF_CLK_PORT,         CY_SMIF_CLK_PIN,       CY_SMIF_CLK_PIN_MUX,     CY_GPIO_DM_STRONG},
    {CY_SMIF_CLK_INV_PORT,     CY_SMIF_CLK_INV_PIN,   HSIOM_SEL_GPIO,          CY_GPIO_DM_STRONG_IN_OFF},
    {CY_SMIF_RWDS_PORT,        CY_SMIF_RWDS_PIN,      CY_SMIF_RWDS_PIN_MUX,    CY_GPIO_DM_STRONG},
    {CY_SMIF_SELECT0_PORT,     CY_SMIF_SELECT0_PIN,   CY_SMIF_SELECT0_PIN_MUX, CY_GPIO_DM_PULLUP},
    {CY_SMIF_SELECT1_PORT,     CY_SMIF_SELECT1_PIN,   CY_SMIF_SELECT1_PIN_MUX, CY_GPIO_DM_PULLUP},
    {CY_SMIF_DATA0_PORT,       CY_SMIF_DATA0_PIN,     CY_SMIF_DATA0_PIN_MUX,   CY_GPIO_DM_STRONG},
    {CY_SMIF_DATA1_PORT,       CY_SMIF_DATA1_PIN,     CY_SMIF_DATA1_PIN_MUX,   CY_GPIO_DM_STRONG},
    {CY_SMIF_DATA2_PORT,       CY_SMIF_DATA2_PIN,     CY_SMIF_DATA2_PIN_MUX,   CY_GPIO_DM_STRONG},
    {CY_SMIF_DATA3_PORT,       CY_SMIF_DATA3_PIN,     CY_SMIF_DATA3_PIN_MUX,   CY_GPIO_DM_STRONG},
    {CY_SMIF_DATA4_PORT,       CY_SMIF_DATA4_PIN,     CY_SMIF_DATA4_PIN_MUX,   CY_GPIO_DM_STRONG},
    {CY_SMIF_DATA5_PORT,       CY_SMIF_DATA5_PIN,     CY_SMIF_DATA5_PIN_MUX,   CY_GPIO_DM_STRONG},
    {CY_SMIF_DATA6_PORT,       CY_SMIF_DATA6_PIN,     CY_SMIF_DATA6_PIN_MUX,   CY_GPIO_DM_STRONG},
    {CY_SMIF_DATA7_PORT,       CY_SMIF_DATA7_PIN,     CY_SMIF_DATA7_PIN_MUX,   CY_GPIO_DM_STRONG},
};
#define SIZE_OF_PORT (sizeof(smifPortCfg)/sizeof(cy_stc_smif_port_t))

static void SmifPortInit(cy_stc_smif_port_t cfg[], uint8_t size)
{
    cy_stc_gpio_pin_config_t pinCfg = {0};
    for(uint32_t i = 0; i < size; i++)
    {
        pinCfg.driveMode = cfg[i].driveMode;
        pinCfg.hsiom     = cfg[i].hsiom;
        Cy_GPIO_Pin_Init(cfg[i].port, cfg[i].pin, &pinCfg);
    }
}


cy_stc_smif_context_t smifContext;
uint8_t readDataBuffer[TEST_PROGRAM_SIZE] = {0};

cy_stc_smif_config_t smifConfig =
{
    .txClk         = CY_SMIF_INV_FOR_DDR,
    .rxClk         = CY_SMIF_INV_OUTPUT_CLK, // Note
    .dlpAuto       = CY_SMIF_DLP_UPDATE_MANUAL,
    .capDelay      = CY_SMIF_CAPTURE_DELAY_0_CYCLE,
    .delaySel      = CY_SMIF_1_SEN_SEL_PER_TAP,
    .deselectDelay = CY_SMIF_MIN_DESELECT_1_CLK,
    .setupDelay    = CY_SMIF_SETUP_0_CLK_PULUS_MIN,
    .holdDelay     = CY_SMIF_HOLD_0_CLK_PULUS_MIN,
    .mode          = CY_SMIF_NORMAL, // MMIO mode
    .blockEvent    = CY_SMIF_BUS_ERROR,
};

// will be updated in the application
cy_stc_device_config_t smifDev0Cfg =
{
    .xipReadCmdId       = CY_SMIF_S25FS_RDID_1S1S1S_4ADR,
    .xipReadMode        = 0x00,
    .writeEn            = false,
    .xipWriteCmdId      = CY_SMIF_S25FS_WTID_1S1S1S_4ADR,
    .xipWriteMode       = 0u,
    .mergeEnable        = true,
    .mergeTimeout       = CY_SMIF_MER_TIMEOUT_1_CYCLE,
    .totalTimeoutEnable = true,
    .totalTimeout       = 1000u,
    .addr               = 0,
    .size               = CY_SMIF_DEVICE_64M_BYTE,
    .rdLatencyCode      = TEST_READ_LC,
    .wtLatencyCode      = TEST_WRITE_LC,
};

static bool WaitDeviceBecomesReady(cy_en_smif_slave_select_t slave, cy_en_smif_trx_type_t transMode);
static void SetModeWithBusyCheck(volatile cy_stc_smif_reg_t *base, cy_en_smif_mode_t mode);
static void WriteRegisterSequence(cy_en_smif_slave_select_t slave, cy_en_smif_s25fs_reg_addr_t addr, uint8_t value, cy_en_smif_trx_addr_len_t addrLen, cy_en_smif_trx_type_t transMode);
static void ReadbackMMIO(uint16_t rdCmdId, uint32_t size);
static void ReadbackXIP(uint16_t rdCmdId, uint32_t size);

cy_stc_ex_dev_context_t smifDevice0Context;

/*******************************/
/*** Cortex M7 MPU Utilities ***/
/*******************************/
#define BG_REGION_ADDR      (0x00000000UL)
#define SRAM_REGION_ADDR    (0x28000000UL)
#define FLASH_REGION_ADDR   (0x10000000UL)
#define SMIF0_DEV_XIP_ADDR (0x60000000UL)
#define SMIF1_DEV_XIP_ADDR (0x80000000UL) // Only For Cluster MCU
#define REGISTE_REGION_ADDR (0x40000000UL)
typedef enum
{
    MPU_REG_BG = 0,
    MPU_REG_SRAM,
    MPU_REG_FLASH,
    MPU_REG_SMIF0_DEV,
    MPU_REG_SMIF1_DEV, // Only for cluster MCU
    MPU_REG_REGISTER,
} en_mpu_region_name_t;

cy_stc_mpu_region_cfg_t g_mpuCfg[] =
{
    {.addr = BG_REGION_ADDR,      .size = CY_MPU_SIZE_4GB,   .permission = CY_MPU_ACCESS_P_FULL_ACCESS, .attribute = CY_MPU_ATTR_NORM_MEM_WT, .execute = CY_MPU_INST_ACCESS_EN, .srd = 0x00u, .enable = CY_MPU_ENABLE},
    {.addr = SRAM_REGION_ADDR,    .size = CY_MPU_SIZE_1MB,   .permission = CY_MPU_ACCESS_P_FULL_ACCESS, .attribute = CY_MPU_ATTR_NORM_MEM_WT, .execute = CY_MPU_INST_ACCESS_EN, .srd = 0x00u, .enable = CY_MPU_ENABLE},
    {.addr = FLASH_REGION_ADDR,   .size = CY_MPU_SIZE_8MB,   .permission = CY_MPU_ACCESS_P_FULL_ACCESS, .attribute = CY_MPU_ATTR_NORM_MEM_WT, .execute = CY_MPU_INST_ACCESS_EN, .srd = 0x00u, .enable = CY_MPU_ENABLE},
    {.addr = SMIF0_DEV_XIP_ADDR,  .size = CY_MPU_SIZE_256MB, .permission = CY_MPU_ACCESS_P_FULL_ACCESS, .attribute = CY_MPU_ATTR_STR_ORD_DEV, .execute = CY_MPU_INST_ACCESS_EN, .srd = 0x00u, .enable = CY_MPU_ENABLE},
    {.addr = SMIF1_DEV_XIP_ADDR,  .size = CY_MPU_SIZE_256MB, .permission = CY_MPU_ACCESS_P_FULL_ACCESS, .attribute = CY_MPU_ATTR_STR_ORD_DEV, .execute = CY_MPU_INST_ACCESS_EN, .srd = 0x00u, .enable = CY_MPU_ENABLE},
    {.addr = REGISTE_REGION_ADDR, .size = CY_MPU_SIZE_256MB, .permission = CY_MPU_ACCESS_P_FULL_ACCESS, .attribute = CY_MPU_ATTR_SHR_DEV,     .execute = CY_MPU_INST_ACCESS_EN, .srd = 0x00u, .enable = CY_MPU_ENABLE},
};

#define MPU_CFG_ARRAY_SIZE(array) (sizeof(array)/sizeof(cy_stc_mpu_region_cfg_t))

/*** End of Cortex M7 MPU Utilities ***/
int main(void)
{
    SystemInit();

    __enable_irq();

    /********* Core MPU setting **************/
    // When writing to SMIF XIP address via AXI, memory attribute for the XIP region has to be strongly ordered. 
    CY_ASSERT(Cy_MPU_Setup(g_mpuCfg, MPU_CFG_ARRAY_SIZE(g_mpuCfg), CY_MPU_DISABLE_USE_DEFAULT_MAP, CY_MPU_DISABLED_DURING_FAULT_NMI) == CY_MPU_SUCCESS);

    Cy_SysClk_HfClkEnable(SMIF_HF_CLOCK);
    Cy_SysClk_HfClockSetDivider(SMIF_HF_CLOCK, CY_SYSCLK_HFCLK_DIVIDE_BY_4);

    // Please modify according to your HW condition.
    ChangePLLFrequency(100000000); // SMIF out clock will be 50,000,000 //YOTS: for initial test

    SmifPortInit(smifPortCfg, SIZE_OF_PORT);

    CY_ASSERT(Cy_SMIF_InitExMemContext(CY_SMIF_S25FS, &smifDevice0Context) == CY_SMIF_SUCCESS);

    /*************************/
    /* 1. Setting for SMIF 0 */
    /*************************/
    Cy_SMIF_DeInit(SMIF_USED);
    Cy_SMIF_Init(SMIF_USED, &smifConfig, 1000, &smifContext);

    /************************************/
    /* 2. Setting for SMIF 0 Device 0/1 */
    /************************************/
    Cy_SMIF_DeviceSetDataSelect(SMIF_DEVICE0, CY_SMIF_DATA_SEL0);
    Cy_SMIF_DeviceWriteEnable(SMIF_DEVICE0);
    Cy_SMIF_DeviceSetDataSelect(SMIF_DEVICE1, CY_SMIF_DATA_SEL2);
    Cy_SMIF_DeviceWriteEnable(SMIF_DEVICE1);

    /********************/
    /* 3. Enable SMIF 0 */
    /********************/
    Cy_SMIF_Enable(SMIF_USED, &smifContext);

    /********* Issue Software Reset In legacy SPI mode ******/
    Cy_SMIF_S25FS_SoftwareResetEnable(SMIF_USED,
                                     TEST_SLAVE,
                                     CY_SPI_TRANSACTION_1S1S1S,
                                     &smifContext);
    Cy_SMIF_S25FS_SoftwareReset(SMIF_USED,
                               TEST_SLAVE,
                               CY_SPI_TRANSACTION_1S1S1S,
                               &smifContext);
    WaitDeviceBecomesReady(TEST_SLAVE, CY_SPI_TRANSACTION_1S1S1S);

    /********* Issue Software Reset In legacy Quad mode ******/
    Cy_SMIF_S25FS_SoftwareResetEnable(SMIF_USED,
                                     TEST_SLAVE,
                                     CY_SPI_TRANSACTION_4S4S4S,
                                     &smifContext);
    Cy_SMIF_S25FS_SoftwareReset(SMIF_USED,
                               TEST_SLAVE,
                               CY_SPI_TRANSACTION_4S4S4S,
                               &smifContext);
    WaitDeviceBecomesReady(TEST_SLAVE, CY_SPI_TRANSACTION_4S4S4S);

    /*********************************************************/
    /********* Write Status and Configuration registers ******/
    /*********************************************************/

    // Write Configuration register 1
    un_cy_smif_s25fs_CFR1_t writeConfigReg1 = {0};
    writeConfigReg1.field.u1QUAD = DATA_WIDTH_1_OR_2_BITS; 

    WriteRegisterSequence(TEST_SLAVE,
                          CY_S25FS_REG_ADDR_CFR1_V,
                          writeConfigReg1.u8,
                          CY_TRX_ADDR_3BYTE,
                          CY_SPI_TRANSACTION_1S1S1S);

    un_cy_smif_s25fs_CFR1_t readConfigReg1 = {0};
    Cy_SMIF_S25FS_ReadAnyRegister(SMIF_USED,
                                 TEST_SLAVE, 
                                 &readConfigReg1.u8, 
                                 CY_S25FS_REG_ADDR_CFR1_V, 
                                 CY_SMIF_S25FS_RD_LATENCY0,
                                 CY_TRX_ADDR_3BYTE,
                                 TRX_DATA_WIDTH,
                                 &smifContext);
    CY_ASSERT(writeConfigReg1.field.u1QUAD == readConfigReg1.field.u1QUAD);

    // Write Configuration register 2
    un_cy_smif_s25fs_CFR2_t writeConfigReg2 = {0};
    writeConfigReg2.field.u4RL = TEST_READ_LC;
    writeConfigReg2.field.u1QA = DATA_WIDTH_1_OR_2_BITS;
    writeConfigReg2.field.u1AL = TEST_ADDR_LEN;

    WriteRegisterSequence(TEST_SLAVE,
                          CY_S25FS_REG_ADDR_CFR2_V,
                          writeConfigReg2.u8,
                          CY_TRX_ADDR_3BYTE,
                          CY_SPI_TRANSACTION_1S1S1S);

    un_cy_smif_s25fs_CFR2_t readConfigReg2 = {0};
    Cy_SMIF_S25FS_ReadAnyRegister(SMIF_USED,
                                 TEST_SLAVE, 
                                 &readConfigReg2.u8, 
                                 CY_S25FS_REG_ADDR_CFR2_V, 
                                 TEST_READ_LC,
                                 TEST_ADDR_LEN,
                                 TRX_DATA_WIDTH,
                                 &smifContext);
    CY_ASSERT(writeConfigReg2.field.u4RL == readConfigReg2.field.u4RL);
    CY_ASSERT(writeConfigReg2.field.u1QA == readConfigReg2.field.u1QA);
    CY_ASSERT(writeConfigReg2.field.u1AL == readConfigReg2.field.u1AL);

    // Write Configuration register 4
    un_cy_smif_s25fs_CFR4_t writeConfigReg4 = {0};
    writeConfigReg4.field.u1WE = 0; // Read Wrapped Burst disable

    WriteRegisterSequence(TEST_SLAVE,
                          CY_S25FS_REG_ADDR_CFR4_V,
                          writeConfigReg4.u8,
                          TEST_ADDR_LEN,
                          CY_SPI_TRANSACTION_1S1S1S);

    un_cy_smif_s25fs_CFR4_t readConfigReg4 = {0};
    Cy_SMIF_S25FS_ReadAnyRegister(SMIF_USED,
                                 TEST_SLAVE, 
                                 &readConfigReg4.u8, 
                                 CY_S25FS_REG_ADDR_CFR4_V,
                                 TEST_READ_LC,
                                 TEST_ADDR_LEN,
                                 TRX_DATA_WIDTH,
                                 &smifContext);
    CY_ASSERT(writeConfigReg4.field.u1WE == readConfigReg4.field.u1WE);

    /*********************************************************/
    /*******          Write/Read DLP register           ******/
    /*********************************************************/
    // just for read/write test for now
    WriteRegisterSequence(TEST_SLAVE,
                          CY_S25FS_REG_ADDR_DLP_V,
                          0xAA,
                          TEST_ADDR_LEN,
                          TRX_DATA_WIDTH);
    uint8_t readbackDLP = 0u;
    Cy_SMIF_S25FS_ReadAnyRegister(SMIF_USED,
                                 TEST_SLAVE, 
                                 &readbackDLP, 
                                 CY_S25FS_REG_ADDR_DLP_V, 
                                 TEST_READ_LC,
                                 TEST_ADDR_LEN,
                                 TRX_DATA_WIDTH,
                                 &smifContext);
    CY_ASSERT(readbackDLP == 0xAA);

    /*********************************************************/
    /*********  Erase/Write/Read/Verify in MMIO mode   *******/
    /*********************************************************/
    uint16_t readSPICommand;
    if(TEST_ADDR_LEN == CY_TRX_ADDR_4BYTE)
    {
        readSPICommand     = CY_SMIF_S25FS_RDID_1S2S2S_4ADR;
        smifDev0Cfg.size   = CY_SMIF_DEVICE_64M_BYTE;
    }
    else
    {
        readSPICommand     = CY_SMIF_S25FS_RDID_1S2S2S_3ADR;
        smifDev0Cfg.size   = CY_SMIF_DEVICE_8M_BYTE;
    }


    /*** erase ***/
    // Write Enable
    Cy_SMIF_S25FS_WriteEnable(SMIF_USED, TEST_SLAVE, TRX_DATA_WIDTH, &smifContext);

    // Issue Erase Sector
    Cy_SMIF_S25FS_Erase_256KB_Sector(SMIF_USED, TEST_SLAVE, TEST_PROGRAM_SECTOR, TRX_DATA_WIDTH, &smifContext);
    CY_ASSERT(WaitDeviceBecomesReady(TEST_SLAVE, TRX_DATA_WIDTH) == 0);

    // Read back with read command
    Cy_SMIF_MMIO_Read_ExMem(SMIF_USED, 
                            TEST_SLAVE, 
                            readSPICommand,
                            TEST_PROGRAM_SECTOR, 
                            DEVICE_PROGRAM_BUFFER_SIZE, 
                            (uint8_t*)readDataBuffer, 
                            TEST_READ_LC, 
                            Cy_SMIF_S25FS_MODE_NOT_CONTINUOUS, /* mode value */
                            CY_SMIF_BLOCKING, 
                            &smifDevice0Context, 
                            &smifContext);
    // verify
    for(uint32_t i = 0; i < DEVICE_PROGRAM_BUFFER_SIZE; i++)
    {
        if(0xFF != readDataBuffer[i])
        {
            while(1); // read/write value mismatch.
        }
    }

    memset(readDataBuffer, 0x00, DEVICE_PROGRAM_BUFFER_SIZE);

    /*** write ***/
    // Write Enable
    Cy_SMIF_S25FS_WriteEnable(SMIF_USED, TEST_SLAVE, TRX_DATA_WIDTH, &smifContext);
    // Write test data
    Cy_SMIF_MMIO_Program_ExMem(SMIF_USED,
                               TEST_SLAVE, 
                               CY_SMIF_S25FS_WTID_1S1S1S_4ADR,
                               TEST_PROGRAM_SECTOR,
                               DEVICE_PROGRAM_BUFFER_SIZE, 
                               (uint8_t*)&programData[0], 
                               CY_SMIF_BLOCKING,
                               TEST_WRITE_LC, 
                               Cy_SMIF_S25FS_MODE_NOT_CONTINUOUS, /* mode value */
                               &smifDevice0Context, 
                               &smifContext);
    CY_ASSERT(WaitDeviceBecomesReady(TEST_SLAVE, TRX_DATA_WIDTH) == 0);

    // Read back and verify in MMIO mode
    ReadbackMMIO(readSPICommand, DEVICE_PROGRAM_BUFFER_SIZE);

    /********************************************/
    /*********  Read/Verify in XIP mode   *******/
    /********************************************/
    ReadbackXIP(readSPICommand, DEVICE_PROGRAM_BUFFER_SIZE);


    // Reaching here means this example worked properly.
    for(;;);
}

void ReadbackMMIO(uint16_t rdCmdId, uint32_t size)
{
    memset(readDataBuffer, 0x00, size);
    SetModeWithBusyCheck(SMIF_USED, CY_SMIF_NORMAL);

    // Read back with read command
    Cy_SMIF_MMIO_Read_ExMem(SMIF_USED, 
                            TEST_SLAVE, 
                            rdCmdId,
                            TEST_PROGRAM_SECTOR, 
                            size, 
                            (uint8_t*)readDataBuffer, 
                            TEST_READ_LC, 
                            Cy_SMIF_S25FS_MODE_NOT_CONTINUOUS, /* mode value */
                            CY_SMIF_BLOCKING, 
                            &smifDevice0Context, 
                            &smifContext);

    // verify
    for(uint32_t i = 0; i < size; i++)
    {
        if(programData[i] != readDataBuffer[i])
        {
            while(1); // read/write value mismatch.
        }
    }
}

void ReadbackXIP(uint16_t rdCmdId, uint32_t size)
{
    // Set up for XIP mode
    smifDev0Cfg.addr = CY_SMIF_GetXIP_Address(SMIF_USED);
    smifDev0Cfg.xipReadCmdId = rdCmdId;
    smifDev0Cfg.xipReadMode  = Cy_SMIF_S25FS_MODE_NOT_CONTINUOUS;
    CY_ASSERT(Cy_SMIF_InitXIPModeForExMem(TEST_SLAVE_DEVICE, TEST_DEVICE_BIT_ALLOC, &smifDev0Cfg, &smifDevice0Context) == CY_SMIF_SUCCESS);
    SetModeWithBusyCheck(SMIF_USED, CY_SMIF_MEMORY);

    // Read and verify
    uint8_t* pbaseAddrXIP = (uint8_t*)smifDev0Cfg.addr;
    for(uint32_t i = 0; i < size; i++)
    {
        if(programData[i] != pbaseAddrXIP[TEST_PROGRAM_SECTOR+i])
        {
            while(1); // read/write value mismatch.
        }
    }
}

static void SetModeWithBusyCheck(volatile cy_stc_smif_reg_t *base, cy_en_smif_mode_t mode)
{
    cy_en_smif_status_t status;
    do
    {
        status = Cy_SMIF_SetMode(base, mode);
    }while(status != CY_SMIF_SUCCESS);
}

// return 1, when one of selected device return error during erasing.
// return 0, when erasing completed without error.
static bool WaitDeviceBecomesReady(cy_en_smif_slave_select_t slave, cy_en_smif_trx_type_t transMode)
{
    for(uint8_t i_slaveNum = 0; i_slaveNum < CY_SMIF_GetDeviceNumber(SMIF_USED); i_slaveNum++)
    {
        cy_en_smif_slave_select_t slaveToBeChecked = (cy_en_smif_slave_select_t)((uint8_t)slave & (0x01 << i_slaveNum));
        if((uint8_t)slaveToBeChecked == 0u)
        {
            // not selected slave
            continue;
        }

        // only selected slave will reach hare.
        while(1)
        {
            un_cy_smif_s25fs_STR1_t status1;
            Cy_SMIF_S25FS_ReadStatusRegister1(SMIF_USED,
                                     slaveToBeChecked, 
                                     &status1.u8, 
                                     transMode,
                                     &smifContext);
            // After transfer from Regacy SPI to OCTAL(SDR/DDR). RDYBSY may be also "0".
            if(status1.field.u1E_ERR == 1)
            {
                return 1;
            }
            if(status1.field.u1P_ERR == 1)
            {
                return 1;
            }
            if(status1.field.u1WIP == 0)
            {
                break;
            }
        }
    }

    return 0;
}

static void WriteRegisterSequence(cy_en_smif_slave_select_t slave, cy_en_smif_s25fs_reg_addr_t addr, uint8_t value, cy_en_smif_trx_addr_len_t addrLen, cy_en_smif_trx_type_t transMode)
{
    Cy_SMIF_S25FS_WriteEnable(SMIF_USED, slave, transMode, &smifContext);
    Cy_SMIF_S25FS_WriteAnyRegister(SMIF_USED, slave, value, addr, addrLen, transMode, &smifContext);
    CY_ASSERT(WaitDeviceBecomesReady(slave, transMode) == 0);
}

/* [] END OF FILE */
