################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/CanIf_TS_T40D34M70I1R0/src/CanIf.c 

OBJS += \
./RTD/CanIf_TS_T40D34M70I1R0/src/CanIf.o 

C_DEPS += \
./RTD/CanIf_TS_T40D34M70I1R0/src/CanIf.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/CanIf_TS_T40D34M70I1R0/src/%.o: ../RTD/CanIf_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/CanIf_TS_T40D34M70I1R0/src/CanIf.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


