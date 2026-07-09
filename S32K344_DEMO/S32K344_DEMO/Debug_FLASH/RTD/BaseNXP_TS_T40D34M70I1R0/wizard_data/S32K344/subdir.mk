################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Igf_Port_Ip_Cfg.c \
../RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Siul2_Port_Ip_Cfg.c \
../RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Tspc_Port_Ip_Cfg.c 

OBJS += \
./RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Igf_Port_Ip_Cfg.o \
./RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Siul2_Port_Ip_Cfg.o \
./RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Tspc_Port_Ip_Cfg.o 

C_DEPS += \
./RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Igf_Port_Ip_Cfg.d \
./RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Siul2_Port_Ip_Cfg.d \
./RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Tspc_Port_Ip_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/%.o: ../RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/Igf_Port_Ip_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


