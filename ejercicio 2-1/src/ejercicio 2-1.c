/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 2-1: Ingresar 5 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main() {
	setbuf(stdout, NULL);


	    int numeros = 0;
	    int num;
	    int acumulador = 0;
	    float promedio;


	    while(numeros < 5)
	    {
	    	printf("ingrese un numero: ");
	    	scanf("%d", &num);
	    	if(num >= 0)
	    	{
	    		printf("ERROR. ingrese un numero menor a 0: ");
				scanf("%d", &num);

	    	}
	    	acumulador =  acumulador + num;
	    	numeros ++;
	    }
	    promedio = (float)acumulador / 5;
	    printf("Promedio es %.2f", promedio);

	return 0;
}
