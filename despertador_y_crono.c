//David Thomas
//Este programa sirve como un despertador, cronometro (todo funciona en segundos)
# include <stdio.h>
# include <windows.h>

int tiempoDespertador, cronometro;

void main() {

	//Declaracion de variables
	char letra;

	//Pedir datos por la pantalla
	printf("¿Quieres usar el despertador (introduce d) o el crono (c)? \n  ");
	scanf_s("%c", &letra,1);

	if (letra == 'd') {
		printf("introduce en cuantos segundos te quieres despertar(segundos):");
		scanf_s("%d", &tiempoDespertador);
		while (tiempoDespertador > 0) {
			printf(" Quedan %d segundos \r",tiempoDespertador);
			Sleep(1000);
			tiempoDespertador--;
		}
		printf("\n se acabo el tiempo, A DESPERTARSE!!!!! \n");
	}
	else if (letra == 'c') {
		cronometro = 0;
		printf("El crono lleva %d segundos activo \r", cronometro);
		Sleep(1000);
		while (cronometro >=0) {    
			cronometro++;
			printf("El crono lleva %d segundos activo \r", cronometro);
			Sleep(1000);
			if (cronometro == 10) {
				printf("\n llevas demasiado usando el crono, ya es hora de parar \n");
				break;
			}
		}
	}
	else {
		printf("No he entendido lo que has escrito, adios \n");
	}
	system("PAUSE");
}