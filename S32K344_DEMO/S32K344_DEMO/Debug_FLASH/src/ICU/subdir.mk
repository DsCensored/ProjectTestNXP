################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ICU/ICU_userCode.c 

OBJS += \
./src/ICU/ICU_userCode.o 

C_DEPS += \
./src/ICU/ICU_userCode.d 


# Each subdirectory must supply rules for building sources it contributes
src/ICU/%.o: ../src/ICU/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/ICU/ICU_userCode.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


