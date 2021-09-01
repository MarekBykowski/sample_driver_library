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

/* Include default crypto configuration.
 * You can use other configuration instead follows.
 */
#include "crypto/cy_crypto_config.h"

/* For CRYPTO client that can run on the both CPUs */
cy_stc_crypto_context_t        cryptoCtx;

/* Test vector for checking the behavior */
#define __CRYPTO_ENABLE_TEST_VECTOR__   (1)
#include "crypto_hmac_sha2_test_vector.h"

/***********************************************************************************************************************
 * HMAC with SHA224
 ***********************************************************************************************************************/
void Run_HMAC_SHA224(void)
{
    cy_stc_crypto_context_sha_t cryptoShaContext;

    /* Calculate HASH(s) */
    for (uint32_t i = 0; i < HMAC_SHA224_NUMBER_OF_TEST; i++)
    {
        Cy_Crypto_Hmac_Run
        (
            &cryptoCtx,
            &cryptoShaContext,
            &HMAC_SHA224_hash[i],
            HMAC_SHA224_MsgPtr[i],
            HMAC_SHA224_MsgLen[i],
            HMAC_SHA224_KeyPtr[i],
            HMAC_SHA224_KeyLen[i],
            CY_CRYPTO_MODE_SHA224
        );
        /* Wait for completion */
        Cy_Crypto_Sync(true, &cryptoCtx);

        /* Compare with reference value just for testing. */
        /* You can remove following ASSERT */
        CY_ASSERT(memcmp(&HMAC_SHA224_hash[i], &HMAC_SHA224_hash_ref[i], sizeof(HMAC_SHA224_MacLen[i])) == 0);
    }
    /* Then you can get the result from HMAC_SHA224_hash */
}

/***********************************************************************************************************************
 * main function
 ***********************************************************************************************************************/
int main(void)
{
    SystemInit();

    __enable_irq(); /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    /* Initialize and enable CRYPTO */
    {
        cy_en_crypto_status_t status;
        do
        {
            status = Cy_Crypto_Init(&cryptoConfig, &cryptoCtx);
        } while(status != CY_CRYPTO_SUCCESS);
        Cy_Crypto_Enable(&cryptoCtx);
    }

    /* Run HMAC with SHA224 */
    Run_HMAC_SHA224();

    for(;;)
    {
    }
}



/* [] END OF FILE */
