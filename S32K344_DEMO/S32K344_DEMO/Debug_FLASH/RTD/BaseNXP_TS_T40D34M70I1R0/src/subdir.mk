################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Interrupts.c \
../RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Software_Semaphore.c \
../RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer.c \
../RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer_System.c \
../RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer_System_Internal_Systick.c 

OBJS += \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Interrupts.o \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Software_Semaphore.o \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer.o \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer_System.o \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer_System_Internal_Systick.o 

C_DEPS += \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Interrupts.d \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Software_Semaphore.d \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer.d \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer_System.d \
./RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Timer_System_Internal_Systick.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/BaseNXP_TS_T40D34M70I1R0/src/%.o: ../RTD/BaseNXP_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/BaseNXP_TS_T40D34M70I1R0/src/OsIf_Interrupts.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


