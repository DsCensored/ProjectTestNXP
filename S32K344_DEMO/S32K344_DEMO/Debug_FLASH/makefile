################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/LED/subdir.mk
-include src/ICU/subdir.mk
-include src/CAN/subdir.mk
-include src/ADC/subdir.mk
-include src/subdir.mk
-include RTD/Rte_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Pwm_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Port_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/gcc/subdir.mk
-include RTD/Platform_TS_T40D34M70I1R0/startup/src/m7/subdir.mk
-include RTD/Platform_TS_T40D34M70I1R0/startup/src/subdir.mk
-include RTD/Platform_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Platform_TS_T40D34M70I1R0/build_files/gcc/subdir.mk
-include RTD/Os_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Mcu_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Mcl_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Icu_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Gpt_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/EcuM_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Dio_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Det_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Can_43_FLEXCAN_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/CanIf_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/BaseNXP_TS_T40D34M70I1R0/wizard_data/S32K344/subdir.mk
-include RTD/BaseNXP_TS_T40D34M70I1R0/src/subdir.mk
-include RTD/Adc_TS_T40D34M70I1R0/src/subdir.mk
-include Generate/src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
S32K344_DEMO2.siz \


# All Target
all: S32K344_DEMO2.elf secondary-outputs

# Tool invocations
S32K344_DEMO2.elf: $(OBJS) D:\S32K344_DEMO2\S32K344_DEMO2\RTD\Platform_TS_T40D34M70I1R0\build_files\gcc\linker_flash_s32k344.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "S32K344_DEMO2.elf" "@S32K344_DEMO2.args"  $(USER_OBJS)  -lm
	@echo 'Finished building target: $@'
	@echo ' '

S32K344_DEMO2.siz: S32K344_DEMO2.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley S32K344_DEMO2.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
