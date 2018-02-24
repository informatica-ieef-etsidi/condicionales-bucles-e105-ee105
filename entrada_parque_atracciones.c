#include<stdio.h>

int main()
{
	int semana, estatura, entradas;
	float precio1, precio2;

	//descripcion del programa

	printf("En este programa se mostrara el precio de  \n");
	printf("la entrada a un parque de atracciones, segun \n");
	printf("la altura del individuo, medida en cm. \n\n\n\n");

	printf("Las siguientes tarifas se aplican para mas de 135 cm \n");
	printf("La tarifa de lunes a jueves es de 15 euros por persona \n");
	printf("La tarifa de viernes, sabados, domingos y festivos es de 18.50 euros por persona \n");
	printf("Si traes un grupo de mas de 10 personas, tendras un rebaja de una quinta parte sobre el precio final \n");
	printf("La rebaja se aplicara automaticamnete al introducir un numero mayor a 10 entradas \n");
	printf("Si mides entre 100 cm, y 135, pagas LA MITAD !! \n\n\n");

	printf("Introduce la frnaja de la semana en la que estamos: \n");
	printf("1. De lunes a jueves \n");
	printf("2. De viernes, sabados, domingos y festivos \n");

	scanf_s("%d", &semana);

	system("cls"); // para borrar la pantalla de bienvenida, y pasar a introducir la estatura, y el numero de entradas

				   //dependeindo de la opcion escogida se aplica una tarifa u otra

	switch (semana) {

	case 1:
		printf("Estatura del individuo, introducida en cm: \n");
		scanf_s("%d", &estatura);
		if (estatura >= 135) {
			precio1 = 15;
			entradas = 1;
			printf("Introducir el numero de entradas deseadas\n");
			scanf_s("%d", &entradas);

			if (entradas < 10) {				//con este if-else es donde se hace la rebaja para grupos numerosos
				precio2 = entradas * precio1;
			}
			else
				precio2 = 0.8 * entradas * precio1;
		}
		else if (estatura >= 100 && estatura < 135) {
			precio1 = 15 * 0.5;
			entradas = 1;
			printf("Introducir el numero de entradas deseadas \n");
			scanf_s("%d", &entradas);

			if (entradas < 10) {
				precio2 = entradas * precio1;
			}
			else
				precio2 = entradas * precio1 * 0.8;
		}
		else if (estatura < 100) {
			precio2 = 0;
			printf("Los niños que midan menos de 100 cm, ENTRAN GRATIS !! \n");
		}

		printf("El precio final asciende a %.2f, gracias por vuestra visita\n", precio2);

		break;


	case 2:
		printf("Estatura del individuo, introducida en cm: \n");
		scanf_s("%d", &estatura);
		if (estatura >= 135) {
			precio1 = 18.5;
			entradas = 1;
			printf("Introducir el numero de entradas deseadas\n");
			scanf_s("%d", &entradas);

			if (entradas < 10) {
				precio2 = entradas * precio1;
			}
			else
				precio2 = 0.8 * entradas * precio1;
		}
		else if (estatura >= 100 && estatura < 135) {
			precio1 = 18.5 * 0.5;
			entradas = 1;
			printf("Introducir el numero de entradas deseadas \n");
			scanf_s("%d", &entradas);

			if (entradas < 10) {
				precio2 = entradas * precio1;
			}
			else
				precio2 = entradas * precio1 * 0.8;
		}
		else if (estatura < 100) {
			precio2 = 0;
			printf("Los niños que midan menos de 100 cm, ENTRAN GRATIS !! \n");
		}

		printf("El precio final asciende a %.2f, gracias por vuestra visita\n", precio2);

		break;

	default:
		printf("Opcion incorrecta \n");

	}

	



	system("PAUSE");
}