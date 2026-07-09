################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Adc_TS_T40D34M70I1R0/src/Adc.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Adc_Ipw.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Adc_Ipw_Irq.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Adc_Sar_Ip.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Adc_Sar_Ip_Irq.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Bctu_Ip.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Bctu_Ip_Irq.c \
../RTD/Adc_TS_T40D34M70I1R0/src/DSPSS_Api.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Sdadc_Ip.c \
../RTD/Adc_TS_T40D34M70I1R0/src/Sdadc_Ip_Irq.c 

OBJS += \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Ipw.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Ipw_Irq.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Sar_Ip.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Sar_Ip_Irq.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Bctu_Ip.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Bctu_Ip_Irq.o \
./RTD/Adc_TS_T40D34M70I1R0/src/DSPSS_Api.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Sdadc_Ip.o \
./RTD/Adc_TS_T40D34M70I1R0/src/Sdadc_Ip_Irq.o 

C_DEPS += \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Ipw.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Ipw_Irq.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Sar_Ip.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Adc_Sar_Ip_Irq.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Bctu_Ip.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Bctu_Ip_Irq.d \
./RTD/Adc_TS_T40D34M70I1R0/src/DSPSS_Api.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Sdadc_Ip.d \
./RTD/Adc_TS_T40D34M70I1R0/src/Sdadc_Ip_Irq.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Adc_TS_T40D34M70I1R0/src/%.o: ../RTD/Adc_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Adc_TS_T40D34M70I1R0/src/Adc.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


