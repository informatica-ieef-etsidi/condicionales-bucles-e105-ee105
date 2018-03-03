//Paula Arellano
/*Realizar un programa que pida un numero n al usuario y le informe si dicho numero es primo.*/

#include<stdio.h>
void main() {
	int n, i=1, resto_division;
	
	printf("Introduzca un numero: \n");
	scanf_s("%d", &n);
	
	do {
		i++;
		resto_division = n % i;

	} while ((!(resto_division == 0)) && (i < (n - 1)));

	if (!(resto_division == 0))
		printf("El numero es primo.\n");
	else
		printf("El numero no es primo. \n");

	system("PAUSE");
}