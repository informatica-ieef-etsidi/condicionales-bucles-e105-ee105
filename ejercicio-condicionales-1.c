/*Desarrollador: Sergio Corredor
Ejercicio 1:
Realice un programa que solicite tres números enteros e imprima el mayor de ellos.*/
#include <stdio.h>

void main() {
	
	int n1, n2, n3;

	printf("Introduzca un primer numero entero:");
	scanf_s("%d", &n1);
	printf("Introduzca un segundo numero entero:");
	scanf_s("%d", &n2);
	printf("Introduzca un tercer numero entero:");
	scanf_s("%d", &n3);
	
	if (n1 >= n2 && n1>= n3)
		printf("El mayor de los numeros es el %d\n", n1);

	else if (n2 >= n1 && n2>= n3)
		printf("El mayor de los numeros es el %d\n", n2);

	else if (n3 >= n1 && n3>= n2) 
		printf("El mayor de estos numeros es el %d\n", n3);
	
	system("pause");

}
