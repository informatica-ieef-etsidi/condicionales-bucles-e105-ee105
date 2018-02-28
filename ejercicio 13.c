/*Escribe un programa que pida los coeficientes de una ecuación de primer grado (a x + b = 0) y escriba la solución. 
Recuerda que una ecuación de primer grado puede no tener solución, tener una solución única, o que todos los números sean solución.*/

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
