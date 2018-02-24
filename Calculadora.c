#include <stdio.h>
#include <math.h>

void main() {

	char opcion;
	int n1;
	int n2;

	printf("Menu de la calculadora\n");
	printf("S para sumar dos numeros.\n");
	printf("R para restar restar dos numeros.\n");
	printf("M para multiplicar dos numeros.\n");
	printf("D para dividir dos numeros.\n");
	printf("Z para calcular la raiz cuadrada de un numero.\n");

	scanf_s("%c", &opcion);

	switch (opcion) {


	case 's':
	case 'S':
		printf("Has seleccionado sumar.\n");
		printf("Introduce el primer numero.\n");
		scanf_s("%d", &n1);
		printf("Introduce el segundo numero.\n");
		scanf_s("%d", &n2);
		printf("%d + %d = %d.\n", n1, n2, n1 + n2);

		break;

	case 'r':
	case 'R':
		printf("Has seleccionado restar.\n");
		printf("Introduce el primer numero.\n");
		scanf_s("%d", &n1);
		printf("Introduce el segundo numero.\n");
		scanf_s("%d", &n2);
		printf("%d - %d = %d.\n", n1, n2, n1 - n2);

		break;

	case 'm':
	case 'M':
		printf("Has seleccionado multiplicar.\n");
		printf("Introduce el primer numero.\n");
		scanf_s("%d", &n1);
		printf("Introduce el segundo numero.\n");
		scanf_s("%d", &n2);
		printf("%d * %d = %d.\n", n1, n2, n1 * n2);

		break;

	case 'd':
	case 'D':
		printf("Has seleccionado dividir.\n");
		printf("Introduce el primer numero.\n");
		scanf_s("%d", &n1);
		printf("Introduce el segundo numero.\n");
		scanf_s("%d", &n2);

		if (n2 == 0) {
			printf("No es posible dividir entre cero.\n");
		}
		else {
			printf("%d / %d = %d.\n", n1, n2, n1 / n2);
		}

		break;

	case 'z':
	case 'Z':
		printf("Has seleccionado raiz cuadrada.\n");
		printf("Introduce un numero numero.\n");
		scanf_s("%d", &n1);
		printf("La raiz cuadrada de %d es %.3f\n", n1, sqrt(n1));

		break;

	default:
			printf("Opcion no valida.\n");

			break;


	}
		system("pause");

}