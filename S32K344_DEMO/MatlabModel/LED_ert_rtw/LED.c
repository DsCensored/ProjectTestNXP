/*
 * File: LED.c
 *
 * Code generated for Simulink model 'LED'.
 *
 * Model version                  : 14.135
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Jul  2 17:44:00 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LED.h"
#include "rtwtypes.h"
#include "LED_types.h"

/* Exported block signals */
CAN_FD_MESSAGE_BUS CAN_msgCtrlCmd;     /* '<Root>/Inport' */
CAN_FD_MESSAGE_BUS CAN_msgSts;         /* '<Root>/CAN FD Pack' */
real32_T BSW_uADC_PA11;                /* '<Root>/Product' */

/* Block signals (default storage) */
B_LED_T LED_B;

/* Block states (default storage) */
DW_LED_T LED_DW;

/* Model step function */
void LED_step(void)
{
  uint16_T rtb_Saturation;

  /* CCaller: '<Root>/C Caller' */
  rtb_Saturation = ADC_userGetAdc();

  /* Saturate: '<Root>/Saturation' */
  if (rtb_Saturation > 16383) {
    rtb_Saturation = 16383U;
  }

  /* Product: '<Root>/Product' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  Saturate: '<Root>/Saturation'
   */
  BSW_uADC_PA11 = (real32_T)rtb_Saturation * 3.3F / 16383.0F;

  /* S-Function (scanfdunpack): '<Root>/CAN FD Unpack' incorporates:
   *  Inport: '<Root>/Inport'
   */
  {
    /* S-Function (scanfdunpack): '<Root>/CAN FD Unpack' */
    if ((8 == CAN_msgCtrlCmd.Length) && (CAN_msgCtrlCmd.ID != INVALID_CAN_ID) )
    {
      if ((257 == CAN_msgCtrlCmd.ID) && (0U == CAN_msgCtrlCmd.Extended) ) {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 0
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (CAN_msgCtrlCmd.Data[0]) & (uint8_T)(0x1U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              LED_B.CANFDUnpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 6
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (CAN_msgCtrlCmd.Data[0]) & (uint8_T)(0x40U)) >> 6);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              LED_B.CANFDUnpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 2
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (CAN_msgCtrlCmd.Data[0]) & (uint8_T)(0x4U)) >> 2);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              LED_B.CANFDUnpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 3
           *  length                  = 1
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (CAN_msgCtrlCmd.Data[0]) & (uint8_T)(0x8U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              LED_B.CANFDUnpack_o4 = result;
            }
          }
        }
      }
    }
  }

  /* S-Function (scanfdpack): '<Root>/CAN FD Pack' */
  /* S-Function (scanfdpack): '<Root>/CAN FD Pack' */
  CAN_msgSts.ID = 258;
  CAN_msgSts.Length = 8U;
  CAN_msgSts.Extended = 0U;
  CAN_msgSts.Remote = 0;
  CAN_msgSts.BRS = 1;
  CAN_msgSts.ProtocolMode = 1;
  CAN_msgSts.DLC = 8U;
  CAN_msgSts.Data[0] = 0;
  CAN_msgSts.Data[1] = 0;
  CAN_msgSts.Data[2] = 0;
  CAN_msgSts.Data[3] = 0;
  CAN_msgSts.Data[4] = 0;
  CAN_msgSts.Data[5] = 0;
  CAN_msgSts.Data[6] = 0;
  CAN_msgSts.Data[7] = 0;
  CAN_msgSts.Data[8] = 0;
  CAN_msgSts.Data[9] = 0;
  CAN_msgSts.Data[10] = 0;
  CAN_msgSts.Data[11] = 0;
  CAN_msgSts.Data[12] = 0;
  CAN_msgSts.Data[13] = 0;
  CAN_msgSts.Data[14] = 0;
  CAN_msgSts.Data[15] = 0;
  CAN_msgSts.Data[16] = 0;
  CAN_msgSts.Data[17] = 0;
  CAN_msgSts.Data[18] = 0;
  CAN_msgSts.Data[19] = 0;
  CAN_msgSts.Data[20] = 0;
  CAN_msgSts.Data[21] = 0;
  CAN_msgSts.Data[22] = 0;
  CAN_msgSts.Data[23] = 0;
  CAN_msgSts.Data[24] = 0;
  CAN_msgSts.Data[25] = 0;
  CAN_msgSts.Data[26] = 0;
  CAN_msgSts.Data[27] = 0;
  CAN_msgSts.Data[28] = 0;
  CAN_msgSts.Data[29] = 0;
  CAN_msgSts.Data[30] = 0;
  CAN_msgSts.Data[31] = 0;
  CAN_msgSts.Data[32] = 0;
  CAN_msgSts.Data[33] = 0;
  CAN_msgSts.Data[34] = 0;
  CAN_msgSts.Data[35] = 0;
  CAN_msgSts.Data[36] = 0;
  CAN_msgSts.Data[37] = 0;
  CAN_msgSts.Data[38] = 0;
  CAN_msgSts.Data[39] = 0;
  CAN_msgSts.Data[40] = 0;
  CAN_msgSts.Data[41] = 0;
  CAN_msgSts.Data[42] = 0;
  CAN_msgSts.Data[43] = 0;
  CAN_msgSts.Data[44] = 0;
  CAN_msgSts.Data[45] = 0;
  CAN_msgSts.Data[46] = 0;
  CAN_msgSts.Data[47] = 0;
  CAN_msgSts.Data[48] = 0;
  CAN_msgSts.Data[49] = 0;
  CAN_msgSts.Data[50] = 0;
  CAN_msgSts.Data[51] = 0;
  CAN_msgSts.Data[52] = 0;
  CAN_msgSts.Data[53] = 0;
  CAN_msgSts.Data[54] = 0;
  CAN_msgSts.Data[55] = 0;
  CAN_msgSts.Data[56] = 0;
  CAN_msgSts.Data[57] = 0;
  CAN_msgSts.Data[58] = 0;
  CAN_msgSts.Data[59] = 0;
  CAN_msgSts.Data[60] = 0;
  CAN_msgSts.Data[61] = 0;
  CAN_msgSts.Data[62] = 0;
  CAN_msgSts.Data[63] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 16
     *  length                  = 16
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.001
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real32_T outValue = 0;

      {
        real32_T result = BSW_uADC_PA11;

        /* no offset to apply */
        result = result * (1 / 0.001F);

        /* round to closest integer value for integer CAN signal */
        outValue = roundf(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real32_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real32_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            CAN_msgSts.Data[2] = CAN_msgSts.Data[2] | (uint8_T)((uint16_T)
              (packedValue & (uint16_T)0xFFU));
            CAN_msgSts.Data[1] = CAN_msgSts.Data[1] | (uint8_T)((uint16_T)
              ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 0
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = LED_B.CANFDUnpack_o1;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            CAN_msgSts.Data[0] = CAN_msgSts.Data[0] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1U));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 3
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = LED_B.CANFDUnpack_o2;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            CAN_msgSts.Data[0] = CAN_msgSts.Data[0] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 1
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = LED_B.CANFDUnpack_o3;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            CAN_msgSts.Data[0] = CAN_msgSts.Data[0] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 2
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = LED_B.CANFDUnpack_o4;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            CAN_msgSts.Data[0] = CAN_msgSts.Data[0] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }
  }

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  /* RelationalOperator: '<S1>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S1>/Delay Input1'
   *
   * Block description for '<S1>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o1 < LED_DW.DelayInput1_DSTATE) {
    /* CCaller: '<S9>/C Caller' */
    LED0_OFF();
  }

  /* End of RelationalOperator: '<S1>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem1' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  /* RelationalOperator: '<S5>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S5>/Delay Input1'
   *
   * Block description for '<S5>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o1 > LED_DW.DelayInput1_DSTATE_b) {
    /* CCaller: '<S10>/C Caller' */
    LED0_ON();
  }

  /* End of RelationalOperator: '<S5>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem1' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem2' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  /* RelationalOperator: '<S2>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S2>/Delay Input1'
   *
   * Block description for '<S2>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o2 < LED_DW.DelayInput1_DSTATE_i) {
    /* CCaller: '<S11>/C Caller' */
    LED1_OFF();
  }

  /* End of RelationalOperator: '<S2>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem2' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem3' incorporates:
   *  EnablePort: '<S12>/Enable'
   */
  /* RelationalOperator: '<S6>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S6>/Delay Input1'
   *
   * Block description for '<S6>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o2 > LED_DW.DelayInput1_DSTATE_e) {
    /* CCaller: '<S12>/C Caller' */
    LED1_ON();
  }

  /* End of RelationalOperator: '<S6>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem3' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem4' incorporates:
   *  EnablePort: '<S13>/Enable'
   */
  /* RelationalOperator: '<S3>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S3>/Delay Input1'
   *
   * Block description for '<S3>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o3 < LED_DW.DelayInput1_DSTATE_er) {
    /* CCaller: '<S13>/C Caller' */
    LED2_OFF();
  }

  /* End of RelationalOperator: '<S3>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem4' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem5' incorporates:
   *  EnablePort: '<S14>/Enable'
   */
  /* RelationalOperator: '<S7>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S7>/Delay Input1'
   *
   * Block description for '<S7>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o3 > LED_DW.DelayInput1_DSTATE_ee) {
    /* CCaller: '<S14>/C Caller' */
    LED2_ON();
  }

  /* End of RelationalOperator: '<S7>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem5' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem6' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  /* RelationalOperator: '<S4>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S4>/Delay Input1'
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o4 < LED_DW.DelayInput1_DSTATE_o) {
    /* CCaller: '<S15>/C Caller' */
    LED3_OFF();
  }

  /* End of RelationalOperator: '<S4>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem6' */

  /* Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem7' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  /* RelationalOperator: '<S8>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S8>/Delay Input1'
   *
   * Block description for '<S8>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (LED_B.CANFDUnpack_o4 > LED_DW.DelayInput1_DSTATE_f) {
    /* CCaller: '<S16>/C Caller' */
    LED3_ON();
  }

  /* End of RelationalOperator: '<S8>/FixPt Relational Operator' */
  /* End of Outputs for SubSystem: '<Root>/Enabled Subsystem7' */

  /* Update for UnitDelay: '<S1>/Delay Input1'
   *
   * Block description for '<S1>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE = LED_B.CANFDUnpack_o1;

  /* Update for UnitDelay: '<S5>/Delay Input1'
   *
   * Block description for '<S5>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE_b = LED_B.CANFDUnpack_o1;

  /* Update for UnitDelay: '<S2>/Delay Input1'
   *
   * Block description for '<S2>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE_i = LED_B.CANFDUnpack_o2;

  /* Update for UnitDelay: '<S6>/Delay Input1'
   *
   * Block description for '<S6>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE_e = LED_B.CANFDUnpack_o2;

  /* Update for UnitDelay: '<S3>/Delay Input1'
   *
   * Block description for '<S3>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE_er = LED_B.CANFDUnpack_o3;

  /* Update for UnitDelay: '<S7>/Delay Input1'
   *
   * Block description for '<S7>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE_ee = LED_B.CANFDUnpack_o3;

  /* Update for UnitDelay: '<S4>/Delay Input1'
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE_o = LED_B.CANFDUnpack_o4;

  /* Update for UnitDelay: '<S8>/Delay Input1'
   *
   * Block description for '<S8>/Delay Input1':
   *
   *  Store in Global RAM
   */
  LED_DW.DelayInput1_DSTATE_f = LED_B.CANFDUnpack_o4;
}

/* Model initialize function */
void LED_initialize(void)
{
  /* Start for S-Function (scanfdunpack): '<Root>/CAN FD Unpack' incorporates:
   *  Inport: '<Root>/Inport'
   */

  /*-----------S-Function Block: <Root>/CAN FD Unpack -----------------*/
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
