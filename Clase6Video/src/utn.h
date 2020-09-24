/*
 * utn.h
 *
 *  Created on: 10 sep. 2020
 *      Author: marcos
 */

#ifndef UTN_H_
#define UTN_H_
#define LIMITE_BUFFER_STRING 4096

int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int getNombre(char* mensaje, char*mensajeError, char* pResultado, int reintentos, int limite);
int esUnNombreValido(char* cadena, int limite);
#endif /* UTN_H_ */
