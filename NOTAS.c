#include <stdio.h>

void main() {

	float nota;
	char codigo1,codigo2;

	printf("Introduce tu nota: \n");
	scanf_s("%f", &nota);

	if (nota >= 5) {

		codigo1 = 'A';
		printf("%c APROBADO \n", codigo1);

	 if (nota >= 5 && nota<5.5) {

		 codigo1= 'S';
		 codigo2='F';
		printf("Tu nota es un %c%c SUFICIENTE. \n", codigo1,codigo2);
	}
	else if (nota>5.5&&nota<6.5) {

		codigo1 = 'B';
		printf("Tu nota es un %c BIEN. \n", codigo1);
	}
	else if (nota>6.5 && nota<8.5) {

		codigo1 = 'N';
		printf("Tu nota es un %c NOTABLE. \n", codigo1);
	}
	else if (nota>8.5 && nota<9.5) {

		codigo1 ='S';
		codigo2='B';
		printf("Tu nota es un %c%c SOBRESALIENTE. \n", codigo1,codigo2);
	}
	else if (nota >= 9.5) {

		codigo1 = 'M';
		codigo2='H';
		printf("Tu nota es una %c%c MENCION DE HONOR. \n", codigo1,codigo2);
	}

	}
	else {

		codigo1 = 'S';
		printf("%c SUSPENSO \n", codigo1);
	}

	system("PAUSE");

}