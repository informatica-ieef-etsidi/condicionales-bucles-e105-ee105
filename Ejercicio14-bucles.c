#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int n = 1;

	while (n > 0 && n <= 7) {

		printf("Introduzca un numero: ");
		scanf("%d", &n);

		if (n == 0) {
			printf("ERROR");
		}
		else if (n == 1) {
			printf("El numero corresponde a lunes");
		}
		else if (n == 2) {
			printf("El numero corresponde a martes");
		}
		else if (n == 3) {
			printf("El numero corresponde a miercoles");
		}
		else if (n == 4) {
			printf("El numero corresponde a jueves");
		}
		else if (n == 5) {
			printf("El numero corresponde a viernes");
		}
		else if (n == 6) {
			printf("El numero corresponde a sabado");
		}
		else  {
			printf("El numero corresponde a domingo");
		}

		printf("\n\n");
	}
	system("pause");
}
