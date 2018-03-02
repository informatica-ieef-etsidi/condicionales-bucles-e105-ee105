#include <stdio.h>

void main() {
	
	char letra;

	printf("Introduzca una letra:");
	scanf_s("%c", &letra);

	switch (letra) {
		
		case 'a':
			printf("Un animal que empieza por a es ardilla.\n");
			break;
		
		case 'b':
			printf("Un animal que empieza por b es buey.\n");
			break;
		
		case 'c':
			printf("Un animal que empieza por c es caballo.\n");
			break;
		
		case 'd':
			printf("Un animal que empieza por d es delfin.\n");
	
	}
			
	system("pause");
	
}