/*
 * ICU_userCode.c
 *
 *  Created on: 2026年7月4日
 *      Author: CENSORED
 */

#include "ICU_userCode.h"

real32_T ICU_GetChn1PwmDuty(void)
{
	static Icu_DutyCycleType Icu_Duty;

	Icu_GetDutyCycleValues(IcuConf_IcuChannel_IcuChannel_0,&Icu_Duty);
}
