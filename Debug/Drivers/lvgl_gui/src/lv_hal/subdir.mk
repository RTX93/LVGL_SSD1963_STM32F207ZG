################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/src/lv_hal/lv_hal_disp.c \
../Drivers/lvgl_gui/src/lv_hal/lv_hal_indev.c \
../Drivers/lvgl_gui/src/lv_hal/lv_hal_tick.c 

OBJS += \
./Drivers/lvgl_gui/src/lv_hal/lv_hal_disp.o \
./Drivers/lvgl_gui/src/lv_hal/lv_hal_indev.o \
./Drivers/lvgl_gui/src/lv_hal/lv_hal_tick.o 

C_DEPS += \
./Drivers/lvgl_gui/src/lv_hal/lv_hal_disp.d \
./Drivers/lvgl_gui/src/lv_hal/lv_hal_indev.d \
./Drivers/lvgl_gui/src/lv_hal/lv_hal_tick.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/src/lv_hal/lv_hal_disp.o: ../Drivers/lvgl_gui/src/lv_hal/lv_hal_disp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_hal/lv_hal_disp.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_hal/lv_hal_indev.o: ../Drivers/lvgl_gui/src/lv_hal/lv_hal_indev.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_hal/lv_hal_indev.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_hal/lv_hal_tick.o: ../Drivers/lvgl_gui/src/lv_hal/lv_hal_tick.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_hal/lv_hal_tick.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

