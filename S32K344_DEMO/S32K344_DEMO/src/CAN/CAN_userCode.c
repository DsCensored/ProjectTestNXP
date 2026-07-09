/*
 * CAN_userCode.c
 *
 *  Created on: 2026年7月1日
 *      Author: CENSORED
 */


#include "CAN_userCode.h"
#include <string.h>

uint32_T Tx_Cnt,Tx_Try = 0;
uint32_T Rx_Cnt = 0;

void CANFD_Message_Send(CAN_FD_MESSAGE_BUS* Msg)
{
//    Flexcan_Ip_DataInfoType tx_info;
//
//    tx_info.msg_id_type = (Msg->Extended == 0) ? FLEXCAN_MSG_ID_STD : FLEXCAN_MSG_ID_EXT;
//    tx_info.data_length = Msg->Length;
//    tx_info.fd_enable = true;      // 启用CAN FD模式
//    tx_info.fd_padding = 0xAA;     // 设置填充字节为0xAA
//    tx_info.enable_brs = true;     // 启用比特率切换
//    tx_info.is_remote = false;     // 不是远程帧
//    tx_info.is_polling = true;    // 使用中断模式

	PduInfoType TxPdu = {
			.SduLength = Msg->Length,
			.SduDataPtr = Msg->Data
	};


	Tx_Try++;
    if(FLEXCAN_STATUS_SUCCESS == CanIf_Transmit(CanIfTxPduCfg_0x102, &TxPdu))
    {
    	Tx_Cnt++;
    }
}

extern uint32_T Rx_NowCanId;
void CAN_RX_STD(PduIdType RxPduId, const PduInfoType * PduInfoPtr)
{
	CAN_msgCtrlCmd.ID = (Rx_NowCanId & 0x7FF);
	CAN_msgCtrlCmd.Length = PduInfoPtr->SduLength;
	CAN_msgCtrlCmd.Extended = 0;
	memcpy(CAN_msgCtrlCmd.Data,PduInfoPtr->SduDataPtr,CAN_msgCtrlCmd.Length);
}

void CAN_RX_EXT(PduIdType RxPduId, const PduInfoType * PduInfoPtr)
{
;
}

void CANFD_Message_Receive(CAN_FD_MESSAGE_BUS* Msg)
{
//	Can_HwType MB_STD = {
//		.CanId = 0x101,
//		.Hoh = (Can_HwHandleType)0U,
//		.ControllerId = 0,
//	};
//
//	PduInfoType RxPdu = {
//			.SduLength = 8,
//			.SduDataPtr = Msg->Data,
//	};

//	CanIf_RxIndication(&MB_STD,&RxPdu);


}
