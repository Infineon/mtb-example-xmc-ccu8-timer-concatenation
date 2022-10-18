/*******************************************************************************
* File Name: ccu8_slice_config.c
*
* Description:
* Peripheral Hardware Block configuration
*
* ********************************************************************************
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

#include "ccu8_slice_config.h"

/*******************************************************************************
* Data Structure
*******************************************************************************/

/* Initialization data of CCU8 Slice 1 */
const XMC_CCU8_SLICE_COMPARE_CONFIG_t COUNTER_L_compare_config1 =
{
    .timer_mode          = XMC_CCU8_SLICE_TIMER_COUNT_MODE_EA,       /*Select Edge aligned or Centre Aligned*/
    .monoshot            = XMC_CCU8_SLICE_TIMER_REPEAT_MODE_REPEAT,  /*Repetitive mode: Repeat Mode*/
    .shadow_xfer_clear   = false,                                    /*Select PR and CR shadow xfer happen when timer is cleared*/
    .dither_timer_period = false,                                    /*Select for the period of the timer dither*/
    .dither_duty_cycle   = false,                                    /*Select for the compare match of the timer dither*/
    .prescaler_mode      = XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,     /*Normal or floating prescaler mode selection*/
    .mcm_ch1_enable      = false,                                    /*Select Multi-Channel mode for compare channel 1 enable*/
    .mcm_ch2_enable      = false,                                    /*Select Multi-Channel mode for compare channel 2 enable*/
    .slice_status        = XMC_CCU8_SLICE_STATUS_CHANNEL_1,          /*Selection for which of the two channels drives the slice status output*/
    .asymmetric_pwm      = false,                                    /*Select if the PWM be a function of the 2 compare channels rather than period value*/
    .prescaler_initval   = XMC_CCU8_SLICE_PRESCALER_1,               /*Prescaler divider value*/
    .float_limit         = XMC_CCU8_SLICE_PRESCALER_32768,           /*The max value which the prescaler divider can increment to*/
    .dither_limit        = 0U,                                       /*The value that determines the spreading of dithering*/
    .timer_concatenation = false                                     /*Enables the concatenation of the timer*/
};

/*******************************************************************************
* Data Structure
*******************************************************************************/

/* Event configuration of CCU8 Slice 1 */
const XMC_CCU8_SLICE_EVENT_CONFIG_t COUNTER_L_event0_config1 =
{
    .edge     = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_FALLING_EDGE,
    .level    = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_3_CYCLES,
};

/*******************************************************************************
* Data Structure
*******************************************************************************/

/* Initialization data of CCU8 Slice 2 */
const XMC_CCU8_SLICE_COMPARE_CONFIG_t COUNTER_H_compare_config1 =
{
    .timer_mode          = XMC_CCU8_SLICE_TIMER_COUNT_MODE_EA,       /*Select Edge aligned or Centre Aligned*/
    .monoshot            = XMC_CCU8_SLICE_TIMER_REPEAT_MODE_REPEAT,  /*Repetitive mode: Repeat Mode*/
    .shadow_xfer_clear   = false,                                    /*Select PR and CR shadow xfer happen when timer is cleared*/
    .dither_timer_period = false,                                    /*Select for the period of the timer dither*/
    .dither_duty_cycle   = false,                                    /*Select for the compare match of the timer dither*/
    .prescaler_mode      = XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,     /*Normal or floating prescaler mode selection*/
    .mcm_ch1_enable      = false,                                    /*Select Multi-Channel mode for compare channel 1 enable*/
    .mcm_ch2_enable      = false,                                    /*Select Multi-Channel mode for compare channel 2 enable*/
    .slice_status        = XMC_CCU8_SLICE_STATUS_CHANNEL_1,          /*Selection for which of the two channels drives the slice status output*/
    .asymmetric_pwm      = false,                                    /*Select if the PWM be a function of the 2 compare channels rather than period value*/
    .prescaler_initval   = XMC_CCU8_SLICE_PRESCALER_1,               /*Prescaler divider value*/
    .float_limit         = XMC_CCU8_SLICE_PRESCALER_32768,           /*The max value which the prescaler divider can increment to*/
    .dither_limit        = 0U,                                       /*The value that determines the spreading of dithering*/
    .timer_concatenation = true,
};

/*******************************************************************************
* Data Structure
*******************************************************************************/

/* Event configuration of CCU8 Slice 2 */
const XMC_CCU8_SLICE_EVENT_CONFIG_t COUNTER_H_event0_config1 =
{
    .edge     = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_FALLING_EDGE,
    .level    = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
    .duration = XMC_CCU8_SLICE_EVENT_FILTER_3_CYCLES,
};

