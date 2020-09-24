################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Clase7EjUno.c \
../src/utnFuncionesGenericas.c 

OBJS += \
./src/Clase7EjUno.o \
./src/utnFuncionesGenericas.o 

C_DEPS += \
./src/Clase7EjUno.d \
./src/utnFuncionesGenericas.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


