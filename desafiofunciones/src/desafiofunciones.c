/*
 ============================================================================
 Name        : desafiofunciones.c
 Author      : valeria w
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desafío: Menú-Funciones y Bibliotecas

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
#include "bibliotecamenu.h"


int main(void)
{
	setbuf(stdout, NULL);
	char letra;
	char opcionMenu;
	char salir;
	letra = muestroMenu();


	opcionMenu = letra;

	do{
			switch(opcionMenu)
			{
			case 'a':
				printf("INICIAR\n");
				muestroMenu();
				break;
			case 'b':
				printf("PROCESAR\n");
				muestroMenu();
				break;
			case 'c':
				printf("FINALIZAr\n");
				muestroMenu();
			break;
			case 'd':
				salir = salirMenu();
				break;
			}
		}while(opcionMenu == 'd');








	return 0;
}
