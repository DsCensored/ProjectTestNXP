/*
 * Task.h
 *
 *  Created on: 2026年6月29日
 *      Author: CENSORED
 */

#ifndef TASK_H_
#define TASK_H_

#include "rtwtypes.h"

typedef struct{
	uint32_T aimtick;
	uint32_T tick_delay;
	volatile uint8_T run_enable;
	void (*Task_Callback)(void);
}TaskStr;

void Task_ISR(uint32_T NowTick);
void Task_Start(void);

#endif /* TASK_H_ */
