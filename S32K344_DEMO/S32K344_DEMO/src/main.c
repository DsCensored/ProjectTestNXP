/*==================================================================================================
*   Project              : RTD AUTOSAR 4.9
*   Platform             : CORTEXM
*   Peripheral           : Stm_Pit_Rtc_Emios
*   Dependencies         : none
*
*   Autosar Version      : 4.9.0
*   Autosar Revision     : ASR_REL_4_9_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 7.0.1
*   Build Version        : S32K3_RTD_7_0_1_D2602_ASR_REL_4_9_REV_0000_20260206
*
*   Copyright 2020 - 2026 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Gpt.h"
#if (defined(EMIOS_GPT_IP_USED) && (STD_ON == EMIOS_GPT_IP_USED))
    #include "Mcl.h"
#endif
#include "Mcu.h"
#include "Platform.h"
#include "Port.h"
#include "Dio.h"
#include "Adc.h"
#include "Can_43_FLEXCAN.h"
#include "SchM_Can_43_FLEXCAN.h"
#include "CAN_userCode.h"
#include "Mcl.h"
#include "Pwm.h"
#include "Icu.h"

#include "MODELAPP.h"
#include "Task.h"
#include "ADC_userCode.h"


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/
/**
* @brief wrapper for the above function
* @details
*/
static void Gpt_PlatformInit(void)
{
    /* Init clock */
#if (STD_ON == MCU_PRECOMPILE_SUPPORT)
    Mcu_Init(NULL_PTR);
#else
    Mcu_Init(&Mcu_Config);
#endif

#if (STD_ON == MCU_INIT_CLOCK)
    /* Initialize the clock tree and apply PLL as system clock */
    Mcu_InitClock(McuClockSettingConfig_0);

    #if (MCU_NO_PLL == STD_OFF)
        /* Wait until PLL is locked */
        while ( MCU_PLL_LOCKED != Mcu_GetPllStatus() )
        {
            /* Busy wait until the System PLL is locked */
        }
        Mcu_DistributePllClock();
    #endif

    /* Apply a mode configuration */
    Mcu_SetMode(McuModeSettingConf_0);
#else
    #error "The Mcu Init Clock API should be enabled from the Mcu driver"
#endif

#if (defined(EMIOS_GPT_IP_USED) && (STD_ON == EMIOS_GPT_IP_USED))
    /* Initialize MCL Driver */
    #if (MCL_PRECOMPILE_SUPPORT == STD_ON)
        Mcl_Init(NULL_PTR);
    #elif (MCL_PRECOMPILE_SUPPORT == STD_OFF)
        Mcl_Init(&Mcl_Config_VS_0);
    #endif
#endif

    /* Initialize Platform driver */
    Platform_Init(NULL_PTR);

#if (defined(EMIOS_GPT_IP_USED) && (STD_ON == EMIOS_GPT_IP_USED))
    /* Initialiaze MCR register - eMIOS_MCR_GPRE- eMIOS_MCR_FRZ - eMIOS_MCR_MDIS - eMIOS_MCR_GTBE*/
    for (uint8 instance = 0; instance < eMIOS_INSTANCE_COUNT; instance++)
    {
        eMiosGptBase[instance]->MCR &= ~eMIOS_MCR_GPREN_MASK;
        eMiosGptBase[instance]->MCR = eMIOS_MCR_GPRE(0) | eMIOS_MCR_FRZ(TRUE) | eMIOS_MCR_MDIS(FALSE) | eMIOS_MCR_GTBE(TRUE);
        eMiosGptBase[instance]->MCR |= eMIOS_MCR_GPREN_MASK;
    }
#endif

}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
volatile uint32 PitTick = 0;
#if (defined(PIT_IP_USED) && (STD_ON == PIT_IP_USED))
    /**
    * @brief        Gpt notification called by the configured PIT channel periodically
    * @details      Used to blink a led
    */
    void BSW_GptNotification(void)
    {
    	PitTick++;
    	Task_ISR(PitTick);
    }
#endif


static void MCAL_Init(void)
{
    /* Initialize Platform driver */
    Gpt_PlatformInit();

    /* Initialize all pins using the Port driver */
#if (STD_ON == PORT_PRECOMPILE_SUPPORT)
    Port_Init(NULL_PTR);
#else
    Port_Init(&Port_Config);
#endif

    /* Initialize the high level configuration structure of Gpt driver */
#if (STD_ON == GPT_PRECOMPILE_SUPPORT)
    Gpt_Init(NULL_PTR);
#else
    Gpt_Init(&Gpt_Config);
#endif

//使能定时器
	Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
	Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0, 40000);

	Adc_Init(&Adc_Config);
	Adc_SetupResultBuffer(ADC_CHN_1,ResultBuffer);

#if (ADC_CALIBRATION == STD_ON)
    /* Calibrate the first hardware unit used for Interrupt. */
    /* Call Calibration function multiple times, to mitigate instability of board source */
	uint8 Index;
	Adc_CalibrationStatusType CalibStatus;
    for(Index = 0; Index <= 5; Index++)
    {
        Adc_Calibrate(AdcHwUnit_0, &CalibStatus);
        if(CalibStatus.AdcUnitSelfTestStatus == E_OK)
        {
            break;
        }
    }
    /* Fail if calibration did not succeed after multiple attempts. */
    if(Index > 5)
    {
        Gpt_StopTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
        Gpt_DisableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);
        Gpt_DeInit();
        while(1);
    }
#endif /* (ADC_CALIBRATION == STD_ON) */

    CanIf_Init(NULL_PTR);
    /* Initialize Can driver */
#if (CAN_43_FLEXCAN_PRECOMPILE_SUPPORT == STD_ON)
    Can_43_FLEXCAN_Init(NULL_PTR);
#else
    Can_43_FLEXCAN_Init(&Can_43_FLEXCAN_Config);
#endif

    /* Start Can controller */
    Can_43_FLEXCAN_SetControllerMode(Can_43_FLEXCANConf_CanController_CanController_0, CAN_CS_STARTED);

    /* Initialize Mcl driver */
    Mcl_Init(&Mcl_Config);

    /* Initialize Pwm driver , after that Led on*/
    Pwm_Init(&Pwm_Config);

    /* Initialize Icu driver */
    Icu_Init(&Icu_Config);

    /* Initialize Icu interrupt */
//    Icu_EnableNotification(IcuConf_IcuChannel_IcuChannel_0);

    /* Start Icu driver */
    Icu_StartSignalMeasurement(IcuConf_IcuChannel_IcuChannel_0);
}

/**
* @brief        Main function of the example
* @details      Initializes the used drivers and uses the Gpt
*               and Dio drivers to toggle a LED periodically
*/
int main(void)
{

	MCAL_Init();
	ModelAPP_Init();

	Task_Start();

}


#ifdef __cplusplus
}
#endif

/** @} */
