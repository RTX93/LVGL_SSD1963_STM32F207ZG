################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/src/lv_core/lv_disp.c \
../Drivers/lvgl_gui/src/lv_core/lv_group.c \
../Drivers/lvgl_gui/src/lv_core/lv_indev.c \
../Drivers/lvgl_gui/src/lv_core/lv_obj.c \
../Drivers/lvgl_gui/src/lv_core/lv_refr.c \
../Drivers/lvgl_gui/src/lv_core/lv_style.c 

OBJS += \
./Drivers/lvgl_gui/src/lv_core/lv_disp.o \
./Drivers/lvgl_gui/src/lv_core/lv_group.o \
./Drivers/lvgl_gui/src/lv_core/lv_indev.o \
./Drivers/lvgl_gui/src/lv_core/lv_obj.o \
./Drivers/lvgl_gui/src/lv_core/lv_refr.o \
./Drivers/lvgl_gui/src/lv_core/lv_style.o 

C_DEPS += \
./Drivers/lvgl_gui/src/lv_core/lv_disp.d \
./Drivers/lvgl_gui/src/lv_core/lv_group.d \
./Drivers/lvgl_gui/src/lv_core/lv_indev.d \
./Drivers/lvgl_gui/src/lv_core/lv_obj.d \
./Drivers/lvgl_gui/src/lv_core/lv_refr.d \
./Drivers/lvgl_gui/src/lv_core/lv_style.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/src/lv_core/lv_disp.o: ../Drivers/lvgl_gui/src/lv_core/lv_disp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_core/lv_disp.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_core/lv_group.o: ../Drivers/lvgl_gui/src/lv_core/lv_group.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_core/lv_group.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_core/lv_indev.o: ../Drivers/lvgl_gui/src/lv_core/lv_indev.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_core/lv_indev.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_core/lv_obj.o: ../Drivers/lvgl_gui/src/lv_core/lv_obj.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_core/lv_obj.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_core/lv_refr.o: ../Drivers/lvgl_gui/src/lv_core/lv_refr.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_core/lv_refr.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_core/lv_style.o: ../Drivers/lvgl_gui/src/lv_core/lv_style.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_core/lv_style.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

