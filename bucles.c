//Desarrollador Álvaro Monteagudo Pérez
//Ejercicio de sumatorio de clase resuelto por variables booleanas

#include <stdio.h>

void main() {

	int i, inicio, fin, suma = 0, k = 0;

	while (k < 1) {

		printf("Introduce el inicio del intervalo:\n");
		scanf_s("%d", &inicio);
		printf("Introduce el final del intervalo:\n");
		scanf_s("%d", &fin);

		system("cls");

		if (fin >= 0) {
			for (i = inicio; i <= fin; i++) {
				suma = suma + i;
				k++;
			}
		}
		else {
			printf("El valor del final del intervalo no es correcto\n");
			printf("Introduce uno positivo\n");
			system("pause");
			system("cls");
		}

	}
	printf("El sumatorio es %d\n", suma);
	system("pause");
}