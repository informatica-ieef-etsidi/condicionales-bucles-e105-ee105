//NOMBRE: Alfonso Pinto

// Este programa es un juego clasico: piedra papel tijeras. Además del juego clasico, tambien
// incluyo la variante de Sam Kass: Piedra Papel Tijeras Lagarto Spock. 
//El juego se desarrolla contra el ordenador al mejor de cinco partidas y al final del juego 
// si eres el ganador aparece una ilusion de movimiento de movimiento del programa de Javier Redondo

#include<stdio.h>
#include<stdlib.h> //uso esta libreria para usar la funcion srand
#include<time.h> //uso esta libreria para los numeros aleatorios 
#include<Windows.h>  //uso esta libreria para usar la funcion sleep

void explicacion_del_juego(void); // usare esta funcion para explicar el juego fuera del void main


void main() {
	int i; // es la variable para la seleccion del menu
	int l; // es la variable para tu eleccion en el juego 
	int K; // es la variable que guarda el valor aleatorio de la eleccion del ordenador
	int contador; //es la variable que uso para los bucles
	int G=0; //ganar 
	int P=0; //perder
	int E=0; //empatar
	
	int a; // variable para los bucles de ilusion de movimiento
	int b; // variable para los bucles de ilusion de movimiento
	int z = 1; // variable para el bucle do while
	
	do {
		G = 0;  // Cada vez que empieza el bucle todo es cero
		E = 0;
		P = 0;

		printf("Bienvenido a Piedra Papel Tijeras \n");
		printf("A que juego desea jugar? \n");
		printf("Pulse 1 Para jugar al juego clasico \n");
		printf("Pulse 2 Para jugar al juego de Sam Kass (VARIACION LAGARTO SPOCK) \n");
		printf("Pulse 3 Para mas informacion \n");
		scanf_s("%d", &i);

		system("cls"); //limpio la pantalla

		switch (i) {  //las distinas elecciones del juego estan dentro del switch
		case 1: // CASO DE QUERER JUGAR AL JUEGO CLASICO

			for (contador = 1; contador < 6; contador++) {  
				//este bucle lo uso para que el programa se repita 5 veces

				srand(time(NULL)); //estas lineas las uso para elegir un numero aleatorio K
				K = (rand() % 3) + 1; //con esto, cogo el resto de dividir K entre 3 y le sumo 1 para tener un numero entre 1 y 3

				printf("Elige: \n");
				printf("1 para Piedra \n");
				printf("2 para Papel \n");
				printf("3 para Tijeras \n");
				scanf_s("%d", &l);


				if (((l == 1) && (K == 3)) || ((l == 2) && (K == 1)) || ((l == 3) && (K == 2))) {  //la logica de los casos en los que el jugador gana
					//vamos a usar condicionales para los distintos casos y que el programa nos diga las elecciones pertinentes

					if (l == 1) {
						printf("Has elegido piedra y el ordenador tijeras. Piedra aplasta tijeras. Has ganado\n\n");
					}
					else if (l == 2) {
						printf("Has elegido papel y el ordenador piedra. Papel tapa piedra. Has ganado\n\n");
					}
					else if (l == 3) {
						printf("Has elegido tijeras y el ordenador papel. Tijeras cortan papel. Has ganado\n\n");
					}
					G++; // Hago que a la variable de ganar una partida se le aumente una unidad
				}
				else if (l == K) { //la logica de los casos en los que se empata
					//vamos a usar condicionales igual que arriba

					if (l == 1) {
						printf("Has elegido piedra y el ordenador piedra. Has empatado \n\n");
					}
					else if (l == 2) {
						printf("Has elegido papel y el ordenador papel. Has empatado \n\n");
					}
					else if (l = 3) {
						printf("Has elegido tijeras y el ordenador tijeras. Has empatado \n\n");
					}
					E++; // Suma uno a la variable de empatar una partida
				}
				else if (((l == 1) && (K == 2)) || ((l == 2) && (K = 3)) || ((l == 3) && (K == 1))) { //logica de las partidas que se pierde
					//vamos a usar condicionales para los distintos casos

					if (l == 1) {
						printf("Has elegido piedra y el ordenador papel. Papel tapa piedra. Has perdido \n\n");
					}
					else if (l == 2) {
						printf("Has elegido papel y el ordenador tijeras. Tijeras cortan papel. Has perdido \n\n");
					}
					else if (l == 3) {
						printf("Has elegido tijeras y el ordenador piedra. Piedra rompe tijeras. Has perdido \n\n");
					}
					P++; // Sumo uno a la variable de perder una partida
				}
				else { //en caso de que no se haya pulsado ninguno de los valores aceptados
					printf("No ha elegido un valor aceptado \n\n");
				}
				getchar(); // lo uso para borrar el buffer
				system("pause"); 
				system("cls");
			}
			printf("Has ganado %d partidas, perdido %d y empatado %d \n\n\n", G, P, E); // imprimo los resultados de la partida
			system("pause");

				if (G > P) { //esto solo pasa en el caso de que haya ganado el jugador
					for (a = 0; a < 50; a++) {
						for (b = 0; b < a; b++) {
							printf(" ");
						}
						printf("HAS GANADO \n");
						Sleep(50);
						system("cls");
					}
				}
				else { // en el caso de que se haya perdido o empatado
					system("cls");  // limpio la pantalla
				}
			break;

		case 2: // CASO DE QUERER JUGAR A LA VARIACION LAGARTO SPOCK

			for (contador = 1; contador < 6; contador++) { // De nuevo al igual que arriba un bucle para realizar solo 5 partidas

				srand(time(NULL)); // genero un numero aleatorio
				K = (rand() % 5) + 1; // cojo el resto de mi numero aleatorio y le sumo uno para que ese encuentre entre 1 y 5 

				printf("Elige: \n");
				printf("1 para Piedra \n");
				printf("2 para Papel \n");
				printf("3 para Tijeras \n");
				printf("4 para Lagarto \n");
				printf("5 para Spock \n");
				scanf_s("%d", &l);

				if (((l == 1) && (K == 3)) || ((l == 1) && (K == 4)) || ((l == 2) && (K == 1)) || ((l == 2) && (K == 5)) || ((l == 3) && (K == 2)) || ((l == 3) && (K == 4)) || ((l == 4) && (K == 5)) || ((l == 4) && (K == 2)) || ((l == 5) && (K == 3)) || ((l == 5) && (K == 1))) {
					//en la linea superior se encuentra la logica de los CASOS FAVORABLES AL JUGADOR 
					//Como para cada eleccion del jugador existe un conjunto de dos casos favorables uso el switch 
					// para evitar condicionales del tipo si (l==?)&&(K==?). De esta forma si he elegido l=1
					// me meteré en ese caso en concreto y dentro de él, con los condicionales veré cual es la eleccion del ordenador 

					// Obviamente si no quiero saber que ha sacado el ordenador, el codigo se simplifica mucho

					switch (l) {   
					case 1:  //CASOS EN LOS QUE GANA EL JUGADOR
						if (K == 3) {
							printf("Has elegido piedra y el ordenador tijeras. Piedra aplasta tijeras. Has ganado \n\n");
						}
						else if (K == 4) {
							printf("Has elegido piedra y el ordenador lagarto. Piedra aplasta lagarto. Has ganado \n\n");
						}
						break;
					case 2:
						if (K == 1) {
							printf("Has elegido papel y el ordenador piedra. Papel tapa piedra. Has ganado \n\n");
						}
						else if (K == 5) {
							printf("Has elegido papel y el ordenador spock. Papel desautoriza a Spock. Has ganado \n\n");
						}
						break;
					case 3:
						if (K == 2) {
							printf("Has elegido tijeras y el ordenador papel. Tijeras cortan papel. Has ganado \n\n");
						}
						else if (K == 4) {
							printf("Has elegido tijeras y el ordenador lagarto. Tijeras decapitan lagarto. Has ganado \n\n");
						}
						break;
					case 4:
						if (K == 5) {
							printf("Has elegido lagarto y el ordenador Spock. Lagarto envenena a Spock. Has ganado \n\n");
						}
						else if (K == 2) {
							printf("Has elegido lagarto y el ordenador papel. Lagarto come papel. Has ganado \n\n");
						}
						break;
					case 5:
						if (K == 3) {
							printf("Has elegido Spock y el ordenador tijeras. Spock rompe tijeras. Has ganado \n\n");
						}

						if (K == 1) {
							printf("Has elegido Spock y el ordenador piedra. Spock vaporiza piedra. Has ganado \n\n");
						}
						break;
					default:
						break;
					}
					G++; // Sumo uno a la variable ganar una partida
				}
				else if (l == K) { //CASOS EN LOS QUE EL JUGADOR Y EL ORDENADOR EMPATAN
					if (l == 1) {
						printf("Has elegido piedra y el ordenador piedra. Has empatado \n\n ");
					}
					if (l == 2) {
						printf("Has elegido papel y el ordenador papel. Has empatado\n\n ");
					}
					if (l == 3) {
						printf("Has elegido tijeras y el ordenador tijeras. Has empatado \n\n ");
					}
					if (l == 4) {
						printf("Has elegido lagarto y el ordenador lagarto. Has empatado\n\n ");
					}
					if (l == 5) {
						printf("Has elegido Spock y el ordenador Spock. Has empatado \n\n ");
					}
					E++; //  Sumo uno a la variable empatar una partida
				}
				else if (((l == 1) && (K == 5)) || ((l == 1) && (K == 2)) || ((l == 2) && (K == 3)) || ((l == 2) && (K == 4)) || ((l == 3) && (K == 1)) || ((l == 3) && (K == 5)) || ((l == 4) && (K == 3)) || ((l == 4) && (K == 1)) || ((l == 5) && (K == 4)) || ((l == 5) && (K == 2))) {
					// Al igual que antes, en la linea superior se encuentra la logica de los CASOS FAVORABLES AL ORDENADOR 

					switch (l) { //CASOS FAVORABLES AL ORDENADOR 
					case 1:
						if (K == 2) {
							printf("Has elegido piedra y el ordenador papel. Papel tapa piedra. Has perdido \n\n");
						}
						else if (K == 5) {
							printf("Has elegido piedra y el ordenador Spock. Spock vaporiza piedra. Has perdido \n\n");
						}
						break;
					case 2:
						if (K == 3) {
							printf("Has elegido papel y el ordenador tijeras. Tijeras cortan papel. Has perdido \n\n");
						}
						else if (K == 4) {
							printf("Has elegido papel y el ordenador lagarto. Lagarto come papel. Has perdido \n\n");
						}
						break;
					case 3:
						if (K == 1) {
							printf("Has elegido tijeras y el ordenador piedra. Piedra aplasta tijeras. Has perdido \n\n");
						}
						else if (K == 5) {
							printf("Has elegido tijeras y el ordenador Spock. Spock rompe tijeras. Has perdido \n\n");
						}
						break;
					case 4:
						if (K == 1) {
							printf("Has elegido lagarto y el ordenador piedra. Piedra aplasta lagarto. Has perdido \n\n");
						}
						else if (K == 3) {
							printf("Has elegido lagarto y el ordenador tijeras. Tijeras decapitan lagarto. Has perdido \n\n");
						}
						break;
					case 5:
						if (K == 2) {
							printf("Has elegido Spock y el ordenador papel. Papel desautoriza a Spock. Has perdido \n\n");
						}

						if (K == 4) {
							printf("Has elegido Spock y el ordenador lagarto. Lagarto envenena a Spock. Has perdido \n\n");
						}
						break;
					default:
						break;
					}
					P++; // Suma uno a la variable perder una partida
				}

				getchar(); // Lo uso para borrar el buffer
				system("pause");
				system("cls"); // Limpia la pantalla
			}
			printf("Has ganado %d partidas, perdido %d y empatado %d \n\n\n", G, P, E); // Imprimo los resultados de la partida
			system("pause");

			if (G > P) {  // Solo en el caso de haber ganado la partida
				for (a = 0; a < 50; a++) {
					for (b = 0; b < a; b++) {
						printf(" ");
					}
					printf("HAS GANADO");
					Sleep(50);
					system("cls");
				}
			}
			else {
				system("cls"); // En el caso de un empate o una derrota
			}
			break;
		case 3:
			explicacion_del_juego(); // llamo a la funcion void que he definido al principio  para que se ejecute fuera del main
			break;
		default: // en el caso de no haber elegido ninguna de las opciones del menu (sean letras o numeros distintos del 1,2,3)
			for (a = 0; a < 50; a++) {
				for (b = 0; b < a; b++) {
					printf(" ");
				}
				printf("LAS OPCIONES A ELEGIR ERAN NUMEROS ENTRE 1 Y 3 :C");
				Sleep(50);
				system("cls");
			}
			getchar(); // Limpia el buffer
			break;
		}
	}while (z = 1); // El bucle seguirá mientras z=1
	system("pause");
}

void explicacion_del_juego() { // Aqui se explican las reglas del juego piedra papel tijeras lagarto spock 
	printf("El juego  de Sam Kass consiste en lo siguiente \n");
	printf("Tijeras cortan papel \n");
	printf("Papel tapa piedra \n");
	printf("Piedra aplasta lagarto \n");
	printf("Lagarto envenena Spock\n");
	printf("Spock rompe tijeras \n");
	printf("Tijeras decapitan lagarto \n");
	printf("Lagarto como papel \n");
	printf("Papel desautoriza Spock \n");
	printf("Spock vaporiza piedra \n");
	printf("Y como siempre... \n");
	printf("Piedra aplasta tjieras\n\n\n\n");
	system("pause");
	system("cls");
	
}
