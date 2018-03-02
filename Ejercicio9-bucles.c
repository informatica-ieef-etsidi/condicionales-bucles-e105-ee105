#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int n;

	for (n = 1; n <= 10; n++) {
		printf("%d  ", n);
		if (n == 3) {
			printf("Ha llegado al numero 3.");
		}
		if (n == 10) {
			printf("Ha terminado de contar.\n");
		}
		printf("\n");
	}
	system("pause");
}