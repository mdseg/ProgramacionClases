#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int utn_getNumero(int* pResultado,int min,int max,char* msg,char* msgError, int reintentos)
{
	int numeroQueIngresaElUsuario;
	int variableDeRetorno=-1;
	//printf("Ingresame algo che:");


	while(reintentos>=0)
	{
		printf("%s",msg);
		scanf("%d",&numeroQueIngresaElUsuario);
		if(numeroQueIngresaElUsuario>=min && numeroQueIngresaElUsuario<max)
		{
			// escribir "numero" en la dire que tiene pResultado
			*pResultado = numeroQueIngresaElUsuario;
			variableDeRetorno=0;
			break;
		}
		else
		{
			printf("%s",msgError);
			reintentos--;
		}
	}
	return variableDeRetorno;
}
