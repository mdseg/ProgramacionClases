################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Clase8Mauricio.c \
../src/alumno.c \
../src/calculosArray.c \
../src/utn.c 

OBJS += \
./src/Clase8Mauricio.o \
./src/alumno.o \
./src/calculosArray.o \
./src/utn.o 

C_DEPS += \
./src/Clase8Mauricio.d \
./src/alumno.d \
./src/calculosArray.d \
./src/utn.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


