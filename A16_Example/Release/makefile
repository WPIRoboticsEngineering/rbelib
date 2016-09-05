################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include SRC/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
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
LSS += \
A16_Example.lss \

FLASH_IMAGE += \
A16_Example.hex \

EEPROM_IMAGE += \
A16_Example.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: A16_Example.elf secondary-outputs

# Tool invocations
A16_Example.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,A16_Example.map -Wl,-u,vfprintf -lprintf_flt -lm -L"R:\RBE3001 testing example workspace\rbelib16-17\RBELib\Release" -mmcu=atmega644p -o "A16_Example.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

A16_Example.lss: A16_Example.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S A16_Example.elf  >"A16_Example.lss"
	@echo 'Finished building: $@'
	@echo ' '

A16_Example.hex: A16_Example.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex A16_Example.elf  "A16_Example.hex"
	@echo 'Finished building: $@'
	@echo ' '

A16_Example.eep: A16_Example.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex A16_Example.elf  "A16_Example.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: A16_Example.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega644p A16_Example.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) A16_Example.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
