//Desarrollado por Javier Redondo Hernando
//Esta aplicacion crea una ilusion de movimiento.


#include <stdio.h>
#include <windows.h>

void main(){
	int entendido, i;
	printf("Para disfrutar del juego al maximo se recomienda utilizar la pantalla completa\n");
	printf("Pulse '1' si lo ha entendido: ");
	scanf_s("%d", &entendido);
	if (entendido == 1) {
		system("cls");
		for (i = 0; i < 150; i++)
		{
			int j;
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("$$$donate to us$$$\n");
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			printf("  ...loading...");
			Sleep(50);
			system("cls");
		}
	}
	else {
		printf("Venga no me tomes el pelo\n");
	}
	system("pause");
}