################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/tests/lv_test_objx/lv_test_cont.c 

OBJS += \
./Drivers/lvgl_gui/tests/lv_test_objx/lv_test_cont.o 

C_DEPS += \
./Drivers/lvgl_gui/tests/lv_test_objx/lv_test_cont.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/tests/lv_test_objx/lv_test_cont.o: ../Drivers/lvgl_gui/tests/lv_test_objx/lv_test_cont.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/tests/lv_test_objx/lv_test_cont.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

