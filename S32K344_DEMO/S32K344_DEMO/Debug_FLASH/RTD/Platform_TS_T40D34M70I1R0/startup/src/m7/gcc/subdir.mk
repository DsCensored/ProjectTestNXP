################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/Vector_Table.s \
../RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/startup_cm7.s 

OBJS += \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/Vector_Table.o \
./RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/startup_cm7.o 


# Each subdirectory must supply rules for building sources it contributes
RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/%.o: ../RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS Assembler'
	arm-none-eabi-gcc "@RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/Vector_Table.args" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


