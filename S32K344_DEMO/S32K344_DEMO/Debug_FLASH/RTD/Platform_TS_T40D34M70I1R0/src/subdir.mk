################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Platform_TS_T40D34M70I1R0/src/IntCtrl_Ip.c \
../RTD/Platform_TS_T40D34M70I1R0/src/Mpu_M7_Ip.c \
../RTD/Platform_TS_T40D34M70I1R0/src/Platform.c \
../RTD/Platform_TS_T40D34M70I1R0/src/Platform_Ipw.c \
../RTD/Platform_TS_T40D34M70I1R0/src/System_Ip.c 

OBJS += \
./RTD/Platform_TS_T40D34M70I1R0/src/IntCtrl_Ip.o \
./RTD/Platform_TS_T40D34M70I1R0/src/Mpu_M7_Ip.o \
./RTD/Platform_TS_T40D34M70I1R0/src/Platform.o \
./RTD/Platform_TS_T40D34M70I1R0/src/Platform_Ipw.o \
./RTD/Platform_TS_T40D34M70I1R0/src/System_Ip.o 

C_DEPS += \
./RTD/Platform_TS_T40D34M70I1R0/src/IntCtrl_Ip.d \
./RTD/Platform_TS_T40D34M70I1R0/src/Mpu_M7_Ip.d \
./RTD/Platform_TS_T40D34M70I1R0/src/Platform.d \
./RTD/Platform_TS_T40D34M70I1R0/src/Platform_Ipw.d \
./RTD/Platform_TS_T40D34M70I1R0/src/System_Ip.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Platform_TS_T40D34M70I1R0/src/%.o: ../RTD/Platform_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Platform_TS_T40D34M70I1R0/src/IntCtrl_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


