//Paula Arellano
/*Realizar un programa que cuente desde un numero a hasta el numero b de n en n, siendo a,b y n 
introducidos por el usuario. Se tiene que permitir la cuenta hacia atras, si n es negativo. En 
cualquier caso, el programa tiene que comprobar que a y b son compatibles con un salto dado, 
es decir, si el salto es positivo, a debe ser mayor que b.*/

#include<stdio.h>
void main() {
	int a, b, n, i=0, numero;

	printf("Introduce el inicio del recuento:\n");
		scanf_s("%d", &a);
	printf("Introduce el fin del recuento:\n");
	scanf_s("%d", &b);
	printf("Introduce el intervalo de recuento:\n");//Admite positivos(hacia adelante) o negativos (hacia atras)
		scanf_s("%d", &n);

		if (n > 0) {
			if (b <= a)
				printf("No son compatibles los limites y el salto del recuento.\n");
			else
				printf("Recuento:");
				for (i = 0; (a+i) <= b; i=i + n)
				{
					numero = a + i;
					printf("%d  ", numero);
				}
		}

		if (n < 0) {
			if (b >= a)
				printf("No son compatibles los limites y el salto del recuento.\n");
			else
				printf("Recuento:");
				for (i = 0; (a-i)>=b; i=i - n)
				{
					numero = a - i;
					printf("%d  ", numero);
				}
		}

		printf("\n");

		system("PAUSE");
}