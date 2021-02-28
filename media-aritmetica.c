// Esse programa realiza o cálculo da média aritimética com pesos.

#include<stdio.h>

int main(void){
    double a,b,c,d,resultado;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    resultado = (a+(b*2)+(c*3)+(d*4))/10;

    printf("%.2lf", resultado);

    return 0;
}