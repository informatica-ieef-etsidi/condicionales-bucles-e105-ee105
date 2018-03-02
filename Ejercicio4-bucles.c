#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1, f1, f2, f3, n, b;

	printf("BIENVENIDO AL GENERADOR DE N TERMINOS DE FIBONACCI\n\n\n");

	while (a <= 10) {

		f1 = 1;
		f2 = 1;

		printf("Introduzca el numero de terminos que desea generar: ");
		scanf("%d", &n);

		if (n <= 0) {
			printf("ERROR");
		}
		if (n == 1) {
			printf("%d  ", f1);
		}
		if (n >= 2) {
			printf("%d  %d  ", f1, f2);

			for (b = 3; b <= n; b++) {
				f3 = f1 + f2;
				f1 = f2;
				f2 = f3;

				printf("%d  ", f3);
			}
		}
		printf("\n\n");
		a++;
	}
	system("pause");
}