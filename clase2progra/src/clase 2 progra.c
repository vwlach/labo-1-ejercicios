/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// prototipos o declaracion o firma

void mostrarNumero(int numero); // parametros formales // prototipo

int main() {

	setbuf(stdout, NULL);

	int ingreso;

		printf("\nIngreso un numero ");
		scanf("%d", &ingreso);

		mostrarNumero(ingreso); // llamada o invocacion // parametros reales, actuales o verdaderos



	return 0;
}
void mostrarNumero(int numero) // desarrollo de la funcion // son parametros formales
{
	printf("\nEl numero ingresado es %d ", numero);


}

