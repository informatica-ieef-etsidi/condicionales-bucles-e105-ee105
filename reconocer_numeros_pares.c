#include <stdio.h>
#include <stdlib.h>

//El programa reconoce si un n�mero es par o impar

void main() {
	int numero;


	printf("Introduce un numero:\n");
	scanf_s("%d", &numero);

	
	if (numero % 2 == 0) {
		printf("El numero es par.\n");
	}
	else {
		printf("El n�mero es impar.\n");
	}
	system("PAUSE");

}