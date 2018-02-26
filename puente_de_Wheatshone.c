//Programador: Mariano Jiménez Bohórquez
// programa para poder calcular el valor de nuestra resistencia incognita en un puente de Wheastone

#include <stdio.h>

void main() {
	const int RP = 300;
	float Longitud1, Longitud2, Rx1, Rx2, Rx3, Rx4, Rxtotal; // Rx = resistencia incognita y Rp = resistencia conocida
	char opcion;

	printf("Introduzca la letra A si quiere calcular la Rx\n");
	printf("Introduzca la letra B si quiere operar en serie\n");
	printf("Introduzca la letra C si quiere operar en paralelo\n");
	scanf_s("%c", &opcion);
	system("cls");

	switch (opcion) {
	case 'a':
	case 'A': //caso a significa que queremos saber el valor de la Rx que queramos
		printf("Introduzca el valor de la Longitud1 (cm):\n");
		scanf_s("%f", &Longitud1);
		printf("Introduzca el valor de la Longitud2 (cm):\n");
		scanf_s("%f", &Longitud2);
		
		Rxtotal = RP * (Longitud1 / Longitud2);
		
		printf("Rx total = %f ohmios\n", Rxtotal);
		system("pause");
		break;
	case 'b':
	case 'B': //caso b significa que estamos con las resistencias en serie 
		printf("Introduzca valor de Rx1 (ohmios):\n");
		scanf_s("%f", &Rx1);
		printf("Introduzca valor de Rx2 (ohmios):\n");
		scanf_s("%f", &Rx2);
		printf("Introduzca valor de Rx3 (ohmios):\n");
		scanf_s("%f", &Rx3);
		printf("Introduzca valor de Rx4 (ohmios):\n");
		scanf_s("%f", &Rx4);
		
		Rxtotal = Rx1 + Rx2 + Rx3 + Rx4;//operacion en serie
		
		printf("Rx total = %f ohmios\n", Rxtotal);
		system("pause");
		break;

	case 'c':
	case 'C': // caso c en el que estamos operando con las resistencias en paralelo
		printf("Introduzca valor de Rx1 (ohmios):\n");
		scanf_s("%f", &Rx1);
		printf("Introduzca valor de Rx2 (ohmios):\n");
		scanf_s("%f", &Rx2);
		printf("Introduzca valor de Rx3 (ohmios):\n");
		scanf_s("%f", &Rx3);
		printf("Introduzca valor de Rx4 (ohmios):\n");
		scanf_s("%f", &Rx4);
		
		Rxtotal = 1 / ((1 / Rx1) + (1 / Rx2) + (1 / Rx3) + (1 / Rx4)); //operacion paralelo


	
		if (Rx1 == 0)
			printf("Imposible realizar la operacion ya que Rx1 = 0\n");
		else if (Rx2 == 0)
			printf("Imposible realizar la operacion ya que Rx2 = 0\n");
		else if (Rx3 == 0)
			printf("Imposible realizar la operacion ya que Rx3 = 0\n");
		else if (Rx4 == 0)
			printf("Imposible realizar la operacion ya que Rx4 = 0\n");
		else
			printf("Rx total = %f ohmios\n", Rxtotal);
		
		system("pause");
		break;
	default:
		printf("Opción introducida no válida\n");

		system("pause");
	}



}

	