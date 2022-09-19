/*
 * biblioteca.c
 *
 *  Created on: 11 sep. 2022
 *      Author: blair
 */
#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2)
{
	int resultado;
	resultado= num1+num2;

	return resultado;
}
int resta(int num1, int num2)
{
	int resultado;
	resultado= num1-num2;

	return resultado;
}
float dividir(int num1, int num2)
{
	int resultado;

	while(num2 == 0)
		{
			printf("Ingrese un numero diferente a 0: ");
			scanf("%d", &num2);
		}

	resultado= (float)num1/num2;
	return resultado;
}
int multiplicar(int num1, int num2)
{
	int resultado;
	resultado= num1*num2;

	return resultado;
}

