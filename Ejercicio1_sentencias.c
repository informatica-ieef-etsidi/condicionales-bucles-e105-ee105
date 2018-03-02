#include <stdio.h>
//EJERCICIO 1. Realice un programa que solicite tres números enteros e imprima el mayor de ellos.

void main() {
	float x, y, z, mayor;

	printf("Introduce tres numeros distintos: \n");
	scanf("%f %f %f", &x, &y, &z);
	
	while (1) {//bucle infinito por si los numeros introducidos son iguales.
	
		if (x == y || y == z || x == z ) {
			printf("Vuelve a introducir tres numeros distintos: \n");
			scanf_s("%f %f %f", &x, &y, &z);
		}

		else {

			if (x > y&&x > z) {

				mayor = x;
				printf("El mayor numero entre %2.f, %2.f,%2.f es: %2.f . \n", x, y, z, mayor);
				break;//break para que salga del bucle infinito, si ya se cumple esta condicion

			}
			else if (y > x&&y > z) {

				mayor = y;
				printf("El mayor numero entre %2.f, %2.f,%2.f es: %2.f. \n", x, y, z, mayor);
				break;
			}

			else if (z > x&&z > y) {
				mayor = z;
				printf("El mayor numero entre %2.f, %2.f,%2.f es: %2.f. \n", x, y, z, mayor);
		    	break;
			}
		}//llave del else
		
	}//llave del while
	
	system("pause");
}
	
