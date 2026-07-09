/*
 * ModelAPP.c
 *
 *  Created on: 2026年6月29日
 *      Author: CENSORED
 */

#include "MODELAPP.h"
#include "LED.h"
#include "rtwtypes.h"
#include "CAN_userCode.h"
#include "Can_43_FLEXCAN.h"
#include "SchM_Can_43_FLEXCAN.h"



void ModelAPP_Init(void)
{
	LED_initialize();
}

void APPTask_100ms(void)
{

	CANFD_Message_Receive(&CAN_msgCtrlCmd);
	LED_step();
	CANFD_Message_Send(&CAN_msgSts);
}

void APPTask_2ms(void)
{
	Can_43_FLEXCAN_MainFunction_Write();
	Can_43_FLEXCAN_MainFunction_Read();
	Can_43_FLEXCAN_MainFunction_BusOff();
}
