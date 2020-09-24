/*
 * Alumno.h
 *
 *  Created on: 22 sep. 2020
 *      Author: marcos
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

typedef struct
{
	int legajo;
	char nombre[51];
	int isEmpty;
}Alumno;


int inicializarArrayAlumnos(Alumno* pArray, int limit);
int imprimirArrayAlumnos(Alumno* pArray, int limit);



#endif /* ALUMNO_H_ */
