//DESARROLLADO POR ALEJANDRO LÛPEZ GUERRERO
/*Este programa recoge tres funcionalidades principales:c·lculo de areas poligonales, 
una calculadora b·sica y operadores b·sicos de combinatoria*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {

	//Variables globales de la funcion main
	char menu1, menu2, menu3;
	int menu4;
	//Variables calculo areas
	float longlado, radiocc, apotema, area, pi;
	int lados;
	//Variables calculadora
	float resultadocalc, numerocalc1, numerocalc2;
	//Variables combinatoria
	int contador,n_elementos,k_elementos;
	double factorial_1, factorial_2,factorial_3;
	float resultadocomb;

	printf("\n Bienvenido al programa \"Operaciones matematicas\"\n\n Eliga la operacion que desee realizar.\n");
	printf("\n\t(A) >> AREAS POLIGONALES\n\t(B) >> CALCULADORA\n\t(C) >> COMBINATORIA\n\n Opcion: ");
	scanf_s("%c", &menu1, 1);
	system("cls");
	getchar();

	switch (menu1) {
	case 'A':
	case 'a':
		printf("\nHa elegido \"AREAS POLIGONALES\"\n");
		menu1 = 'A';
		break;
	case 'B':
	case 'b':
		printf("\nHa elegido \"CALCULADORA\"\n");
		menu1 = 'B';
		break;
	case 'C':
	case 'c':
		printf("\nHa elegido \"COMBINATORIA\"\n");
		menu1 = 'C';
		break;
	default:
		printf("\nUsted ha introducido la expresion\" %c \",y no es una opcion valida\n", menu1);
		printf("\nEl programa se cerrara. \n\n");
		system("Pause()");
		exit("fcloseall");
	}

	if (menu1 == 'A') { //¡reas poligonales

		printf("\nEn esta opcion puede calcular el area de un poligono regular.\n");
		printf("\nIntroduzca el numero de lados de su poligono: ");
		scanf_s("%d", &lados);

		if (lados < 3) {
			printf("\nEl numero de lados introducidos es incorrecto. El programa se cerrara.\n\n");
			system("Pause()");
			exit("fcloseall");
		}

		getchar();
		printf("\n\nAhora elija entre dar la longitud del lado o el radio de la circunferencia \ncircunscrita al poligono.");
		printf("\n\n\t(L) >> Longitud del lado\n\t(R) >> Radio circunferencia circunscrita\n\nOpcion: ");
		scanf_s("%c", &menu2,1);
	

		switch (menu2) {
		case 'L':
		case 'l':
			printf("\nHa elegido usted dar la longitud del lado.\n");
			printf("Lado (en cm) :");
			scanf_s("%f", &longlado);
			menu2 = 'L';
			break;
		case 'R':
		case 'r':
			printf("\nHa elegido usted dar el radio de la circunfenecia.\n");
			printf("Radio (en cm) :");
			scanf_s("%f", &radiocc);
			menu2 = 'R';
			break;
		default:
			printf("\nUsted ha introducido la expresion\" %c \",y no es una opcion valida\n", menu2);
			printf("\nEl programa se cerrara. \n\n");
			system("Pause()");
			exit("fcloseall");
		}


		pi = 4.0*atan(1.0);

	
		if (menu2 == 'L') {

			if (lados == 3) {

				area = (float)longlado*(longlado*tan(pi / 3)*0.5)*0.5;
				printf("\n\nResultado: %.3f cm2", area);
			}
			else {
				apotema = longlado / (2 * tan((pi / lados)));
				area = longlado * lados*apotema*0.5;

				printf("\n\nResultado: %.3f cm2", area);
			}
		}
		else if (menu2 == 'R') {
			if (lados == 3) {

				longlado = (((3.0 / 2.0)*radiocc) / (sin(pi / 3.0)));
				area = longlado * (3.0 / 2.0)*radiocc*0.5;
				printf("\n\nResultado: %.3f cm2", area);

			}
			else {
				longlado = 2 * radiocc*sin(pi / lados);
				apotema = radiocc * cos(pi / lados);
				area = longlado * lados*apotema / 2;

				printf("\n\nResultado: %.3f cm2", area);
			}
		}
	}
	else if (menu1 == 'B') { //Calculadora
		printf("\nEscoja la operacion matematica a realizar\n\n\t(S) >> SUMA\n\t(R) >> RESTA\n\t(M) >> MULTIPLICACION\n\t(D) >> DIVISION\n\t(P) >> POTENCIA\n\n Operacion: ");
		scanf_s("%c", &menu3, 1);

		system("cls");
		switch (menu3) {
		case 'S':
		case 's':
			printf("\nHa elegido usted la operacion \"SUMA\"\n");
			menu3 = 'S';
			break;
		case 'R':
		case 'r':
			printf("\nHa elegido usted la operacion \"RESTA\"\n");
			menu3 = 'R';
			break;
		case 'M':
		case 'm':
			printf("\nHa elegido usted la operacion \"MULTIPLICACION\"\n");
			menu3 = 'M';
			break;
		case 'D':
		case 'd':
			printf("\nHa elegido usted la operacion \"DIVISION\"\n");
			menu3 = 'D';
			break;
		case 'P':
		case 'p':
			printf("\nHa elegido usted la operacion \"POTENCIA\"\n");
			menu3 = 'P';
			break;
		default:
			printf("\nUsted ha introducido la expresion\" %c \",y no es una opcion valida\n", menu3);
			printf("\nEl programa se cerrara. \n\n");
			system("Pause()");
			exit("fcloseall");
		}

		printf("\nIntroduzca el primer numero a operar: ");
		scanf_s("%f", &numerocalc1);
		getchar();

		printf("\nIntroduzca el segundo numero a operar: ");
		scanf_s("%f", &numerocalc2);


		if (menu3 == 'S') {
			resultadocalc = numerocalc1 + numerocalc2;
			printf("\n\nResultado: %.2f", resultadocalc);
		}
		else if (menu3 == 'R') {
			resultadocalc = numerocalc1 - numerocalc2;
			printf("\n\nResultado: %.2f", resultadocalc);
		}
		else if (menu3 == 'M') {
			resultadocalc = numerocalc1 * numerocalc2;
			printf("\n\nResultado: %.2f", resultadocalc);
		}
		else if (menu3 == 'D') {
			resultadocalc = (float)numerocalc1 / numerocalc2;
			printf("\n\nResultado: %.2f", resultadocalc);
		}
		else if (menu3 == 'P') {
			resultadocalc = pow(numerocalc1, numerocalc2);
			printf("\n\nResultado: %.2f", resultadocalc);
		}
	}
	else if (menu1 == 'C') { //Combinatoria
		printf("\nElija la operacion que desea realizar.\n\n\t(1) >> VARIACIONES sin repeticion\n\t(2) >> VARIACIONES con repeticion");
		printf("\n\t(3) >> COMBINACIONES sin repeticion\n\t(4) >> COMBINACIONES con repeticion\n\t(5) >> PERMUTACIONES sin repeticion\n\t(6) >> PERMUTACIONES con repeticion\n\n Opcion: ");
		scanf_s("%d", &menu4);


		switch (menu4) {
		case 1:
			printf("\nHa elegido \"VARIACIONES sin repeticion\"\n");
			break;
		case 2:
			printf("\nHa elegido \"VARIACIONES con repeticion\"\n");
			break;
		case 3:
			printf("\nHa elegido \"COMBINACIONES sin repeticion\"\n");
			break;
		case 4:
			printf("\nHa elegido \"COMBINACIONES con repeticion\"\n");
			break;
		case 5:
			printf("\nHa elegido \"PERMUTACIONES sin repeticion\"\n");
			break;
		case 6:
			printf("\nHa elegido \"PERMUTACIONES con repeticion\"\n");
			break;
	
		default:
			printf("\nUsted ha introducido la expresion\" %c \",y no es una opcion valida\n", menu4);
			printf("\nEl programa se cerrara. \n\n");
			system("Pause()");
			exit("fcloseall");
		}

		
		printf("\nIntroduzca ahora el numero\"n\" de elementos: ");
		scanf_s("%d", &n_elementos);

		if ((menu4 != 5) && (menu4 != 6)) {
			printf("\nIntroduzca ahora el numero\"k\" (los elementos n tomados de k en k): ");
			scanf_s("%d", &k_elementos);
		}

		if (menu4 == 1) {
			//Variaciones sin repeticion

			factorial_1 = n_elementos;
			factorial_2 = (n_elementos - k_elementos);

			contador = factorial_1;
			do {
				contador = --contador;
				factorial_1 = (factorial_1*contador);
			} while (contador > 1);

			contador = factorial_2;
			do {
				contador = --contador;
				factorial_2 = (factorial_2*contador);
			} while (contador > 1);

			resultadocomb = ((factorial_1) / (factorial_2));

			printf("\n El resultado es: %.0f\n\n", resultadocomb);
		}
		else if (menu4 == 2) {
			//Variaciones con repeticiond

			resultadocomb = pow(n_elementos, k_elementos);
			printf("\n El resultado es: %.0f\n\n", resultadocomb);

		}
		else if (menu4 == 3) {
			//Combinaciones sin repeticion
			

			factorial_1 = n_elementos;
			factorial_2 = (n_elementos - k_elementos);
			factorial_3 = k_elementos;

			contador = factorial_1;
			do {
				contador = --contador;
				factorial_1 = (factorial_1*contador);
			} while (contador > 1);

			contador = factorial_2;
			do {
				contador = --contador;
				factorial_2 = (factorial_2*contador);
			} while (contador > 1);

			contador = factorial_3;
			do {
				contador = --contador;
				factorial_3 = (factorial_3*contador);
			} while (contador > 1);

			resultadocomb = (factorial_1) / (factorial_3*factorial_2);
			printf("\n El resultado es: %.0f\n\n", resultadocomb);

		}
		else if (menu4 == 4) {
			//Combinaciones con repeticion


			factorial_1 = (n_elementos + k_elementos - 1.0);
			factorial_2 = (n_elementos - 1.0);
			factorial_3 = k_elementos;

			contador = factorial_1;
			do {
				contador = --contador;
				factorial_1 = (factorial_1*contador);
			} while (contador > 1);

			contador = factorial_2;
			do {
				contador = --contador;
				factorial_2 = (factorial_2*contador);
			} while (contador > 1);

			contador = factorial_3;
			do {
				contador = --contador;
				factorial_3 = (factorial_3*contador);
			} while (contador > 1);

			resultadocomb = (factorial_1) / (factorial_3*factorial_2);
			printf("\n El resultado es: %.0f\n\n", resultadocomb);

		}
		else if (menu4 == 5) {
			//Permutaciones sin repeticion
			factorial_1 = n_elementos;

			contador = factorial_1;
			do {
				contador = --contador;
				factorial_1 = (factorial_1*contador);
			} while (contador > 1);

			(float)factorial_1;
			printf("\n El resultado es: %.0f\n\n",factorial_1);
		}
		else if (menu4 == 6) {
			//permutaciones con repeticion
			printf("\nEste apartado aun esta en desarrollo. Disculpe las molestias\n");

		}
	}

	printf("\nFin del programa\n\n");
	system("Pause()");

}