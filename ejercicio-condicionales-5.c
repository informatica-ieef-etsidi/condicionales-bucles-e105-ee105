/*Desarrollador: Sergio Corredor
Ejercicio 5:
Elaborar un programa que lea una letra y determine si es vocal, consonante o cualquier otro carácter de la tabla de Códigos ASCII.*/
#include <stdio.h>

void main() {
	
	char caracter;
	
	printf("Introduce un caracter ASCII:");
	scanf_s("%c", &caracter);
	//if (caracter > 90) 
		//caracter = caracter - 32; Con esto se podrían ahorrar unas expresiones tan largas dentro de los ifs
	
	if ((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122))
		
		if (caracter == 65 || caracter == 69 || caracter == 73 || caracter == 79 || caracter == 85 || caracter == 97 || caracter == 101 || caracter == 105 || caracter == 111 || caracter == 117)
			printf("El caracter es una vocal.\n");
		
		else
			printf("El caracter es una consonante.\n");
	
	else
		printf("El caracter no es una letra.\n");
	
	system("pause");

}
