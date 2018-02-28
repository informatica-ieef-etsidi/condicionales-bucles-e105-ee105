//Ejercicio tema 2,Wenqiang Wang
#include <stdio.h>
#include <stdlib.h>
int main() {
	while (1) {
		int opcion;
		float gradosf, gradosc;
		float pesetas, euros1;
		float euros2, dolares;
		int numero, centenas, decenas, unidades;
		int año;
		char ma, mi;
		int ABC, abc;
		char letma, letmi;
		system("cls");
		printf("                        **MENU**     \n");
		printf("[1] Convierte grados centígrados en grados Fahrenheit.\n");
		printf("[2] Convierte las pesetas en euros.\n");
		printf("[3] Cambiar de euros a dólares.\n");
		printf("[4] Mostrar las centenas, decenas y unidades de un número entero.\n");
		printf("[5] Verificar si es un año bisiestro y mostrar el número de días de febrero de ese año.\n");
		printf("[6] Mostrar los acrónimo del codigo 101, 117, 105, 116 y 105.\n");
		printf("[7] Mostrar la letra mayúscula mediante una letra minúscula introducida.\n");
		printf("[8] Mostrar una tabla de letras minúsculas y mayúsculas.\n");
		printf("[0] Salir del programa\n");
		scanf_s("%d", &opcion);
		system("cls");
		switch (opcion) {
		case 0:
			return 0;
		case 1:
			printf("Introduce los grados centígrados:\n");
			scanf_s("%f", &gradosc);
			gradosf = gradosc * 1.8 + 32.0;
			printf("%f grados centígrados equivalen a %f grados Fahrenheit.\n", gradosc, gradosf);
			system("pause");
			break;
		case 2:
			printf("La cantidad de pesetas:\n");
			scanf_s("%f", &pesetas);
			euros1 = 166.386*pesetas;
			printf("%f pesetas equivalen a %f euros.\n", pesetas, euros1);
			system("pause");
			break;
		case 3:
			printf("Introduce la cantidad de euros:\n");
			scanf_s("%f", &euros2);
			dolares = 1.41*euros2;
			printf("%f euros quivalen a %f dólares.\n", euros2, dolares);
			system("pause");
			break;
		case 4:
			printf("Introduce el número entero:\n");
			scanf_s("%d", &numero);
			centenas = numero / 100;
			decenas = (numero - centenas * 100) / 10;
			unidades = (numero - centenas * 100) - (decenas * 10);
			printf("El número %d tiene %d centenas, %d decenas, y %d unidades\n", numero, centenas, decenas, unidades);
			system("pause");
			break;
		case 5:
			printf("Introduce el número del año:\n");
			scanf_s("%d", &año);
			(año % 4) ? printf("No es año bisiestro.\n") : printf("Sí es año bisiestro.\n");
			printf("El mes de febrero de este año tiene %d días.\n", año % 4 ? 28 : 29);
			system("pause");
			break;
		case 6:
			printf("El acrónimo del codigo 101 es %c\n", 101);
			printf("El acrónimo del codigo 117 es %c\n", 117);
			printf("El acrónimo del codigo 105 es %c\n", 105);
			printf("El acrónimo del codigo 116 es %c\n", 116);
			printf("El acrónimo del codigo 105 es %c\n", 105);
			system("pause");
			break;
		case 7:
			printf("Introduce la letra en minúscula:\n");
			getchar();
			scanf_s("%c", &mi);
			if (mi<61 | mi>122)printf("Error, nos has introducido un letra minuscula.\n");
			else {
				ma = mi - 32;
				printf("El carácter de la letra '%c' en mayúscula es ´%c´.\n", mi, ma);
			}
			system("pause");
			break;
		case 8:
			printf("TABLA DE LETRAS\n");
			printf("||LETRA||ASCII||\n");
			for (ABC = 65;ABC <= 90;ABC++) {
				letma = ABC;
				printf("|| '%c' || '%d'||\n", letma, ABC);
			}
			for (abc = 97;abc <= 99;abc++) {
				letmi = abc;
				printf("|| '%c' || '%d'||\n", letmi, abc);
			}
			for (abc = 100;abc <= 122;abc++) {
				letmi = abc;
				printf("|| '%c' ||'%d'||\n", letmi, abc);
			}
			system("pause");
			break;

		default:
			printf("Error, opción no válida.\n");
			system("pause");
			break;
		}

	}
	return 0;
}
