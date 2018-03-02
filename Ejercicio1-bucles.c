#define _CRT_SECURE_NO_WARIS

#include <stdio.h>

void main() {
	
	int a = 1, n1, n2, m, b, c;

	printf("BIENVENIDO AL DETERMINADOR DE MULTIPLOS DE 7\n\n\n");

	while (a <= 10) {

		b = 0;

		printf("Debe indicar entre que valores buscar los multiplos.\n\nIntroduzca el valor minimo del intervalo: ");
		scanf_s("%d", &n1);
		printf("Introduzca el valor maximo del intervalo: ");
		scanf_s("%d", &n2);

		if (n1 < 0 || n1 > n2) {
			printf("ERROR\n");
		}
		else {

			for (c = n1; c <= n2; c++) {
				if (c % 7 == 0) {
					b = 1;
				}
			}
			if (b = 0) {
				printf("No hay multiplos de 7 en el intervalo.\n");
			}
			if (b = 1) {
				printf("Los multiplos de 7 en el intervalo [%d , %d] son: ", n1, n2);

				for (c = n1; c <= n2; c++) {
					if (c % 7 == 0) {
						printf("%d ", c);
					}
				}
			}
		}
		printf("\n\n");
		a++;
	}
	system("pause");
}