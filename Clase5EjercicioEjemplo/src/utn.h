/*
 * utn.h
 *
 *  Created on: 8 sep. 2020
 *      Author: marcos
 */

#ifndef UTN_H_
#define UTN_H_

int getInt(char* mensaje, char* mensajeError, int* pResultado, int reintentos, int maximo, int minimo);
int getMinimoArrayInt(int array[], int *pResultado, int size);
int getMaximoArrayInt(int array[], int *pResultado, int size);
int promedioArray(int array[], float* pResultado, int size);
int ordenarArrayIntAsc(int* pArray, int limite);
int ordenarArrayIntDesc(int* pArray, int limite);
int printArrayInt(int* pArray, int limite);
#endif /* UTN_H_ */
