################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Toggling_led.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Toggling_led.list \

OBJCOPY_HEX += \
Toggling_led.hex \

OBJCOPY_BIN += \
Toggling_led.bin \


# All Target
all: Toggling_led.elf secondary-outputs

# Tool invocations
Toggling_led.elf: $(OBJS) $(USER_OBJS) D:\Kerolos\ diploma\ (embeded\ sys.)\diploma\ using\ git\Embedded_system_online_Diploma\Embedded_C_Course\unit_3_lesson_1\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "Toggling_led.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\Kerolos diploma (embeded sys.)\diploma using git\Embedded_system_online_Diploma\Embedded_C_Course\unit_3_lesson_1\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Toggling_led.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Toggling_led.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Toggling_led.list"
	@echo 'Finished building: $@'
	@echo ' '

Toggling_led.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "Toggling_led.hex"
	@echo 'Finished building: $@'
	@echo ' '

Toggling_led.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Toggling_led.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
