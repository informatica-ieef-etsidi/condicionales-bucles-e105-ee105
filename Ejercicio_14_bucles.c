#include <stdio.h>

void main() {

	int n;

	do {

		printf("Introduzca un numero: ");
		scanf_s("%d", &n);

		switch (n) {

		case 1:
			printf("El numero corresponde a lunes");
			break;
		case 2:
			printf("El numero corresponde a martes");
			break;
		case 3:
			printf("El numero corresponde a miercoles");
			break;
		case 4:
			printf("El numero corresponde a jueves");
			break;
		case 5:
			printf("El numero corresponde a viernes");
			break;
		case 6:
			printf("El numero corresponde a sabado");
			break;
		case 7:
			printf("El numero corresponde a domingo");
			break;
		default:
			printf("Numero incorrecto");
		}
		printf("\n\n");
	} while (n > 0 && n <= 7);
	system("pause");
}