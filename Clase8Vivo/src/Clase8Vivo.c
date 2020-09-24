/*
 ============================================================================
 Name        : Clase8Vivo.c
 Author      : Marcos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include "utn.h"
#include "Alumno.h"

#define LONG_NOMBRE 10


int main(void) {
	int opcionElegida;
	int registroElegido;
	Alumno arrayAlumnos[10];
	inicializarArrayAlumnos(arrayAlumnos, LONG_NOMBRE);
	if (utn_getInt(&opcionElegida, "Seleccione una opción\n1- Ingresar nuevo dato.\n2. Recorrer array", "Error al ingregar la opcion", 1, 2, 3) == 0)
	{
		if(opcionElegida == 1)
		{
			if(utn_getInt(&registroElegido, "Ingrese el indice a modificar", "Error en el valor ingresado", 0, LONG_NOMBRE, 2) == 0)
			{

			}
		}
	}

	return EXIT_SUCCESS;
}

