################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/src/lv_gpu/lv_gpu_stm32_dma2d.c 

OBJS += \
./Drivers/lvgl_gui/src/lv_gpu/lv_gpu_stm32_dma2d.o 

C_DEPS += \
./Drivers/lvgl_gui/src/lv_gpu/lv_gpu_stm32_dma2d.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/src/lv_gpu/lv_gpu_stm32_dma2d.o: ../Drivers/lvgl_gui/src/lv_gpu/lv_gpu_stm32_dma2d.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_gpu/lv_gpu_stm32_dma2d.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

