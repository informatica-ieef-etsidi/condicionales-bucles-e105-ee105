#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int n;

	do {

		printf("Introduzca una nota: ");
		scanf("%d", &n);

		switch (n) {

		case 0:
		case 1:
			printf("Muy deficiente.");
			break;
		case 2:
		case 3:
		case 4:
			printf("Insuficiente.");
			break;
		case 5:
		case 6:
			printf("Suficiente.");
			break;
		case 7:
		case 8:
			printf("Notable.");
			break;
		case 9:
		case 10:
			printf("Sobresaliente.");
			break;
		default:
			printf("ERROR");
			break;
		}

		printf("\n\n");

	} while (n >= 0 && n <= 10);

	system("pause");
}