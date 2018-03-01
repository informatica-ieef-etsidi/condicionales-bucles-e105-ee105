//#include <stdio.h>
void main() {
	int opcion1, opcion2;
	printf("JUGADOR 1\n");
	printf("1- piedra\n");
	printf("2- papel\n");
	printf("3- tijera\n");
	scanf_s("%d", &opcion1);
	
	printf("JUGADOR 2\n");
	printf("1- piedra\n");
	printf("2- papel\n");
	printf("3- tijera\n");
	scanf_s("%d", &opcion2);
	if (opcion1 == opcion2) {
		printf("empate\n");
	}
	else if (opcion1 == 1 && opcion2 == 2) {//antes pononia else if (opcion1 == 1 & opcion2 == 2) {
		printf("gana jugador 2\n");
	}
	else if (opcion1 == 2 && opcion2 == 1) {
		printf("gana jugador 1\n");
	}
	else if (opcion1 == 1 && opcion2 == 3) {
		printf("gana jugador 1\n");
	}
	else if (opcion1 == 3 && opcion2 == 1) {
		printf("gana jugador 2\n");
	}
	else if (opcion1 == 2 && opcion2 == 3) {
		printf("gana jugador 2\n");
	}
	else if (opcion1 == 3 && opcion2 == 2) {
		printf("gana jugador 1\n");
	}
	else { printf("parametros no validos\n");
	}

}
