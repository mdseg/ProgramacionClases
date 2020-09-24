/*
 ============================================================================
 Name        : Clase5EjercicioEjemplo.c
 Author      : Marcos Seghesio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define CANTIDAD_ELEMENTOS 5

int main(void)
{
	int variableInt;
	char aMensaje[200];
	int arrayInt[CANTIDAD_ELEMENTOS];
	int flagCargaCorrecta = 0;
	float resultadoPromedio;
	int resultado;
	int i;
	for( i = 0; i < CANTIDAD_ELEMENTOS; i++)
	{
		sprintf(aMensaje,"Numero %d",i+1);
		if(getInt("Edad:\n","Fuera de rango\n", &variableInt,5,200,0) != 0)
		{
			printf("Fracaso en el ingreso de numeros");
			flagCargaCorrecta= -1;
			break;
		}
		else
		{
			arrayInt[i] = variableInt;
		}

	}
	if(flagCargaCorrecta == 0)
	{
		if(getMaximoArrayInt(arrayInt, &resultado,CANTIDAD_ELEMENTOS) == 0)
		{

		}
	}

//	promedioArray(arrayInt,&resultadoPromedio,CANTIDAD_ELEMENTOS);
//	printf("%f",resultadoPromedio);
	printArrayInt(arrayInt, CANTIDAD_ELEMENTOS);
	printf("Ordenado\n");
	ordenarArrayIntAsc(arrayInt, CANTIDAD_ELEMENTOS);
	printArrayInt(arrayInt, CANTIDAD_ELEMENTOS);


	return EXIT_SUCCESS;
}

