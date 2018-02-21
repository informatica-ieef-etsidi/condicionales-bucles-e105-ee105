//Nombre:Alfonso Pinto Nicola

//NOTA!!!!!!!!!
//El programa esta pensado para un caso FICTICIO sobre el mantenimiento de un "robot"
//o vehiculo con un brazo. Se trata de un test para poder valorar el estado del mecanismo, habiendo
//sido fijadas antes las especificaciones del fabricante(en este caso las que me invento yo).


#include<stdio.h>
void main() {
	int i; //para las distintas elecciones del principio (el switch)
	float P; //presion del liquido
	float N; //peso capaz de soportar
	float R; //presion de las ruedas
	float T; //temperatura de la cpu del sistema
	float B; //estado en tanto por ciento de la bateria del sistema
	int j; //es un valor para el bucle con el do...while
	j = 1;
	do {

		printf("Bienvenido a \"Control de mantenimiento\" \n");
		printf("Seleccione que tipo de test desea realizar\n");
		printf("1.Revision del estado del brazo \n");
		printf("2.Revision del estado de las ruedas \n");
		printf("3.Revision del interior de la estructura \n");
		printf("4.Realizar un analisis completo \n");
		printf("5.Mas informacion \n");
		scanf_s("%d", &i);

		system("cls");

		switch (i) {
		case 1:  //es el caso en relacion al caso del brazo
			
			printf("Cual es la presion del liquido del cilindro hidraulico del brazo (en atmosferas)? \n");
			scanf_s("%f", &P);

			//A continuacion pongo las condiciones para el buen funcionamiento de ditintas variables, es el mismo proceso en los demas condicionales

				if ((P >= 2) && (P <= 3)) {
					printf("La presion del liquido es la adecuada \n\n\n");
				}
				else if ((P >= 0) && (P < 2)) {
					printf("La presione es insuficiente, se recomienda cambiar la pieza de inmediato \n\n\n");
				}
				else if ((P > 3) && (P <= 5)) {
					printf("La presion es excesiva, se recomienda reajustar la presion \n\n\n");
				}
				else if ((P > 5)) {
					printf("Riesgo de explosion del material, alejese de inmediato \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}

			getchar(); //lo he puesto ya que tomaba el intro como un caracter y en el siguiente condicional me dirigia directamente al ultimo caso

			printf("Cual es el peso maximo que puede aguantar (en kilogramos)? \n");
			scanf_s("%f", &N);
				if ((N >= 5) && (N <= 15)) {
					printf("El valor se encuentra entre los parametros aceptables \n\n\n");
				}
				else if ((N >= 0) && (N < 5)) {
					printf("El brazo esta respondiendo por debajo de lo esperado \n\n\n");
				}
				else if ((N > 15)) {
					printf("Resultado imposible ya que no esta entre las competencias del objeto, volver a comprobar el peso \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n");
				}
			system("pause");
			system("cls");
			break;
		case 2:  //caso relacionado al estado de las ruedas
			printf("Cual es la presion medida en las ruedas (en atmosferas)? \n");
			scanf_s("%f", &R);
				if ((R >= 2) && (R <= 2.5)) {
					printf("El valor es el adecuado para su uso\n\n\n");
				}
				else if ((R >= 0) && (R < 2)) {
					printf("La presion de las ruedas es demasiado baja \n\n\n");
				}
				else if ((R > 2.5)) {
					printf("La presion es excesiva, debe reducirla para un buen funcionamiento \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}
			system("pause");
			system("cls");
			break;
		case 3:  //caso relacionado con la sistema interior
			printf("Cual es la temperatuta media a la que trabaja la CPU del sistema (en grados celsius)?\n");
			scanf_s("%f", &T);
				if ((T >= 35) && (T <= 60)) {
					printf("La temperatura es la adecuada para el trabajo del sistema \n\n\n");
				}
				else if ((T >= 0) && (T < 35)) {
					printf("La CPU esta funcionando de forma erronea, debe revisarla por separado o cambiarla \n\n\n");
				}
				else if ((T > 60)) {
					printf("La CPU esta funcionando de forma erronea, debe revisarla por separado o cambiarla \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}

			getchar(); //se pone para evitar los problemas anteriores

			printf("Cual es el estado en tanto por ciento de la bateria ? \n");
			scanf_s("%f", &B);
				if ((B >= 80) && (B <= 100)) {
					printf("La bateria se encuentra en perfecto estado \n\n\n");
				}
				else if ((B >= 0) && (B < 80)) {
					printf("La bateria debe ser reemplazada para un funcionamiento optimo\n");
				}
				else if ((B > 100)) {
					printf("Este caso es imposible, y si usted lee eso, deberia preocuparse \n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}
			system("pause");
			system("cls");
			break;
		case 4:  //realizar un analisis completo del sistema en general, son todos los casos anteriores en uno
			printf("Cual es la presion del liquido del cilindro hidraulico del brazo (en atmosferas)? \n");
			scanf_s("%f", &P);

				if ((P >= 2) && (P <= 3)) {
					printf("La presion del liquido es la adecuada \n\n\n");
				}
				else if ((P >= 0) && (P < 2)) {
					printf("La presione es insuficiente, se recomienda cambiar la pieza de inmediato \n\n\n");
				}
				else if ((P > 3) && (P <= 5)) {
					printf("La presion es excesiva, se recomienda reajustar la presion \n\n\n");
				}
				else if ((P > 5)) {
					printf("Riesgo de explosion del material, alejese de inmediato \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}

			getchar(); //lo he puesto ya que tomaba el intro como un caracter y en el siguiente condicional me dirigia directamente al ultimo caso

			printf("Cual es el peso maximo que puede aguantar (en kilogramos)? \n");
			scanf_s("%f", &N);
				if ((N >= 5) && (N <= 15)) {
					printf("El valor se encuentra entre los parametros aceptables \n\n\n");
				}
				else if ((N >= 0) && (N < 5)) {
					printf("El brazo esta respondiendo por debajo de lo esperado \n\n\n");
				}
				else if ((N > 15)) {
					printf("Resultado imposible ya que no esta entre las competencias del objeto, volver a comprobar el peso \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n");
				}

			getchar();

			printf("Cual es la presion medida en las ruedas (en atmosferas)? \n");
			scanf_s("%f", &R);
				if ((R >= 2) && (R <= 2.5)) {
					printf("El valor es el adecuado para su uso\n\n\n");
				}
				else if ((R >= 0) && (R < 2)) {
					printf("La presion de las ruedas es demasiado baja \n\n\n");
				}
				else if ((R > 2.5)) {
					printf("La presion es excesiva, debe reducirla para un buen funcionamiento \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}

			getchar();

			printf("Cual es la temperatuta media a la que trabaja la CPU del sistema (en grados celsius)?\n");
			scanf_s("%f", &T);
				if ((T >= 35) && (T <= 60)) {
					printf("La temperatura es la adecuada para el trabajo del sistema \n\n\n");
				}
				else if ((T >= 0) && (T < 35)) {
					printf("La CPU esta funcionando de forma erronea, debe revisarla por separado o cambiarla \n\n\n");
				}
				else if ((T > 60)) {
					printf("La CPU esta funcionando de forma erronea, debe revisarla por separado o cambiarla \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}

			getchar(); //se pone para evitar los problemas anteriores

			printf("Cual es el estado en tanto por ciento de la bateria ? \n");
			scanf_s("%f", &B);
				if ((B >= 80) && (B <= 100)) {
					printf("La bateria se encuentra en perfecto estado \n\n\n");
				}
				else if ((B >= 0) && (B < 80)) {
					printf("La bateria debe ser reemplazada para un funcionamiento optimo\n\n\n");
				}
				else if ((B > 100)) {
					printf("Este caso es imposible, y si usted lee eso, deberia preocuparse \n\n\n");
				}
				else {
					printf("No se ha introducido un dato de acuerdo a lo pedido \n\n\n");
				}
			system("pause");
			system("cls");
			break;
		case 5: //en el caso de que se quiera saber sobre que estamos haciendo con el programa
			printf("El test que se presenta en este programa es un proceso para poder \n");
			printf("asegurar el correcto funcionamiento de un sistema de recoleccion. \n");
			printf("Hablamos en concreto de un brazo mecanico sobre una estructura movil, que  \n");
			printf("esta pensado para diversos usos, especialmente en la recuperacion de \n");
			printf("objetos en la superficie de forma automata. \n\n");
			printf("El proposito de estos test son ayudar al personal de mantenimiento a \n");
			printf("poder realizar su trabajo de una forma mas sencilla, sin tener que aprender \n");
			printf("todas las especificaciones del fabricante, simplemente debe hacer las pruebas\n");
			printf("e introducir los datos, para asi saber que debe hacer. \n\n\n");

			system("pause");
			system("cls");
			break;
		default:
			printf("No ha seleccionado ninguna de las elecciones establecidas \n\n\n");
			break;
		}
	} while (j = 1);
	system("Pause");
}