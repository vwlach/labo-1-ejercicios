/*
 ============================================================================
 Name        : prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar"
 y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar"
 y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar"
y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main(void) {
	setbuf(stdout, NULL);
	char opcionMenu;
	char salir;

	opcionMenu= muestroMenu();

	switch(opcionMenu)
	{
	case 'a':

		break;
	case 'b':

		break;
	case 'c':

		break;
	case 'd':
		fflush(stdin);
		printf("\nEsta seguro que desea salir?s/n: ");
		scanf("%c", &salir);
		salir =validarSalir(salir);
		if(salir == 's')
		{
			printf("Usted esta saliendo");
		}
		else
		{
			muestroMenu();
		}
		break;

	}

	return 0;
}
