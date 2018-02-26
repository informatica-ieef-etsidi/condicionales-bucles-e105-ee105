//Desarrollador: Paula Arellano
#include<stdio.h>
void main() {
	float resistencia1, resistencia2, resistencia3, resistenciaE, condensador1, condensador2, condensador3, condensadorE;
	char opcion, colocacion;

	printf("Pulse R para calcular el valor de la RESISTENCIA equivalente\n");
	printf("Pulse C para calcular el valor del CONDENSADOR equivalente\n");
	scanf_s("%c", &opcion);



	//Pasar de minuscula a mayuscula
	if (opcion >= 'a'&& opcion <= 'z') { 
		opcion -= 32; 
	}

	switch (opcion) {
	case 'R':

		printf("Introduzca el valor en ohmnios de la resistencia 1:");
		scanf_s("%f", &resistencia1);

		printf("Introduzca el valor en ohmnios de la resistencia 2:");
		scanf_s("%f", &resistencia2);

		printf("Introduzca el valor en ohmnios de la resistencia 3:");
		scanf_s("%f", &resistencia3);

		getchar();
		printf("Pulse S si las resistencias estan colocadas en serie.\n");
		printf("Pulse P si las resistencias estan colocadas en paralelo.\n");
		scanf_s("%c", &colocacion);

			//Pasar de minuscula a mayuscula
			if (colocacion >= 'a'&& colocacion <= 'z') {
				colocacion -= 32;
			}

				switch (colocacion) {
					case 'S':
						printf("El valor equivalente es: %.2f\n", resistencia1 + resistencia2 + resistencia3);
						break;
					case 'P':
						printf("El valor equivalente es: %.2f\n", 1 / (1 / resistencia1 + 1 / resistencia2 + 1 / resistencia3));
				}
		break;
			
	case 'C':

		printf("Introduzca el valor en faradios del condensador 1:");
		scanf_s("%f", &condensador1);
		
		printf("Introduzca el valor en faradios del condensador 2:");
		scanf_s("%f", &condensador2);
		
		printf("Introduzca el valor en faradios del condensador 3:");
		scanf_s("%f", &condensador3);
		
		getchar();
		printf("Pulse S si los condensadores estan colocados en serie.\n");
		printf("Pulse P si los condensadores estan colocados en paralelo.\n");
		scanf_s("%c", &colocacion);

			//Pasar de minuscula a mayuscula
			if (colocacion >= 'a'&& colocacion <= 'z') {
				colocacion -= 32;
			}

				switch (colocacion) {
					case 'S':
						printf("El valor equivalente es: %.2f\n", 1 / (1 / condensador1 + 1 / condensador2 + 1 / condensador3));
						break;
					case 'P':
						printf("El valor equivalente es: %.2f\n", condensador1+condensador2+condensador3);
				}

	default:
		printf("El valor introducido no es valido.\n");
	}

	
	system("PAUSE");
}
