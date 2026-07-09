/*
 * LED_Ctrl.c
 *
 *  Created on: 2026年6月29日
 *      Author: CENSORED
 */
#include "Gpt.h"
#if (defined(EMIOS_GPT_IP_USED) && (STD_ON == EMIOS_GPT_IP_USED))
    #include "Mcl.h"
#endif
#include "Mcu.h"
#include "Platform.h"
#include "Port.h"
#include "Dio.h"

void LED0_ON(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PA29, STD_OFF);
}
void LED0_OFF(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PA29, STD_ON);
}
void LED1_ON(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PA30, STD_OFF);
}
void LED1_OFF(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PA30, STD_ON);
}
void LED2_ON(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PA31, STD_OFF);
}
void LED2_OFF(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PA31, STD_ON);
}
void LED3_ON(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PB18, STD_OFF);
}
void LED3_OFF(void)
{
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_PB18, STD_ON);
}
