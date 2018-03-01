/*Introduces un numero y te da las tablas de multiplicar de ese numero hasta el otro que elijas
Desarrollador: Miguel Jiménez Sarria*/



#include <stdio.h>



void main() {

	int i;
	int resultado;
	int n;
	int final;
	printf("De que numero quiere la tabla de multiplicar ?\n");

	scanf_s("%d", &n);

	printf("Hasta que numero desea multiplicar ?\n");

	scanf_s("%d", &final);



	printf("La tabla de multiplicar del %d es\n", n);

	for (i = 0; i <= final; i++) {

		resultado = n*i;

		printf("%d x %d = %d\n", n,i, resultado);

	}

	


	system("PAUSE");

}
