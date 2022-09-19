/*
 ============================================================================
 Name        : ejercicio2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida.
  Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int numero;
		char respuesta;

		int acumuladorPositivos = 0;
		int contadorPositivos = 0;
		int acumuladorNegativos = 0;
		int contadorNegativos = 0;
		float promedioPositivos;
		float promedioNegativos;

		int banderaPositivos;
		int banderaNegativos;
		int numeroMinimo;
		int numeroMaximo;

		do
		{
			printf("Ingrese un numero: ");
			scanf("%d",&numero );

			if(numero>0)
			{
				acumuladorPositivos +=numero;
				contadorPositivos = contadorPositivos+1;
				if(banderaPositivos ==0 || numero< numeroMinimo)
				{
					numeroMinimo = numero;
					banderaPositivos = banderaPositivos+1;
				}
			}
			else
			{
				acumuladorNegativos +=numero;
				contadorNegativos = contadorNegativos+1;
				if(banderaNegativos ==0 || numero> numeroMaximo)
				{
						numeroMaximo = numero;
						banderaNegativos = banderaNegativos+1;
					}
			}

			//esto es la salida del bucle
			printf("Error ingrese s/n");
			fflush(stdin);
			scanf("%c",&respuesta);
			while(respuesta != 's' && respuesta != 'n')
			{
				printf("Error ingrese s/n");
				fflush(stdin);
				scanf("%c",&respuesta);
			}

		}while (respuesta == 'n');

		promedioPositivos = (float)acumuladorPositivos/contadorNegativos;
		promedioNegativos = (float)acumuladorNegativos/contadorNegativos;

		printf("\nEl promedio de negativos es: %.2f y su maximo es %d",promedioNegativos, numeroMaximo);
		printf("\nEl promedio de negativos es: %.2f y su maximo es %d",promedioPositivos, numeroMinimo);

	return 0;
}
/*
 * int main(void) {
	setbuf(stdout,NULL);

	char respuesta;
	int numero;

	int flagPositivo = 0;
	int positivoMayor;
	int acumuladorPositivos = 0;
	float promedioPositivos;
	int contadorPositivos = 0;

	int flagNegativos = 0;
	int negativoMayor;
	int acumuladorNegativos = 0;
	float promedioNegativos;
	int contadorNegativos = 0;

	do
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		if(numero > 0)
		{
			acumuladorPositivos = acumuladorPositivos + numero;
					contadorPositivos ++;
			if(flagNegativos == 0 || numero > positivoMayor )
			{
				positivoMayor = numero;
				flagPositivo ++;
			}

		}
		else if(numero < 0)
			{
			acumuladorNegativos = acumuladorNegativos + numero;
							contadorNegativos ++;
				if(flagPositivo == 0 || numero > negativoMayor )
					{
						negativoMayor = numero;
						flagNegativos ++;
					}

			}

		printf("\nDesea seguir ingresando datos?s/n :");
		fflush(stdin);
		scanf("%c", &respuesta);
		while(respuesta != 's' && respuesta != 'n')
				{
					printf("Error ingrese s/n");
					fflush(stdin);
					scanf("%c",&respuesta);
				}

	}while(respuesta == 's');
	if(respuesta == 'n'){
	promedioPositivos = acumuladorPositivos/contadorPositivos;
	promedioNegativos = acumuladorNegativos/contadorNegativos;

	printf("\nel promedio de los positivos es %.2f", promedioPositivos);
	printf("\nel promedio de los negativos es %.2f", promedioNegativos);
	}
	return 0;
}




 *
  */
