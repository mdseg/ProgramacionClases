#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "UTN_validaciones.h"


char pedirSexo()
{
	char resultado;
	char bufferChar;
	printf("Por favor, ingrese el sexo.");
	__fpurge(stdin);
	bufferChar = scanf("%c",&bufferChar);
	while(validarSexo(bufferChar) != 1)
	{
		printf("Error, vuelva a ingresar el sexo.");
		__fpurge(stdin);
		bufferChar = scanf("%c",&bufferChar);

	}
	printf("Llegamos");
	resultado = bufferChar;
	return resultado;
}

