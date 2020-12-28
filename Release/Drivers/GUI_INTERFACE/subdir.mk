################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/GUI_INTERFACE/common_gui.c 

OBJS += \
./Drivers/GUI_INTERFACE/common_gui.o 

C_DEPS += \
./Drivers/GUI_INTERFACE/common_gui.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/GUI_INTERFACE/common_gui.o: ../Drivers/GUI_INTERFACE/common_gui.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/GUI_INTERFACE/common_gui.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

