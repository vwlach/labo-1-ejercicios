/*
 ============================================================================
 Name        : practica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 ejercicio video 3 progra/labo pedir dos numero, pedir una operacion, validarla, y hacer funciones
 cada operacion. SUMA, RESTA, DIVISION, MULTI .  agrege las bibiotecas de practica
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void)
{
	setbuf(stdout, NULL);

	int n1;
	char operacion;
	int n2;
	int resultado;
	float resultadoFloat;

	printf("Ingrese el primer numero: ");
	scanf("%d", &n1);
	printf("el 1er numero es: %d\n", n1);

	printf("Ingrese el segundo numero: ");
	scanf("%d", &n2);
	printf("el 2do numero es: %d\n", n2);


	printf("Ingrese operacion (s, r, d,m): ");
	fflush(stdin);
	scanf("%c", &operacion);

	//printf("la operacion es: %c\n", operacion);


	while(operacion !='s'&& operacion !='r' && operacion !='d'&& operacion !='m')
			{
				printf("\nError ingrese una operacion correcta (s,r,d,m)");
				fflush(stdin);
				scanf("%c", &operacion);
			}

			switch(operacion)
			{
			case 's':
				{
					resultado = suma(n1,n2);
				}
				break;
			case'r':
				{
					resultado = resta(n1,n2);
				}
				break;

			case'd':
				{
					resultadoFloat = dividir(n1,n2);
				}
				break;
			case 'm':
				{
				resultado = multiplicar(n1,n2);
				}
				break;
			}
		if(operacion == 'd')
		{
			printf("El resultado es %f",resultadoFloat );
		}
		else
		{
			printf("El resultado es %d", resultado);
		}


	return EXIT_SUCCESS;
}


