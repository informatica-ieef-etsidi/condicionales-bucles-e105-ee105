#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main() {
	float euros;
	float dolares;
	float pesetas;

	printf("Introduzca la cantidad deseada en pesetas\n");
	scanf_s("%f", &pesetas);

	euros = (pesetas / 166.386);

	printf("euros = (%f / %f) = %f", pesetas, 166.386, euros);

	dolares = (euros / 1.41);

	printf("dolares = (%f / %f) = %f", euros, 1.41, dolares);


	system("Pause");







}