/*
 * utnFUnciones.h
 *
 *  Created on: 9 sep. 2020
 *      Author: marcos
 */

#ifndef UTNFUNCIONESGENERICAS_H_
#define UTNFUNCIONESGENERICAS_H_

int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getFloat(float* pResultado,char* mensaje,char* mensajeError,int reintentos);
int getMinimoArrayInt(int array[], int *pResultado, int size);
int getMaximoArrayInt(int array[], int *pResultado, int size);
int promedioArray(int array[], float* pResultado, int size);
int ordenarArrayIntAsc(int* pArray, int limite);
int ordenarArrayIntDesc(int* pArray, int limite);
int printArrayInt(int* pArray, int limite);
#endif /* UTNFUNCIONESGENERICAS_H_ */
