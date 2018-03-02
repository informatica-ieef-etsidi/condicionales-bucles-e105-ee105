#include <stdio.h>

void main() {
	
	int numero;
	
	printf("Introduce un numero entero:");
	scanf_s("%d", &numero);
	
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
	
	else if (numero == 6)
		printf("El dia de la semana es sabado.\n");
	
	system("pause");

}