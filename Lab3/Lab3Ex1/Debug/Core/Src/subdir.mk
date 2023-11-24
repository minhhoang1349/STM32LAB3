################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/Led7segment.c \
../Core/Src/Update7Seg.c \
../Core/Src/fsm1.c \
../Core/Src/fsm2.c \
../Core/Src/fsm3.c \
../Core/Src/global.c \
../Core/Src/input_processing.c \
../Core/Src/input_reading.c \
../Core/Src/main.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/timer.c \
../Core/Src/updateClockBuffer.c 

OBJS += \
./Core/Src/Led7segment.o \
./Core/Src/Update7Seg.o \
./Core/Src/fsm1.o \
./Core/Src/fsm2.o \
./Core/Src/fsm3.o \
./Core/Src/global.o \
./Core/Src/input_processing.o \
./Core/Src/input_reading.o \
./Core/Src/main.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/timer.o \
./Core/Src/updateClockBuffer.o 

C_DEPS += \
./Core/Src/Led7segment.d \
./Core/Src/Update7Seg.d \
./Core/Src/fsm1.d \
./Core/Src/fsm2.d \
./Core/Src/fsm3.d \
./Core/Src/global.d \
./Core/Src/input_processing.d \
./Core/Src/input_reading.d \
./Core/Src/main.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/timer.d \
./Core/Src/updateClockBuffer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/Led7segment.cyclo ./Core/Src/Led7segment.d ./Core/Src/Led7segment.o ./Core/Src/Led7segment.su ./Core/Src/Update7Seg.cyclo ./Core/Src/Update7Seg.d ./Core/Src/Update7Seg.o ./Core/Src/Update7Seg.su ./Core/Src/fsm1.cyclo ./Core/Src/fsm1.d ./Core/Src/fsm1.o ./Core/Src/fsm1.su ./Core/Src/fsm2.cyclo ./Core/Src/fsm2.d ./Core/Src/fsm2.o ./Core/Src/fsm2.su ./Core/Src/fsm3.cyclo ./Core/Src/fsm3.d ./Core/Src/fsm3.o ./Core/Src/fsm3.su ./Core/Src/global.cyclo ./Core/Src/global.d ./Core/Src/global.o ./Core/Src/global.su ./Core/Src/input_processing.cyclo ./Core/Src/input_processing.d ./Core/Src/input_processing.o ./Core/Src/input_processing.su ./Core/Src/input_reading.cyclo ./Core/Src/input_reading.d ./Core/Src/input_reading.o ./Core/Src/input_reading.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/stm32f1xx_hal_msp.cyclo ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.cyclo ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.cyclo ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/timer.cyclo ./Core/Src/timer.d ./Core/Src/timer.o ./Core/Src/timer.su ./Core/Src/updateClockBuffer.cyclo ./Core/Src/updateClockBuffer.d ./Core/Src/updateClockBuffer.o ./Core/Src/updateClockBuffer.su

.PHONY: clean-Core-2f-Src

