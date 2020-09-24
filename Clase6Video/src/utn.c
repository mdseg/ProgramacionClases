#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#define LIMITE_BUFFER_STRING 4096

static int esNumerica(char* cadena);
static int getInt(int* pResultado);
static int myGets(char* cadena, int longitud);


/**
* \brief Lee ​ de​ ​ stdin​ ​ hasta​ ​ que​ ​ encuentra​ ​ un​ '\n' o ​ hasta​ ​ que​ ​ haya​ ​ copiado​ ​ en​ ​ cadena
*  un​ ​ máximo​ ​ de​ '​ longitud​ - 1' ​ caracteres​ .
* \​param​ pResultado ​ Puntero​ ​ al​ ​ espacio​ ​ de​ ​ memoria​ ​ donde​ ​ se​ ​ copiara​ ​ la​ ​ cadena​ ​ obtenida
* \​param​ ​ longitud​ Define el ​ tamaño​ ​ de​ ​ cadena
* \return ​ Retorna​ 0 (EXITO) ​ si​ ​ se​ ​ obtiene​ ​ una​ ​ cadena​ y -1 (ERROR) ​ si​ no
*/

static int myGets(char* cadena, int longitud)
{
	int retorno=-1;
	if(cadena != NULL && longitud >0 && fgets(cadena,longitud,stdin)==cadena)
	{
		__fpurge(stdin); // fflush o __fpurge
		if(cadena[strlen(cadena)-1] == '\n')
		{
			cadena[strlen(cadena)-1] = '\0';
		}
		retorno=0;
	}
	return retorno;
}
/**
* \brief ​ Verifica​ ​ si​ ​ la​ ​ cadena​ ingresada​ ​ es​ ​ numerica
* \​ param​ pResultado ​ Puntero​ ​ al​ espacio​ ​ de​ ​ memoria​ ​ donde​ ​ se​ ​ dejara​ el ​ resultado​ ​ de​ ​ la​ ​ funcion
* \return ​ Retorna​ 0 (EXITO) ​ si​ se​ ​ obtiene​ ​ un​ ​ numero​ ​ entero​ y -1 (ERROR) ​ si​ no
*/
static int getInt(int* pResultado)
{
	int retorno = -1;
	char buffer[64];

	if (pResultado != NULL)
	{
		if(myGets(buffer,sizeof(buffer)) == 0 && esNumerica(buffer))
		{
			retorno = 0;
			*pResultado = atoi(buffer);
		}
	}
	return retorno;
}
/**
 * \brief Verifica una cadena como parametros para determinar si es un nombre valido
 * \param char* cadena, Cadena a analizar
 * \param int limite, indica la cantidad de letras maxima de la cadena
 * \return (0) Indicar que no es un nombre valido / (!0) INdica que es un nombre valido
 * */
static int esUnNombreValido(char* cadena, int limite)
{
	int respuesta = 1; // TOdo ok

	for (int i=0;i<=limite || cadena[i] != '\0';i++)
	{
		if((cadena[i] > 'Z' || cadena[i] < 'A') &&
		   (cadena[i] > 'z' || cadena[i] < 'a')
		   )
		{
			respuesta = 0;
			break;
		}
	}
	return respuesta;
}


/**
* \brief ​ Verifica​ ​ si​ ​ la​ ​ cadena​ ​ ingresada​ ​ es​ ​ numerica
* \​param​ ​ cadena​ ​ Cadena​ ​ de​ ​ caracteres​ a ​ ser​ ​ analizada
* \return ​ Retorna​ 1 (​ vardadero​ ) ​ si​ ​ la​ ​ cadena​ ​ es​ ​ numerica​ y 0 (​ falso​ ) ​ si​ no ​ lo​ ​ es
*/
static int esNumerica(char* cadena)
{
	int i=0;
	int retorno = 1;
	if(cadena[0] == '-')
		{
			i = 1;
		}
	if(cadena != NULL && strlen(cadena) > 0)
		{
		while(cadena[i] != '\0')
		{
			if(cadena[i] < '0' || cadena[i] > '9' )
			{
				retorno = 0;
				break;
			}
			i++;
		}
	}
	return retorno;
}



/**
* \brief Solicita un entero al usuario
* \param int* pResultado, puntero al espacio de memoria donde se dejará el valor obtenido.
* \param char* mensaje, Es el mensaje a ser mostrado al usuario.
* \param char* mensajeError, Es el mensaje de error a ser mostrado al usuario.
* \param int minimo, valor minimo admitido
* \param int maximo, valor maximo admitido
* \param int reintentos, cantidad de oportunidades para ingresar el dato
* \return (-1) Error / (0) Ok
 */
int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	int buffer;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			if(getInt(&buffer) == 0 && buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;
		}
		while(reintentos > 0);
	}
	return retorno;
}
int getNombre(char* mensaje, char*mensajeError, char* pResultado, int reintentos, int limite)
{
	int retorno = -1;
	char bufferString[LIMITE_BUFFER_STRING];
	if ( mensaje != NULL && mensajeError != NULL && pResultado != NULL && reintentos >= 0 && limite >0)
	{
		do
		{
			printf("%s",mensaje);
			if(myGets(bufferString,LIMITE_BUFFER_STRING) == 0 &&
				strnlen(bufferString,sizeof(bufferString)-1)<=limite &&
				esUnNombreValido(bufferString,limite) != 0)
			{
				retorno = 0;
				strncpy(pResultado,bufferString,limite);
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}
		while(reintentos > 0);
	}
	return retorno;
		/*int retorno = -1;
	 *
	char bufferChar[4096];
	__fpurge(stdin);
	if(scanf("%s",bufferChar) == 1)
	{
		if(esNumerica(bufferChar) == 0)
		{
			retorno = 0;
			strncpy(pResultado,bufferChar,4096);
		}
	}
	return retorno;*/
}

