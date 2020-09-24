/*
 ============================================================================
 Name        : Clase7EjUno.c
 Author      : Marcos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utnFuncionesGenericas.h"

int calcularMayor(int* resultado, int num1, int num2);

int main(void) {
	int numeroMayor;
	int num1;
	int num2;

	if (utn_getInt(&num1, "Ingrese el primer número\n", "El valor ingresado es invalido.\n", -10000, 32000, 2) == 0)
	{
		if (utn_getInt(&num2, "Ingrese el segundo número\n", "El valor ingresado es invalido.\n", -10000, 32000, 2) == 0)
		{
			if(calcularMayor(&numeroMayor,num1,num2) == 0)
			{
				printf("Los dos números son iguales");
			}
			else
			{
				printf("El número mayor es %d",numeroMayor);
			}
		}
		else
		{
			printf("Hubo un error al ingresar el segundo número");
		}
	}
	else
	{
		printf("Hubo un error al ingresar el primer número");
	}
	return EXIT_SUCCESS;
}

int calcularMayor(int* resultado, int num1, int num2)
{
	int retorno = 0;
	if(num1 > num2)
	{
		*resultado = num1;
		retorno = 1;
	}
	else
	{
		if(num2 > num1)
		{
			*resultado = num2;
			retorno = 1;
		}
	}
	return retorno;
}
