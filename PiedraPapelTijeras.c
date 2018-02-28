//Piedra papel o tijeras por Ismael Gómez Pacheco
/*Programa para jugar 2 personas al piedra papel o tijeras con una limpieza de pantalla para que el segundo jugador
no pueda ver la elección del primero*/

#include <stdio.h>

char j1, j2;
void main() {
	printf("Jugador 1 elija piedra (I) papel (P) o tijeras (T)\n");
	scanf_s("%c", &j1);
	system("cls");
	printf("Jugador 2 elija piedra (I) papel (P) o tijeras (T)\n");
	getchar();
	scanf_s("%c", &j2);

	if (j1 == 'i') {
		if (j2 == 'i') {
			printf("Empate\n");
		}
		else if (j2 == 'p') {
			printf("Gana el jugador 2\n");
		}
		else if (j2 == 't') {
			printf("Gana el jugador 1\n");
		}
		else {
			printf("La letra introducida no es correcta\n");
		}
	}
	
	else if (j1 == 'p') {
		if (j2 == 'i') {
			printf("Gana el jugador 1\n");
		}
		else if (j2 == 'p') {
			printf("Empate\n");
		}
		else if (j2 == 't') {
			printf("Gana el jugador 2\n");
		}
		else {
			printf("La letra introducida no es correcta\n");
		}
	}

	else if (j1 == 't') {
		if (j2 == 'i') {
			printf("Gana el jugador 2\n");
		}
		else if (j2 == 'p') {
			printf("Gana el jugador 1\n");
		}
		else if (j2 == 't') {
			printf("Empate\n");
		}
		else {
			printf("La letra introducida no es correcta\n");
		}
	}

	else {
		printf("La letra introducida no es correcta\n");
	}

	system("pause");
}
