################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/Propel_Chroma_True.c \
../Drivers/lvgl_gui/lv_port_indev.c 

OBJS += \
./Drivers/lvgl_gui/Propel_Chroma_True.o \
./Drivers/lvgl_gui/lv_port_indev.o 

C_DEPS += \
./Drivers/lvgl_gui/Propel_Chroma_True.d \
./Drivers/lvgl_gui/lv_port_indev.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/Propel_Chroma_True.o: ../Drivers/lvgl_gui/Propel_Chroma_True.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/Propel_Chroma_True.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/lv_port_indev.o: ../Drivers/lvgl_gui/lv_port_indev.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/lv_port_indev.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

