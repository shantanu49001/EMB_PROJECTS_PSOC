/***************************************************************************//**
* \file UART_hid.h
* \version 3.20
*
* \brief
*  This file provides function prototypes and constants for the USBFS component 
*  HID class.
*
* Related Document:
*  Device Class Definition for Human Interface Devices (HID) Version 1.11
*
********************************************************************************
* \copyright
* Copyright 2008-2016, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_USBFS_UART_hid_H)
#define CY_USBFS_UART_hid_H

#include "UART.h"

/***************************************
* Prototypes of the UART_hid API.
***************************************/
/**
* \addtogroup group_hid
* @{
*/
uint8 UART_UpdateHIDTimer(uint8 interface) ;
uint8 UART_GetProtocol(uint8 interface)    ;
/** @} hid */

/***************************************
*Renamed Functions for backward compatible
***************************************/

#define UART_bGetProtocol   UART_GetProtocol


/***************************************
*  Constants for UART_hid API.
***************************************/

#define UART_PROTOCOL_BOOT              (0x00u)
#define UART_PROTOCOL_REPORT            (0x01u)

/* Request Types (HID Chapter 7.2) */
#define UART_HID_GET_REPORT             (0x01u)
#define UART_HID_GET_IDLE               (0x02u)
#define UART_HID_GET_PROTOCOL           (0x03u)
#define UART_HID_SET_REPORT             (0x09u)
#define UART_HID_SET_IDLE               (0x0Au)
#define UART_HID_SET_PROTOCOL           (0x0Bu)

/* Descriptor Types (HID Chapter 7.1) */
#define UART_DESCR_HID_CLASS            (0x21u)
#define UART_DESCR_HID_REPORT           (0x22u)
#define UART_DESCR_HID_PHYSICAL         (0x23u)

/* Report Request Types (HID Chapter 7.2.1) */
#define UART_HID_GET_REPORT_INPUT       (0x01u)
#define UART_HID_GET_REPORT_OUTPUT      (0x02u)
#define UART_HID_GET_REPORT_FEATURE     (0x03u)

#endif /*  CY_USBFS_UART_hid_H */


/* [] END OF FILE */
