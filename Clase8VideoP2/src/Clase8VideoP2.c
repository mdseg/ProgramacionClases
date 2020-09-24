/*
 ============================================================================
 Name        : Clase8VideoP2.c
 Author      : Marcos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"
#include "utn.h"



int main(void) {

	int op;
	int indice;
	Alumno arrayAlumnos[QTY_ALUMNOS];


	alumno_initArray(arrayAlumnos, QTY_ALUMNOS);
	do
	{
		utn_getInt(&op, "\n1-Alta\n2-Actualizar\n3-Baja\n4-Dar de baja alumno\n5-Imprimir todos\n6-Imprimir Alumno por Id\n8-Salir", "\nError", 1, 8, 2);
		switch(op)
		{
			case 1:
				if(alumno_buscarLibre(arrayAlumnos,&indice,QTY_ALUMNOS) == 0)
				{

					alumno_alta(arrayAlumnos,QTY_ALUMNOS,indice);

				}
				break;
			case 2:
				if(utn_getInt(&indice, "\nIndice?", "\nError", 0, QTY_ALUMNOS-1, 2) == 0)
				{
					alumno_modificar(arrayAlumnos,QTY_ALUMNOS,indice);
				}
				else
				{
					printf("Hubo problemas en la modificación");
				}
				break;
			case 3:
				if(utn_getInt(&indice, "\nIndice?", "\nError", 0, QTY_ALUMNOS-1, 2) == 0)
				{
					alumno_baja(arrayAlumnos,QTY_ALUMNOS,indice);
				}
				break;
			case 4:
				alumno_ordenarPorNombre(arrayAlumnos,QTY_ALUMNOS);

				break;
			case 5:
				alumno_printArray(arrayAlumnos, QTY_ALUMNOS);
				break;
			case 6:
				if(utn_getInt(&indice, "\nIndice?", "\nError", 0, QTY_ALUMNOS-1, 2) == 0)
				{
					alumno_printById(arrayAlumnos, QTY_ALUMNOS, indice);
				}
				else
				{
					printf("No se encontraron registros con ese indice");
				}
		}
	}while(op != 8);

	return EXIT_SUCCESS;
}

