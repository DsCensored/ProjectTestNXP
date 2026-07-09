################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Pwm_TS_T40D34M70I1R0/src/Emios_Pwm_Ip.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Emios_Pwm_Ip_Irq.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Etpu_Pwm_Ip.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Etpu_Pwm_Ip_Irq.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/FlexPwm_Ip.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/FlexPwm_Ip_Irq.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Flexio_Pwm_Ip.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Flexio_Pwm_Ip_Irq.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Pwm.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Pwm_Ipw.c \
../RTD/Pwm_TS_T40D34M70I1R0/src/Pwm_Ipw_Irq.c 

OBJS += \
./RTD/Pwm_TS_T40D34M70I1R0/src/Emios_Pwm_Ip.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Emios_Pwm_Ip_Irq.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Etpu_Pwm_Ip.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Etpu_Pwm_Ip_Irq.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/FlexPwm_Ip.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/FlexPwm_Ip_Irq.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Flexio_Pwm_Ip.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Flexio_Pwm_Ip_Irq.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Pwm.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Pwm_Ipw.o \
./RTD/Pwm_TS_T40D34M70I1R0/src/Pwm_Ipw_Irq.o 

C_DEPS += \
./RTD/Pwm_TS_T40D34M70I1R0/src/Emios_Pwm_Ip.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Emios_Pwm_Ip_Irq.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Etpu_Pwm_Ip.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Etpu_Pwm_Ip_Irq.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/FlexPwm_Ip.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/FlexPwm_Ip_Irq.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Flexio_Pwm_Ip.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Flexio_Pwm_Ip_Irq.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Pwm.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Pwm_Ipw.d \
./RTD/Pwm_TS_T40D34M70I1R0/src/Pwm_Ipw_Irq.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Pwm_TS_T40D34M70I1R0/src/%.o: ../RTD/Pwm_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Pwm_TS_T40D34M70I1R0/src/Emios_Pwm_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


