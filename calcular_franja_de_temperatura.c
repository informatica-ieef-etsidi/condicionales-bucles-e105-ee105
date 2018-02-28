//Desarrollado por Javier Redondo Hernando.
//Calcula una franja de temperatura y la imprime por pantalla, dado un incremento y los extremos del intervalo, la temperatura en grados centigrados y Fahrenheit. 
#include <stdio.h>

void main()
{
	int op;
	float temperatura1, temperatura2, incremento, temp, i, F, C;//F=Fahrenheit, C=centigrados, i=es un contador, temp=es para guardar determinados datos solo para operaciones
	char continuar;
	do {
		printf("En que unidad vas a introducir los datos?\n");
		printf("1-->En centigrados\n");
		printf("2-->En Fahrenheit\n");
		scanf_s("%d", &op);
		system("cls");
		if (op != 1 && op != 2) {
			do {
				printf("Opcion no valida:\n");
				printf("1-->En centigrados\n");
				printf("2-->En Fahrenheit\n");
				scanf_s("%d", &op);
				system("cls");
			} while (op != 1 && op != 2);
		}
		printf("Introduzca el incremento de temperatura:\n");
		scanf_s("%f", &incremento);
		system("cls");
		do {
			if (incremento < 0) {
				printf("El incremento no puede ser negativo (venga eso lo sabe todo el mundo sino no incrementa...)\n");
				printf("Introduzca el incremento de temperatura:\n");
				scanf_s("%f", &incremento);
				system("cls");
			}
			if (incremento == 0) {
				printf("Ja, ja, ja.\n");
				printf("Introduzca el incremento de temperatura:\n");
				scanf_s("%f", &incremento);
				system("cls");
			}
		} while (incremento <= 0);
		system("cls");
		if (op == 1) {
			printf("Introduzca el primer valor del intervalo:\n");
			scanf_s("%f", &temperatura1);
			printf("Introduzca el segundo valor del intervalo:\n");
			scanf_s("%f", &temperatura2);
			if (temperatura1 > temperatura2) {
				temp = temperatura1;
				temperatura1 = temperatura2;
				temperatura2 = temp;
			}
			system("cls");
			printf("La temperatura en centigrados es:\n");
			printf("C=[");
			for (i = temperatura1; i < (temperatura2 + incremento); i = i + incremento) {
				C = i;
				if (temperatura2 > C) {
					printf("%.2f; ", C);
				}
				else {
					printf("%.2f", C);
				}
			}
			printf("]\n");
			printf("La temperatura en Fahrenheit es:\n");
			printf("F=[");
			for (i = temperatura1; i < (temperatura2 + incremento); i = i + incremento) {
				C = i;
				F = C * 9.0 / 5 + 32;
				if (temperatura2 > C) {
					printf("%.2f; ", F);
				}
				else {
					printf("%.2f", F);
				}
			}
			printf("]\n");
		}
		else {
			printf("Introduzca el primer valor del intervalo:\n");
			scanf_s("%f", &temperatura1);
			printf("Introduzca el segundo valor del intervalo:\n");
			scanf_s("%f", &temperatura2);
			if (temperatura1 > temperatura2) {
				temp = temperatura1;
				temperatura1 = temperatura2;
				temperatura2 = temp;
			}
			system("cls");
			printf("La temperatura en Fahrenheit es:\n");
			printf("F=[");
			for (i = temperatura1; i < (temperatura2 + incremento); i = i + incremento) {
				F = i;
				if (temperatura2 > F) {
					printf("%.2f; ", F);
				}
				else {
					printf("%.2f", F);
				}
			}
			printf("]\n");
			printf("La temperatura en centigrados es:\n");
			printf("C=[");
			for (i = temperatura1; i < (temperatura2 + incremento); i = i + incremento) {
				F = i;
				C = F * 5.0 / 9 - 32;
				if (temperatura2 > F) {
					printf("%.2f; ", C);
				}
				else {
					printf("%.2f", C);
				}
			}
			printf("]\n");

		}
		printf("\n\nSi desea continuar usando la aplicacion pulse \"c\": ");
		getchar();
		scanf_s("%c", &continuar);
		if (continuar < 'c') {
			continuar = 'c' + 32;
		}
		system("cls");
	}while (continuar == 'c');
	printf("Adios.\n");
	system("pause");
}