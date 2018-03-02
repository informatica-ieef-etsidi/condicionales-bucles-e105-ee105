#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1, b, n, i;
	float r;

	while (a <= 10) {
		
		b = 1;
		r = 0;

		while (b == 1) {
			printf("Introduce un numero para el sumatorio de 1 / i ^ 2: ");
			scanf("%d", &n);

			if (n < 1) {
				printf("ERROR\n\n");
			}
			if (n >= 1) {
				b = 2;
			}
		}

		for (i = 1; i <= n; i++) {
			r = r + 1.00 / (i * i);
		}

		printf("El resultado del sumatorio es %f", r);
		printf("\n\n");
		a++;
	}
	system("pause");
}