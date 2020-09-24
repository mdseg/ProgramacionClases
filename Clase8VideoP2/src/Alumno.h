/*
 * Alumno.h
 *
 *  Created on: 22 sep. 2020
 *      Author: marcos
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#define TRUE 1
#define FALSE 0
#define LONG_NOMBRE 50
#define QTY_ALUMNOS 5
#define MIN_LEGAJO 50
#define MAX_LEGAJO 9999

typedef struct
{
	int legajo;
	char nombre[51];
	int isEmpty;
}Alumno;



int alumno_printArray(Alumno* pArray, int limit);
int alumno_initArray(Alumno* pArray, int limit);
int alumno_alta(Alumno* arrayAlumnos,int limite,int indice);
int alumno_modificar(Alumno* arrayAlumnos,int limite,int indice);
int alumno_baja(Alumno* arrayAlumnos,int limite, int indice);
int alumno_ordenarPorNombre(Alumno* pArray, int limite);
int alumno_buscarLibre(Alumno* pArray, int* pIndice, int limite);
int alumno_printById(Alumno* pArray, int limite, int indice);

#endif /* ALUMNO_H_ */
