################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/CAN/CAN_userCode.c 

OBJS += \
./src/CAN/CAN_userCode.o 

C_DEPS += \
./src/CAN/CAN_userCode.d 


# Each subdirectory must supply rules for building sources it contributes
src/CAN/%.o: ../src/CAN/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/CAN/CAN_userCode.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


