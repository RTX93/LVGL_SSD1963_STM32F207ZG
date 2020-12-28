################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/lvgl_gui/src/lv_misc/lv_anim.c \
../Drivers/lvgl_gui/src/lv_misc/lv_area.c \
../Drivers/lvgl_gui/src/lv_misc/lv_async.c \
../Drivers/lvgl_gui/src/lv_misc/lv_bidi.c \
../Drivers/lvgl_gui/src/lv_misc/lv_color.c \
../Drivers/lvgl_gui/src/lv_misc/lv_debug.c \
../Drivers/lvgl_gui/src/lv_misc/lv_fs.c \
../Drivers/lvgl_gui/src/lv_misc/lv_gc.c \
../Drivers/lvgl_gui/src/lv_misc/lv_ll.c \
../Drivers/lvgl_gui/src/lv_misc/lv_log.c \
../Drivers/lvgl_gui/src/lv_misc/lv_math.c \
../Drivers/lvgl_gui/src/lv_misc/lv_mem.c \
../Drivers/lvgl_gui/src/lv_misc/lv_printf.c \
../Drivers/lvgl_gui/src/lv_misc/lv_task.c \
../Drivers/lvgl_gui/src/lv_misc/lv_templ.c \
../Drivers/lvgl_gui/src/lv_misc/lv_txt.c \
../Drivers/lvgl_gui/src/lv_misc/lv_txt_ap.c \
../Drivers/lvgl_gui/src/lv_misc/lv_utils.c 

OBJS += \
./Drivers/lvgl_gui/src/lv_misc/lv_anim.o \
./Drivers/lvgl_gui/src/lv_misc/lv_area.o \
./Drivers/lvgl_gui/src/lv_misc/lv_async.o \
./Drivers/lvgl_gui/src/lv_misc/lv_bidi.o \
./Drivers/lvgl_gui/src/lv_misc/lv_color.o \
./Drivers/lvgl_gui/src/lv_misc/lv_debug.o \
./Drivers/lvgl_gui/src/lv_misc/lv_fs.o \
./Drivers/lvgl_gui/src/lv_misc/lv_gc.o \
./Drivers/lvgl_gui/src/lv_misc/lv_ll.o \
./Drivers/lvgl_gui/src/lv_misc/lv_log.o \
./Drivers/lvgl_gui/src/lv_misc/lv_math.o \
./Drivers/lvgl_gui/src/lv_misc/lv_mem.o \
./Drivers/lvgl_gui/src/lv_misc/lv_printf.o \
./Drivers/lvgl_gui/src/lv_misc/lv_task.o \
./Drivers/lvgl_gui/src/lv_misc/lv_templ.o \
./Drivers/lvgl_gui/src/lv_misc/lv_txt.o \
./Drivers/lvgl_gui/src/lv_misc/lv_txt_ap.o \
./Drivers/lvgl_gui/src/lv_misc/lv_utils.o 

C_DEPS += \
./Drivers/lvgl_gui/src/lv_misc/lv_anim.d \
./Drivers/lvgl_gui/src/lv_misc/lv_area.d \
./Drivers/lvgl_gui/src/lv_misc/lv_async.d \
./Drivers/lvgl_gui/src/lv_misc/lv_bidi.d \
./Drivers/lvgl_gui/src/lv_misc/lv_color.d \
./Drivers/lvgl_gui/src/lv_misc/lv_debug.d \
./Drivers/lvgl_gui/src/lv_misc/lv_fs.d \
./Drivers/lvgl_gui/src/lv_misc/lv_gc.d \
./Drivers/lvgl_gui/src/lv_misc/lv_ll.d \
./Drivers/lvgl_gui/src/lv_misc/lv_log.d \
./Drivers/lvgl_gui/src/lv_misc/lv_math.d \
./Drivers/lvgl_gui/src/lv_misc/lv_mem.d \
./Drivers/lvgl_gui/src/lv_misc/lv_printf.d \
./Drivers/lvgl_gui/src/lv_misc/lv_task.d \
./Drivers/lvgl_gui/src/lv_misc/lv_templ.d \
./Drivers/lvgl_gui/src/lv_misc/lv_txt.d \
./Drivers/lvgl_gui/src/lv_misc/lv_txt_ap.d \
./Drivers/lvgl_gui/src/lv_misc/lv_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/lvgl_gui/src/lv_misc/lv_anim.o: ../Drivers/lvgl_gui/src/lv_misc/lv_anim.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_anim.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_area.o: ../Drivers/lvgl_gui/src/lv_misc/lv_area.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_area.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_async.o: ../Drivers/lvgl_gui/src/lv_misc/lv_async.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_async.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_bidi.o: ../Drivers/lvgl_gui/src/lv_misc/lv_bidi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_bidi.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_color.o: ../Drivers/lvgl_gui/src/lv_misc/lv_color.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_color.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_debug.o: ../Drivers/lvgl_gui/src/lv_misc/lv_debug.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_debug.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_fs.o: ../Drivers/lvgl_gui/src/lv_misc/lv_fs.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_fs.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_gc.o: ../Drivers/lvgl_gui/src/lv_misc/lv_gc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_gc.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_ll.o: ../Drivers/lvgl_gui/src/lv_misc/lv_ll.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_ll.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_log.o: ../Drivers/lvgl_gui/src/lv_misc/lv_log.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_log.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_math.o: ../Drivers/lvgl_gui/src/lv_misc/lv_math.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_math.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_mem.o: ../Drivers/lvgl_gui/src/lv_misc/lv_mem.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_mem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_printf.o: ../Drivers/lvgl_gui/src/lv_misc/lv_printf.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_printf.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_task.o: ../Drivers/lvgl_gui/src/lv_misc/lv_task.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_task.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_templ.o: ../Drivers/lvgl_gui/src/lv_misc/lv_templ.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_templ.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_txt.o: ../Drivers/lvgl_gui/src/lv_misc/lv_txt.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_txt.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_txt_ap.o: ../Drivers/lvgl_gui/src/lv_misc/lv_txt_ap.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_txt_ap.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Drivers/lvgl_gui/src/lv_misc/lv_utils.o: ../Drivers/lvgl_gui/src/lv_misc/lv_utils.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F207xx -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F2xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc -I../Drivers/STM32F2xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/lvgl_gui/src/lv_misc/lv_utils.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

