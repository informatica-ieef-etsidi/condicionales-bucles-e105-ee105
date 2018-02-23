#include <stdio.h>

int main() {
	
	int n, m;
	
	printf("Introduzca dos numeros:\nIntroduzca el primer numero: ");
	scanf("%d", &n);
	printf("\nIntroduzca el segundo numero: ");
	scanf("%d", &m);
	
	if(n>m){
		printf("\n%d es mayor que %d", n, m);
	}
		
	else if(m>n){
		printf("\n%d es mayor que %d", m, n);
	}
	
	else if(m=n){
		printf("Ambos valores son iguales");
	}

}	
			

