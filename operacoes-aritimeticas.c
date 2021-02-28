#include <stdio.h>

int main(void){

    int a, b;
    double c, produto_dobro, triplo, cubo;
    double metade, dobro;
    
    scanf("%d %d %lf", &a, &b, &c);
    metade = b/2;
    dobro = a*2;
    produto_dobro = dobro + metade;
    triplo = (a*3)+c;
    cubo = (c*c*c);

    printf("%.2lf\n", produto_dobro);
    printf("%.2lf\n", triplo);
    printf("%.2lf\n", cubo);

    return 0;
}