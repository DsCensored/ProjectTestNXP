################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Dio_TS_T40D34M70I1R0/src/Dio.c \
../RTD/Dio_TS_T40D34M70I1R0/src/Dio_Ipw.c \
../RTD/Dio_TS_T40D34M70I1R0/src/Siul2_Dio_Ip.c 

OBJS += \
./RTD/Dio_TS_T40D34M70I1R0/src/Dio.o \
./RTD/Dio_TS_T40D34M70I1R0/src/Dio_Ipw.o \
./RTD/Dio_TS_T40D34M70I1R0/src/Siul2_Dio_Ip.o 

C_DEPS += \
./RTD/Dio_TS_T40D34M70I1R0/src/Dio.d \
./RTD/Dio_TS_T40D34M70I1R0/src/Dio_Ipw.d \
./RTD/Dio_TS_T40D34M70I1R0/src/Siul2_Dio_Ip.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Dio_TS_T40D34M70I1R0/src/%.o: ../RTD/Dio_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Dio_TS_T40D34M70I1R0/src/Dio.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


