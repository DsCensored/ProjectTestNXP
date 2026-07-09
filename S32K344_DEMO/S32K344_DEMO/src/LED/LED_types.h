/*
 * File: LED_types.h
 *
 * Code generated for Simulink model 'LED'.
 *
 * Model version                  : 14.132
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Jul  1 14:29:26 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LED_types_h_
#define RTW_HEADER_LED_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_

typedef struct {
  uint8_T ProtocolMode;
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint8_T BRS;
  uint8_T ESI;
  uint8_T DLC;
  uint32_T ID;
  uint32_T Reserved;
  real_T Timestamp;
  uint8_T Data[64];
} CAN_FD_MESSAGE_BUS;

#endif
#endif                                 /* RTW_HEADER_LED_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
