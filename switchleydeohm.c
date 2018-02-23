#include <stdio.h>


void main()
{
	//Caso de un circuito muy simple con un generador real.
	//En el caso de que se tengan dos de los datos, para conocer el circuito al completo, se pide cual es el que falta, y se halla.
	char opcion;//T de tensión, R de resistencia, I de corriente.
	float resistencia, tension, intensidad;//pedimos datos por teclado

	printf("¿Que desea calcular? Introduzca R si resistencia, T si tension, o I si intensidad: \n");
	scanf_s("%c", &opcion);

	switch (opcion) {
	case'r':
	     case 'R'://En el caso de introducir una r/t/i minusculas, omitimos el break para que siga entrando en el case.

		      printf("Introduzca valor de Tension en voltios e intensidad en Amperios: \n");
		      scanf_s("%f %f", &tension, &intensidad);

		     resistencia = tension / intensidad;
		     printf("El valor de la resistencia con esa caida de tension %2.fV y ese valor de corriente %2.fA es: %2.fOhm. \n", tension, intensidad, resistencia);
		break;

	case'i':
	     case'I':

		      printf("Introduzca valor de Tension en voltios y valor de la resistencia en ohmios: \n");
		      scanf_s("%f %f", &tension, &resistencia);
		     if (resistencia < 0) {//no existen resistencias negativas, aqui daria un error; como aun no hemos visto bucles, no se repite la pregunta, para finalizar el ejercicio.
			      printf("ERROR. No existen resistencias negativas \n");
		      }
		    else {

			  intensidad = tension / resistencia;
			  printf("La corriente que circula por la resistencia %2.f Ohm con una caida de tension %2.fV es: %2.fA. \n ", resistencia, tension, intensidad);
		      }
		 break;

	case't':
	     case'T':

		       printf("Introduzca valor de resistencia en ohmios e intensidad en Amperios: \n");
		       scanf_s("%f %f", &resistencia, &intensidad);
		       
			  if (resistencia < 0) {
			     printf("ERROR. No existen resistencias negativas. \n");
		        }
		      else {
			     tension = resistencia * intensidad;
			     printf("La caida de tension por la resistencia %2.f Ohm cuya circulacion de corriente es %2.f A es: %2.f V. \n", resistencia, intensidad, tension);
		        }
		  break;
	default:
			 printf("Valor no valido \n");
	   }
	system("PAUSE");
}
