################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/COMMON_DRV/Common.c 

OBJS += \
./Drivers/COMMON_DRV/Common.o 

C_DEPS += \
./Drivers/COMMON_DRV/Common.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/COMMON_DRV/Common.o: ../Drivers/COMMON_DRV/Common.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/COMMON_DRV/Common.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

