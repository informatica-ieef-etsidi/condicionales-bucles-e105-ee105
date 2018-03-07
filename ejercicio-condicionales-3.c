/*Desarrollador: Sergio Corredor
Ejercicio 3:
Dados dos números enteros tecleados por el usuario, comprobar si el primero es divisible por el segundo.*/ 
#include <stdio.h>

void main() {
	
	int n1, n2;
	
	printf("Introduce un primer numero entero:");
	scanf_s("%d", &n1);
	printf("Introduce un segundo numero entero:");
	scanf_s("%d", &n2);
	
	if (n1%n2 == 0)
		printf("El numero %d es divisible por %d\n", n1, n2);
	
	else
		printf("El numero %d no es divisible por %d\n", n1, n2);
	
	system("pause");

}
