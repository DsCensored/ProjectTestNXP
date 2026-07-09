################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Os_TS_T40D34M70I1R0/src/Os_counter_api.c \
../RTD/Os_TS_T40D34M70I1R0/src/Os_event.c \
../RTD/Os_TS_T40D34M70I1R0/src/Os_isr.c \
../RTD/Os_TS_T40D34M70I1R0/src/Os_multicore.c \
../RTD/Os_TS_T40D34M70I1R0/src/Os_scheduler.c 

OBJS += \
./RTD/Os_TS_T40D34M70I1R0/src/Os_counter_api.o \
./RTD/Os_TS_T40D34M70I1R0/src/Os_event.o \
./RTD/Os_TS_T40D34M70I1R0/src/Os_isr.o \
./RTD/Os_TS_T40D34M70I1R0/src/Os_multicore.o \
./RTD/Os_TS_T40D34M70I1R0/src/Os_scheduler.o 

C_DEPS += \
./RTD/Os_TS_T40D34M70I1R0/src/Os_counter_api.d \
./RTD/Os_TS_T40D34M70I1R0/src/Os_event.d \
./RTD/Os_TS_T40D34M70I1R0/src/Os_isr.d \
./RTD/Os_TS_T40D34M70I1R0/src/Os_multicore.d \
./RTD/Os_TS_T40D34M70I1R0/src/Os_scheduler.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Os_TS_T40D34M70I1R0/src/%.o: ../RTD/Os_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Os_TS_T40D34M70I1R0/src/Os_counter_api.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


