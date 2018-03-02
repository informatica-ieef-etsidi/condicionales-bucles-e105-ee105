#include <stdio.h>

void main() {
int fin, divisor, contador=0, prime = 0;

printf("Introduce el primer numero a partir del cual quieres calcular los primos.\n");
scanf_s("%d", &contador);
getchar();
printf("Introduce numero hasta el que quieres calcular los primos.\n");
scanf_s("%d", &fin);

while (contador <= fin) {
divisor = contador;
while (divisor > 1){
if (contador % divisor == 0)
prime = prime + 1;
divisor--;
}
if (prime <= 1) {
printf("%d es un numero primo.\n", contador);
}
contador = contador++;
prime = 0;
}



system("PAUSE");
return 0;
}