/*
 ============================================================================
 Name        : labo-ejerciciofunciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int dividir (int divisor, int dividendo, float *resultado);
int main(void) {
	setbuf(stdout, NULL);
	//int numero1;
	//int numero2;
	int error ;
	float resultado;

	error = dividir (3,2,&resultado);

	if(error ==0)
	{
		printf("el resultado es %f", resultado);
	}
	else
	{
		printf("error");
	}



	return EXIT_SUCCESS;
}
int dividir (int divisor, int dividendo, float *resultado)
{
	int retorno = -1;
	float division = (float) dividendo / divisor;

	if(dividendo== 0)
	{
		retorno = -1;
		//printf("Error ingrese un ")
	}
	else
	{
		retorno = 0;
		division = divisor/dividendo;
		*resultado = division;
	}

	return retorno;
}
