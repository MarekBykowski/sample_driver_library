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

/* This example counts square pulse (rising edge) number generated by a GPIO */
/* using a TCPWM. Please make sure GPIO output and TR_ONE_CNT_IN ports are   */
/* connected seeing CPU board specification you are using.                   */

#define PULSE_NUM    (1000u)
#define COMPARE1_NUM (500u)

/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/

#define TCPWMx_GRPx_CNTx_COUNTER                TCPWM0_GRP0_CNT0
#define PCLK_TCPWMx_CLOCKSx_COUNTER             PCLK_TCPWM0_CLOCKS0
#define TCPWM_PERI_CLK_DIVIDER_NO_COUNTER       0u

#define TR_ONE_CNT_NR_USE                       0u // from 0 to 2

// TR_ONE_CNT_INx: x = (256 * GrpNum * 3) + (CntNum * 3) + TR_ONE_CNT_NR_USE
#define TCPWM_TR_ONE_CNT_INx_PORT               GPIO_PRT6
#define TCPWM_TR_ONE_CNT_INx_PIN                1u
#define TCPWM_TR_ONE_CNT_INx_MUX                P6_1_TCPWM0_TR_ONE_CNT_IN0

/* GPIO for the pulse counted */
#define GPIO_FOR_COUNT_PORT                     GPIO_PRT6
#define GPIO_FOR_COUNT_PIN                      3u
#define GPIO_FOR_COUNT_MUX                      P6_3_GPIO

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/

/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/


/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/

cy_stc_gpio_pin_config_t gpio_port_pin_cfg =
{
    .outVal    = 0ul,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom     = GPIO_FOR_COUNT_MUX,
    .intEdge   = 0ul,
    .intMask   = 0ul,
    .vtrip     = 0ul,
    .slewRate  = 0ul,
    .driveSel  = 0ul,
};

cy_stc_gpio_pin_config_t tcpwm_trig_in_pin_cfg =
{
    .outVal    = 0ul,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom     = TCPWM_TR_ONE_CNT_INx_MUX ,
    .intEdge   = 0ul,
    .intMask   = 0ul,
    .vtrip     = 0ul,
    .slewRate  = 0ul,
    .driveSel  = 0ul,
};

cy_stc_tcpwm_counter_config_t const MyCounter_config =
{
    .period             = 0xFFFFul,
    .clockPrescaler     = CY_TCPWM_COUNTER_PRESCALER_DIVBY_4,
    .runMode            = CY_TCPWM_COUNTER_CONTINUOUS,
    .countDirection     = CY_TCPWM_COUNTER_COUNT_UP,
    .debug_pause        = false,
    .CompareOrCapture   = CY_TCPWM_COUNTER_MODE_COMPARE,
    .compare0           = COMPARE1_NUM,                       // Set the comp value
    .compare0_buff      = 0ul,                                // do not care
    .compare1           = 0ul,                                // do not care
    .compare1_buff      = 0ul,                                // do not care
    .enableCompare0Swap = false,                              // do not care
    .enableCompare1Swap = false,                              // do not care
    .interruptSources   = 0ul,                                // do not care
    .capture0InputMode  = 3ul,                                // do not care
    .capture0Input      = 0ul,                                // do not care
    .reloadInputMode    = 3ul,                                // do not care
    .reloadInput        = 0ul,                                // do not care
    .startInputMode     = 3ul,                                // do not care
    .startInput         = 0ul,                                // do not care
    .stopInputMode      = 3ul,                                // do not care
    .stopInput          = 0ul,                                // do not care
    .capture1InputMode  = 3ul,                                // do not care
    .capture1Input      = 0ul,                                // do not care
    .countInputMode     = 0ul,                                // detect rising edge
    .countInput         = TR_ONE_CNT_NR_USE+2ul,              // 0: always "0". 1: always "1". x (above 2): tr_one_cnt_in[offset+x]
    .trigger1           = CY_TCPWM_COUNTER_OVERFLOW,          // do not care
};

cy_stc_sysint_irq_t irq_cfg =
{
    .sysIntSrc  = tcpwm_0_interrupts_0_IRQn,
    .intIdx     = CPUIntIdx3_IRQn,
    .isEnabled  = true,
};

uint32_t g_CntValWhenIntr = 0ul;
uint32_t g_CntValResult   = 0ul;

/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

