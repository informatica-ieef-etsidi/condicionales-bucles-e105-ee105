#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 0;

	printf("BIENVENIDO AL DETERMINADOR DE A%cOS BISIESTOS\n\n", 165);

	while (a >= 0) {

		printf("Introduzca un a%co: ", 164);
		scanf("%d", &a);

		if (a < 0) {
			printf("ERROR\n");
		}
		else if (a % 400 == 0)
			printf("Este a%co es bisiesto.\nFebrero tiene 29 dias.\n", 164);
		else if (a % 4 == 0 && a % 100 == 0)
			printf("Este a%co no es bisiesto.\nFebrero tiene 28 dias.\n", 164);
		else if (a % 4 == 0)
			printf("Este a%co es bisiesto.\nFebrero tiene 29 dias.\n", 164);
		else
			printf("Este a%co no es bisiesto.\nFebrero tiene 28 dias.\n", 164);

		printf("\n");
	}
	system("pause");
}