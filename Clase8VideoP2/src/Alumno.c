/*
 * Alumno.c
 *
 *  Created on: 22 sep. 2020
 *      Author: marcos
 */

#include "Alumno.h"
#include "utn.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* \brief recibe un Array de del tipo de dato Alumno y se encarga de imprimir todos los datos mediando un salto de página
* \​param​ pArray ​direccion de memoria del tipo de dato Alumno donde comienza el array
* \​param​ ​limit​ define el ​ tamaño​ ​ de​ ​ del array a ser impreso
* \return ​ Retorna​ 0 (EXITO) ​ si​ ​ se​ ​ obtiene​ ​ una​ ​ cadena​ y -1 (ERROR) ​ si​ no
*/

int alumno_printArray(Alumno* pArray, int limit)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limit > 0)
	{
		for(i = 0;i<limit;i++)
		{
		if(pArray[i].isEmpty == 0)
		printf("Nombre: %s - Legajo: %d\n",pArray[i].nombre, pArray[i].legajo);
		}
	}
	return retorno;
}
/**
* \brief inicializo el array de Alumnos
* \​param​ pArray ​direccion de memoria del tipo de dato Alumno donde comienza el array
* \​param​ ​limit​ define el ​ tamaño​ ​ de​ ​ del array a ser impreso
* \return ​ Retorna​ 0 (EXITO) ​ si​ ​ se​ ​ obtiene​ ​ una​ ​ cadena​ y -1 (ERROR) ​ si​ no
*/

int alumno_initArray(Alumno* pArray, int limit)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limit > 0)
	{
		for(i = 0;i<limit;i++)
		{
		pArray[i].isEmpty = 1;
		}
	}
	return retorno;
}
int alumno_alta(Alumno* arrayAlumnos,int limite,int indice)
{
	int retorno = -1;
	Alumno bufferAlumno;
	if(	arrayAlumnos != NULL && limite > 0 &&
		indice >=0 &&
		indice < limite &&
		arrayAlumnos[indice].isEmpty == TRUE)
	{
		if(
			utn_getInt(&bufferAlumno.legajo, "\nLegajo", "\nError", MIN_LEGAJO, MAX_LEGAJO, 2) == 0 &&
			utn_getName("\nNombre?","\nError",bufferAlumno.nombre, 5, LONG_NOMBRE) == 0
			)
		{
			bufferAlumno.isEmpty = FALSE;
			utn_UpperFirstCharArray(bufferAlumno.nombre);
			arrayAlumnos[indice] = bufferAlumno;
			retorno = 0;
		}
	}
	return retorno;
}
int alumno_modificar(Alumno* arrayAlumnos,int limite,int indice)
{
	int retorno = -1;
	Alumno bufferAlumno;
	if(	arrayAlumnos != NULL && limite > 0 &&
		indice >=0 &&
		indice < limite &&
		arrayAlumnos[indice].isEmpty == FALSE)
	{
		if(
			utn_getInt(&bufferAlumno.legajo, "\nLegajo", "\nError", MIN_LEGAJO, MAX_LEGAJO, 2) == 0 &&
			utn_getName("\nNombre?","\nError",bufferAlumno.nombre, 5, LONG_NOMBRE) == 0
			)
		{
			utn_UpperFirstCharArray(bufferAlumno.nombre);
			arrayAlumnos[indice] = bufferAlumno;
			//arrayAlumnos[indice].isEmpty = FALSE;
			retorno = 0;
		}
	}
	return retorno;
}
int alumno_baja(Alumno* arrayAlumnos,int limite,int indice)
{
	int retorno = -1;
	Alumno bufferAlumno;
	if(	arrayAlumnos != NULL && limite > 0 &&
		indice >=0 &&
		indice < limite &&
		arrayAlumnos[indice].isEmpty == FALSE)
	{
		bufferAlumno.isEmpty = TRUE;
		arrayAlumnos[indice] = bufferAlumno;
		retorno = 0;
	}
	return retorno;
}
int alumno_ordenarPorNombre(Alumno* pArray, int limite)
{
	int flagSwap;
	int i;
	int contador = 0;
	int retorno = -1;
	Alumno buffer;
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
				if(pArray[i].nombre[0] > pArray[i+1].nombre[0])
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
int alumno_buscarLibre(Alumno* pArray, int* pIndice, int limit)
{
	int retorno = -1;
	int i;
		if(pArray != NULL && limit > 0)
		{
			for(i = 0;i<limit;i++)
			{
				if(pArray[i].isEmpty == 1)
				{
					*pIndice = i;
					retorno = 0;
					break;

				}
			}
		}
	return retorno;
}
int alumno_printById(Alumno* pArray, int limit, int indice)
{
		int retorno = -1;
		if(pArray != NULL && limit > 0 && indice < limit)
		{
			if(pArray[indice].isEmpty == FALSE)
			{
				printf("Nombre: %s - Legajo: %d\n",pArray[indice].nombre, pArray[indice].legajo);
				retorno = 0;
			}
		}
		return retorno;
	}

