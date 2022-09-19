/*
 ============================================================================
 Name        : ejercicio3-5.c
 Author      : valeria natalia wlach
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int Restar2(void);
 void Restar3(int, int);
 void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// prototipos o declaracion o firma de la funcion
// 1- respuesta.lo que me devuelve x return al main
// 2 como se llama la funcion
// 3 que va a recibir la funcion q creamos desde el main
int Restar1(int numUno, int numDos); // ()argumentos / parametros FORMAL
int Restar2(void);
void Restar3(int primerNum, int segundoNum);
void Restar4(void);

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int resultado;

	int resultado2;


		// ejercicio 1
	printf("Ingrese primer numero ");
	scanf("%d", &numeroUno);

	printf("Ingrese segundo numero ");
	scanf("%d", &numeroDos);
												// llamada o invocacion de la funcion
	resultado = Restar1(numeroUno, numeroDos);// parametros reales, actuales o verdaderos

	printf("El resultado de Restar1 es %d", resultado);

	// punto 2

	resultado2 = Restar2();
	printf("El resultado de Restar2 es %d", resultado2);

	// ejercicio 3
	Restar3(numeroUno, numeroDos);

	// ejercicio 4
	Restar4();

	return 0;// respuesta de main al sistema operativo
}

int Restar1(int numUno, int numDos)// desarrollo que hacen las funciones
{
	int resultado;

	resultado = numUno - numDos;

	return resultado;
}
int Restar2(void)
{
	int numeroUno;
	int numeroDos;
	int resultado2;

	printf("Ingrese primer numero ");
	scanf("%d", &numeroUno);

	printf("Ingrese segundo numero ");
	scanf("%d", &numeroDos);
	resultado2 = numeroUno - numeroDos;

	return resultado2;
}
void Restar3(int primerNum, int segundoNum)
{
	int resultado3;

	resultado3 = primerNum - segundoNum;

	printf("El resultado de Restar3 es %d",resultado3 );

}
void Restar4(void)
{
	int a;
	int b;
	int resultado;

	printf("Ingrese un numero:");
	scanf("%d", &a);
	printf("Ingrese un numero:");
	scanf("%d", &b);

	resultado = a-b;

	printf("El resultado de Restar4 es %d", resultado);
}
