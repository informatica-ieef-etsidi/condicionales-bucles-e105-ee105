/*Se pide realizar un programa que calcule el máximo y el mínimo de dos datos tecleados por el usuario y que deben estar en el rango [0.0 100.0]. 
Si alguno de los datos introducidos estuviera fuera del rango se imprimirá un aviso de ERROR.*/

#include <stdio.h>

int main(){
	
	float n, m;
	printf("Introduzca dos valores entre 0.0 y 100.0:\n");
	scanf("%f %f", &n, &m);
	if(n>=0.0 && n<=100.0 && m>=0.0 && m<=100.0){
		if(n>m){
			printf("%.1f es un maximo y %.1f es un minimo", n, m);
		}
		else if(m>n){
			printf("%.1f es un maximo y %.1f es un minimo", m, n);
		}
		else if(m=n){
			printf("%.1f es igual a %.1f y por tanto no hay ni maximos ni minimos", m, n);
		}
	}
	else{
		printf("ERROR");
	}
	
}
