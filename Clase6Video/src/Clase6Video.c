/*
 ============================================================================
 Name        : Clase6Video.c
 Author      : Marcos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#define LONG_NOMBRE 50
#define MAX 10

int main(void)
{
	/*char vec[5];
	int x;
	printf("\ningrese nombre: ");
	gets(vec);
	x=strlen (vec);
	printf("\nla cantidad de letras es %d: ",x);
	*/
	/*
	char texto[5];
	char textoDos[5];
	printf("\nIngrese nombre: ");
	gets(texto);
	printf("\nNombre: %s ",texto);

	if(strcmp(texto,"1234") == 0)
	{
		printf("Password piola");
	}
	else
	{
		printf("Pasword malito");
	}
	*/
	//strcpy(textoDos,texto);
	//strncpy(textoDos,texto,sizeof(textoDos));
	//printf("Se ingreso: %s la copia es: %s",texto,textoDos);

	int numero;

	utn_getInt(&numero, "Ingrese numero\n", "Todo mal\n", -3000, 3000, 2);

	printf("%d",numero);
	char resultado[80];
	if(getNombre("Ingrese un nombre", "Error al ingresar nombre", resultado, 2, 80))
	{

	}
	/*
	char nombre[50];
	if(getNombre("\nNombre", "\nError", nombre,2, LONG_NOMBRE-1))
	{
		printf("%s",nombre);
	}
	else
	{
		printf("\nTODO MAL");
	}
	char nombre1[5]="JUANA"; //Solo puede asignarse así en la definición
	char nombre2[6]="AAAA";
	char buffer[256];
	int i;
	int auxInt;
	int resultadoCmp;
	//Copia dentro de nombre el string MARIA
	//Esta funciones se les considera inseguras
	strcpy(nombre1,"MARIA");
	strcpy(nombre2,nombre1);

	//Permite copiar un string en otro de forma segura
	strncpy(nombre2,nombre1,sizeof(nombre2));
	resultadoCmp = strcmp(nombre1,nombre2);
	//resultadoCmp = strnicmp(nombre1,nombre2, LONG_NOMBRE-1);
	if (resultadoCmp == 0)
	{
		printf("SON IGUALES");
	}
	else if(resultadoCmp > 0)
	{
		printf("EL primero es mayor");
	}
	else if(resultadoCmp < 0)
	{
		printf("El segundo es mayor");
	}
	char resultado[30];
	if(getNombre("Nada", "Nada", &resultado, 2, 2))
	{
		printf("Salio");
	}
	else
	{
		printf("No salio");
	}
	//Devuelve el tamaño ocupado por el texto que tiene adentro
*/
/*
	strnlen(auxiliar,sizeof(auxiliar));

	//Concatena dos cadenas de caracteres
	strncat(nombre," LALA",sizeof(nombre));

	// Imprime similar a printf pero puede guardar un array de caracteres en este caso en auxiliar
	sprintf(auxiliar, "MI SIZE OF ES %d",sizeof(auxiliar));
	// ESte metodo además de todo lo que ofrece sprintf tambien permite pasar varios string de un saque
	snprintf(auxiliar, sizeof(auxiliar),"MI SIZE OF ES %d",32627);


	strncpy(auxiliar, buffer, sizeof(auxiliar));

	printf("\n%s\n", auxiliar);
	printf("STRLEN Nombre mide %d ---- auxiliar mide %d\n",strnlen(nombre,sizeof(nombre)),strnlen(auxiliar,sizeof(auxiliar)));

	while(1)
	{
		if(utn_getInt(&auxInt, "NUMERO?\n","Error\n",0 , 2, 2) == 0)
		{
			printf("\nEl numero es %d", auxInt);
		}
	}
	*/
	return EXIT_SUCCESS;
}


