/*
 * CAN_userCode.h
 *
 *  Created on: 2026年7月1日
 *      Author: CENSORED
 */

#ifndef CAN_CAN_USERCODE_H_
#define CAN_CAN_USERCODE_H_

#include "Can_43_FLEXCAN.h"
#include "SchM_Can_43_FLEXCAN.h"
#include "can_fd_message.h"
#include "LED.h"
#include "CanIf.h"
#include "CanIf_Can.h"

void CANFD_Message_Send(CAN_FD_MESSAGE_BUS* Msg);
void CANFD_Message_Receive(CAN_FD_MESSAGE_BUS* Msg);
void CAN_RX_STD(PduIdType RxPduId, const PduInfoType * PduInfoPtr);
void CAN_RX_EXT(PduIdType RxPduId, const PduInfoType * PduInfoPtr);

#endif /* CAN_CAN_USERCODE_H_ */
