#include <stdio.h>/*"#define _CRT_SECURE_NO_WARIS" no es necesario si luego ponemos scanf_s*/
#include <stdlib.h>

void main() {
	
	int a = 1, n1, n2, b, c;//La variable "m" no hacía referencia a nada

	printf("BIENVENIDO AL DETERMINADOR DE MULTIPLOS DE 7\n\n\n");

//El while anterior no tiene la finalidad que deseamos. Si lo dejamos el programa se ejecuta 10 veces aún estando bien el intervalo. 

		b = 0;

		printf("Debe indicar entre que valores buscar los multiplos.\n\nIntroduzca el valor minimo del intervalo: ");
		scanf_s("%d", &n1);
		printf("Introduzca el valor maximo del intervalo: ");
		scanf_s("%d", &n2);

		while (n1 < 0 || n1 > n2) {
			printf("ERROR\n\n");
			printf("Debe indicar entre que valores buscar los multiplos.\n\nIntroduzca el valor minimo del intervalo: ");
			scanf_s("%d", &n1);
			printf("Introduzca el valor maximo del intervalo: ");
			scanf_s("%d", &n2);
			a++;//Contador de numero de intentos de introducir bien el intervalo
			if(a>=10)//Límite de intentos
				exit("0");//Esta función cierra todo el programa
		}
		for (c = n1; c <= n2; c++) {
			if (c % 7 == 0) {
				b = 1;
			}
		}
		if (b == 0) {//El operador lógico estaban mal
			printf("No hay multiplos de 7 en el intervalo.\n");
		}
		if (b == 1) {//El operador lógico estaban mal
			printf("Los multiplos de 7 en el intervalo [%d , %d] son: ", n1, n2);

			for (c = n1; c <= n2; c++) {
				if (c % 7 == 0) {
					printf("%d ", c);
				}
			}
		}
		printf("\n\n");
	
	
	system("pause");
}
