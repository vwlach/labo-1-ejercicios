/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float pidoDecimal(float numero);

int main(void) {
	setbuf(stdout, NULL);

	float num;

	printf("Ingrese numero ");
	scanf("%f", &num);

	pidoDecimal(num);

	return 0;
}
float pidoDecimal(float numero)
{
	printf("El numero ingresado es %.1f", numero);

	return 0;
}
