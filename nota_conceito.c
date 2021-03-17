#include <stdio.h>

int main()
{
    double nota;
    scanf("%lf", &nota);

// condições
    if (nota >=9.0 && nota <=10.0)
    printf("NOTA = %.1lf CONCEITO = A\n", nota);

    else if(nota >=7.5 && nota <=9.0)
    printf("NOTA = %.1lf CONCEITO = B\n", nota);

    else if(nota >=6 && nota <=7.5)
    printf("NOTA = %.1lf CONCEITO = C\n", nota);

    else if(nota >=0 && nota <=6.0)
    printf("NOTA = %.1lf CONCEITO = D\n", nota);    

}