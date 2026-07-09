################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Icu_TS_T40D34M70I1R0/src/Cmp_Ip.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Emios_Icu_Ip.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Emios_Icu_Ip_Irq.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Icu.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Icu_Ipw.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Siul2_Icu_Ip.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Siul2_Icu_Ip_Irq.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Wkpu_Ip.c \
../RTD/Icu_TS_T40D34M70I1R0/src/Wkpu_Ip_Irq.c 

OBJS += \
./RTD/Icu_TS_T40D34M70I1R0/src/Cmp_Ip.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Emios_Icu_Ip.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Emios_Icu_Ip_Irq.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Icu.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Icu_Ipw.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Siul2_Icu_Ip.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Siul2_Icu_Ip_Irq.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Wkpu_Ip.o \
./RTD/Icu_TS_T40D34M70I1R0/src/Wkpu_Ip_Irq.o 

C_DEPS += \
./RTD/Icu_TS_T40D34M70I1R0/src/Cmp_Ip.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Emios_Icu_Ip.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Emios_Icu_Ip_Irq.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Icu.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Icu_Ipw.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Siul2_Icu_Ip.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Siul2_Icu_Ip_Irq.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Wkpu_Ip.d \
./RTD/Icu_TS_T40D34M70I1R0/src/Wkpu_Ip_Irq.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Icu_TS_T40D34M70I1R0/src/%.o: ../RTD/Icu_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Icu_TS_T40D34M70I1R0/src/Cmp_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


