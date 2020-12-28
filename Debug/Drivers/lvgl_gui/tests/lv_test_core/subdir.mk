################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/tests/lv_test_core/lv_test_core.c \
../Drivers/lvgl_gui/tests/lv_test_core/lv_test_obj.c \
../Drivers/lvgl_gui/tests/lv_test_core/lv_test_style.c 

OBJS += \
./Drivers/lvgl_gui/tests/lv_test_core/lv_test_core.o \
./Drivers/lvgl_gui/tests/lv_test_core/lv_test_obj.o \
./Drivers/lvgl_gui/tests/lv_test_core/lv_test_style.o 

C_DEPS += \
./Drivers/lvgl_gui/tests/lv_test_core/lv_test_core.d \
./Drivers/lvgl_gui/tests/lv_test_core/lv_test_obj.d \
./Drivers/lvgl_gui/tests/lv_test_core/lv_test_style.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/tests/lv_test_core/lv_test_core.o: ../Drivers/lvgl_gui/tests/lv_test_core/lv_test_core.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/tests/lv_test_core/lv_test_core.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/tests/lv_test_core/lv_test_obj.o: ../Drivers/lvgl_gui/tests/lv_test_core/lv_test_obj.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/tests/lv_test_core/lv_test_obj.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/tests/lv_test_core/lv_test_style.o: ../Drivers/lvgl_gui/tests/lv_test_core/lv_test_style.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/tests/lv_test_core/lv_test_style.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

