/***************************************************************************//**
* \file cy_fr_ccal_tx_handler.h
* \version 1.0
*
* \brief
* Prototypes for cy_fr_ccal_tx_handler.c.
*
********************************************************************************
* \copyright
* Copyright 2016-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif


#ifndef __CY_FR_CCAL_TX_HANDLER_H__
#define __CY_FR_CCAL_TX_HANDLER_H__


/**
* \addtogroup group_fru_functions
* \{
*/

/*----------------------------------------------------------------------------------
 * Prototypes
 *---------------------------------------------------------------------------------*/
CY_FR_RETURN_TYPE        cy_fr_ccal_data_to_buffer    ( volatile stc_FLEXRAY_t * base,
                                                        uint32_t                 cy_fr_data_adr,
                                                        uint8_t                  cy_fr_data_length );
                                                        
CY_FR_RETURN_TYPE        cy_fr_ccal_tx_handler_buffer ( volatile stc_FLEXRAY_t * base,
                                                        uint32_t                 cy_fr_data,
                                                        uint8_t                  cy_fr_data_length,
                                                        CY_FR_BUFFER_TYPE        cy_fr_buffer,
                                                        CY_FR_CHANNEL_TYPE       cy_fr_channel );
                                                        
CY_FR_RETURN_TYPE        cy_fr_ccal_tx_handler_id     ( volatile stc_FLEXRAY_t * base,
                                                        uint32_t                 cy_fr_data_adr,
                                                        uint8_t                  cy_fr_data_length,
                                                        CY_FR_FRAME_ID_TYPE      cy_fr_frame_id,
                                                        CY_FR_CHANNEL_TYPE       cy_fr_channel );
                                                        
CY_FR_TX_STATUS_TYPE     cy_fr_ccal_tx_data_ready     ( volatile stc_FLEXRAY_t * base,
                                                        CY_FR_BUFFER_TYPE        cy_fr_buffer );

CY_FR_FRAME_ID_TYPE      cy_fr_ccal_last_dyn_tx_a     ( volatile stc_FLEXRAY_t * base );

CY_FR_FRAME_ID_TYPE      cy_fr_ccal_last_dyn_tx_b     ( volatile stc_FLEXRAY_t * base );

/** \} group_fru_functions */

/*---------------------------------------------------------------------------------*/
#endif  /* #ifndef __CY_FR_CCAL_TX_HANDLER_H__ */
/*---------------------------------------------------------------------------------*/

#if defined(__cplusplus)
}
#endif

/* [] END OF FILE */


