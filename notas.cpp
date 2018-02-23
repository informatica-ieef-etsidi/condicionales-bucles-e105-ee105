#include <stdio.h>

int main(){
	int nota;
	printf("Ponga su nota: ");
	scanf("%d", &nota);
	
	if(nota<0){
		printf("Estas clases no son de Pedro el del laboratorio");
	}
	else if(nota<=1 && nota>=0){
		printf("Tooooonto");
	}
	else if(nota<5 && nota>1){
		printf("Suspenso");
	}
	else if(nota>=5 && nota<7){
		printf("Aprobado");
	}
	else if(nota>=7 && nota<8.5){
		printf("Notable");
	}
	else if(nota>=8.5 && nota<10){
		printf("Sobresaliente");
	}
	else if(nota=10){
		printf("Matricula de Honor");
	}
	else if(nota>10){
		printf("EL BICHOOOOO");
	}

}
