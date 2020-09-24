/*
 * necesitamos hacer una aplicación para una veterinaria
 * que tiene 10 lugares para atender a las mascotas.
deberíamos almacenar nombre de (máximo 10 letras) y edad de la mascota.
a-permitir el ingreso de las 10 mascotas
b-mostrar el listado de las mascotas ingresadas
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

#define LIMITE_VECTOR 10
int main(void) {
	char nombreMascotas[10];
	int edadMascotas[10];
	int i;
	char ingresoNombre;
	int ingresoEdad;

	int error = 0;

if(utn_getChar(&ingresoNombre, "Ingresa algo", "Error al ingresar", 0, 255, 2) == 0)
{
	printf("%c", ingresoNombre);
}
else
{
	printf("Todo mal");
}




	/*
	for (i = 0; i < 10; i++)
	{
		if(utn_getChar(&ingresoNombre, "Ingrese el nombre de la mascota", "Error al ingresar el nombre", 0, 255, 2) == 0)
		{

			if(utn_getInt(&ingresoEdad,"Ingrese la edad de la mascota","Error al ingresar",0,120,2) == 0)
			{
				nombreMascotas[i] = ingresoNombre;
				edadMascotas[i] = ingresoEdad;
			}
			error = 1;
			break;
		}
		else
		{
			error = 1;
			break;
		}
	}
	if(error == 1)
	{
		printf("Salio todo mal.");
	}
	*/

	return EXIT_SUCCESS;
}
