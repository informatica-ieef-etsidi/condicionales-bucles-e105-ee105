#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1, n1, n2, r, b;

	printf("BIENVENIDO AL MULTIPLICADOR DE 2 NUMEROS ENTEROS\n\n\n");

	while (a <= 10) {

		r = 0;

		printf("Introduzca el primer numero: ");
		scanf("%d", &n1);
		printf("Introduzca el segundo numero: ");
		scanf("%d", &n2);

		if (n1 == 0 || n2 == 0) {
			printf("Resultado = 0\n");
		}
		else if (n1 < 0 && n2 < 0) {
			n1 = -n1;
			n2 = -n2;

			for (b = 1; b <= n2; b++) {
				r = r + n1;
			}

			printf("Resultado = %d\n", r);
		}
		else if (n1 > 0 && n2 > 0) {
			
			for (b = 1; b <= n2; b++) {
				r = r + n1;
			}

			printf("Resultado = %d\n", r);
		}
		else if (n1 < 0 || n2 < 0) {
			if (n1 < 0) {
				n1 = -n1;

				for (b = 1; b <= n2; b++) {
					r = r + n1;
				}

				printf("Resultado = - %d\n", r);
			}
			if (n2 < 0) {
				n2 = -n2;

				for (b = 1; b <= n2; b++) {
					r = r + n1;
				}

				printf("Resultado = - %d\n", r);
			}
		}
		printf("\n");
		a++;
	}
	system("pause");
}