#include <stdio.h>
#include <stdlib.h>

void main (){
	int numero;
	printf("Introduzca numero:\n");
	scanf_s("%d", &numero);

	if (numero % 2 == 0) {
		printf("Es par.\n");
	}
	else
	{
		printf("Es impar.\n");
	}

	system("PAUSE");
}