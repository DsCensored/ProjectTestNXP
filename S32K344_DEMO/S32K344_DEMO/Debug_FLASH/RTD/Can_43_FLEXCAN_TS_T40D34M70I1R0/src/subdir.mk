################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN.c \
../RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN_Ipw.c \
../RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN_Irq.c \
../RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip.c \
../RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip_HwAccess.c \
../RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip_Irq.c 

OBJS += \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN.o \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN_Ipw.o \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN_Irq.o \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip.o \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip_HwAccess.o \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip_Irq.o 

C_DEPS += \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN.d \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN_Ipw.d \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN_Irq.d \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip.d \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip_HwAccess.d \
./RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/FlexCAN_Ip_Irq.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/%.o: ../RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/Can_43_FLEXCAN.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


