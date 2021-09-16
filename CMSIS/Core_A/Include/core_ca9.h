/**************************************************************************//**
 * @file     core_ca9.h
 * @brief    CMSIS Cortex-A9 Core Peripheral Access Layer Header File
 * @version  V1.0.0
 * @date     10. September 2021
 ******************************************************************************/
/*
 * Copyright (c) 2009-2018 ARM Limited. All rights reserved.
 * Copyright (c) 2019 Stephanos Ioannidis <root@stephanos.io>
 * Copyright (c) 2021 Weidmueller Interface GmbH & Co. KG
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

#if   defined ( __ICCARM__ )
  #pragma system_include         /* treat file as system include file for MISRA check */
#elif defined (__clang__)
  #pragma clang system_header   /* treat file as system include file */
#endif

#ifndef __CORE_CA9_H_GENERIC
#define __CORE_CA9_H_GENERIC

#ifdef __cplusplus
 extern "C" {
#endif

#define __CORTEX_A              9U

/* Configuration of the Cortex-A9 Processor and Core Peripherals */
#ifndef __CA_REV
#define __CA_REV                0U
#endif

#ifndef __FPU_PRESENT
#define __FPU_PRESENT           1U
#endif

#define __MMU_PRESENT           1U

/* Include Cortex-A Common Peripheral Access Layer header */
#include "core_ca.h"

#ifdef __cplusplus
}
#endif

#endif /* __CORE_CA9_H_GENERIC */
