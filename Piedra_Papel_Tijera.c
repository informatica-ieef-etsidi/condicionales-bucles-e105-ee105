//Desarrollado por Álvaro Monteagudo Pérez
/*El codigo de piedra papel tijera, pero se trata de una partida al mejor de 5
y en caso de equivocarse de tecla restaria 1 punto*/

#include <stdio.h>

void main() {

	char eleccion1, eleccion2;
	int i = 0, k = 0;

	while (i < 3 && k < 3) {

		system("cls");

		printf("Jugador 1 elige tu movimiento: (piedra: i, papel: p, tijera: t)\n");
		scanf_s("%c", &eleccion1, 1);
		getchar();

		system("cls");

		printf("Jugador 2 elige tu movimiento: (piedra: i, papel: p, tijera: t)\n");
		scanf_s("%c", &eleccion2, 1);
		getchar();

		system("cls");

		if (eleccion1 == 'i' || eleccion1 == 'I') {
			if (eleccion2 == 'i' || eleccion2 == 'I') {
				printf("Piedra no rompe piedra, habeis empatado\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else if (eleccion2 == 'p' || eleccion2 == 'P') {
				k++;
				printf("Papel rompe piedra, jugador 2 gana 1 punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else if (eleccion2 == 't' || eleccion2 == 'T') {
				i++;
				printf("Piedra rompe tijeras, jugador 1 gana 1 punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else {
				if (k > 0) {
					k--;
				}
				printf("Jugador 2 ha elegido mal, pierde un punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
		}
		else if (eleccion1 == 'p' || eleccion1 == 'P') {
			if (eleccion2 == 'i' || eleccion2 == 'I') {
				i++;
				printf("Papel rompe piedra, jugador 1 gana 1 punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else if (eleccion2 == 'p' || eleccion2 == 'P') {
				printf("Papel no rompe papel, habeis empatado\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else if (eleccion2 == 't' || eleccion2 == 'T') {
				k++;
				printf("Tijeras rompe papel, jugador 2 gana 1 punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else {
				if (k > 0) {
					k--;
				}
				printf("Jugador 2 ha elegido mal, pierde un punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
		}
		else if (eleccion1 == 't' || eleccion1 == 'T') {
			if (eleccion2 == 'i' || eleccion2 == 'I') {
				k++;
				printf("Piedra rompe tijeras, jugador 2 gana 1 punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else if (eleccion2 == 'p' || eleccion2 == 'P') {
				i++;
				printf("Tijeras rompe papel, jugador 1 gana 1 punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else if (eleccion2 == 't' || eleccion2 == 'T') {
				printf("Tijeras no rompe tijeras, habeis empatado\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else {
				if (k > 0) {
					k--;
				}
				printf("Jugador 2 ha elegido mal, pierde un punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
		}
		else if (eleccion1 != 'i' && eleccion1 != 'I' && eleccion1 != 'P' && eleccion1 != 'p' && eleccion1 != 't' && eleccion1 != 'T') {
			if (eleccion2 != 'i' && eleccion2 != 'I' && eleccion2 != 'P' && eleccion2 != 'p' && eleccion2 != 't' && eleccion2 != 'T') {
				if (k > 0 && i > 0) {
					k--;
					i--;
				}
				else if (k > 0 && i == 0) {
					k--;
				}
				else if (k == 0 && i > 0) {
					i--;
				}
				printf("Ambos jugadores habeis fallado, perdeis un punto :D\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
			else {
				if (i > 0) {
					i--;
				}
				printf("Jugador 1 ha elegido mal, pierde un punto\n");
				printf("El marcador va: Jugador 1(%d), Jugador 2(%d)\n", i, k);
				system("pause");
			}
		}

	}

	system("cls");

	if (i == 3) {
		printf("Jugador 1 ha ganado %d-%d\n", i, k);
	}
	else {
		printf("Jugador 2 ha ganado %d-%d\n", k, i);
	}

	system("pause");

}