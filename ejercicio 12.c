/*Escribe un programa que pregunte primero si quieres calcular el área de un triángulo o de un círculo. 
Si contestas que quieres calcular el área de un triángulo, el programa tiene que pedir entonces la base y la altura y escribir el área. 
Si contestas que quieres calcular el área de un círculo, el programa tiene que pedir entonces el radio y escribir el área. */

#include <stdio.h>

int main(){
	
	int opcion;
	
	printf("Elija que quiere calcular:\n1. Area de un triangulo:\n2. Area de un circulo:\n");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:{
			float base, altura, area;
			printf("Introduzca una base en metros: ");
			scanf("%f", &base);
			printf("Introduzca una altura en metros: ");
			scanf("%f", &altura);
			area=base*altura;
			printf("El area de la base %.2f y la altura %.2f es %.2f metros al cuadrado", base, altura, area);
			break;
		}
		case 2:{
			float radio, area;
			const float pi=3.14159265;
			printf("Introduce un radio en metros:\n");
			scanf("%f", &radio);
			area=pi*radio;
			printf("El area del circulo de radio %.2f es %.2f metros al cuadrado", radio, area);
			break;
		}
	}
}
