################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ADC/ADC_userCode.c 

OBJS += \
./src/ADC/ADC_userCode.o 

C_DEPS += \
./src/ADC/ADC_userCode.d 


# Each subdirectory must supply rules for building sources it contributes
src/ADC/%.o: ../src/ADC/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ADC/ADC_userCode.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


