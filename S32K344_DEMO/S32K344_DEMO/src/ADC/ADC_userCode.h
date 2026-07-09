/*
 * ADC_userCode.h
 *
 *  Created on: 2026年6月30日
 *      Author: CENSORED
 */

#ifndef ADC_ADC_USERCODE_H_
#define ADC_ADC_USERCODE_H_

#include "Adc.h"
#include "rtwtypes.h"

#define ADC_CHN_1 0

#define NUM_RESULTS         (3u)
#define RESULT_BUFF_VAL     (0xaaaa)
#define ADC_RESULT_BUFF_VAL (0xbbbb)

extern Adc_ValueGroupType    ResultBuffer[NUM_RESULTS];
extern Adc_ValueGroupType    AdcReadGroupResult[NUM_RESULTS];
extern uint16_T ADC_userGetAdc(void);

#endif /* ADC_ADC_USERCODE_H_ */
