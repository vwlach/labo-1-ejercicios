/*
 * bibliotecamenu.c
 *
 *  Created on: 12 sep. 2022
 *      Author: valeria w
 */

#include <stdio.h>
#include <stdlib.h>
/// @brief
///
/// @return
char muestroMenu()
{
	char letra;
	//char salir;


//muestro menu
	printf(	"Menu\n"
			"a-Iniciar\n"
			"b-Procesar\n"
			"c-Finalizar\n"
			"d-Salir\n");

	printf("\nIngrese una opcion: ");
				fflush(stdin);
				scanf("%c", &letra); // guardo opcion

			// valido que ingrese lo correcto
		while(letra!='a' && letra!='b' && letra!='c' && letra!='d')
		{
			printf("**********ERROR**********\n\n"
					"\n a-Iniciar "
					"\nb-Procesar"
					"\nc-Finalizar"
					"nd-Salir"
					"\n Ingrese una opcion: ");
			fflush(stdin);
			scanf("%c",&letra);
		}


		return letra;
}
char salirMenu(){

char salir;

	printf("esta seguro que desea salir?s/n: ");
	fflush(stdin);
	scanf("%c", &salir);
			if(salir !='s' && salir != 'n')
			{
				printf("Error. ingrese opcion correcta (s/n): ");
				fflush(stdin);
				scanf("%c",&salir);
			}


		return salir;
}


