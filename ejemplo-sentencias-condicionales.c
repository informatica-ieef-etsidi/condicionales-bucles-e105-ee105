#include <stdio.h>

void main() {
	float nota;
	//char codigo; // 'A' es aprobado y 'S' suspenso

	// OPERADOR CONDICIONAL
	//nota = 5.1;
	//codigo = nota >= 5.0 ? 'A' : 'S';
	//printf("Nota academica: %c\n", codigo);
	printf("Introduce tu nota\n");
	scanf_s("%f", &nota);

	if (nota < 0 || nota > 10) {
		printf("Nota no valida\n");
	}
	else {
		if (nota >= 5.0) {
			if (nota < 7) {
				printf("Aprobado\n");
			}
			else if (nota < 8.5) {
				printf("Notable\n");
			}
			else {
				printf("Sobresaliente\n");
			}
		}
		else {
			printf("Suspenso\n");
		}
	}
	
}