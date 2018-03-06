/*Realice un programa en el que el usuario pueda seleccionar la operación matemática a realizar con dos números
 que introduce por teclado (suma, resta, multiplicación, división, potencia)*/
 
#include <stdio.h>
#include <math.h>

int main(){
	
	int opcion;
	float a, b, operacion;
	
	printf("Programa de operaciones:\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Potencia\n\nElija el numero del indice del programa que desee:");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:{
			printf("Introduzca dos numeros para sumar:\n");
			scanf("%f \n%f", &a, &b);
			operacion=a+b;
			printf("La suma de %.4f mas %.4f es %.4f", a, b, operacion);
			break;
		}
		case 2:{
			printf("Introduzca dos numeros para restar el primero menos el segundo:\n");
			scanf("%f \n%f", &a, &b);
			operacion=a-b;
			printf("La resta de %.4f menos %.4f es %.4f", a, b, operacion);
			break;
		}
		case 3:{
			printf("Introduzca dos numeros para multiplicar:\n");
			scanf("%f \n%f", &a, &b);
			operacion=a*b;
			printf("La multiplicacion de %.4f por %.4f es %.4f", a, b, operacion);
			break;
		}
		case 4:{
			printf("Introduzca dos numeros para dividir el primero entre el segundo:\n");
			scanf("%f \n%f", &a, &b);
			operacion=a/b;
			if (b == 0){
				printf("No es posible dividir entre 0.\n");
			}
			else {
				printf("La division de %.4f entre %.4f es %.4f", a, b, operacion);
			}
			break;
		}
		case 5:{
			printf("Introduzca dos numeros para elevar el primer numero al segundo:\n");
			scanf("%f \n%f", &a, &b);
			operacion=pow(a,b);
			printf("%.4f elevado a %.4f es %.4f", a, b, operacion);
			break;
		}
		
	}
	
}
