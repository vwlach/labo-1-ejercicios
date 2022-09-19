/*
 ============================================================================
 Name        : ejercicio3-7.c
 Author      : valeria natalia wlach
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int	operacionSumar(num1, num2);
int	operacionRestar(numUno, numDos);

int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int resultadoSuma;
	int resultadoResta;


	printf("Ingrese un numero (de 10 a 100): ");
	scanf("%d", &numero1);
	while(numero1< 0 || numero1 >=100)
		{
			printf("Error. Ingrese un numero entero entre 1 y 100: " );
			scanf("%d", &numero1);
		}


	printf("Ingrese un numero (de 10 a 100): ");
	scanf("%d", &numero2);
	while(numero2< 0 || numero2 >=100)
		{
			printf("Error. Ingrese un numero entero entre 1 y 100: " );
			scanf("%d", &numero2);
		}

	resultadoSuma

	return 0;
}
