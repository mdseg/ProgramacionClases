/*
 ============================================================================
 Name        : Clase5VideoE.c
 Author      : Marcos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5
void imprimirArray(int array[], int size);
int promedioArray(int array[],float* pResultado, int size);

int main(void) {


	int edad[EDADESSIZE];
	int i;
	float resultado;


	for (i = 0;i < EDADESSIZE;i++)
	{
		if((utn_getNumero(&edad[i], 0, 120, "Ingrese su edad.\n", "Problemas para ingresar edad.\n", 3)) ==0)
			{
				printf("Ingreso correcto de edad[%d]:\n",i);
			}
			else
			{
				printf("Fallo el ingreso.\n");
				break;
			}
	}

	imprimirArray(edad, EDADESSIZE);
	if(promedioArray(edad, &resultado, EDADESSIZE) == 0)
	{
		printf("EL resultado del promedio es: %.2f", resultado);
	}
	else
	{
		printf("Error al calcular el promedio");
	}


	return EXIT_SUCCESS;
}
//Cuando vos pasas un array, pasas una referencia, es por eso que podes modificar
// los valores del mismo dentro del codigo.

// EL NOMBRE DEL ARRAY ES LA DIRECCION DE MEMORIA DONDE COMIENZA EL ARRAY
void imprimirArray(int array[], int size)
{
	int i = 0;
	for (i = 0;i < size;i++)
		{
			printf("%d, ",array[i]);
		}
}

int promedioArray(int array[], float* pResultado, int size)
{
	int retorno = -1;
	int i = 0;
	int acumulador = 0;
	for (i = 0;i < size;i++)
		{
			acumulador+= array[i];
		}
	if(i != 0)
	{
		*pResultado = (float)acumulador / i;
		retorno = 0;
	}
	return retorno;
}
