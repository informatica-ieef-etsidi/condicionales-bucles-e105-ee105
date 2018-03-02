#define _CRT_SECCURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int n1, n2;

	for (n1 = 1; n1 <= 8; n1++) {
		for (n2 = 1; n2 <= 8; n2++) {
			if ((n1 + n2) % 2 == 0) {
				printf("B  ");
			}
			else {
				printf("N  ");
			}
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
}