/*******************************************************************************
* Data Structure
*******************************************************************************/

/* Initialization data of CCU8 Slice 3 */
const XMC_CCU8_SLICE_COMPARE_CONFIG_t TIMER_0_compare_config1 =
{
    .timer_mode          = XMC_CCU8_SLICE_TIMER_COUNT_MODE_EA,       /*Select Edge aligned or Centre Aligned*/
    .monoshot            = XMC_CCU8_SLICE_TIMER_REPEAT_MODE_REPEAT,  /*Repetitive mode: Repeat Mode*/
    .shadow_xfer_clear   = false,                                    /*Select PR and CR shadow xfer happen when timer is cleared*/
    .dither_timer_period = false,                                    /*Select for the period of the timer dither*/
    .dither_duty_cycle   = false,                                    /*Select for the compare match of the timer dither*/
    .prescaler_mode      = XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,     /*Normal or floating prescaler mode selection*/
    .mcm_ch1_enable      = false,                                    /*Select Multi-Channel mode for compare channel 1 enable*/
    .mcm_ch2_enable      = false,                                    /*Select Multi-Channel mode for compare channel 2 enable*/
    .slice_status        = XMC_CCU8_SLICE_STATUS_CHANNEL_1,          /*Selection for which of the two channels drives the slice status output*/
    .asymmetric_pwm      = false,                                    /*Select if the PWM be a function of the 2 compare channels rather than period value*/
    .prescaler_initval   = XMC_CCU8_SLICE_PRESCALER_1,               /*Prescaler divider value*/
    .float_limit         = XMC_CCU8_SLICE_PRESCALER_32768,           /*The max value which the prescaler divider can increment to*/
    .dither_limit        = 0U,                                       /*The value that determines the spreading of dithering*/
    .timer_concatenation = false                                     /*Enables the concatenation of the timer*/
};

