/* Desarrollador: Sergio Corredor
Este programa hace corresponder un numero a cada mes o un mes a cada numero (a elección del usuario)*/

#include <stdio.h>

void main() {
	
	int numero;
	char mes, eleccion;

	printf("¿Quiere introducir un mes (m) o un numero (n)?");
	scanf_s("%c", &eleccion);

	switch (eleccion) {
	case 'n':
	
	printf("Introduzca un numero del 1 al 12:");
	getchar();
	scanf_s("%d", &numero);

	switch (numero) {
	case 1:
		printf("Su mes correspondiente es enero\n");
		break;
	case 2:
		printf("Su mes correspondiente es febrero\n");
		break;
	case 3:
		printf("Su mes correspondiente es marzo\n");
		break;
	case 4:
		printf("Su mes correspondiente es abril\n");
		break;
	case 5:
		printf("Su mes correspondiente es mayo\n");
		break;
	case 6:
		printf("Su mes correspondiente es junio\n");
		break;
	case 7:
		printf("Su mes correspondiente es julio\n");
		break;
	case 8:
		printf("Su mes correspondiente es agosto\n");
		break;
	case 9:
		printf("Su mes correspondiente es septiembre\n");
		break;
	case 10:
		printf("Su mes correspondiente es octubre\n");
		break;
	case 11:
		printf("Su mes correspondiente es noviembre\n");
		break;
	case 12:
		printf("Su mes correspondiente es diciembre\n");
		break;
	default:
		printf("Introduzca un numero valido\n");
		break;
	}
	system("pause");
	break;

	case 'm':

	printf("Introduzca un mes en minusculas (excepto Mayo, Julio y Agosto):");
	getchar();
	scanf_s("%c", &mes);

	switch (mes) {
	case 'e':
	printf("Su numero correspondiente es el 1\n");
	break;
	case 'f':
	printf("Su numero correspondiente es el 2\n");
	break;
	case 'm':
	printf("Su numero correspondiente es el 3\n");
	break;
	case 'a':
	printf("Su numero correspondiente es el 4\n");
	break;
	case 'M':
	printf("Su numero correspondiente es el 5\n");
	break;
	case 'j':
	printf("Su numero correspondiente es el 6\n");
	break;
	case 'J':
	printf("Su numero correspondiente es el 7\n");
	break;
	case 'A':
	printf("Su numero correspondiente es el 8\n");
	break;
	case 's':
	printf("Su numero correspondiente es el 9\n");
	break;
	case 'o':
	printf("Su numero correspondiente es el 10\n");
	break;
	case 'n':
	printf("Su numero correspondiente es el 11\n");
	break;
	case 'd':
	printf("Su numero correspondiente es el 12\n");
	break;
	default:
	printf("Introduzca un mes valido\n");
	break;
	}
	system("pause");
	}
}


	
