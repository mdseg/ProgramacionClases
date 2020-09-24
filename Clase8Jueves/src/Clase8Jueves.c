/*
 * 1) Se tiene el siguiente array de variables del tipo int
int numeros[12]={3,7,4,5,2,3,7,1,7,3,2,7};
Hacer una funcion que reciba el array y su tamaño,
 y lo imprima. Escribir un programa para probar la funcion.
 *
 * */

/*
 * 2) Hacer una funcion que reciba el array del punto 1 y su tamaño, y
 *  cuente cuantas veces aparece el numero 7. Al terminar de contar,
 *   la funcion deberá imprimir por pantalla el valor contado.
 *  Escribir un programa para probar la funcion.
 *
 */

/*
 * 3) Modificar la funcion del punto 2 para que NO imprima el valor contado
 sino que lo devuelva por referencia
 * (recibiendo la direccion de memoria de una variable donde
 *  escribirá el valor contado).
 *  Escribir un programa para probar la funcion.
 *
 */
/*
 * 4) Dada la siguiente cadena de caracteres:
char nombre[8]={'p','e','p','e','1','2','3','\0'};
​
Hacer una funcion que reciba el array y su tamaño,
 y cuente cuantas veces aparece la letra 'e'.Al terminar de contar,
 la funcion deberá imprimir por pantalla el valor contado.
 Escribir un programa para probar la funcion.
 *
 */

/*
 * 5) Hacer una funcion que reciba el array del punto 4,
 *  y verifique que las letras dentro del mismo esten en el rango de
 *   'a' a 'z' o de 'A' a 'Z'. Si estan dentro del rango la funcion deberá
 *    devolver por valor(usando el return) un 0, de lo
 *     contrario devolverá -1.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"
#define LONGITUD_ARRAY 12
#define LONGITUD_ARRAY_CHAR 100
#define VALOR_BUSCADO 7
#define CHAR_BUSCADO 'e'

int esLetra(char* cadena);

int main(void) {

	int numeros[LONGITUD_ARRAY]={3,7,4,5,2,3,7,1,7,3,2,7};
	char nombre[8]={'p','e','p','e','1','2','3','\0'};
	char prueba[100];
	int contador;
	/*
	if(printArrayInt(numeros, LONGITUD_ARRAY) != 0)
	{
	printf("Hubo problemas para imprimir el Array");
	}

	if(contadorArray(numeros, LONGITUD_ARRAY, VALOR_BUSCADO,&contador) == 0)
	{
		printf("%d",contador);
	}
	else
	{
		printf("Algo salio mal");
	}

	if (contadorArrayChar(nombre, CHAR_BUSCADO, &contador) == 0)
	{
		printf("La cantidad de veces que aparecio la letra buscada es: %d",contador);
	}
	else
	{
		printf("Algo salio mal");
	}

	if(esLetra(prueba) == 1)
	{
		printf("Son todas letras");
	}
	else
	{
		printf("NO SON LETRAS");
	}
	*/

	if(getNombre("Ingrese un nombre", "Error", prueba, 2, 100) == 0)
	{
		printf("\n%s",prueba);
	}
	else
	{
		printf("No es valido el nombre");
	}

	return EXIT_SUCCESS;
}


int esLetra(char* cadena)
{
	int respuesta = 1; // TOdo ok
		int i;
		for (i=0;cadena[i] != '\0';i++)
		{
			if((cadena[i] < 'a' || cadena[i] > 'z') &&
			   (cadena[i] < 'A' || cadena[i] > 'Z')
			   )
			{
				printf("\n%d",i);
				respuesta = 0;

			}
		}
		return respuesta;
}

