//Paula Arellano
/*Enunciado: Realizar un programa que le pida un numero entero n al usuario, mostrandole las tablas de sumar y de multiplicar de dicho
numero, asi como su cuadrado y su cubo. Una vez mostrado todo esto, volverá a pedir otro numero al usuario, y asi indefinidamente hasta 
que se pulse ctrl+c o se cierre la aplicacion*/
#include<stdio.h>
void main() {
	int i, n,suma, multiplicacion, cuadrado, cubo;

	do{
		printf("Introduzca un numero entero:\n");
		scanf_s("%d", &n);
		
		printf("TABLA DE SUMAR:\n");
		for (i = 0; i <= 10; i++)
		{
			suma = n + i;
			printf("%d+%d=%d\n", n, i, suma);
		}

		printf("TABLA DE MULTIPLICAR:\n");
		for (i = 0; i <= 10; i++)
		{
			multiplicacion = n*i;
			printf("%d*%d=%d\n", n, i, multiplicacion);
		}

		printf("CUADRADO DEL NUMERO:\n");
			cuadrado = n * n;
		printf("n^2=%d\n", cuadrado);

		printf("CUBO DEL NUMERO:\n");
			cubo = n * n*n;
		printf("n^3=%d\n", cubo);

		
	} while (i<=1000000);


}
