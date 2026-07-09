################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Det_TS_T40D34M70I1R0/src/Det.c \
../RTD/Det_TS_T40D34M70I1R0/src/Det_stub.c 

OBJS += \
./RTD/Det_TS_T40D34M70I1R0/src/Det.o \
./RTD/Det_TS_T40D34M70I1R0/src/Det_stub.o 

C_DEPS += \
./RTD/Det_TS_T40D34M70I1R0/src/Det.d \
./RTD/Det_TS_T40D34M70I1R0/src/Det_stub.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Det_TS_T40D34M70I1R0/src/%.o: ../RTD/Det_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Det_TS_T40D34M70I1R0/src/Det.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


