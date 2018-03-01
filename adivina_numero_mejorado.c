//Paula Arellano.
//Juego en el que el programa genera un numero aleatorio y tienes 3 intentos para acertarlo. 

#include <stdio.h>
#include<stdlib.h>//se necesita esta libreria para utilizar rand()
#include<time.h>//se necesita esta libreria para utilizar time()

void main() {
	int numero, adivina;
	srand(time(NULL)); //esto hay que incluirlo para que no salga siempre el mismo aleatorio
	int i;//Fallos


	
	printf("Estoy pensando en un numero del 0 al 10...\n Adivinalo: \n");
	numero = rand() % 11; /* Para que rand vaya de 0 a N, hay que poner modulo N+1
							 si queremos que vaya de N0 a N, hay que sumarle N1. Quedaría: numero=rand()%(N-N0+1)+N0;*/
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &adivina);
	
		if (adivina == numero) {
			printf("¡Enhorabuena! Has acertado.\n");
			break;
		}
	
		else 

			if (adivina < numero) {
				if (adivina == numero - 1 || adivina == numero - 2)
					printf("Casi...¡Te has quedado un poco corto!\n");
				else
					printf("Has escogido un numero mucho mas bajo... \n");
			}

			else
				if (adivina == numero + 1 || adivina == numero + 2)
					printf("Casi...¡Te has pasado!\n");
				else
					printf("Has escogido un numero mucho mas alto...\n");
		
	}

	printf("El numero que estaba pensando era...%d\n", numero);
	printf("Intentos: %d\n", i);
	system("PAUSE");

}
