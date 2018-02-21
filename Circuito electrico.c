//Alberto Hernandez Garcia
//Programa para calcular la resistencia equivalente de un circuito en paralelo o de un circuito serie con 3 resistencias
//Y calcula la intensidad que pasa por cada una de ellas, su caida de tension y el balance de potencias
#include<stdio.h>

void main(){
	int R1, R2, R3;
	float Rt, i, i1, i2, i3;
	float u, u1, u2, u3;
	float P, P1, P2, P3 , Pt;
	char configuracion;
	
	printf("¿Cual es la configuracion de las resistencias?\nIntroduzca s para serie o p para paralelo\n");
	scanf("%c", &configuracion);
	
	printf("¿Cual es el voltaje de la fuente de tension?\n");
	scanf("%f", &u);
	
	if(configuracion == 'p' || configuracion == 'P'){
	
		printf("¿Cual es el valor de R1?\n");
		scanf("%d", &R1);
		printf("¿Cual es el valor de R2?\n");
		scanf("%d", &R2);
		printf("¿Cual es el valor de R3?\n");
		scanf("%d", &R3);
	
		Rt = (float)(R1*R2*R3)/(R1*R2+R1*R3+R2*R3);
		printf("El valor de Rt = %f\n", Rt);
		
		i = u / Rt;
		i1 = u / R1;
		i2 = u / R2;
		i3 = u / R3;
		
		printf("I1(R1) = %f A , I2(R2) = %f A , I3(R3) = %f A , It = %f A \n", i1, i2, i3, i);
		printf("La caida de tension es la misma para las 3 resistencias, que es %f V\n", u);
		
		P = u * i;
		P1 = u * i1;
		P2 = u * i2;
		P3 = u * i3;
		Pt = P1 + P2 + P3;
		
		printf("\nEl balance de potencia es: \n");
		printf("\n Activos                  Pasivos\n\n");
		printf("P = %f W\n                           P1 = %f W\n", P, P1);
		printf("                           P2 = %f W\n", P2);
		printf("                           P3 = %f W\n", P3);
		printf("______________________________________\n");
		printf("P = %f W\n                           Pt = %f W\n", P, Pt);			
	}
	else{
		if(configuracion == 's' || configuracion == 'S'){

			printf("¿Cual es el valor de R1?\n");
			scanf("%d", &R1);
			printf("¿Cual es el valor de R2?\n");
			scanf("%d", &R2);
			printf("¿Cual es el valor de R3?\n");
			scanf("%d", &R3);
			
			Rt = R1 + R2 + R3;
			printf("El valor de Rt = %f\n", Rt);
			
			i = u / Rt;
			u1 = i * R1;
			u2 = i * R2;
			u3 = i * R3;
		
			printf("U1(R1) = %f V , U2(R2) = %f V , U3(R3) = %f V , Ut = %f V \n", u1, u2, u3, u);
			printf("La intensidad es la misma para las 3 resistencias, que es %f A\n", i);
		
			P = u * i;
			P1 = u1 * i;
			P2 = u2 * i;
			P3 = u3 * i;
			Pt = P1 + P2 + P3;
		
			printf("\nEl balance de potencia es: \n");
			printf("\n Activos                  Pasivos\n\n");
			printf("P = %f W\n                           P1 = %f W\n", P, P1);
			printf("                           P2 = %f W\n", P2);
			printf("                           P3 = %f W\n", P3);
			printf("______________________________________\n");
			printf("P = %f W\n                           Pt = %f W\n", P, Pt);			
		}
		else{
			printf("El valor introducido es incorrecto\n");
		}
	}
	
}