void Counter_Handler(void)
{   
    if(Cy_Tcpwm_Counter_GetCC0_IntrMasked(TCPWMx_GRPx_CNTx_COUNTER))
    {
        // PC reaches here when the counter gets over COMPARE1_NUM.
        Cy_Tcpwm_Counter_ClearCC0_Intr(TCPWMx_GRPx_CNTx_COUNTER);
        g_CntValWhenIntr = Cy_Tcpwm_Counter_GetCounter(TCPWMx_GRPx_CNTx_COUNTER);
    }
}

int main(void)
{
    SystemInit();

    __enable_irq(); /* Enable global interrupts. */

    /*--------------------------------*/
    /* Clock Configuration for TCPWMs */
    /*--------------------------------*/
  #if (CY_USE_PSVP == 1u)
    uint32_t sourceFreq = 24000000ul;
  #else
    uint32_t sourceFreq = 80000000ul;
  #endif
    uint32_t targetFreq = 2000000ul;
    uint32_t divNum = (sourceFreq / targetFreq);
    /* Assign a programmable divider  for TCPWM0_GRPx_CNTx_COUNTER */
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWMx_CLOCKSx_COUNTER, CY_SYSCLK_DIV_16_BIT, TCPWM_PERI_CLK_DIVIDER_NO_COUNTER);
    /* Sets the 16-bit divider */
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, TCPWM_PERI_CLK_DIVIDER_NO_COUNTER, (divNum - 1ul));
    /* Enable the divider */
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, TCPWM_PERI_CLK_DIVIDER_NO_COUNTER); 

    /*--------------------------------*/
    /*  Interrupt setting for TCPWMs  */
    /*--------------------------------*/
    Cy_SysInt_InitIRQ(&irq_cfg);
    Cy_SysInt_SetSystemIrqVector(irq_cfg.sysIntSrc, Counter_Handler);
    /* Set the Interrupt Priority & Enable the Interrupt */
    NVIC_SetPriority(irq_cfg.intIdx, 3ul);
    NVIC_EnableIRQ(irq_cfg.intIdx);

    /*-------------------------------------------------------*/
    /* Port Configuration for PWM, Counter Trig, LEDs (GPIOs)*/
    /*-------------------------------------------------------*/
    Cy_GPIO_Pin_Init(GPIO_FOR_COUNT_PORT, GPIO_FOR_COUNT_PIN, &gpio_port_pin_cfg);
    Cy_GPIO_Write(GPIO_FOR_COUNT_PORT, GPIO_FOR_COUNT_PIN, 0);
    Cy_GPIO_Pin_Init(TCPWM_TR_ONE_CNT_INx_PORT, TCPWM_TR_ONE_CNT_INx_PIN, &tcpwm_trig_in_pin_cfg);

    /* Initialize TCPWM0_GRPx_CNTx_COUNTER as Counter & Enable */
    Cy_Tcpwm_Counter_Init(TCPWMx_GRPx_CNTx_COUNTER, &MyCounter_config);
    Cy_Tcpwm_Counter_Enable(TCPWMx_GRPx_CNTx_COUNTER);
    Cy_Tcpwm_TriggerStart(TCPWMx_GRPx_CNTx_COUNTER);
    /* Enable Interrupt */
    Cy_Tcpwm_Counter_SetCC0_IntrMask(TCPWMx_GRPx_CNTx_COUNTER);

    /* Generate pulse PULSE_NUM times */
    for(uint32_t i_gpio_tgl = 0;i_gpio_tgl < PULSE_NUM; i_gpio_tgl++)
    {
        Cy_SysTick_DelayInUs(400UL);
        Cy_GPIO_Write(GPIO_FOR_COUNT_PORT, GPIO_FOR_COUNT_PIN, 1);
        Cy_SysTick_DelayInUs(400UL);
        Cy_GPIO_Write(GPIO_FOR_COUNT_PORT, GPIO_FOR_COUNT_PIN, 0);
    }

    /* Get the results */
    g_CntValResult = Cy_Tcpwm_Counter_GetCounter(TCPWMx_GRPx_CNTx_COUNTER);

    // In timer mode, the match interrupt occurs when 
    // the counter changes "from" a state in which COUNTER equals CC0.
    // Therefore g_CntValWhenIntr is assumed to be larger than COMPARE1_NUM by one.
    CY_ASSERT(g_CntValWhenIntr == (COMPARE1_NUM+1));

    // When the pulse was detected, this TCPWM gets running state.
    // At this time, the pulse wouldn't be counted. 
    // Therefore g_CntValResult is assumed to be smaller than PULSE_NUM by one.
    CY_ASSERT(g_CntValResult == (PULSE_NUM-1));

    for(;;);
}

/* [] END OF FILE */
