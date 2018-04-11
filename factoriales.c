#include <stdio.h>
#include <stdlib.h>

void main() {
	int factorial1 = 1, factorial2 = 1;
	int i, j, n, m;
	float division;

	printf("Introduzca un numero entero para n: \n");
	scanf_s("%d", &n);
	getchar();
	printf("Introduzca un numero entero para m: \n");
	scanf_s("%d", &m);
	getchar();

	for (i = n; i > 0; i--) {
		factorial1 = factorial1 * i;
	}
	for (j = m; j > 0; j--) {
		factorial2 = factorial2 * j;
	}

	division = factorial1 / factorial2;

	printf("El resultado de la division de los factoriales de los dos numeros es: %f\n", division);

	system("PAUSE");
}