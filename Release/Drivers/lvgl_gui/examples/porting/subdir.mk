################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/examples/porting/lv_port_disp_template.c \
../Drivers/lvgl_gui/examples/porting/lv_port_fs_template.c \
../Drivers/lvgl_gui/examples/porting/lv_port_indev_template.c 

OBJS += \
./Drivers/lvgl_gui/examples/porting/lv_port_disp_template.o \
./Drivers/lvgl_gui/examples/porting/lv_port_fs_template.o \
./Drivers/lvgl_gui/examples/porting/lv_port_indev_template.o 

C_DEPS += \
./Drivers/lvgl_gui/examples/porting/lv_port_disp_template.d \
./Drivers/lvgl_gui/examples/porting/lv_port_fs_template.d \
./Drivers/lvgl_gui/examples/porting/lv_port_indev_template.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/examples/porting/lv_port_disp_template.o: ../Drivers/lvgl_gui/examples/porting/lv_port_disp_template.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/examples/porting/lv_port_disp_template.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/examples/porting/lv_port_fs_template.o: ../Drivers/lvgl_gui/examples/porting/lv_port_fs_template.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/examples/porting/lv_port_fs_template.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/examples/porting/lv_port_indev_template.o: ../Drivers/lvgl_gui/examples/porting/lv_port_indev_template.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/examples/porting/lv_port_indev_template.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

