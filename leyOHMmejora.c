//Nombre: Sandra Ures

#include <stdio.h>

void main() {
	char resultado;
	float v, r, i;

	printf("Ley de OHM\n");
	printf("¿Qué quieres obtener v,r,i?\n");
	scanf_s("%c", &resultado);

	switch (resultado) {
	case 'v':
	case 'V':
		printf("Dame un valor de r\n");
		scanf_s("%f", &r);
		printf("Dame un valor de i\n");
		scanf_s("%f", &i);
		printf("El valor de voltaje es: %f\n", i*r);
		break;
	case 'i':
	case 'I':
		printf("Dame un valor de r\n");
		scanf_s("%f", &r);
		printf("Dame un valor de v\n");
		scanf_s("%f", &v);
		printf("El valor de intensidad es: %f\n", v / r);
		break;
	case 'r':
	case 'R':
		printf("Dame un valor de v\n");
		scanf_s("%f", &v);
		printf("Dame un valor de i\n");
		scanf_s("%f", &i);
		printf("El valor de resistencia es: %f\n", v / i);
		break;
	default:
		printf("La incognita es erronea.\n");
	}

	system("pause");
}