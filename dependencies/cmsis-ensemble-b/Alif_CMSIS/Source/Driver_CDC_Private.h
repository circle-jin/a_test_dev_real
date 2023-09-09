/* Copyright (C) 2023 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 *
 */

/**************************************************************************//**
 * @file     Driver_CDC_Private.h
 * @author   Prasanna Ravi
 * @email    prasanna.ravi@alifsemi.com
 * @version  V1.0.0
 * @date     10-April-2023
 * @brief    CDC driver Specific Header file.
 ******************************************************************************/

#ifndef DRIVER_CDC_PRIVATE_H_
#define DRIVER_CDC_PRIVATE_H_

#include "RTE_Components.h"
#include CMSIS_device_header

#include "Driver_CDC200.h"

#include "cdc.h"

#ifdef  __cplusplus
extern "C"
{
#endif

/** \brief CDC Driver states. */
typedef volatile struct _CDC_DRIVER_STATE {
    uint32_t initialized : 1;                    /**< Driver Initialized    */
    uint32_t powered     : 1;                    /**< Driver powered        */
    uint32_t configured  : 1;                    /**< Driver configured    */
    uint32_t reserved    : 29;                   /**< Reserved             */
} CDC_DRIVER_STATE;

/** \brief CDC DPI frame info */
typedef struct _CDC_FRAME_INFO{
    uint32_t hsync_time;                         /**< HSYNC time          */
    uint32_t hbp_time;                           /**< HBP time            */
    uint32_t hfp_time;                           /**< HFP time            */
    uint32_t hactive_time;                       /**< HACTIVE time        */
    uint32_t vsync_line;                         /**< VSYNC line          */
    uint32_t vbp_line;                           /**< VBP line            */
    uint32_t vfp_line;                           /**< VFP line            */
    uint32_t vactive_line;                       /**< VACTIVE line        */
} CDC_FRAME_INFO;

/** \brief Resources for a CDC instance */
typedef struct _CDC_RESOURCES {
    CDC_Type                  *regs;                 /**< Pointer to regs                  */
    ARM_CDC200_SignalEvent_t  cb_event;              /**< Pointer to call back function    */
    CDC_FRAME_INFO            *frame_info;           /**< Pointer to CDC frame info        */
    CDC_PIXEL_FORMAT          pixel_format;          /**< CDC pixel format                 */
    uint32_t                  irq_priority;          /**< Interrupt priority               */
    CDC_DRIVER_STATE          state;                 /**< CDC driver status                */
} CDC_RESOURCES;

#ifdef  __cplusplus
}
#endif

#endif /* DRIVER_CDC_PRIVATE_H_ */
