#include <stdio.h>

int main()
{
    double nota1, nota2, nota3, media;
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

//operações
    media = (nota1 + nota2 + nota3)/3;

    if(media >= 6.0)
    {
        printf("MEDIA = %.2lf\n", media);
        printf("APROVADO");
    }
    else
    {
        printf("MEDIA = %.2lf\n", media);
        printf("REPROVADO\n");
    }
return 0;
}