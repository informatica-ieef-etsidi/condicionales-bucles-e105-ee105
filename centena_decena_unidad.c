//Paula Arellano
//El programa divide un numero entero en decenas, centenas o unidades con la funcion modulo
#include<stdio.h>;
void main() {
	int numero;
	int unidades, decenas, centenas;
	printf("Introduzca el numero: ");
	scanf_s("%d", &numero);
	
	centenas = numero / 100;
	printf("Centenas: %d \n", centenas);
	
	decenas = numero / 10; 
	decenas = decenas % 10;

	printf("Decenas: %d\n", (decenas));
	
	unidades = numero % 10; 
	printf("Unidades: %d\n",(unidades));

	system("PAUSE");
}