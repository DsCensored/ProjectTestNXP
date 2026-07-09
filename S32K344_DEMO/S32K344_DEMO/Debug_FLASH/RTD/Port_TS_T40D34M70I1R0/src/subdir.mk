################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/Port_TS_T40D34M70I1R0/src/Igf_Port_Ip.c \
../RTD/Port_TS_T40D34M70I1R0/src/Port.c \
../RTD/Port_TS_T40D34M70I1R0/src/Port_Ipw.c \
../RTD/Port_TS_T40D34M70I1R0/src/Siul2_Port_Ip.c \
../RTD/Port_TS_T40D34M70I1R0/src/Tspc_Port_Ip.c 

OBJS += \
./RTD/Port_TS_T40D34M70I1R0/src/Igf_Port_Ip.o \
./RTD/Port_TS_T40D34M70I1R0/src/Port.o \
./RTD/Port_TS_T40D34M70I1R0/src/Port_Ipw.o \
./RTD/Port_TS_T40D34M70I1R0/src/Siul2_Port_Ip.o \
./RTD/Port_TS_T40D34M70I1R0/src/Tspc_Port_Ip.o 

C_DEPS += \
./RTD/Port_TS_T40D34M70I1R0/src/Igf_Port_Ip.d \
./RTD/Port_TS_T40D34M70I1R0/src/Port.d \
./RTD/Port_TS_T40D34M70I1R0/src/Port_Ipw.d \
./RTD/Port_TS_T40D34M70I1R0/src/Siul2_Port_Ip.d \
./RTD/Port_TS_T40D34M70I1R0/src/Tspc_Port_Ip.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/Port_TS_T40D34M70I1R0/src/%.o: ../RTD/Port_TS_T40D34M70I1R0/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/Port_TS_T40D34M70I1R0/src/Igf_Port_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


