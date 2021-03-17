#include <stdio.h>

int main()
{
    int dias, ano;
    scanf("%d", &dias);

// condições
    if(dias > 1582 && dias%4==0 && dias%100!=0)
    printf("ANO BISSEXTO\n");

    else if(dias > 1582 && dias%100==0 && dias%400==0)
    printf("ANO BISSEXTO\n");

    else
    {
        printf("ANO NAO BISSEXTO\n");
    }
}