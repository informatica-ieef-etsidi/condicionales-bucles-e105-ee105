#include <stdio.h>

/*Ejercicio 7
Realice un programa en el que el usuario pueda seleccionar la operaci�n matem�tica a realizar
con dos n�meros que introduce por teclado (suma, resta, multiplicaci�n, divisi�n, potencia). */
void main() {
	float x, y,potencia=1,i;//Numeros que desee el usuario para realizar la operaci�n matem�tica, y contador para calcular potencia sin libreria math.h
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
		case's'://Para que valga opci�n tanto en may�sculas como en min�sculas.
		printf("Introduzca los numeros que quiere sumar: \n");
		scanf_s("%f %f", &x, &y);
		printf("La suma de %2.f y tanto %2.f es: %2.f\n", x, y, x + y);
		break;
	case'R':
		case'r':
		printf("Introduzca los numeros que quiere restar: \n");
		scanf_s("%f %f", &x, &y);
		printf("La resta de %2.f y tanto %2.f es: %2.f\n", x, y, x - y);
		break;
	case'M':
		case'm':
		printf("Introduzca los numeros que quiere multiplicar: \n");
		scanf_s("%f %f", &x, &y);
		printf("La multiplicacion de %2.f y tanto %2.f es: %2.f\n", x, y, x*y);
		break;
	case'D':
		case'd':
		printf("Introduzca los numeros que quiere dividir: \n");
		scanf_s("%f %f", &x, &y);
		printf("La division de %2.f y tanto %2.f es: %2.f\n", x, y, x / y);
		break;
	case'P':
		case'p':
		printf("Introduzca la base: \n");
		scanf_s("%f", &x);
		printf("Introduzca el exponente: \n");
		scanf_s("%f", &y);

		for(i=1;i<=y;i++){//bucle para realizar la exponencial.
		   potencia*=x;		
		   }
		printf("%2.f elevado a %2.f es: %2.f\n", x, y, potencia);
		break;
	default:
		printf("ERROR.\n");
	}
	system("PAUSE");
}
