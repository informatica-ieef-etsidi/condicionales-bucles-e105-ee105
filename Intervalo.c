#include <stdio.h>
int main() {
    float a, b, c;
    printf("Este es un programa que te verifica si c pertenece a (a,b)\n");
    
    printf("Introduce a\n");
    scanf("%f", &a);
    printf("Introduce b\n");
    scanf("%f", &b);
    if(a>=b){
        printf("b menor o igual que a, no se forma un intervalo \n");
    }
    else{
        printf("Introduce c\n");
        scanf("%f", &c);
        if((c>a) && (c<b)){
            printf("%f pertenece al intervalo (%f,%f)\n", c, a, b);
        }
        else{
            printf("%f no pertenece al intervalo (%f,%f)\n", c, a, b);
            }
    }
    return 0;
}
