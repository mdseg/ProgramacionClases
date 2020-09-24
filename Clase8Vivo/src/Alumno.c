/*
 * Alumno.c
 *
 *  Created on: 22 sep. 2020
 *      Author: marcos
 */

#include "Alumno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* \brief recibe un Array de del tipo de dato Alumno y se encarga de imprimir todos los datos mediando un salto de página
* \​param​ pArray ​direccion de memoria del tipo de dato Alumno donde comienza el array
* \​param​ ​limit​ define el ​ tamaño​ ​ de​ ​ del array a ser impreso
* \return ​ Retorna​ 0 (EXITO) ​ si​ ​ se​ ​ obtiene​ ​ una​ ​ cadena​ y -1 (ERROR) ​ si​ no
*/

int imprimirArrayAlumnos(Alumno* pArray, int limit)
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

int inicializarArrayAlumnos(Alumno* pArray, int limit)
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
int ingresarDatoArray(Alumno* pArray,int indice, int limit)
{
	int retorno = -1;
	if(pArray != NULL && indice < limit)
	{

	}
}


