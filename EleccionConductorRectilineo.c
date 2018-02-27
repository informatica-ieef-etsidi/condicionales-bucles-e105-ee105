/* Desarrollador: Sergio Corredor
Este programa calcula la fuerza magn�tica que act�a sobre un conductor rectil�neo, la intensidad de la corriente, la longitud del conductor, el campo magn�tico 
o el �ngulo que forman el conductor y el campo magn�tico (a elecci�n del usuario), introduciendo por teclado el resto de variables*/
#include <stdio.h>
#include <math.h>

void main() {
	char resultado;
	float FuerzaMagn�tica, IntensidadDeCorriente, LongitudConductor, CampoMagn�tico, �nguloConductorYCampoGrados, �nguloConductorYCampoGradianes;

	printf("Indique la incognita a resolver: la fuerza magnetica que actua sobre un conductor rectilineo, su longitud, la intensidad de su corriente, la intensidad del campo magnetico o el angulo que forma con el conductor (f,l,i,m,a)\n");
	scanf_s("%c", &resultado);
if (resultado=='f' || resultado=='l' || resultado=='i' || resultado=='m' || resultado=='a') {
	if (resultado == 'f') {
		printf("Valor de l\n");
		scanf_s("%f", &LongitudConductor);
		printf("Valor de i\n");
		scanf_s("%f", &IntensidadDeCorriente);
		printf("Valor de m\n");
		scanf_s("%f", &CampoMagn�tico);
		printf("Valor de a\n");
		scanf_s("%f", &�nguloConductorYCampoGrados);
		�nguloConductorYCampoGradianes = �nguloConductorYCampoGrados * 3.14159265358979323846 / 180;
		printf("El valor de la fuerza magnetica es: %f\n", IntensidadDeCorriente*LongitudConductor*CampoMagn�tico*sin(�nguloConductorYCampoGradianes));
	}
	else if (resultado == 'l') {
			printf("Valor de f\n");
			scanf_s("%f", &FuerzaMagn�tica);
			printf("Valor de i\n");
			scanf_s("%f", &IntensidadDeCorriente);
			printf("Valor de m\n");
			scanf_s("%f", &CampoMagn�tico);
			printf("Valor de a\n");
			scanf_s("%f", &�nguloConductorYCampoGrados);
			�nguloConductorYCampoGradianes = �nguloConductorYCampoGrados * 3.14159265358979323846 / 180;
			printf("El valor de la longitud del conductor es: %f\n", FuerzaMagn�tica/IntensidadDeCorriente/CampoMagn�tico/sin(�nguloConductorYCampoGradianes));
	}
	else if (resultado == 'i') {
				printf("Valor de f\n");
				scanf_s("%f", &FuerzaMagn�tica);
				printf("Valor de l\n");
				scanf_s("%f", &LongitudConductor);
				printf("Valor de m\n");
				scanf_s("%f", &CampoMagn�tico);
				printf("Valor de a\n");
				scanf_s("%f", &�nguloConductorYCampoGrados);
				�nguloConductorYCampoGradianes = �nguloConductorYCampoGrados * 3.14159265358979323846 / 180;
				printf("El valor de la intensidad de corriente es: %f\n", FuerzaMagn�tica / LongitudConductor / CampoMagn�tico / sin(�nguloConductorYCampoGradianes));
	}
	else if (resultado == 'm') {
					printf("Valor de f\n");
					scanf_s("%f", &FuerzaMagn�tica);
					printf("Valor de l\n");
					scanf_s("%f", &LongitudConductor);
					printf("Valor de i\n");
					scanf_s("%f", &IntensidadDeCorriente);
					printf("Valor de a\n");
					scanf_s("%f", &�nguloConductorYCampoGrados);
					�nguloConductorYCampoGradianes = �nguloConductorYCampoGrados * 3.14159265358979323846 / 180;
					printf("El valor de la intensidad del campo magnetico es: %f\n", FuerzaMagn�tica / LongitudConductor / IntensidadDeCorriente / sin(�nguloConductorYCampoGradianes));
	}
	else if (resultado == 'a') {
						printf("Valor de f\n");
						scanf_s("%f", &FuerzaMagn�tica);
						printf("Valor de l\n");
						scanf_s("%f", &LongitudConductor);
						printf("Valor de i\n");
						scanf_s("%f", &IntensidadDeCorriente);
						printf("Valor de m\n");
						scanf_s("%f", &CampoMagn�tico);
						printf("El angulo que forman el conductor y el campo magnetico es: %f\n", asin(FuerzaMagn�tica / LongitudConductor / IntensidadDeCorriente / CampoMagn�tico)/ 3.14159265358979323846*180);
	}
}
	else {
		printf("La incognita es erronea (f, l, i, m, a).\n");
	}
	system("pause");
}

