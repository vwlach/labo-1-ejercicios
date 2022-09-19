/*
 ============================================================================
 Name        : ejercicio1-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Tema 1 (Entradas, procesos y salidas)
Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100,
 sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará:
“La suma entre 3 y 2
da como resultado 5”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	/*
	int num1;
	int num2;

	printf("Ingrese el primer numero");
	scanf("%d", &num1);

	printf("Ingrese el segundo numero");
	scanf("%d", &num2);
	*/
	int num1;
	int num2;
	int suma;

	do
	{
		printf("Ingrese el primer numero entre -50 y 100: \n");
		scanf("%d", &num1);
	}while(num1 < -50 || num1 > 100 );


	do
	{
		printf("Ingrese el segundo numero entre -50 y 100: \n");
		scanf("%d", &num2);
	}while (num2 <= -50 || num2 >= 100);

		//printf("el primer numero ingresado es %d\n", num1);
		//printf("el segundo numero es %d", num2);
	suma = num1+num2;

	printf("le suma entre %d y %d da como resultado %d", num1, num2, suma);

	return EXIT_SUCCESS;
}
