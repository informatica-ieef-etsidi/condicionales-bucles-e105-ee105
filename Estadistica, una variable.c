#include <stdio.h>
#include <math.h>

void main() {
	float N, M, x1, n1, x2, n2, x3, n3, x4, n4, x5, n5, datos, dt;
	int s;
	
	printf("Como de grande es el conjunto de datos? (solo acepta hasta 5)\n");
	scanf_s("%f", &datos);
	if (datos > 5 || datos <= 0) {
		printf("SOLO ACEPTA ENTRE 1 Y 5\n");
	}
	else {
		printf("Que quieres calcular?\n");
		printf("Para la frecuencia relativa pulse 1\n");
		printf("Para la media aritmetica pulse 2\n");
		printf("Para la varianza pulse 3\n");
		printf("Para la desviacion tipica pulse 4\n");
		scanf_s("%d", &s);

		switch (s) {

		case 1:
			printf("Introduce los datos separados por comas y en orden\n");
			printf("Ejemplo: 3,8,12,21,30. En el caso de que sean menos de 5 datos introduce 0\n");
			scanf_s("%f, %f, %f, %f, %f", &x1, &x2, &x3, &x4, &x5);
			printf("Ahora la frecuencia absoluta de cada uno del mismo modo y en el mismo orden\n");
			scanf_s("%f, %f, %f, %f, %f", &n1, &n2, &n3, &n4, &n5);
			N = n1 + n2 + n3 + n4 + n5;
			printf("La frecuencia relativa de %f es %.5f, de %f es %.5f, de %f es %.5f, de %f es %.5f y de %f es %.5f", x1, n1 / N, x2, n2 / N, x3, n3 / N, x4, n4 / N, x5, n5 / N);
			break;
		case 2:
			printf("Introduce los datos separados por comas y en orden\n");
			printf("Ejemplo: 3,8,12,21,30. En el caso de que sean menos de 5 datos introduce 0\n");
			scanf_s("%f, %f, %f, %f, %f", &x1, &x2, &x3, &x4, &x5);
			printf("Ahora la frecuencia absoluta de cada uno del mismo modo y en el mismo orden\n");
			scanf_s("%f, %f, %f, %f, %f", &n1, &n2, &n3, &n4, &n5);
			N = n1 + n2 + n3 + n4 + n5;
			printf("La media aritmetica es %.5f\n", (x1 * n1 + x2 * n2 + x3 * n3 + x4 * n4 + x5 * n5) / N);
			break;
		case 3:
			printf("Introduce los datos separados por comas y en orden\n");
			printf("Ejemplo: 3,8,12,21,30. En el caso de que sean menos de 5 datos introduce 0\n");
			scanf_s("%f, %f, %f, %f, %f", &x1, &x2, &x3, &x4, &x5);
			printf("Ahora la frecuencia absoluta de cada uno del mismo modo y en el mismo orden\n");
			scanf_s("%f, %f, %f, %f, %f", &n1, &n2, &n3, &n4, &n5);
			N = n1 + n2 + n3 + n4 + n5;
			M = (x1 * n1 + x2 * n2 + x3 * n3 + x4 * n4 + x5 * n5) / N;
			printf("La varianza es %.5f\n", ((x1 - M)*(x1 - M)*n1 + (x2 - M)*(x2 - M)*n2 + (x3 - M)*(x3 - M)*n3 + (x4 - M)*(x4 - M)*n4 + (x5 - M)*(x5 - M)*n5) / N);
			break;
		case 4:
			printf("Introduce los datos separados por comas y en orden\n");
			printf("Ejemplo: 3,8,12,21,30. En el caso de que sean menos de 5 datos introduce 0\n");
			scanf_s("%f, %f, %f, %f, %f", &x1, &x2, &x3, &x4, &x5);
			printf("Ahora la frecuencia absoluta de cada uno del mismo modo y en el mismo orden\n");
			scanf_s("%f, %f, %f, %f, %f", &n1, &n2, &n3, &n4, &n5);
			N = n1 + n2 + n3 + n4 + n5;
			M = (x1 * n1 + x2 * n2 + x3 * n3 + x4 * n4 + x5 * n5) / N;
			dt = sqrt(((x1 - M)*(x1 - M)*n1 + (x2 - M)*(x2 - M)*n2 + (x3 - M)*(x3 - M)*n3 + (x4 - M)*(x4 - M)*n4 + (x5 - M)*(x5 - M)*n5) / N);
			printf("La desviacion tipica es %.5f\n", dt);
			break;
		default:
			printf("Veo que no te interesa el programa, gracias por el intento\n");
		}
	}
	system("pause");

}