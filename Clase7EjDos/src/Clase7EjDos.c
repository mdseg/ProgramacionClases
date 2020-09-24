/*
 ============================================================================
 Name        : Clase7EjDos.c
 Author      : Marcos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utnFuncionesGenericas.h"

int showMenu(int* pOpcionElegida, char* mensaje, char* mensajeOpciones, int arrayOpciones[], int cantidadOpciones, int reintentos);

int main(void) {
	int opciones[3] = {1,2,3};
	int opcionElegida;
	if(showMenu(&opcionElegida,"Ingrese su selección entre estas.\n","1-Si \n2-No\n3-Tal vez\n",opciones,3,2) != -1)
	{
		printf("%d",opcionElegida);
	}
	else
	{
		printf("Algo salio muy mal");
	}

	return EXIT_SUCCESS;
}

int showMenu(int* pOpcionElegida, char* mensaje, char* mensajeOpciones, int arrayOpciones[], int cantidadOpciones, int reintentos )
{
	int retorno = -1;
	int bufferInt;


	do{
		printf("%s",mensaje);
		printf("%s",mensajeOpciones);

		if(utn_getInt(pResultado, mensaje, mensajeError, minimo, maximo, reintentos)== 1)
		{
			int i = 0;
				for (;i < cantidadOpciones;i++)
				{

					if(arrayOpciones[i] == bufferInt)
					{
						*pOpcionElegida = bufferInt;
						retorno = 0;
						break;

					}
				}
				if (retorno == 0)
				{
					break;
				}
				else
				{
					printf("Error\n");
					reintentos--;
				}
		}
	}
	while(reintentos > 0);

	return retorno;
}
