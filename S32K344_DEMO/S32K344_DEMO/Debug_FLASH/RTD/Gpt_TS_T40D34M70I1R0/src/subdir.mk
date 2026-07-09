################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Gpt_TS_T40D34M70I1R0/src/Emios_Gpt_Ip.c \
../RTD/Gpt_TS_T40D34M70I1R0/src/Gpt.c \
../RTD/Gpt_TS_T40D34M70I1R0/src/Gpt_Ipw.c \
../RTD/Gpt_TS_T40D34M70I1R0/src/Pit_Ip.c \
../RTD/Gpt_TS_T40D34M70I1R0/src/Rtc_Ip.c \
../RTD/Gpt_TS_T40D34M70I1R0/src/Stm_Ip.c 

OBJS += \
./RTD/Gpt_TS_T40D34M70I1R0/src/Emios_Gpt_Ip.o \
./RTD/Gpt_TS_T40D34M70I1R0/src/Gpt.o \
./RTD/Gpt_TS_T40D34M70I1R0/src/Gpt_Ipw.o \
./RTD/Gpt_TS_T40D34M70I1R0/src/Pit_Ip.o \
./RTD/Gpt_TS_T40D34M70I1R0/src/Rtc_Ip.o \
./RTD/Gpt_TS_T40D34M70I1R0/src/Stm_Ip.o 

C_DEPS += \
./RTD/Gpt_TS_T40D34M70I1R0/src/Emios_Gpt_Ip.d \
./RTD/Gpt_TS_T40D34M70I1R0/src/Gpt.d \
./RTD/Gpt_TS_T40D34M70I1R0/src/Gpt_Ipw.d \
./RTD/Gpt_TS_T40D34M70I1R0/src/Pit_Ip.d \
./RTD/Gpt_TS_T40D34M70I1R0/src/Rtc_Ip.d \
./RTD/Gpt_TS_T40D34M70I1R0/src/Stm_Ip.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Gpt_TS_T40D34M70I1R0/src/%.o: ../RTD/Gpt_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Gpt_TS_T40D34M70I1R0/src/Emios_Gpt_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


