/*
 ============================================================================
 Name        : ejercicio2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos
  en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	if (numero%2 == 0)
	{
		printf("Usted ingreso un numero par");
	}
	else
	{
		printf("Usted ingreso un numero inpar");
	}

	return 0;
}
