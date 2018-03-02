#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int n = 1;
	int n1, n2;

	do {

		printf("Introduzca el primer numero: ");
		scanf("%d", &n1);

		printf("Introduzca el segundo numero: ");
		scanf("%d", &n2);

		if (n1 >= 0 || n2 >= 0) {
			if (n1 % n2 == 0) {
				printf("El primer numero es divisible entre el segundo.\n");
			}
			else {
				printf("El primer numero no es divisible entre el segundo.\n");
			}
		}
		if (n < 0 && n2 < 0) {
			printf("ERROR");
		}

		n++;
		printf("\n");
	} while (n1 >= 0 || n2 >= 0);

	system("pause");
}