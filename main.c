/******************************************************************************
* File Name:   main.c
*
* Description: This is the source code for the XMC MCU: CCU8 Timer Concatenation
*              Example for ModusToolbox.
*
* Related Document: See README.md
*
******************************************************************************
*
* Copyright (c) 2015-2021, Infineon Technologies AG
* All rights reserved.                        
*                                             
* Boost Software License - Version 1.0 - August 17th, 2003
* 
* Permission is hereby granted, free of charge, to any person or organization
* obtaining a copy of the software and accompanying documentation covered by
* this license (the "Software") to use, reproduce, display, distribute,
* execute, and transmit the Software, and to prepare derivative works of the
* Software, and to permit third-parties to whom the Software is furnished to
* do so, all subject to the following:
* 
* The copyright notices in the Software and this entire statement, including
* the above license grant, this restriction and the following disclaimer,
* must be included in all copies of the Software, in whole or in part, and
* all derivative works of the Software, unless such copies or derivative
* works are solely in the form of machine-executable object code generated by
* a source language processor.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
* SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
* FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
* DEALINGS IN THE SOFTWARE.
*                                                                              
*****************************************************************************/

#include "cybsp.h"
#include "cy_utils.h"
#include "xmc_ccu8.h"
#include "ccu8_slice_config.h"

/*******************************************************************************
* Defines
*******************************************************************************/
/* Declarations for LED toggle */
#define USER_LED_TOGGLE_PERIOD_US 1000000

/*******************************************************************************
* Function Name: sys_now
********************************************************************************
* Summary:
* Returns the current time in microseconds.
*
* Parameters:
*  none
*
* Return:
* uint32_t: the current time in microseconds
*
*******************************************************************************/
static uint32_t sys_now(void)
{
    uint32_t retval;
    uint16_t timer_h0;
    uint16_t timer_l;
    uint16_t timer_h1;

    /* This loop ensures that the function returns the latest time
    and maintains accuracy */
    do
    {
        timer_h0 = XMC_CCU8_SLICE_GetTimerValue(COUNTER_H_HW);
        timer_l = XMC_CCU8_SLICE_GetTimerValue(COUNTER_L_HW);
        timer_h1 = XMC_CCU8_SLICE_GetTimerValue(COUNTER_H_HW);
        retval = (uint32_t)(timer_h1 << 16) | (uint32_t)timer_l;
    }
    while (timer_h0 != timer_h1);

    return retval;
}

/*******************************************************************************
* Function Name: main
********************************************************************************
* Summary:
* This is the main function. It performs initial setup of the device,
* and starts the CCU8 slices. The counter slices input signal used to count up
* is configured. The main while loop toggles CYBSP_USER_LED every
* 'USER_LED_TOGGLE_PERIOD_US' microseconds.
*
* Parameters:
*  none
*
* Return:
*  int
*
*******************************************************************************/
int main(void)
{
    cy_rslt_t result;

    /* Initialize the device and board peripherals */
    result = cybsp_init();
    if (CY_RSLT_SUCCESS != result)
    {
        CY_ASSERT(0);
    }

    /* Initialize the CCU8 peripheral and slices */
    ccu8_slice_config();

    /* Assign input signal for count function */
    XMC_CCU8_SLICE_SetInput(COUNTER_H_HW, XMC_CCU8_SLICE_EVENT_0, CCU80_IN0_CCU80_ST2);
    XMC_CCU8_SLICE_SetInput(COUNTER_L_HW, XMC_CCU8_SLICE_EVENT_0, CCU80_IN0_CCU80_ST2);

    /* Start CCU80 slices */
    XMC_CCU8_SLICE_StartTimer(COUNTER_H_HW);
    XMC_CCU8_SLICE_StartTimer(COUNTER_L_HW);
    XMC_CCU8_SLICE_StartTimer(TIMER_0_HW);

    while (1)
    {
        uint32_t ref_time = sys_now();

        /* wait till a USER_LED_TOGGLE_PERIOD_US is elapsed since the start of the loop */
        while ((sys_now() - ref_time) < USER_LED_TOGGLE_PERIOD_US);

        /* toggle the USER LED state */
        XMC_GPIO_ToggleOutput(CYBSP_USER_LED2_PORT, CYBSP_USER_LED2_PIN);
    }
}

/* [] END OF FILE */
