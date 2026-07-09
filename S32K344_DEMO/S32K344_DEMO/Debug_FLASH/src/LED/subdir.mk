################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/LED/LED.c \
../src/LED/LED_Ctrl.c 

OBJS += \
./src/LED/LED.o \
./src/LED/LED_Ctrl.o 

C_DEPS += \
./src/LED/LED.d \
./src/LED/LED_Ctrl.d 


# Each subdirectory must supply rules for building sources it contributes
src/LED/%.o: ../src/LED/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/LED/LED.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


