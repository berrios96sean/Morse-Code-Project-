################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CMSIS/system_MKL46Z4.c 

OBJS += \
./CMSIS/system_MKL46Z4.o 

C_DEPS += \
./CMSIS/system_MKL46Z4.d 


# Each subdirectory must supply rules for building sources it contributes
CMSIS/%.o: ../CMSIS/%.c CMSIS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DCPU_MKL46Z256VLL4 -DCPU_MKL46Z256VLL4_cm0plus -DSDK_OS_BAREMETAL -DFSL_RTOS_BM -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\seanb\Documents\MCUXpressoIDE_11.5.0_7232\workspace\morseCode_proj1\board" -I"C:\Users\seanb\Documents\MCUXpressoIDE_11.5.0_7232\workspace\morseCode_proj1\source" -I"C:\Users\seanb\Documents\MCUXpressoIDE_11.5.0_7232\workspace\morseCode_proj1" -I"C:\Users\seanb\Documents\MCUXpressoIDE_11.5.0_7232\workspace\morseCode_proj1\drivers" -I"C:\Users\seanb\Documents\MCUXpressoIDE_11.5.0_7232\workspace\morseCode_proj1\utilities" -I"C:\Users\seanb\Documents\MCUXpressoIDE_11.5.0_7232\workspace\morseCode_proj1\startup" -I"C:\Users\seanb\Documents\MCUXpressoIDE_11.5.0_7232\workspace\morseCode_proj1\CMSIS" -O0 -fno-common -g3 -Wall -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


