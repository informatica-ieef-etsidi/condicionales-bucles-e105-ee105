/*Desarrollador: Sergio Corredor
Ejercicio 2:
Realice un programa que solicite al usuario un número. Indique si este número es o no divisible por 2.*/
#include <stdio.h>

void main() {
	
	int numero;
	
	printf("Introduce un numero:");
	scanf_s("%d", &numero);
	
	if (numero % 2 == 0)
		printf("El numero %d es divisible por 2\n", numero);
	
	else
		printf("El numero %d no es divisible por 2\n", numero);
	
	system("pause");

}
