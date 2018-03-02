#include <stdio.h>
void main() {
	int inicio = 0;
	int contador = 0;
	int tabla;
	printf_s("Indica de que tabla quieres hallar las multiplicaciones\n");
	scanf_s("%d", &tabla);
	getchar();
	printf("De que valor a que valor quieres hallar los multiplos?\n");
	printf("Desde ");
	scanf_s("%d", &contador);
	getchar();
	printf("Hasta ");
	scanf_s("%d", &inicio);


	printf("Variable seleccionada: %d \nHe aqui la tabla del %d desde el %d hasta el %d\n", inicio, tabla, contador,  inicio);

	for (contador; contador <= inicio; contador++) {
		int resultado = contador * tabla;
		printf(" %d * %d = %d\n", tabla, contador, resultado);
	}

	system("PAUSE");
	return 0;
}