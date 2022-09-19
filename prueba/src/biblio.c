/*
 * biblio.c
 *
 *  Created on: 17 sep. 2022
 *      Author: blair
 */
/*aca va el desarrollo de la funcion*/
#include <stdio.h>
#include <stdlib.h>

char muestroMenu()
{
	char opcionMenu;
	do
		{
			printf( "     MENU"
				  "\na)Iniciar\n"
					"b)Procesar\n"
					"c)Finalizar\n"
					"d)Salir\n");
			fflush(stdin);
			printf("Elija una opcion (a/b/c/d): ");
			scanf("%c", &opcionMenu);
		}while(opcionMenu == 'a'||opcionMenu == 'b'||opcionMenu == 'c');

	return opcionMenu;
}

char validarSalir( salir)
{
	//char opcionSalir;

	while(salir != 's' || salir != 'n')
	{
		fflush(stdin);
		printf("\n******* ERROR ******* \nEsta seguro que desea salir?s/n: ");
		scanf("%c", &salir);
	}

	return salir;
}
