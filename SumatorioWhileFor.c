// Desarrollador: Marcos Velázquez Ruiz
// Este programa calcula el sumatorio desde 1 hasta un n introducido por el usuario



#include <stdio.h>
void main() {

	int n;
	int suma = 0;
	int i = 1;

	printf("Introduce un numero\n");
	scanf_s("%d", &n);


	while (n < 0) {
		printf("El numero debe ser mayor que 0.\n");
		printf("Introduce un numero\n");
		scanf_s("%d", &n);
	}

	for (i; i <= n; i++)
			suma = suma + i;
	printf("Sumatorio = %d\n", suma);
	
	system("pause");
}