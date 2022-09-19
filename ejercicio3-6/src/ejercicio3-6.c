/*
 ============================================================================
 Name        : ejercicio3-6.c
 Author      : valeria natalia wlach
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
	realizarDescuento()
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float realizarDescuento(int num);
int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	float resultado;

	printf("Ingrese un numero (de 10 a 100): ");
	scanf("%d", &numero1);
	while(numero1< 0 || numero1 >=100)
		{
			printf("Error. Ingrese un numero entero entre 1 y 100: " );
			scanf("%d", &numero1);
		}

 resultado = realizarDescuento(numero1);




	printf("el precio descuento es %.2f", resultado);

	return 0;
}
float realizarDescuento(int num)
{
	float descuento;
	float numConDescuento;

	descuento = num*5/100;
	numConDescuento = num - descuento;

	return numConDescuento;
}
