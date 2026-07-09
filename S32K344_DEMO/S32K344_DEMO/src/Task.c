/*
 * Task.c
 *
 *  Created on: 2026年6月29日
 *      Author: CENSORED
 */

#include "Task.h"
#include "MODELAPP.h"
#include <stdlib.h>

static TaskStr Task_Buffer[] = {
		{
				.aimtick = 100,
				.tick_delay = 0,
				.run_enable = 0,
				.Task_Callback = APPTask_100ms
		},
		{
				.aimtick = 2,
				.tick_delay = 0,
				.run_enable = 0,
				.Task_Callback = APPTask_2ms
		}
};

#define TASK_NUM  (sizeof(Task_Buffer)/sizeof(TaskStr))

void Task_ISR(uint32_T NowTick)
{
	for(uint16_T i = 0; i < TASK_NUM; i++)
	{
		//为0时，表示为通知事件，不处理
		if(Task_Buffer[i].aimtick == 0)
		{
			continue;
		}
		// 无论 NowTick 是否溢出，只要它是 uint32_t，减法结果都是正确的经过时间
		else if((NowTick - Task_Buffer[i].tick_delay) >= Task_Buffer[i].aimtick)
		{
			Task_Buffer[i].run_enable = 1;
			Task_Buffer[i].tick_delay = NowTick;
		}
	}
}

void Task_Start(void)
{
	while(1)
	{
		for(uint16_T i = 0; i < TASK_NUM; i++)
		{
			if(Task_Buffer[i].run_enable)
			{
				Task_Buffer[i].run_enable = 0;
				Task_Buffer[i].Task_Callback();
			}
		}
	}
}
