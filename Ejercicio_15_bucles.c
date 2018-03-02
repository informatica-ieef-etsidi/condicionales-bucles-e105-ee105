//desarrollado por Javier Redondo
//aunque ya esta subido el ejercicio 15 se me ocurrio subirlo sin emplear la libreria math.h, todo con condicionales y bucles.

#include<stdio.h>

void main() {
	int n;
	float i, a; //a es el valor de la sucesion en cada valor de n
	printf("Teclee hasta que termino quiere la sucesion: ");
	scanf_s("%d", &n);
	printf("la sucesion es { ");
	for (i = 0; i < n; i++) {
		if ((int)i % 2 == 0) { //este condicional es para decidir si la potencia de menos uno sera par o impar
			a = ((i*i) - 1) / ((2 * i) + 1);
		}
		else {
			a = -1*((i*i) - 1) / ((2 * i) + 1);
		}
		if (i < n - 1) { //esto es solo por estetica para que queden todos con una coma detras menos el ultimo
			printf("%.2f, ", a);
		}
		else {
			printf("%.2f ", a);
		}
	}
	printf("}");
	system("pause");
}