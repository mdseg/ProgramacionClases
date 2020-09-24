#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int validarSexo(char sexoIngresado)
{

	int retorno = 0;

	if(sexoIngresado == 'm' || sexoIngresado == 'f')
	{
		retorno = 1;
	}

	return retorno;

}

