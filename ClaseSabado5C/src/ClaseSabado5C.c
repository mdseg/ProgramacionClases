/*

Bibliotecas:
función
//retorna 1 si el sexo es correcto 'f' o 'm'
int validarSexo(char sexoParametro)
en la biblioteca "validacion.h", hacer el ".c"
función
//retorna un sexo valido ('f' o 'm'), pide el dato por "scanf"
 *  y lo //validad usando la funcion "validarSexo"
char pedirSexo()
en la bilioteca "funciones.h", hacer el ".c"

##llamar a la funcion en el Main y mostrar el sexo ingresado
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "UTN_Ingreso.h"


int main(void) {

	char sexo;
	sexo = pedirSexo();
	printf("%c", sexo);
	return EXIT_SUCCESS;
}

