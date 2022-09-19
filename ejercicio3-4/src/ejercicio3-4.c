/*
 ============================================================================
 Name        : ejercicio3-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide el número en
 un rango determinado.
 Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float muestroNumeros(int numero, float numDecimal);

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;
	float num;

	// pido numero entero
		printf("Ingrese un numero entero: " );
		scanf("%d",&numeroIngresado);
		//muestroNumeros(numeroIngresado);
	// pido decimal
		printf("Ingrese un numero decimal: ");
			scanf("%f", &num);

			muestroNumeros(numeroIngresado, num);
	return 0;
}
float muestroNumeros(int numero, float numDecimal)
{
	while(numero<0 || numero >100)
	{
		printf("Error. Ingrese un numero entero entre 1 y 100: " );
		scanf("%d", &numero);
	}


 // decimal
 while(numDecimal<0 || numDecimal >100)
 	{
 		printf("Error. Ingrese un numero decimal entre 1 y 100: " );
 		scanf("%f", &numDecimal);
 	}
 printf("El numero es: %d",numero );
 printf("\nEl numero ingresado es %.1f", numDecimal);

	return 0;

}


