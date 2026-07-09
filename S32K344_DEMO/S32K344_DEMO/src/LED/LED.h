/*
 * File: LED.h
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

#ifndef RTW_HEADER_LED_h_
#define RTW_HEADER_LED_h_
#ifndef LED_COMMON_INCLUDES_
#define LED_COMMON_INCLUDES_
#include <math.h>
#include "rtwtypes.h"
#include "can_fd_message.h"
#endif                                 /* LED_COMMON_INCLUDES_ */

#include "LED_types.h"

/* user code (top of header file) */
#include "LED_Ctrl.h"
#include "ADC_userCode.h"

/* Block signals (default storage) */
typedef struct {
  real_T CANFDUnpack_o1;               /* '<Root>/CAN FD Unpack' */
  real_T CANFDUnpack_o2;               /* '<Root>/CAN FD Unpack' */
  real_T CANFDUnpack_o3;               /* '<Root>/CAN FD Unpack' */
  real_T CANFDUnpack_o4;               /* '<Root>/CAN FD Unpack' */
} B_LED_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S1>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S5>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S2>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S6>/Delay Input1' */
  real_T DelayInput1_DSTATE_er;        /* '<S3>/Delay Input1' */
  real_T DelayInput1_DSTATE_ee;        /* '<S7>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S4>/Delay Input1' */
  real_T DelayInput1_DSTATE_f;         /* '<S8>/Delay Input1' */
  int_T CANFDUnpack_ModeSignalID;      /* '<Root>/CAN FD Unpack' */
  int_T CANFDUnpack_StatusPortID;      /* '<Root>/CAN FD Unpack' */
  int_T CANFDPack_ModeSignalID;        /* '<Root>/CAN FD Pack' */
} DW_LED_T;

/* Block signals (default storage) */
extern B_LED_T LED_B;

/* Block states (default storage) */
extern DW_LED_T LED_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern CAN_FD_MESSAGE_BUS CAN_msgCtrlCmd;/* '<Root>/Inport' */
extern CAN_FD_MESSAGE_BUS CAN_msgSts;  /* '<Root>/CAN FD Pack' */
extern real32_T BSW_uADC_PA11;         /* '<Root>/Product' */

/* Model entry point functions */
extern void LED_initialize(void);
extern void LED_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LED'
 * '<S1>'   : 'LED/Detect Decrease'
 * '<S2>'   : 'LED/Detect Decrease1'
 * '<S3>'   : 'LED/Detect Decrease2'
 * '<S4>'   : 'LED/Detect Decrease3'
 * '<S5>'   : 'LED/Detect Increase'
 * '<S6>'   : 'LED/Detect Increase1'
 * '<S7>'   : 'LED/Detect Increase2'
 * '<S8>'   : 'LED/Detect Increase3'
 * '<S9>'   : 'LED/Enabled Subsystem'
 * '<S10>'  : 'LED/Enabled Subsystem1'
 * '<S11>'  : 'LED/Enabled Subsystem2'
 * '<S12>'  : 'LED/Enabled Subsystem3'
 * '<S13>'  : 'LED/Enabled Subsystem4'
 * '<S14>'  : 'LED/Enabled Subsystem5'
 * '<S15>'  : 'LED/Enabled Subsystem6'
 * '<S16>'  : 'LED/Enabled Subsystem7'
 */
#endif                                 /* RTW_HEADER_LED_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
