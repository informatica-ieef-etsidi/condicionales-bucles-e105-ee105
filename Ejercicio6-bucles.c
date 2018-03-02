#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1;
	float n, r;

	while (a <= 10) {

		printf("Introduce un numero: ");
		scanf("%f", &n);

		for (r = n; r >= 1;) {
			r = r / 2;
			printf("%f  ", r);
		}

		printf("\n\n");
		a++;
	}
	system("pause");
}