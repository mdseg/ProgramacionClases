/*
 ============================================================================
 Name        : Cñase5VideoBurbujeo.c
 Author      : Marcos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 9

int printArrayInt(int* pArray, int limite);
int ordenarArrayIntDesc(int* pArray, int limite);

int main(void) {
	int edades[QTY_EMPLEADOS]= {54,26,93,17,77,31,44,55,27};
	printArrayInt(edades,QTY_EMPLEADOS);
	int respuesta = ordenarArrayIntDesc(edades,QTY_EMPLEADOS);
	if(respuesta>0)
	{
		printf("\n\n Iteraciones: %d\n\n",respuesta);
	}
	printArrayInt(edades,QTY_EMPLEADOS);


	return EXIT_SUCCESS;
}
/**
 * \brief Imprime a modo DEBUG la información de un array de enteros.
 * \param pArray es el puntero al array a ser ordenado.
 * \pram size Es la longitud del array.
 * \return 0 si Ok o -1 para indicar un error.
 */
int printArrayInt(int* pArray, int limite)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite >= 0)
	{
		retorno = 0;
		for (i = 0;i<limite;i++)
		{
			printf("[DEBUG] Indice: %d - Valor: %d\n",i,pArray[i]);
		}
	}
	return retorno;
}
/**
 * \brief ordena un array de enteros DESC
 * \param pArray es el puntero al array a ser ordenado.
 * \pram size Es la longitud del array.
 * \return Cantidad de iteraciones necesarias para Ordenar si Ok o -1 para indicar un error.
 */

int ordenarArrayIntDesc(int* pArray, int limite)
{
	int flagSwap;
	int i;
	int contador = 0;
	int retorno = -1;
	int buffer;
	int nuevoLimite;
	if(pArray != NULL && limite >=0)
	{
		nuevoLimite = limite - 1;
		do
		{

			flagSwap=0;
			for(i=0; i<nuevoLimite;i++)
			{
				contador++;
				if(pArray[i] < pArray[i+1])
				{

					flagSwap=1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;

				}

			}
			nuevoLimite--;

		}
		while(flagSwap);
		retorno = contador;

	}

	return retorno;
}
int ordenarArrayIntAsc(int* pArray, int limite)
{
	int flagSwap;
	int i;
	int contador = 0;
	int retorno = -1;
	int buffer;
	int nuevoLimite;
	if(pArray != NULL && limite >=0)
	{
		nuevoLimite = limite - 1;
		do
		{

			flagSwap=0;
			for(i=0; i<nuevoLimite;i++)
			{
				contador++;
				if(pArray[i] > pArray[i+1])
				{

					flagSwap=1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;

				}

			}
			nuevoLimite--;

		}
		while(flagSwap);
		retorno = contador;

	}

	return retorno;
}
