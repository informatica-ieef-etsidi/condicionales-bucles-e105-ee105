//Realice un programa para calcular el valor absoluto de un número introducido por el usuario.

#include <stdio.h>

int main(){
	float n, transformado;
	printf("Introduzca un numero: ");
	scanf("%f", &n);
	if(n<0){
		transformado=n*-1;
		printf("El valor absoluto de %.2f es %.2f", n, transformado);
	}
	else{
		transformado=n;
		printf("El valor absoluto de %.2f es %.2f", n, transformado);
	}
	
	
}
