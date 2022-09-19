/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : valeria wlach
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int parImpar(int num1);
int main(void) {
	setbuf(stdout, NULL);
	int numero;


	printf("Ingrese numero");
	scanf("%d", &numero);

	parImpar(numero);



	return 0;
}
int parImpar(int num1)
{
	int resultado;

	if(num1%2 == 0)
	{
		// es par tiene q mostrar 1
		resultado = 0;
	}
	else
	{
		// es impar tiene q mostrar 0
		resultado = 1;
	}
	printf("El resultado es %d", resultado);
	return 0;
}
