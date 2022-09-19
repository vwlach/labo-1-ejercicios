/*
 ============================================================================
 Name        : 3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Muestro(int numero);// parametro lo q esta dentro de los parentesis

int main(void) {
	setbuf(stdout, NULL);

	int numeroIngresado;

	printf("Ingrese numero: " );
	scanf("%d",&numeroIngresado);
	Muestro(numeroIngresado);

	return 0;
}

int Muestro(int numero)
{

 printf("El numero es: %d",numero );

	return 0;

}

