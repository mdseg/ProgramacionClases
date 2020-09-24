################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ClaseSabado5C.c \
../src/UTN_ingreso.c \
../src/UTN_validaciones.c 

OBJS += \
./src/ClaseSabado5C.o \
./src/UTN_ingreso.o \
./src/UTN_validaciones.o 

C_DEPS += \
./src/ClaseSabado5C.d \
./src/UTN_ingreso.d \
./src/UTN_validaciones.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


