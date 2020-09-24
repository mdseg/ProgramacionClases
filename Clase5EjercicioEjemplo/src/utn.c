#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
* \brief Solicita un entero al usuario
* \param char* mensaje, Es el mensaje a ser mostrado al usuario
* \param char* mensajeError, Es el mensaje de error a ser mostrado al usuario
* \param int* pResultado, puntero al espacio de memoria donde se dejará el valor obtenido
* \param int reintentos, cantidad de oportunidades para ingresar el dato
* \param int minimo, valor minimo admitido
* \param int maximo, valor maximo admitido
* \return (-1) Error / (0) Ok
 */
int getInt(char* mensaje, char* mensajeError, int* pResultado, int reintentos, int maximo, int minimo)
{
	int retorno = -1;
	int bufferInt;
	int resultadoScanf;
	if(mensaje != NULL && mensajeError != NULL && pResultado != NULL && reintentos >= 0 && (maximo >= minimo))
	{
		do
		{
			printf("%s", mensaje);
			__fpurge(stdin);
			resultadoScanf = scanf("%d",&bufferInt);
			if(resultadoScanf == 1 && bufferInt >= minimo && bufferInt <= maximo)
			{
				retorno = 0;
				*pResultado = bufferInt;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				__fpurge(stdin);
				reintentos--;
			}
		}
		while(reintentos > 0);
	}
	return retorno;
}
int getMaximoArrayInt(int *pArray, int *pResultado, int size)
{
	int retorno = -1;
	int maximo;
	int i;
	if(pArray != NULL && pResultado!=NULL && size > 0)
	{
		for(i = 0; i < size;i++)
		{
			if(pArray[i] > maximo || i == 0)
			{
				maximo = pArray[i];
			}
		}
		*pResultado = maximo;
		retorno = 0;
	}
	return retorno;
}

int getMinimoArrayInt(int *pArray, int *pResultado, int size)
{
	int retorno = -1;
	int minimo;
	int i;
	if(pArray!= NULL && pResultado!=NULL && size > 0)
	{
		for(i = 0; i < size;i++)
		{
			if(pArray[i] < minimo || i == 0)
			{
				minimo = pArray[i];
			}
		}
		*pResultado = minimo;
		retorno = 0;
	}
	return retorno;
}

int promedioArray(int array[], float* pResultado, int size)
{
	int retorno = -1;
	int i = 0;
	int acumulador = 0;
	if(array != NULL && pResultado != NULL && size > 0)
	{
		for (i = 0;i < size;i++)
		{
			acumulador+= array[i];
		}
		if(i != 0)
		{
			*pResultado = (float)acumulador / i;
			retorno = 0;
		}
	}
	return retorno;
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
