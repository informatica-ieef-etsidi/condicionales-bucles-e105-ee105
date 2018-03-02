#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void main() {

	double a, pi;
	int n;

	a = 0;

	for (n = 0; n <= 100000; n++) {
		a = a + pow(-1, n) / (2 * n + 1);
		
	}

	pi = a * 4;

	printf("pi = %f\n", pi);

	system("pause");
}