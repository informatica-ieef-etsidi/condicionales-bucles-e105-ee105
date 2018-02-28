/*Escribe un programa que pida los coeficientes de una ecuaci�n de primer grado (a x + b = 0) y escriba la soluci�n. 
Recuerda que una ecuaci�n de primer grado puede no tener soluci�n, tener una soluci�n �nica, o que todos los n�meros sean soluci�n.*/

#include <stdio.h>

int main(){
	float a, b;
	printf("PROGRAMA QUE RESUELVE ECUACIONES DE PRIMER GRADO|\n          del estilo ax+b=0                     |\n________________________________________________|\n");
	printf("Introduzca el valor b: ");
	scanf("%f", &b);
	printf("Introduzca el valor de a: ");
	scanf("%f", &a);
	
	if(a!=0){
		float solucion;
		b=b*-1;
		solucion=b/a;
		printf("La solucion es: %.3f", solucion);
	}
	else{
		
		if(b<0){
			printf("La solucion es: Infinito positivo");
		
	
		}
		else if(b>0){
			printf("La solucion es: Infinito negativo");
		}
		else if(b==0){
			printf("Es una Indeterminacion");
		}
	}
		
		
}
