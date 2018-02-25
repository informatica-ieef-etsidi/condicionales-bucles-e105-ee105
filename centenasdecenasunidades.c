#include<stdio.h>

void main() {
	int numero, centenas, decenas, unidades;

	printf("introduce un numero \n");
	scanf_s("%d", &numero);
	centenas = numero / 100;
	decenas = (numero - (100 * centenas)) / 10;
	unidades = (numero - (100 * centenas) - (10 * decenas));
	printf("centenas: %d \n decenas: %d \n unidades: %d \n", centenas, decenas, unidades);
	system("PAUSE");






}