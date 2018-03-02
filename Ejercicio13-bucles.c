#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1, n = 1;

	printf("BIENVENIDO AL DETERMINADOR DE NUMEROSOS POSITIVOS Y NEGATIVOS\n\n");

	do {

		printf("Introduzaca un numero: ");
		scanf("%d", &n);

		if (n > 0) {
			printf("El numero introducido es positivo\n");
		}
		if (n < 0) {
			printf("El numero introducido es negativo\n");
		}
		if (n == 0) {
			printf("ERROR\n");
		}
		
		printf("\n");

	} while (n != 0);

	system("pause");
}