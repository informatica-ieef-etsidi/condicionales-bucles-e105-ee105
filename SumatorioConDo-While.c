#include <stdlib.h>
#include <stdio.h>
//Programa para que sume todos los numeros hasta n.
void main() {
	int n,sol=0, i=0;
	printf("PROGRAMA PARA SUMAR TODOS LOS ENTEROS HASTA n\n");
	do {
		printf("Introduzca un n\n");
			scanf_s("%d", &n);
			if (n > 0)
				break;
			if (n < 0)
		printf("n no puede ser menor que 0");
	}
		while (n < 0);
	
		while (i <= n) {

		sol = sol + i;
		i = i++;
		}
	printf("La solucion del sumatorio es %d\n", sol);
	system("PAUSE");
}