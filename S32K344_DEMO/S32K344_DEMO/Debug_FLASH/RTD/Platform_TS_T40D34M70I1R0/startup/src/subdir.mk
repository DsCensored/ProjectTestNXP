################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Platform_TS_T40D34M70I1R0/startup/src/nvic.c \
../RTD/Platform_TS_T40D34M70I1R0/startup/src/sys_init.c \
../RTD/Platform_TS_T40D34M70I1R0/startup/src/system.c 

OBJS += \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/nvic.o \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/sys_init.o \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/system.o 

C_DEPS += \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/nvic.d \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/sys_init.d \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/system.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Platform_TS_T40D34M70I1R0/startup/src/%.o: ../RTD/Platform_TS_T40D34M70I1R0/startup/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Platform_TS_T40D34M70I1R0/startup/src/nvic.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


