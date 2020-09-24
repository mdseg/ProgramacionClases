/*
para realizar un pedido, solicitar tres datos ,
código de tipo int , validar entre 100 y 200
cantidad de tipo entero(int), validar entre 1 y 20
una talle de tipo char validad entre('S' , 'M' , 'L')
a-mostrar el código y el talle  del que mas cantidad solicito
b-el promedio del total  de cantidades de talle 'M' con decimales
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {
	int codigo;
	int cantidad;
	char talle;

	//a
	int codigoMayorPedido;
	char talleMayorPedido;
	int cantidadMayorPedido;
	//b
	int contadorMed = 0;
	int acumuladorMed = 0;
	float promedioMed;

	int contador = 0;
	int resultado;
	do
	{
		printf("Ingrese el codigo del producto:\n");
		__fpurge(stdin);
		resultado = scanf("%d",&codigo);

		while(resultado != 1 || codigo <100 || codigo > 200)
		{
			printf("Error. Ingrese el codigo del producto:\n");
			__fpurge(stdin);
			resultado = scanf("%d",&codigo);
		}
		printf("Ingrese las unidades del producto:\n");
		__fpurge(stdin);
		resultado = scanf("%d",&cantidad);

		while(resultado != 1 || cantidad <1 || cantidad > 20)
		{
			printf("Error. Ingrese el codigo del producto:\n");
			__fpurge(stdin);
			resultado = scanf("%d",&cantidad);
		}
		printf("Ingrese el talle del producto:\n");
		__fpurge(stdin);
		resultado = scanf("%c",&talle);

		while(resultado != 1 || (talle != 'S' && talle != 'M' && talle != 'L'))
		{
			printf("Error. Ingrese el talle del producto:\n");
			__fpurge(stdin);
			resultado = scanf("%c",&talle);
		}

		if (contador == 0)
		{
			codigoMayorPedido = codigo;
			talleMayorPedido = talle;
			cantidadMayorPedido = cantidad;
		}
		else
		{
			if (cantidad > cantidadMayorPedido)
			{
				codigoMayorPedido = codigo;
				talleMayorPedido = talle;
				cantidadMayorPedido = cantidad;
			}
		}
		if(talle == 'M')
		{
			contadorMed++;
			acumuladorMed+= cantidad;
		}
		contador++;
	}
	while(contador < 5);

	promedioMed = (float)acumuladorMed / contadorMed;
	printf("El producto mas vendido tiene el codigo: %d, y es del talle %c\n",codigoMayorPedido, talleMayorPedido);
	printf("El promedio de remeras M vendidas es: %f\n",promedioMed);
	return EXIT_SUCCESS;
}
