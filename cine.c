//Desarrollador Eduardo Albelda Reliegos
/*A continuacion se pedira la edad del comprador de la entrada para darle a elegir entre las peliculas que puede ver, es decir, que
no podra ver una pelicula para la cual no sea apto*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	int edad;
	printf("Bienvenido al cine de la ETSIDI.");
	printf("Introduce tu edad para ofrecerte las peliculas que puedes ver. \n");
	scanf_s("%d", &edad);


	if (edad >= 18) {
		char pelicula;
		printf("T para ver la pelicula de terror.\n");
		printf("A para ver la pelicula de accion.\n");
		printf("F para ver la pelicula familiar.\n");
		getchar();
		scanf_s("%c", &pelicula);

		switch (pelicula) {

		case 'T':
		case't':
			printf("Has elegido ver la pelicula de terror.\n");
			printf("Al ser mayor de edad podrias haber elegido entre ver la pelicula de terror (+18), de accion (+16) o familiar (TP).\n");
			break;

		case 'A':
		case'a':
			printf("Has elegido ver la pelicula de accion.\n");
			printf("Al ser mayor de edad podrias haber elegido entre ver la pelicula de terror (+18), de accion (+16) o familiar (TP).\n");
			break;

		case 'F':
		case'f':
			printf("Has elegido ver la pelicula familiar.\n");
			printf("Al ser mayor de edad podrias haber elegido entre ver la pelicula de terror (+18), de accion (+16) o familiar (TP).\n");
			break;


		}

	}

	if (edad >= 16 && edad<18) {
		char pelicula;
		printf("T para ver la pelicula de terror.\n");
		printf("A para ver la pelicula de accion.\n");
		printf("F para ver la pelicula familiar.\n");
		getchar();
		scanf_s("%c", &pelicula);

		switch (pelicula) {

		case 'T':
		case't':
			printf("Has elegido ver la pelicula de terror.\n");
			printf("Lo siento, al ser menor de edad no puedes ver esta pelicula.\n");
			printf("Al ser menor de 18 podrias haber elegido entre ver la pelicula de accion (+16) o familiar (TP).\n");
			break;

		case 'A':
		case'a':
			printf("Has elegido ver la pelicula de accion.\n");
			printf("Al ser menor de 18 podrias haber elegido entre ver la pelicula de accion (+16) o familiar (TP).\n");
			break;

		case 'F':
		case'f':
			printf("Has elegido ver la pelicula familiar.\n");
			printf("Al ser menor de 18 y mayor de 16 podrias haber elegido entre ver la pelicula de accion (+16) o familiar (TP).\n");
			break;


		}
	}
	if (edad >= 0 && edad<16) {
		char pelicula;

		printf("T para ver la pelicula de terror.\n");
		printf("A para ver la pelicula de accion.\n");
		printf("F para ver la pelicula familiar.\n");
		getchar();
		scanf_s("%c", &pelicula);

		switch (pelicula) {

		case 'T':
		case't':
			printf("Has elegido ver la pelicula de terror.\n");
			printf("Lo siento, al ser menor de edad no puedes ver esta pelicula.\n");
			printf("Al ser menor de 16 tan solo podrias haber elegido ver la familiar (TP).\n");
			break;

		case 'A':
		case'a':
			printf("Has elegido ver la pelicula de accion.\n");
			printf("Lo siento, al ser menor de 16 no puedes ver esta pelicula.\n");
			printf("Al ser menor de 16 tan solo podrias haber elegido ver la familiar (TP).\n");
			break;

		case 'F':
		case'f':
			printf("Has elegido ver la pelicula familiar.\n");
			printf("Al ser menor de 16 solo podrias haber elegido ver la pelicula familiar (TP).\n");
			break;

		}

	}
	else {
		printf("Caracter no valido.\n");
	}
	system("pause");
}
	
