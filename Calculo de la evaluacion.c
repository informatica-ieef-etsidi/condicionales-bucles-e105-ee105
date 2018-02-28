//Programa para calcular la nota de la evaluacion Miguel Jiménez Sarria


#include <stdio.h>


void main() {
	
	
	float nota;
	char codigo;

	printf("Introduce tu nota\n");

	scanf_s("%f", &nota);



	if ((nota < 5) && (nota>=0)) {


		codigo = 'S';

		printf("Has suspendido, %c\n", codigo);

		system("PAUSE");

	}
	
	
	
	
	
	
	
	
	
	
	if ((nota >= 5)&&(nota<7)) {


		codigo = 'A';

		printf("Has arpobado, %c\n", codigo);

		system("PAUSE");

	}

	if ((nota >= 7) && (nota<8.5)) {


		codigo = 'N';

		printf("Tienes un notable, %c\n", codigo);

		system("PAUSE");

	}

	if ((nota >= 8.5) && (nota<9.5)) {


		codigo = 'S';

		printf("Tienes un sobresaliente, %c\n", codigo);

		system("PAUSE");

	}

	if ((nota >= 9.5) && (nota<=10)) {


		codigo = 'M';

		printf("Tienes una matricula, %c\n", codigo);

		system("PAUSE");

	}


	if (nota >10) {


		codigo = 'E';

		printf("Hay un error en tu nota, no puede ser mayor que 10, %c\n", codigo);



		system("PAUSE");

	}



	if (nota < 0) {


		codigo = 'E';

		printf("Hay un error en tu nota, no puede ser negativa, %c\n", codigo);

		system("PAUSE");

	}

}
