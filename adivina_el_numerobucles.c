
//Juego para adivinar un número del 1 al 10 con un intento
#include <stdio.h>

void main() {
	int numero, adivina, i = 1, j = 3;//Un contador para el bucle, y otro para el número de intentos.

	printf("Introduce un numero cualquiera para generar una adivinanza: \n");
	scanf_s("%d", &numero);
	numero = numero % 11; // 0 ... 10
	
		do { //bucle do-while para que se repita siempre que no se adivine el numero.
			while (i <= 3) {//bucle while para que se repita tres veces, si no ha sido adivinado.
				printf("Tienes %d intentos \n", j);//Proporciona el número de intentos posibles.
				j--;
				printf("Estoy pensando en un numero del 0 al 10...\n Adivinalo: \n");
				scanf_s("%d", &adivina);
				if (adivina == numero) {
					printf("¡Enhorabuena! Has acertado.\n");
				
				}

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
				if (i == 3) {
					printf("El numero que estaba pensando era...%d\n", numero);
				}
			i++;
			}
			
		} while (numero != adivina);

	
	system("PAUSE");

}