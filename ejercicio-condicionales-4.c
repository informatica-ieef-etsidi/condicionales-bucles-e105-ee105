/*Desarrollador: Sergio Corredor
Ejercicio 4:
Leer un valor entero. Suponer que el número es un día de la semana. Suponer que 0 corresponde a Domingo y así sucesivamente. 
Imprimir el nombre del día.*/
#include <stdio.h>

void main() {
	
	int numero;
	
	printf("Introduce un numero entero entre el 0 y el 6:");
	scanf_s("%d", &numero);
	while (numero < 0 || numero>6) { //bucle añadido para que el programa pida un un numero nuevo hasta que este pertenezca al intervalo [0,6]
		printf("No es un numero entre el 0 y el 6,vuelva a introducir un numero\n");
		scanf_s("%d", &numero);
	}
	
	if (numero == 0)
		printf("El dia de la semana es domingo.\n");
	
	else if (numero == 1)
		printf("El dia de la semana es lunes.\n");
	
	else if (numero == 2)
		printf("El dia de la semana es martes.\n");
	
	else if (numero == 3)
		printf("El dia de la semana es miercoles.\n");
	
	else if (numero == 4)
		printf("El dia de la semana es jueves.\n");
	
	else if (numero == 5)
		printf("El dia de la semana es viernes.\n");
	
	else //Cambio de else-if a else gracias al bucle
		printf("El dia de la semana es sabado.\n");
	
	system("pause");

}
