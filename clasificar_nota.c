#include <stdio.h>


int main()
{
	float nota;

	printf("Introduce tu nota \n");
	scanf_s("%f", &nota);



	if (nota < 5)
		if (nota > 2.5)
			printf("Estas suspenso, haber estudiao' \n");
		else if (nota >= 0 && nota <= 2.5)
			printf("Estas suspenso, la intencion es lo que cuenta \n ");
		else
			printf("Esa nota no es valida \n");

	else
		if (nota == 5)
			printf("Aprobado por los pelos \n");
		else if (nota > 5 && nota < 7) 
			printf("Has aprobado con un suficiente \n");

		else if (nota >= 7 && nota < 8.5)
			printf("Estas aprobado con un notable \n");

		else if (nota >= 8.5 && nota < 9)
			printf("Estas aprobado con un sobresaliente \n");

		else if (nota >= 9 && nota <= 10)
			printf("Enhorabuena, tienes una matricula \n");
		
		else 
			printf("Esa nota no es valida \n");
		
		




	system("pause");

}