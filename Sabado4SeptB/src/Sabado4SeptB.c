/*
Realizar una función que reciba el precio float y el porcentaje de descuento
como entero  ,retornar el precio con el descuento al main
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

float get_descuento(float precio , int descuento); // prototipo funcion

int main(void) {
setbuf(stdout,NULL);

float precioIngresado = 0;
int descuentoIngresado = 0;
float precioFinal;

	printf("ingrese el precio del producto: \n");
	__fpurge(stdin); //fflush(stdin);
	scanf(" %f", &precioIngresado);

	printf("ingrese el descuento del producto: \n");
	__fpurge(stdin); //fflush(stdin);
	scanf("%d", &descuentoIngresado);

	precioFinal = get_descuento(precioIngresado, descuentoIngresado);

	printf("El precio total del producto: %.2f \n", precioFinal);

	return EXIT_SUCCESS;
}

float get_descuento(float precio , int descuento)
{
	float precioDescuento;
	precioDescuento = precio - (precio * descuento / 100);
	return precioDescuento;
}


