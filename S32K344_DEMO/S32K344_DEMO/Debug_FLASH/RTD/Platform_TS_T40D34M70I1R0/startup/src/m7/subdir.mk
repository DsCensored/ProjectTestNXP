################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/exceptions.c \
../RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/startup.c 

OBJS += \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/exceptions.o \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/startup.o 

C_DEPS += \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/exceptions.d \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/startup.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/%.o: ../RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/exceptions.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


