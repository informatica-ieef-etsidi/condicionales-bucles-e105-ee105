#include <stdio.h>
#include <math.h>

void main() {
	char resultado;
	float FuerzaMagn彋ica, IntensidadDeCorriente, LongitudConductor, CampoMagn彋ico, 聲guloConductorYCampoGrados, 聲guloConductorYCampoGradianes;

	printf("Indique la incognita a resolver: la fuerza magnetica que actua sobre un conductor rectilineo, su longitud, la intensidad de su corriente, la intensidad del campo magnetico o el angulo que forma con el conductor (f,l,i,m,a)\n");
	scanf_s("%c", &resultado);
if (resultado=='f' || resultado=='l' || resultado=='i' || resultado=='m' || resultado=='a') {
	if (resultado == 'f') {
		printf("Valor de l\n");
		scanf_s("%f", &LongitudConductor);
		printf("Valor de i\n");
		scanf_s("%f", &IntensidadDeCorriente);
		printf("Valor de m\n");
		scanf_s("%f", &CampoMagn彋ico);
		printf("Valor de a\n");
		scanf_s("%f", &聲guloConductorYCampoGrados);
		聲guloConductorYCampoGradianes = 聲guloConductorYCampoGrados * 3.14159265358979323846 / 180;
		printf("El valor de la fuerza magnetica es: %f\n", IntensidadDeCorriente*LongitudConductor*CampoMagn彋ico*sin(聲guloConductorYCampoGradianes));
	}
	else if (resultado == 'l') {
			printf("Valor de f\n");
			scanf_s("%f", &FuerzaMagn彋ica);
			printf("Valor de i\n");
			scanf_s("%f", &IntensidadDeCorriente);
			printf("Valor de m\n");
			scanf_s("%f", &CampoMagn彋ico);
			printf("Valor de a\n");
			scanf_s("%f", &聲guloConductorYCampoGrados);
			聲guloConductorYCampoGradianes = 聲guloConductorYCampoGrados * 3.14159265358979323846 / 180;
			printf("El valor de la longitud del conductor es: %f\n", FuerzaMagn彋ica/IntensidadDeCorriente/CampoMagn彋ico/sin(聲guloConductorYCampoGradianes));
	}
	else if (resultado == 'i') {
				printf("Valor de f\n");
				scanf_s("%f", &FuerzaMagn彋ica);
				printf("Valor de l\n");
				scanf_s("%f", &LongitudConductor);
				printf("Valor de m\n");
				scanf_s("%f", &CampoMagn彋ico);
				printf("Valor de a\n");
				scanf_s("%f", &聲guloConductorYCampoGrados);
				聲guloConductorYCampoGradianes = 聲guloConductorYCampoGrados * 3.14159265358979323846 / 180;
				printf("El valor de la intensidad de corriente es: %f\n", FuerzaMagn彋ica / LongitudConductor / CampoMagn彋ico / sin(聲guloConductorYCampoGradianes));
	}
	else if (resultado == 'm') {
					printf("Valor de f\n");
					scanf_s("%f", &FuerzaMagn彋ica);
					printf("Valor de l\n");
					scanf_s("%f", &LongitudConductor);
					printf("Valor de i\n");
					scanf_s("%f", &IntensidadDeCorriente);
					printf("Valor de a\n");
					scanf_s("%f", &聲guloConductorYCampoGrados);
					聲guloConductorYCampoGradianes = 聲guloConductorYCampoGrados * 3.14159265358979323846 / 180;
					printf("El valor de la intensidad del campo magnetico es: %f\n", FuerzaMagn彋ica / LongitudConductor / IntensidadDeCorriente / sin(聲guloConductorYCampoGradianes));
	}
	else if (resultado == 'a') {
						printf("Valor de f\n");
						scanf_s("%f", &FuerzaMagn彋ica);
						printf("Valor de l\n");
						scanf_s("%f", &LongitudConductor);
						printf("Valor de i\n");
						scanf_s("%f", &IntensidadDeCorriente);
						printf("Valor de m\n");
						scanf_s("%f", &CampoMagn彋ico);
						printf("El angulo que forman el conductor y el campo magnetico es: %f\n", asin(FuerzaMagn彋ica / LongitudConductor / IntensidadDeCorriente / CampoMagn彋ico)/ 3.14159265358979323846*180);
	}
}
	else {
		printf("La incognita es erronea (f, l, i, m, a).\n");
	}
	system("pause");
}

