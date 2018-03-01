#include <stdio.h>
#include <stdlib.h> //he añadido una librería para que funcionara el "random" y el "system"
void main() {
	int numero, adivina, i;

	numero = rand() % 11; // Al utilizar el comando rand repite una y otra vez el número aleatorio 8
	printf("Estoy pensando en un numero del 0 al 10...\n");
	printf("¡Tienes 3 intentos!\n"); 
	printf("Adivinalo: \n");
	
	for (i = 0; i < 3; i++) { //iniciamos el bucle con los parámetros 0 y <3 para que pase por i=0, i=1, i=2 y sean 3 intentos
		scanf_s("%d", &adivina);
		if (adivina == numero) {
			printf("¡Enhorabuena! Has acertado.\n");
		}
		else if (adivina < numero) {
			if (adivina == numero - 1 || adivina == numero - 2)
				printf("Casi...¡Te has quedado un poco corto!\n");

			else {
				printf("Has escogido un numero mucho mas bajo... Otra vez sera.\n");
			}

			//Para ver cuantos intentos nos quedan, ponemos como condición los tres posibles casos de i
			//Se repite detras de cada bloque: cuando adivina<numero y cuando adivina>numero

			if (i == 0) {
				printf("Te quedan 2 intentos\n");
			}
			else if (i == 1) {
				printf("Te queda 1 intento\n");
			}
			else if (i == 2) {
				printf("Te has quedado sin intentos\n");
			}
		}
		else {
			if (adivina == numero + 1 || adivina == numero + 2) {
				printf("Casi...¡Te has pasado!\n");
			}
			else {
				printf("Has escogido un numero mucho mas alto...Otra vez sera.\n");
			}
			if (i == 0) {
				printf("Te quedan 2 intentos\n");
			}
			else if (i == 1) {
				printf("Te queda 1 intento\n");
			}
			else if (i == 2) {
				printf("Te has quedado sin intentos\n");
			}
		}
	}

	printf("El numero que estaba pensando era...%d\n", numero);

	system("pause");
	
}