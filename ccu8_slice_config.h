/*******************************************************************************
* File Name: ccu8_slice_config.h
*
* Description:
* Peripheral Hardware Block configuration


********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "xmc_ccu8.h"

/*******************************************************************************
* Macros
*******************************************************************************/

/* Declarations for CCU8 Slices */
#define ccu8_0_NUM                0U
#define ccu8_0_HW                 CCU80
#define COUNTER_L_MODULE_NUM      0U
#define COUNTER_L_MODULE_HW       CCU80
#define COUNTER_L_HW              CCU80_CC80
#define COUNTER_L_NUM             0U
#define COUNTER_L_TICK_NS         10U
#define COUNTER_H_MODULE_NUM      0U
#define COUNTER_H_MODULE_HW       CCU80
#define COUNTER_H_NUM             1U
#define COUNTER_H_HW              CCU80_CC81
#define COUNTER_H_TICK_NS         10U
#define TIMER_0_MODULE_NUM        0U
#define TIMER_0_MODULE_HW         CCU80
#define TIMER_0_NUM               2U
#define TIMER_0_HW                CCU80_CC82
#define TIMER_0_TICK_NS           10U

/*Define macros for XMC14x Boot kit*/
#if (UC_SERIES == XMC14)
#define DISABLE_CASCADED_SHADOW_TRANSFER   (1)
#define TIMER_PERIOD_VALUE                (96U)
#define TIMER_COMPARE_VALUE               (48U)
#endif

/*Define macros for XMC47x Boot kit*/
#if (UC_SERIES == XMC47)
#define TIMER_PERIOD_VALUE                (144U)
#define TIMER_COMPARE_VALUE               (72U)
#endif

extern const XMC_CCU8_SLICE_COMPARE_CONFIG_t COUNTER_L_compare_config1;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t   COUNTER_L_event0_config1;
extern const XMC_CCU8_SLICE_COMPARE_CONFIG_t COUNTER_H_compare_config1;
extern const XMC_CCU8_SLICE_EVENT_CONFIG_t   COUNTER_H_event0_config1;
extern const XMC_CCU8_SLICE_COMPARE_CONFIG_t TIMER_0_compare_config1;

void ccu8_slice_config(void);

/* CCU8_SLICE_CONFIG_H */
