/* Copyright (C) 2022 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 *
 */
/*
 * Copyright (c) 2020 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/******************************************************************************
 * @file     system_M55.c
 * @author   Rupesh Kumar
 * @email    rupesh@alifsemi.com
 * @brief    CMSIS Device System Source File for
 *           Alif Semiconductor M55_HP / M55_HE Device
 * @version  V1.0.0
 * @date     23. Feb 2021
 * @bug      None
 * @Note	 None
 ******************************************************************************/

#if defined (M55_HP)
  #include "M55_HP.h"
#elif defined (M55_HE)
  #include "M55_HE.h"
#else
  #error device not specified!
#endif

#if defined (__ARM_FEATURE_CMSE) &&  (__ARM_FEATURE_CMSE == 3U)
  #if defined (M55_HP)
    #include "partition_M55_HP.h"
  #elif defined (M55_HE)
    #include "partition_M55_HE.h"
  #endif
    #include "tgu_M55.h"
  #endif

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
  #include <mpu_M55.h>
#endif

#include "app_map.h"
/**
 * Application CPU identifiers
 */
#define TOC_IMAGE_CPU_ID_MASK       0x0000000Fu
#define TOC_IMAGE_CPU_A32_0         0u
#define TOC_IMAGE_CPU_A32_1         1u
#define TOC_IMAGE_CPU_M55_HP        2u
#define TOC_IMAGE_CPU_M55_HE        3u

#define MINI_TOC_SIGNATURE			0xFFA0A710u

/*******************************************************************************
 *  T Y P E D E F S
 ******************************************************************************/

typedef struct
{
  uint32_t loadAddress;
  uint32_t configuration;
  uint32_t execAddress;
  uint32_t objSize;
} atoc_t;

const atoc_t __mram_atoc __attribute__((used)) = {

  .loadAddress = 0xFFFFFFFF, // Indicate XIP Mode
#if defined (M55_HP)
  .configuration = MINI_TOC_SIGNATURE + TOC_IMAGE_CPU_M55_HP,
  .execAddress = _APP_ADDRESS_HP,
#elif defined (M55_HE)
  .configuration = MINI_TOC_SIGNATURE + TOC_IMAGE_CPU_M55_HE,
  .execAddress = _APP_ADDRESS_HE,
#endif
  .objSize = 0
};

/*----------------------------------------------------------------------------
  Define clocks
 *----------------------------------------------------------------------------*/
#define  MHZ            ( 1000000UL)

#if defined (M55_HP)
#define  SYSTEM_CLOCK    (400U * MHZ)
#elif defined (M55_HE)
#define  SYSTEM_CLOCK    (160U * MHZ)
#endif




/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/
extern const VECTOR_TABLE_Type __VECTOR_TABLE[496];


/*----------------------------------------------------------------------------
  System Core Clock Variable
 *----------------------------------------------------------------------------*/
uint32_t SystemCoreClock = SYSTEM_CLOCK;


/*----------------------------------------------------------------------------
  System Core Clock update function
 *----------------------------------------------------------------------------*/
void SystemCoreClockUpdate (void)
{
  SystemCoreClock = SYSTEM_CLOCK;
}

/*----------------------------------------------------------------------------
  Get System Core Clock function
 *----------------------------------------------------------------------------*/
uint32_t GetSystemCoreClock (void)
{
  return SystemCoreClock;
}

/*----------------------------------------------------------------------------
  System initialization function
 *----------------------------------------------------------------------------*/
void SystemInit (void)
{

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
  SCB->VTOR = (uint32_t)(&__VECTOR_TABLE[0]);
#endif

  /* Enable UsageFault, BusFault, MemFault and SecurityFault exceptions */
  /* Otherwise all you see is HardFault, even in the debugger */
  SCB->SHCSR |= SCB_SHCSR_USGFAULTENA_Msk | SCB_SHCSR_BUSFAULTENA_Msk |
                SCB_SHCSR_MEMFAULTENA_Msk | SCB_SHCSR_SECUREFAULTENA_Msk;

#if (defined (__FPU_USED) && (__FPU_USED == 1U)) || \
    (defined (__ARM_FEATURE_MVE) && (__ARM_FEATURE_MVE > 0U))
  SCB->CPACR |= ((3U << 10U*2U) |           /* enable CP10 Full Access */
                 (3U << 11U*2U)  );         /* enable CP11 Full Access */
#endif

#ifdef UNALIGNED_SUPPORT_DISABLE
  SCB->CCR |= SCB_CCR_UNALIGN_TRP_Msk;
#endif

 // Enable Loop and branch info cache
 SCB->CCR |= SCB_CCR_LOB_Msk;
 __DSB();
 __ISB();

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
  MPU_Setup();
#endif

  // Enable caches now, for speed, but we will have to clean
  // after scatter-loading, in _platform_pre_stackheap_init
  SCB_EnableICache();
  SCB_EnableDCache();

#if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
  TZ_SAU_Setup();
  TGU_Setup();
#endif

  SystemCoreClock = SYSTEM_CLOCK;

  //Enable the PMU
  ARM_PMU_Enable();

  //Enable PMU Cycle Counter
  ARM_PMU_CNTR_Enable(PMU_CNTENSET_CCNTR_ENABLE_Msk);
}