/*
 * ADC_userCode.c
 *
 *  Created on: 2026年6月30日
 *      Author: CENSORED
 */

#include "ADC_userCode.h"

Adc_ValueGroupType    ResultBuffer[NUM_RESULTS]    =  {RESULT_BUFF_VAL, RESULT_BUFF_VAL, RESULT_BUFF_VAL};
Adc_ValueGroupType    AdcReadGroupResult[NUM_RESULTS] =  {ADC_RESULT_BUFF_VAL, ADC_RESULT_BUFF_VAL, ADC_RESULT_BUFF_VAL};

uint16_T ADC_userGetAdc(void)
{
//	Adc_StatusType res;

	Adc_StartGroupConversion(ADC_CHN_1);

//	while(1)
//	{
//    	res = Adc_GetGroupStatus(ADC_CHN_1);
//    	if(res == ADC_COMPLETED || res == ADC_STREAM_COMPLETED)
//    	{
//    		break;
//    	}
//	}

	while(Adc_ReadGroup(ADC_CHN_1,AdcReadGroupResult) == E_NOT_OK);

	return AdcReadGroupResult[0];
}
