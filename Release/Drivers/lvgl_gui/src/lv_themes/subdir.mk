################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/src/lv_themes/lv_theme.c \
../Drivers/lvgl_gui/src/lv_themes/lv_theme_empty.c \
../Drivers/lvgl_gui/src/lv_themes/lv_theme_material.c \
../Drivers/lvgl_gui/src/lv_themes/lv_theme_mono.c \
../Drivers/lvgl_gui/src/lv_themes/lv_theme_template.c 

OBJS += \
./Drivers/lvgl_gui/src/lv_themes/lv_theme.o \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_empty.o \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_material.o \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_mono.o \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_template.o 

C_DEPS += \
./Drivers/lvgl_gui/src/lv_themes/lv_theme.d \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_empty.d \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_material.d \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_mono.d \
./Drivers/lvgl_gui/src/lv_themes/lv_theme_template.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/src/lv_themes/lv_theme.o: ../Drivers/lvgl_gui/src/lv_themes/lv_theme.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_themes/lv_theme.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_themes/lv_theme_empty.o: ../Drivers/lvgl_gui/src/lv_themes/lv_theme_empty.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_themes/lv_theme_empty.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_themes/lv_theme_material.o: ../Drivers/lvgl_gui/src/lv_themes/lv_theme_material.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_themes/lv_theme_material.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_themes/lv_theme_mono.o: ../Drivers/lvgl_gui/src/lv_themes/lv_theme_mono.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_themes/lv_theme_mono.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_themes/lv_theme_template.o: ../Drivers/lvgl_gui/src/lv_themes/lv_theme_template.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_themes/lv_theme_template.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

