#include <stdio.h>

int main()
{
    double salario, reajuste;

    scanf("%lf", &salario);

// operações
    if(salario <=300.00)
    {
    reajuste = salario * 0.5;
    reajuste = reajuste +salario;
    printf("SALARIO COM REAJUSTE = %.2lf\n", reajuste);
    }
    else if(salario>300.00)
    {
    reajuste = salario *0.3;
    reajuste = reajuste +salario;
    printf("SALARIO COM REAJUSTE = %.2lf\n", reajuste);        
    }

 return 0;   
}