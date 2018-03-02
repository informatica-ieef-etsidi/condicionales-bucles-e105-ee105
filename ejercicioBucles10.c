/*Ejercicio	10:	Hacer	un	programa	que	imprima	los	n�meros	enteros	de	A	a	B, contando	de	m	en
m.Los	 valores	 de	 A	 y	 B	 ser�n	 asignados	 dentro	 del	 programa	 en	 c�digo, mediante	 la
inicializaci�n	 de	las	variables	en	 su	 declaraci�n.Por	ejemplo, A = 8	y	B = 19.	El	valor	 de	m	 ser�
introducido	por	el	usuario	desde	el	teclado.Si	el	usuario	introduce	un	valor	de	m	menor	que	1,
el	 programa	 se	 lo	 volver�	 a	 pedir	 de	 forma	 reiterada	 hasta	 que	 el	 usuario	 introduzca	 un
n�mero	mayor	o	igual	que	1.*/

//Desarrollador:Marco Iglesias


#include <stdio.h>
#include <stdlib.h>

void main() {

	int a = 8, b = 19, m, n;
	do {
		printf("Cuenta de 5 a 55 de m en m. Introduzca un m entre 1 y 5\n"); //puse 5 para no pasarse mucho
		scanf_s("%d", &m);
		if (m <= 1 || m > 5) {
			printf("opcion no valida\n");
		}
	} while (m <= 1 || m > 5); // Repite la pedida del numero hasta que sea valido

	do {
		printf("%d\n", a);
		a = a + m;
	} while (a <= 19 && a >= 8);




	system("PAUSE");
}