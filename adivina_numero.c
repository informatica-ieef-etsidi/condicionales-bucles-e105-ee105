#include <stdio.h>

void main() {
	int numero, adivina;

	printf("Introduce un numero cualquiera para generar una adivinanza: \n");
	scanf_s("%d", &numero);
	numero = numero % 11; // 0 ... 10
	printf("Estoy pensando en un numero del 0 al 10...\n Adivinalo: \n");
	scanf_s("%d", &adivina);
	if (adivina == numero)
		printf("¡Enhorabuena! Has acertado.\n");
	else if (adivina < numero) {
		if (adivina == numero - 1 || adivina == numero - 2)
			printf("Casi...¡Te has quedado un poco corto!\n");
		else
			printf("Has escogido un numero mucho mas bajo... Otra vez sera.\n");
		}
	else 
		if (adivina == numero + 1 || adivina == numero + 2)
			printf("Casi...¡Te has pasado!\n");
		else
			printf("Has escogido un numero mucho mas alto...Otra vez sera.\n");

printf("El numero que estaba pensando era...%d\n", numero);
system("PAUSE");

}