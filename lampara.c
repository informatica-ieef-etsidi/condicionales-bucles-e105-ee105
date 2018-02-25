#include <stdio.h>

void main() {
	int opcion, opcion2;

	printf("¿Desea encender la lampara?\n");
	printf("Pulse 1 para si. \n");
	printf("Pulse 2 para no.\n");

	scanf_s("%d", &opcion);

	switch (opcion) {

	case 1:
		printf("¿Como quiere la luz?\n");
		printf("Pulse 4, floja\n");
		printf("Pulse 5, media\n");
		printf("Pulse 6, fuerte\n");
		scanf_s("%d", &opcion2);

		switch (opcion2) {
		case 4: 
			printf("Se ha encendido a una intensidad baja\n");
			break;
		case 5: 
			printf("Se ha encendido a una intensidad media\n");
			break;
		case 6:
			printf("Se ha encendido a una intensidad alta\n");
		default:
			printf("La opcion no es valida\n");
			break;
		}
	break;
	case 2: 
		printf("La lampara no se ha encendido\n");
		break;
	default:
		printf("Esa opcion no es valida\n");

	}
	system("PAUSE");
}