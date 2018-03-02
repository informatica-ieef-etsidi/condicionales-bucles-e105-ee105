#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1, b, li = 0, ls = 100, p, n;

	while (a <= 10) {

		b = 1;

		while (b == 1) {

			printf("Introduce el periodo: ");
			scanf("%d", &p);

			if (p < 1) {
				printf("ERROR\n\n");
			}
			if (p >= 1) {
				b = 2;
			}
		}

		for (n = li; n <= ls; n = n + p) {
			printf("%d  ", n);
		}

		printf("\n\n");
		a++;
	}
	system("pause");
}