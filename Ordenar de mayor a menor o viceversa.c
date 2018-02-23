#include <stdio.h>

void main() {

	int edad, paco, juan, maria;

	printf("Introduce la edad de Paco:\n");
	scanf_s("%d", &paco);
	printf("Introduce la edad de Juan:\n");
	scanf_s("%d", &juan);
	printf("Introduce la edad de Maria:\n");
	scanf_s("%d", &maria);

	system("cls");

	printf("Presiona el numero 1 para ordenar de mayor a menor\n");
	printf("Presiona el numero 2 para ordenar de menor a mayor\n");
	scanf_s("%d", &edad);

	system("cls");

	switch (edad) {
	case 1:
		if (paco > juan && paco > maria) {
			if (juan > maria) {
				printf("Paco es el mayor, Juan el mediano y Maria la menor\n");
			}
			else {
				printf("Paco es el mayor, Maria la mediana y Juan el menor\n");
			}
		}
		else if (juan > paco && juan > maria) {
			if (paco > maria) {
				printf("Juan es el mayor, Paco el mediano y Maria la menor\n");
			}
			else {
				printf("Juan es el mayor, Maria la mediana y Paco el menor\n");
			}
		}
		else {
			if (paco > juan) {
				printf("Maria es la mayor, Paco el mediano y Juan el menor\n");
			}
			else {
				printf("Maria es la mayor, Juan el mediano y Paco el menor\n");
			}
		}
		break;
	case 2:
		if (paco < juan && paco < maria) {
			if (juan < maria) {
				printf("Paco es el menor, Juan el mediano y Maria la mayor\n");
			}
			else {
				printf("Paco es el menor, Maria la mediana y Juan el mayor\n");
			}
		}
		else if (juan < paco && juan < maria) {
			if (paco < maria) {
				printf("Juan es el menor, Paco el mediano y Maria la mayor\n");
			}
			else {
				printf("Juan es el menor, Maria la mediana y Paco el mayor\n");
			}
		}
		else {
			if (paco < juan) {
				printf("Maria es la menor, Paco el mediano y Juan el mayor\n");
			}
			else {
				printf("Maria es la menor, Juan el mediano y Paco el mayor\n");
			}
		}
		break;
	default:
		printf("Lo siento, has introducido una opcion no valida\n");

	}
	system("pause");
}