/*******************************************************************************
* Function Name: CCU8_SLICE_CONFIG
********************************************************************************
* Summary:
* This function performs the following tasks.
* 1. Initializes the CCU8 Module.
* 2. Starts the prescaler and restore clocks to the CCU8 slices.
* 3. Configures the right parameters for the 3 slices of CCU8.
*
* Parameters:
*  none
*
* Return:
*  void
*
*******************************************************************************/
void ccu8_slice_config(void)
{
    /*Set CCU8 Module Init*/
    XMC_CCU8_Init(ccu8_0_HW, XMC_CCU8_SLICE_MCMS_ACTION_TRANSFER_PR_CR);

    /*Start the prescaler and restore clocks to slices*/
    XMC_CCU8_StartPrescaler(ccu8_0_HW);

    /* Slice configurations for COUNTER_L_HW */

    /* Initialization of a CCU8 slice to compare mode */
    XMC_CCU8_SLICE_CompareInit(COUNTER_L_HW, &COUNTER_L_compare_config1);
    /* Programs the timer compare value */
    XMC_CCU8_SLICE_SetTimerCompareMatch(COUNTER_L_HW, XMC_CCU8_SLICE_COMPARE_CHANNEL_1, 32768U);
    /* Programs the timer period value */
    XMC_CCU8_SLICE_SetTimerPeriodMatch(COUNTER_L_HW, 65535U);
    /* Enables the Multi-channel shadow transfer request */
    XMC_CCU8_SetMultiChannelShadowTransferMode(COUNTER_L_MODULE_HW, XMC_CCU8_MULTI_CHANNEL_SHADOW_TRANSFER_SW_SLICE0);
    /* Disables the cascaded shadow transfer operation */
    #ifdef DISABLE_CASCADED_SHADOW_TRANSFER
    XMC_CCU8_SLICE_DisableCascadedShadowTransfer(COUNTER_L_HW);
    #endif
    /* Enable Shadow transfer request mask for various transfers */
    XMC_CCU8_EnableShadowTransfer(COUNTER_L_MODULE_HW,
    XMC_CCU8_SHADOW_TRANSFER_SLICE_0 |XMC_CCU8_SHADOW_TRANSFER_DITHER_SLICE_0 |XMC_CCU8_SHADOW_TRANSFER_PRESCALER_SLICE_0 );
    /* Configures an External Event of the slice */
    XMC_CCU8_SLICE_ConfigureEvent(COUNTER_L_HW, XMC_CCU8_SLICE_EVENT_0, &COUNTER_L_event0_config1);
    /* Configures the Count Function of the slice */
    XMC_CCU8_SLICE_CountConfig(COUNTER_L_HW, XMC_CCU8_SLICE_EVENT_0);
    /* Enables the slice timer clock */
    XMC_CCU8_EnableClock(COUNTER_L_MODULE_HW, COUNTER_L_NUM);
    /* Loads the timer value into the timer register */
    XMC_CCU8_SLICE_SetTimerValue(COUNTER_L_HW, 0U);

    /* Slice configurations for COUNTER_H_HW */

    /* Initialization of a CCU8 slice to compare mode */
    XMC_CCU8_SLICE_CompareInit(COUNTER_H_HW, &COUNTER_H_compare_config1);
    /* Programs the timer compare value */
    XMC_CCU8_SLICE_SetTimerCompareMatch(COUNTER_H_HW, XMC_CCU8_SLICE_COMPARE_CHANNEL_1, 32768U);
    /* Programs the timer period value */
    XMC_CCU8_SLICE_SetTimerPeriodMatch(COUNTER_H_HW, 65535U);
    /* Enables the Multi-channel shadow transfer request */
    XMC_CCU8_SetMultiChannelShadowTransferMode(COUNTER_H_MODULE_HW, XMC_CCU8_MULTI_CHANNEL_SHADOW_TRANSFER_SW_SLICE1);
    /* Disables the cascaded shadow transfer operation */
    #ifdef DISABLE_CASCADED_SHADOW_TRANSFER
    XMC_CCU8_SLICE_DisableCascadedShadowTransfer(COUNTER_H_HW);
    #endif
    /* Enable Shadow transfer request mask for various transfers */
    XMC_CCU8_EnableShadowTransfer(COUNTER_H_MODULE_HW,
    XMC_CCU8_SHADOW_TRANSFER_SLICE_1 |XMC_CCU8_SHADOW_TRANSFER_DITHER_SLICE_1 |XMC_CCU8_SHADOW_TRANSFER_PRESCALER_SLICE_1 );
    /* Configures an External Event of the slice */
    XMC_CCU8_SLICE_ConfigureEvent(COUNTER_H_HW, XMC_CCU8_SLICE_EVENT_0, &COUNTER_H_event0_config1);
    /* Configures the Count Function of the slice */
    XMC_CCU8_SLICE_CountConfig(COUNTER_H_HW, XMC_CCU8_SLICE_EVENT_0);
    /* Enables the slice timer clock */
    XMC_CCU8_EnableClock(COUNTER_H_MODULE_HW, COUNTER_H_NUM);
    /* Loads the timer value into the timer register */
    XMC_CCU8_SLICE_SetTimerValue(COUNTER_H_HW, 0U);

    /* Slice configurations for TIMER_0_HW */

    /* Initialization of a CCU8 slice to compare mode */
    XMC_CCU8_SLICE_CompareInit(TIMER_0_HW, &TIMER_0_compare_config1);
    /* Programs the timer compare value */
    XMC_CCU8_SLICE_SetTimerCompareMatch(TIMER_0_HW, XMC_CCU8_SLICE_COMPARE_CHANNEL_1, TIMER_COMPARE_VALUE);
    /* Programs the timer period value */
    XMC_CCU8_SLICE_SetTimerPeriodMatch(TIMER_0_HW, TIMER_PERIOD_VALUE);
    /* Enables the Multi-channel shadow transfer request */
    XMC_CCU8_SetMultiChannelShadowTransferMode(TIMER_0_MODULE_HW, XMC_CCU8_MULTI_CHANNEL_SHADOW_TRANSFER_SW_SLICE2);
    /* Disables the cascaded shadow transfer operation */
    #ifdef DISABLE_CASCADED_SHADOW_TRANSFER
    XMC_CCU8_SLICE_DisableCascadedShadowTransfer(TIMER_0_HW);
    #endif
    /* Enable Shadow transfer request mask for various transfers */
    XMC_CCU8_EnableShadowTransfer(TIMER_0_MODULE_HW,
    XMC_CCU8_SHADOW_TRANSFER_SLICE_2 |XMC_CCU8_SHADOW_TRANSFER_DITHER_SLICE_2 |XMC_CCU8_SHADOW_TRANSFER_PRESCALER_SLICE_2 );
    /* Enables the slice timer clock */
    XMC_CCU8_EnableClock(TIMER_0_MODULE_HW, TIMER_0_NUM);
    /* Loads the timer value into the timer register */
    XMC_CCU8_SLICE_SetTimerValue(TIMER_0_HW, 0U);
}
