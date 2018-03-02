#include <stdio.h>

void main() {
	char j1;
	char j2;
	printf("Jugador 1 introduzca piedra(P),papel(L),tijera(T): ");
	scanf_s("%c", &j1);
	getchar();
	system("cls");
	printf("Jugador 2 introduzca piedra(P),papel(L),tijera(T): ");
	scanf_s("%c", &j2);
	getchar();
	system("cls");
	switch (j1) {
	case ('P'):
		if (j2 == 'P') {
			printf("EMPATE\n");

		}
		else if (j2 == 'L') {
			printf("El jugador 2 ha ganado (papel gana piedra)\n");
		}
		else if (j2 == 'T') {
			printf("El jugador 1 ha ganado (Piedra gana Tijeras \n");
		}
		else("Parametros erroneos\n");
		break;
	case ('L'):
		if (j2 == 'L') {
			printf("EMPATE");

		}
		else if (j2 == 'P') {
			printf("El jugador 2 ha ganado (Papel gana Piedra)\n");
		}
		else if (j2 == 'T'){
			printf("El jugador 1 ha ganado (Tijeras gana a papel)\n ");
		}
		else
			printf("Parametros erroneos\n");
		break;
	case ('T'):
		if (j2 == 'T') {
			printf("EMPATE\n");
		}
		else if (j2 == 'P') {
			printf("El jugador 2 ha ganado (Piedra gana a Tijeras)\n");
		}
		else if (j2 == 'L') {
			printf("El jugador 1 ha ganado (Tijeras gana a papel)\n ");
		}
		else
			printf("Parametros erroneos\n");
		break;

	default:
		printf("Error\n ");
	}
	system("pause");
}