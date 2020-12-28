################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_arc.c \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_blend.c \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_img.c \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_label.c \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_line.c \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_mask.c \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_rect.c \
../Drivers/lvgl_gui/src/lv_draw/lv_draw_triangle.c \
../Drivers/lvgl_gui/src/lv_draw/lv_img_buf.c \
../Drivers/lvgl_gui/src/lv_draw/lv_img_cache.c \
../Drivers/lvgl_gui/src/lv_draw/lv_img_decoder.c 

OBJS += \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_arc.o \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_blend.o \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_img.o \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_label.o \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_line.o \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_mask.o \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_rect.o \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_triangle.o \
./Drivers/lvgl_gui/src/lv_draw/lv_img_buf.o \
./Drivers/lvgl_gui/src/lv_draw/lv_img_cache.o \
./Drivers/lvgl_gui/src/lv_draw/lv_img_decoder.o 

C_DEPS += \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_arc.d \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_blend.d \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_img.d \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_label.d \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_line.d \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_mask.d \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_rect.d \
./Drivers/lvgl_gui/src/lv_draw/lv_draw_triangle.d \
./Drivers/lvgl_gui/src/lv_draw/lv_img_buf.d \
./Drivers/lvgl_gui/src/lv_draw/lv_img_cache.d \
./Drivers/lvgl_gui/src/lv_draw/lv_img_decoder.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/src/lv_draw/lv_draw_arc.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_arc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_arc.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_draw_blend.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_blend.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_blend.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_draw_img.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_img.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_img.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_draw_label.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_label.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_label.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_draw_line.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_line.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_line.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_draw_mask.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_mask.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_mask.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_draw_rect.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_rect.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_rect.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_draw_triangle.o: ../Drivers/lvgl_gui/src/lv_draw/lv_draw_triangle.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_draw_triangle.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_img_buf.o: ../Drivers/lvgl_gui/src/lv_draw/lv_img_buf.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_img_buf.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_img_cache.o: ../Drivers/lvgl_gui/src/lv_draw/lv_img_cache.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_img_cache.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_draw/lv_img_decoder.o: ../Drivers/lvgl_gui/src/lv_draw/lv_img_decoder.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F207xx -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_draw/lv_img_decoder.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

