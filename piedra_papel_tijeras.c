#include <stdio.h>

void main() {
	char n1 = 'R';
	char n2 = 'R';

		printf("Bienvenid@ a -Piedra Papel o Tijera-\n");
		printf("Que el primer jugador introduzca su eleccion:\n");
		printf("Piedra: R (Rock), Papel: P (Paper), Tijeras: S (Scissors)\n");
		scanf_s("%c", &n1);
		printf("Que el segundo jugador introduzca su eleccion:\n");
		printf("Piedra: R (Rock), Papel: P (Paper), Tijeras: S (Scissors)\n");
		getchar();
		scanf_s("%c", &n2);

		switch (n1) {
		case 'R': 
			if (n2 == 'R') {
				printf("Empate.\n");
			}
			else if (n2 == 'P') {
				printf("Gana el Jugador 2\n");
			}
			else if (n2 == 'S') {
				printf("Gana el Jugador 1\n");
			}
			else {
				printf("Uno de los valores es incorrecto\n");
			}
			break;
		case 'P':
			if (n2 == 'P') {
				printf("Empate.\n");
			}
			else if (n2 == 'S') {
				printf("Gana el Jugador 2\n");
			}
			else if (n2 == 'R') {
				printf("Gana el Jugador 1\n");
			}
			else {
				printf("Uno de los valores es incorrecto\n");
			}
			break;
		case 'S':
			if (n2 == 'S') {
				printf("Empate.\n");
			}
			else if (n2 == 'R') {
				printf("Gana el Jugador 2\n");
			}
			else if (n2 == 'P') {
				printf("Gana el Jugador 1\n");
			}
			else {
				printf("Uno de los valores es incorrecto\n");
			}
			break;
		default:
			printf("Uno no es valido.\n");
	
		}
		system("PAUSE");
	}
	