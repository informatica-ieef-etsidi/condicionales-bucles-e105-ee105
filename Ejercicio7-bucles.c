#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main() {

	int a = 1;
	float ac, v, t;

	printf("BIENVENIDO AL CALCULADOR DE VELOCIDADES DURANTE LOS TRES PRIMEROS SEGUNDOS DE UN MRUA\n\n\n");

	while (a <= 10) {

		printf("Introduce la aceleracion: ");
		scanf("%f", &ac);

		printf("Tiempo:\n");

		for (t = 0.5; t <= 3; t = t + 0.5) {
			v = ac * t;
			printf("%.1f s:  V = %.3f m/s\n", t, v);
		}

		printf("\n");
		a++;
	}
	system("pause");
}