#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1, b, e1, e2, r;

	printf("BIENVENIDO AL CALCULADOR DE POTENCIAS DE UN NUMERO\n\n\n");

	while (a <= 10) {

		r = 1;

		printf("Introduzca la base: ");
		scanf("%d", &b);
		printf("Introduzca el exponente: ");
		scanf("%d", &e1);

		for (e2 = 1; e2 <= e1; e2++) {
			r = r * b;
		}

		printf("El resultado de elevar %d a %d es %d.\n", b, e1, r);

		printf("\n");
		a++;
	}
	system("pause");
}