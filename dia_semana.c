#include <stdio.h>
#include <stdlib.h>

void main() {
	int numero;

	printf("Por favor, introduzca un numero del 1 al 7\n");
	scanf_s("%d", &numero);

	switch (numero)
	{
	case 1: printf("Lunes\n");
		break;
	case 2: printf("Martes\n");
		break;
	case 3: printf("Miercoles\n");
		break;
	case 4: printf("Jueves\n");
		break;
	case 5: printf("Viernes\n");
		break;
	case 6: printf("Sabado\n");
		break;
	case 7: printf("Domingo\n");
		break;
	default:
		printf("opcion incorrecta\n");
	}

	system("pause");
}