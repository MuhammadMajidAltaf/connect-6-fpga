################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
ELFSIZE += \
GCD_0.elf.size \

ELFCHECK += \
GCD_0.elf.elfcheck \


# All Target
all: GCD_0.elf secondary-outputs

# Tool invocations
GCD_0.elf: $(OBJS) ../src/lscript.ld $(USER_OBJS)
	@echo Building target: $@
	@echo Invoking: MicroBlaze gcc linker
	mb-gcc -Wl,--no-relax -Wl,-T -Wl,../src/lscript.ld -L../../GCD_bsp_0/microblaze_0/lib -mxl-barrel-shift -mxl-pattern-compare -mcpu=v8.30.a -mno-xl-soft-mul -o"GCD_0.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo Finished building target: $@
	@echo ' '

GCD_0.elf.size: GCD_0.elf
	@echo Invoking: MicroBlaze Print Size
	mb-size GCD_0.elf  |tee "GCD_0.elf.size"
	@echo Finished building: $@
	@echo ' '

GCD_0.elf.elfcheck: GCD_0.elf
	@echo Invoking: Xilinx ELF Check
	elfcheck GCD_0.elf -hw ../../final_hw_platform/system.xml -pe microblaze_0  |tee "GCD_0.elf.elfcheck"
	@echo Finished building: $@
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES)$(ELFSIZE)$(ELFCHECK)$(S_UPPER_DEPS) GCD_0.elf
	-@echo ' '

secondary-outputs: $(ELFSIZE) $(ELFCHECK)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
