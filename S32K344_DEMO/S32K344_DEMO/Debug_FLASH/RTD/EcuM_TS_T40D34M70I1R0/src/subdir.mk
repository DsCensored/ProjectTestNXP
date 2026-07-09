################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/EcuM_TS_T40D34M70I1R0/src/EcuM.c 

OBJS += \
./RTD/EcuM_TS_T40D34M70I1R0/src/EcuM.o 

C_DEPS += \
./RTD/EcuM_TS_T40D34M70I1R0/src/EcuM.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/EcuM_TS_T40D34M70I1R0/src/%.o: ../RTD/EcuM_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/EcuM_TS_T40D34M70I1R0/src/EcuM.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


