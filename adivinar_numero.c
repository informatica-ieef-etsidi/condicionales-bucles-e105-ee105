//Desarollador: Javier Redondo Hernando
//programa que calcula un numero aleatorio en un intervalo dado y luego ofrece tres niveles para que intentes adivinarlo

#include<stdio.h>

i = 1;

void main() {

	int numero/*numero a adivinar*/, num1, num2, opt, j;//opt y j son variables usadas para elejir el nivel y para llevar la cuenta de los intentos respectivamente

	do {
		j = 0;
		system("cls");
		printf("Primero establezca el intervalo en el que quiere el numero.\n");
		printf("Introduzca el extremo inferior:\n");
		scanf_s("%d", &num1);
		printf("Introduzca el extremo superior:\n");
		scanf_s("%d", &num2);
		if (num2 < num1) {
			numero = num1;
			num1 = num2;
			num2 = numero;
		}
		numero = rand() % (num2 - num1 + 1) + num1;
		system("cls");
		printf("Elija el nivel:\n");
		printf("1-->Nivel 1\n");
		printf("2-->Nivel 2\n");
		printf("3-->Nivel 3\n");
		scanf_s("%d", &opt);
		system("cls");
		switch (opt) {
		case 1://pregunta por un numero y te dice si el buscado es mayor igual o menor
			do {
				j++;//contador para saber el numero de intentos
				printf("Introduzca un numero:");
				scanf_s("%d", &num1);
				if (num1 == numero) {
					printf("ACERTASTE!!\n");
					printf("Has necesitado %d intentos\n", j);
					system("pause");
				}
				else if (num1 < numero) {
					printf("El numero que buscas es mayor que ese.\n");
					system("pause");
				}
				else if (num1 > numero) {
					printf("El numero que buscas es menor que ese.\n");
					system("pause");
				}
				system("cls");
			} while (num1 != numero); //bucle infinito
			break;
		case 2://pregunta por un intervalo y te dice si el numero buscado es menor, mayor pertenece al intervalo o es uno de los numeros del intervalo. 
			//Despues pregunta por el numero y dice si es correcto o no
			do {
				j++;
				printf("Introduce un intervalo,\n");
				printf("Introduce el primer numero:\n");
				scanf_s("%d", &num1);
				printf("Introduce el segundo numero:\n");
				scanf_s("%d", &num2);
				if (num1 < numero && num2 < numero) {
					printf("El numero que buscas es mayor que ese intervalo.\n");
					system("pause");
				}
				else if (num1 > numero && num2 > numero) {
					printf("El numero que buscas es menor que ese intervalo.\n");
				}
				else if (num1 == numero || num2 == numero) {
					printf("El numero que buscas es uno de esos dos.\n");
				}
				else {
					printf("El numero que buscas esta en ese intervalo.\n");
				}
				printf("Intenta adivinar el numero:\n");
				scanf_s("%d", &num2);
				if (num2 == numero) {
					printf("CORRECTO!!\n");
					printf("Has necesitado %d intentos\n", j);
					system("pause");
				}
				else {
					printf("Vaya has fallado:(\n");
					system("pause");
				}
				system("cls");
			} while (num2 != numero);
			break;
		case 3://pregunta por un intervalo y dice si el numero pertenece a el o no. despues pregunta por el numero
			do {
				j++;
				printf("Introduce un intervalo,\n");
				printf("Introduce el primer numero:\n");
				scanf_s("%d", &num1);
				printf("Introduce el segundo numero:\n");
				scanf_s("%d", &num2);
				if (num1 < numero && num2 < numero || num1  > numero && num2 > numero) {
					printf("El numero que buscas no esta en ese intervalo.\n");
				}
				else {
					printf("El numero que buscas esta en ese intervalo (el intervalo se trata como cerrado).\n");
				}
				printf("Intenta adivinar el numero:\n");
				scanf_s("%d", &num2);
				if (num2 == numero) {
					printf("CORRECTO!!\n");
					printf("Has necesitado %d intentos\n", j);
					system("pause");
				}
				else {
					printf("Vaya has fallado:(\n");
					system("pause");
				}
				system("cls");
			} while (num2 != numero);
			break;
		} 
	} while (i = 1);
}