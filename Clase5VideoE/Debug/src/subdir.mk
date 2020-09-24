################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Clase5VideoE.c \
../src/utn.c \
../src/utnm.c 

OBJS += \
./src/Clase5VideoE.o \
./src/utn.o \
./src/utnm.o 

C_DEPS += \
./src/Clase5VideoE.d \
./src/utn.d \
./src/utnm.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


