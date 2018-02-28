#include <stdio.h>
#include <math.h>

void main() { // Programa para hallar la potencia de un numero(ejercicio 3 del tema 3 de bucles)
	int exponente, numero;
	double resultado;

	printf("Introduzca un numero entero\n");
	scanf_s("%d", &numero);
	printf("Introduzca el exponente al que quiere elevar dicho numero\n");
	scanf_s("%d", &exponente);
	resultado = pow(numero, exponente);
	printf("El resultado de elvar %d a la %d es %.f\n", numero, exponente, resultado);

	system("pause");
}