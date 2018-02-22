//Nombre: Ana Dueñas




#include <stdio.h>
#include <stdlib.h>
void main()
{	 float    tiempo, aceleracion, espacio, velocidad, velocidadf, velocidadi; //SI
printf("Programa para calcular velocidades en mru y mrua \n");
	printf("Introduzca el espacio recorrido por el vehiculo en metros:\n");
	scanf_s("%f", &espacio);
	printf("Introduzca el tiempo tardado en recorrer el espacio en segundos:\n");
	scanf_s("%f", &tiempo);
	printf("Introduzca la aceleracion en SI en caso de ser un mrua, si no introducir '0':\n");
	scanf_s("%f", &aceleracion);
	
	velocidad = (espacio / tiempo);
	velocidadi = (espacio-aceleracion*tiempo*tiempo/2)/tiempo ;
	velocidadf = (velocidadi + aceleracion * tiempo);
	
	if (aceleracion < 0)
		printf(" Se trata de un mrua que reduce su velocidad\n y esta es:%fm/s\n",velocidadf);
		
	else if (aceleracion > 0)
		printf(" Se trata de un mrua que aumenta su velocidad\n y esta es:%fm/s\n", velocidadf);

		else printf(" Se trata de un mru\n Siendo la velocidad %f /%f, la velocidad es:%fm/s\n",espacio,tiempo, velocidad);//
	system("PAUSE");
}