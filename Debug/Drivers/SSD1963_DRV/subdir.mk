################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/SSD1963_DRV/SSD1963.c 

OBJS += \
./Drivers/SSD1963_DRV/SSD1963.o 

C_DEPS += \
./Drivers/SSD1963_DRV/SSD1963.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/SSD1963_DRV/SSD1963.o: ../Drivers/SSD1963_DRV/SSD1963.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/SSD1963_DRV/SSD1963.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

