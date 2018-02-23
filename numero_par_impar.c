#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, par, impar;

	printf("introduzca un numero para saber si es par o impar\n");
	scanf_s("%d", &numero);
	impar = numero % 2;

	if (impar)
	{
		printf("El numero introducido es impar\n");
	}
	else
	{
		printf("El numero introducido es par\n");
	}
	system("pause");
}