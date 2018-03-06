//Ana Dueñas
//Ejercicio14 de bucles ya subido pero con todo el enunciado:
//Hecho con switch
//El programa se termina cuando se introduce un 0, mientras sigue pediendo números o dando error. 


#include <stdio.h>

void main() {

	int numero;
	printf("Porgrama que va a presentar los dias de la semana,\n si quiere terminar el programa introduzca 0\n");
 do{
	printf("Introduce un numero entero entre el 1 y el 7:\n");
	scanf_s("%d", &numero);
	
		switch (numero) {

			

		case 1:
			printf("El dia de la semana es lunes.\n");
			break;

		case 2:
			printf("El dia de la semana es martes.\n");
			break;
		case 3:
			printf("El dia de la semana es miercoles.\n");
			break;

		case 4:
			printf("El dia de la semana es jueves.\n");
			break;

		case 5:
			printf("El dia de la semana es viernes.\n");
			break;

		case 6:
			printf("El dia de la semana es sabado.\n");
			break;
		case 7:
			printf("El dia de la semana es domingo.\n");
			break;
		case 0:
			printf("Ha decidido terminar el programa\n");
			break;
		default:
			printf("Numero incorrecto.Debe de tratarse de un numero entre 1 y 7\n");
			break;
		}
 } while (numero != 0);

	system("pause");

}