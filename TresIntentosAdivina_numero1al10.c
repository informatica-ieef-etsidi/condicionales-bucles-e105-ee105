//Desarrollador:Paula Arellano
//Bucles para tres intentos: Ana Dueñas

//Juego para adivinar un número del 1 al 10 con tres intentos
#include <stdio.h>

void main() {
	int numero, adivina, i = 1;

	printf("Introduce un numero cualquiera para generar una adivinanza: \n");
	
	numero = srand(time(NULL)) % 11;
	//El comnando rand me daba problemas El problema es que rand() "calcula" los números aleatorios.
	//Parte de un número inicial (llamado semilla), echa unas cuentas y saca un número aleatorio.
	//Para el segundo número, echa unas cuentas con el resultado anterior y saca un segundo número y así sucesivamente.
	//Lo que hacia que se repitieran los numeros 8 y 9 constantemente.
	//Entonces he utilizado el comando srand a la que se le pasa de parámetro un número
	//En este caso utilizadmo el time(NULL) 
	//Que lee La fecha/hora del sistema. Este valor cambia si ejecutamos el programa en distinto instante de tiempo.
	//Otra opcion habria sido usar  getpid()
	//Informacion-->http://www.chuidiang.org/clinux/funciones/rand.php
	printf("Tienes 3 intentos \n");
	printf("Estoy pensando en un numero del 0 al 10...\n Adivinalo: \n");
	do {
			
			scanf_s("%d", &adivina);
			if (adivina == numero) {
				printf("¡Enhorabuena! Has acertado.\n");

			}

			else if (adivina < numero) {
				if (adivina == numero - 1 || adivina == numero - 2) {
					printf("Casi...¡Te has quedado un poco corto!\n");
				}
				else
					printf("Has escogido un numero mucho mas bajo...\n");
			}
			else
				if (adivina == numero + 1 || adivina == numero + 2) {
					printf("Casi...¡Te has pasado!\n");
				}
				else
					printf("Has escogido un numero mucho mas alto...\n");
			
			
			i++;
		}

	 while (numero != adivina && i<=3);
		if (adivina != numero) {
			printf("El numero que estaba pensando era...%d\n", numero);
		}
	system("PAUSE");

}