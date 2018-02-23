#include <stdio.h> 

void main() {
	// int opcion; // opcion con int
	char opcion;
	int n1 = 5, n2 = 3;

	printf("MENU DE MI CALCULADORA\n");
	/*printf("Elige 1 si vas a sumar dos numeros\n");
	printf("Elige 2 si vas a restar dos numeros\n");*/
	printf("Elige S si vas a sumar dos numeros\n");
	printf("Elige R si vas a restar dos numeros\n");

	//scanf_s("%d", &opcion);
	scanf_s("%c", &opcion, 1);

	// Opcion sencilla de aceptar mayusculas y minusculas
	/*if (opcion == 'r')
		opcion = 'R';
	else if (opcion == 's')
		opcion = 'S';*/
	// Pasar de minuscula a mayuscula
	/*if (opcion >= 'a' && opcion <= 'z') {
		opcion -= 32; // equivale a: opcion = opcion - 32;
	}*/

	switch (opcion) {
	case 'S':
	case 's': // case 1 en caso de int
		printf("Suma de %d y %d = %d\n", n1, n2, n1 + n2);
		break;
	case 'r':	
	case 'R':	// case 2 en caso de int
		printf("Resta de %d y %d = %d\n", n1, n2, n1 - n2);
		break;
	default:
		printf("Opcion no valida\n");
	}
}