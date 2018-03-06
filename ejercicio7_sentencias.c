#include <stdio.h>

/*Ejercicio 7
Realice un programa en el que el usuario pueda seleccionar la operación matemática a realizar
con dos números que introduce por teclado (suma, resta, multiplicación, división, potencia). */
void main() {
	float x, y,potencia=1,i;//Numeros que desee el usuario para realizar la operación matemática, y contador para calcular potencia sin libreria math.h
	char opcion;//S SUMA, R RESTA, M MULTIPLICAR, D DIVIDIR, P POTENCIA.
	printf("Introduzca que operacion desea realizar: \n");
	printf("1. S-para sumar \n");
	printf("2. R-para restar \n");
	printf("3. M-para multiplicar \n");
	printf("4. D-para dividir \n");
	printf("5. P-para potencia \n");
	scanf_s("%c", &opcion);

	switch (opcion) {
	case'S':
		case's'://Para que valga opción tanto en mayúsculas como en minúsculas.
		printf("Introduzca los numeros que quiere sumar: \n");
		scanf_s("%f %f", &x, &y);
		printf("La suma de %.2f y tanto %.2f es: %.2f\n", x, y, x + y);
		break;
	case'R':
		case'r':
		printf("Introduzca los numeros que quiere restar: \n");
		scanf_s("%f %f", &x, &y);
		printf("La resta de %.2f y tanto %.2f es: %.2f\n", x, y, x - y);
		break;
	case'M':
		case'm':
		printf("Introduzca los numeros que quiere multiplicar: \n");
		scanf_s("%f %f", &x, &y);
		printf("La multiplicacion de %.2f y tanto %.2f es: %.2f\n", x, y, x*y);
		break;
	case'D':
		case'd':
		printf("Introduzca los numeros que quiere dividir: \n");
		scanf_s("%f %f", &x, &y);
		
		if ( y == 0) {
			printf("No es posible dividir entre 0.\n");
		}
		else {
			printf("La division de %.2f y tanto %.2f es: %.2f\n", x, y, x / y);
		}
		break;
	case'P':
		case'p':
		printf("Introduzca la base: \n");
		scanf_s("%f", &x);
		printf("Introduzca el exponente: \n");
		scanf_s("%f", &y);

		for(i=1;i<=y;i++){//bucle para realizar la potencia.
		   potencia*=x;		
		   }
		printf("%.2f elevado a %.2f es: %.2f\n", x, y, potencia);
		break;
	default:
		printf("ERROR.\n");
	}
	system("PAUSE");
}
