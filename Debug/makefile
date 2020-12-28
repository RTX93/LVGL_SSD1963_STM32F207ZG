################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/lvgl_gui/tests/lv_test_objx/subdir.mk
-include Drivers/lvgl_gui/tests/lv_test_core/subdir.mk
-include Drivers/lvgl_gui/tests/subdir.mk
-include Drivers/lvgl_gui/src/lv_widgets/subdir.mk
-include Drivers/lvgl_gui/src/lv_themes/subdir.mk
-include Drivers/lvgl_gui/src/lv_misc/subdir.mk
-include Drivers/lvgl_gui/src/lv_hal/subdir.mk
-include Drivers/lvgl_gui/src/lv_gpu/subdir.mk
-include Drivers/lvgl_gui/src/lv_font/subdir.mk
-include Drivers/lvgl_gui/src/lv_draw/subdir.mk
-include Drivers/lvgl_gui/src/lv_core/subdir.mk
-include Drivers/lvgl_gui/examples/porting/subdir.mk
-include Drivers/lvgl_gui/subdir.mk
-include Drivers/STM32F2xx_HAL_Driver/Src/subdir.mk
-include Drivers/SSD1963_DRV/subdir.mk
-include Drivers/GUI_INTERFACE/subdir.mk
-include Drivers/COMMON_DRV/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
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
LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.list \

OBJCOPY_BIN += \
LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.bin \


# All Target
all: LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.elf secondary-outputs

# Tool invocations
LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.elf: $(OBJS) $(USER_OBJS) /home/raveen/STM32CubeIDE/workspace_1.4.0/Vent_Gui_STM32F207Zg/STM32F207ZGTX_FLASH.ld
	arm-none-eabi-gcc -o "LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"/home/raveen/STM32CubeIDE/workspace_1.4.0/Vent_Gui_STM32F207Zg/STM32F207ZGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.list"
	@echo 'Finished building: $@'
	@echo ' '

LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "LVGL_SSD1963_STM32F207Zg_VENTILATOR_GUI.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
