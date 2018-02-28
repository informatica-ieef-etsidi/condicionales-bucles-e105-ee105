
//Desarrollador: Daniel Iglesias
//Cálculo de las Formulas Electricas de: F, E, Ep y V.

#include<stdio.h>
#define K 9000000000

void main() {

	double F, f, E, e, P, p, V, v;
	
	char opcion;

	float Q1;
	float Q2;
	float D;

	printf("Selecciona una de las siguientes letras en parentesis para calcular lo que usted desee: \nFuerza Electroestatica de Coulomb (F)\nCampo Electrico (E)\nEnergia Potencial (P)\nPotencial Electrico(V)\n");
	
	scanf_s("%c", &opcion, 1);

	system("cls");

	switch (opcion)
	{
		case 'F':
		case 'f':
				printf("\nVamos a calcular la Fuerza Electroestatica de Coulomb.\n\nPara ello indica los siguientes datos:\nCarga 1 en culombios (Q1): ");
				scanf_s("%f", &Q1);

				printf("Carga 2 en culombios (Q2): ");
				scanf_s("%f", &Q2);

				printf("Distancia entre cargas en metros (D): ");
				scanf_s("%f", &D);


				F = (K*Q1*Q2) / D*D;

				printf("\n\nLa Fuerza Electroestatica de Coulomb correspondiente a dos cargas de %0.f y %0.f culombios, separadas una distancia de %0.f metros es:\n   %2.f  Newton\n\n\n", Q1, Q2, D, F);

			break;
		case 'E':
		case 'e':
				printf("\nVamos a calcular el Campo Electrico.\n\nPara ello indica los siguientes datos:\nCarga 1 en culombios (Q1): ");
				scanf_s("%f", &Q1);

				printf("Distancia entre la carga y donde queremos calcular el E en metros (D): ");
				scanf_s("%f", &D);


				E = (K*Q1) / D*D;

				printf("\n\nEl Campo Electrico correspondiente a la carga de %0.f culombios, separada una distancia de %0.f metros es:\n   %2.f  Newton\n\n\n", Q1, D, E);

			break;
		case 'p':
		case 'P':
				printf("\nVamos a calcular la Energia Potencial.\n\nPara ello indica los siguientes datos:\nCarga 1 en culombios (Q1): ");
				scanf_s("%f", &Q1);

				printf("Carga 2 en culombios (Q2): ");
				scanf_s("%f", &Q2);

				printf("Distancia entre las cargas en metros (D): ");
				scanf_s("%f", &D);


				E = (K*Q1) / D * D;

				printf("\n\nLa Energia Potencial correspondiente a las cargas de %0.f y de %0.f culombios, separada una distancia de %0.f metros es:\n   %2.f  Newton\n\n\n", Q1, Q2, D, E);

			break;
		case 'V':
		case 'v':
				printf("\nVamos a calcular el Potencial Electrico.\n\nPara ello indica los siguientes datos:\nCarga 1 en culombios (Q1): ");
				scanf_s("%f", &Q1);

				printf("Distancia entre la carga y el punto donde calculamos el potencial en metros (D): ");
				scanf_s("%f", &D);


				V = (K*Q1) / D;

				printf("\n\nEl Potencial Electrico correspondiente a una carga de %0.f culombios, separada una distancia de %0.f metros es:\n   %2.f  Newton\n\n\n", Q1, D, V);

			break;
		default:
			printf("Opcion no valida\n");
	}
	



	system("pause");
}







/*
#include<stdio.h>

void main() {
	int n1 = 4, n2 = 5;
	char r, R, S, s;
	char opcion;

	printf("MENU DE MI CALCULADORA\n");
	printf("Elige S si vas a sumar dos numeros\n");
	printf("Elige R si vas a sumar dos sumeros\n");//solo valdra con una sola variable

	scanf_s("%c", &opcion, 1);


	switch (opcion)
	{
	case 'S':
	case 's':
		printf("Suma de %d y %d = %d\n", n1, n2, n1 + n2);
		break;
	case 'r':
	case 'R':
		printf("Resta de %d y %d = %d\n", n1, n2, n1 - n2);
		break;
	default:
		printf("Opcion no valida\n");
	}


	system("pause");

}
*/