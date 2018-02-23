#include <stdio.h>

void main() {

	int year;

	printf("Introduce un year.\n");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 ) {
		printf("El year %d es bisiesto.\n", year);
	}

	else if (year % 400 ==0) {
		printf("El year %d es bisiesto.\n", year);
	}

	else {
		printf("El year %d no es bisiesto.\n", year);
	}

	system("pause");

}