#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void main() {

	double a;
	int n, i, b = 1;

	printf("BIENVENIDO AL CALCULADOR DE N TERMINOS DE LA SUCESION aN = ((-1) ^ N) * ((N ^ 2) - 1) / ((2 * n) + 1)\n\n\n");

	while (b <= 10) {

		a = 0;

		printf("Introduce el numero de terminos que quieres calcular: ");
		scanf("%d", &n);

		for (i = 0; i <= n; i++) {
			a = a + pow(-1, i) * (pow(i, 2) - 1) / (2 * n + 1);

			printf("a%d = %f\n", i, a);
		}
	}
	system("pause");
}