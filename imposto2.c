#include <stdio.h>

int main()
{
    int matricula, dependentes;
    double salario_minimo, salario_funcionario, taxa_imposto, imposto, imposto_bruto, resultado;

    scanf("%d %lf %d %lf %lf", &matricula, &salario_minimo, &dependentes, &salario_funcionario, &taxa_imposto);

              printf("MATRICULA = %d\n", matricula);
    if(salario_funcionario > salario_minimo*12)
    {
        imposto_bruto = (salario_funcionario *0.2);
        imposto = (imposto_bruto -300) *dependentes;
        resultado = imposto - ((salario_funcionario*taxa_imposto)/100);

        // retorno usuário


          printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
          printf("IMPOSTO LIQUIDO = %.2lf\n", imposto);
          printf("RESULTADO = %.2lf\n", resultado);
    }

//salário menor    
    else if(salario_funcionario <= salario_minimo*12 && salario_funcionario > salario_minimo*5)
    {
        imposto_bruto = (salario_funcionario *0.08);
        imposto = (imposto_bruto -300) *dependentes;    
        resultado = imposto - ((salario_funcionario*taxa_imposto)/100);

        // retorno usuário


          printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
          printf("IMPOSTO LIQUIDO = %.2lf\n", imposto);
          printf("RESULTADO = %.2lf\n", resultado);
    }
    else
    {
        imposto_bruto = (salario_funcionario *0.00);
        imposto = (imposto_bruto -300) *dependentes;
        resultado = imposto - ((salario_funcionario*taxa_imposto)/100);

        // retorno usuário


          printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
          printf("IMPOSTO LIQUIDO = %.2lf\n", imposto);
          printf("RESULTADO = %.2lf\n", resultado); 
    }

    if (resultado < 0)
    {
        printf("IMPOSTO A RECEBER\n");
    }
    else if(resultado==0)
    {
        printf("IMPOSTO QUITADO\n");        
    }
    else if(resultado>0)
    {
        printf("IMPOSTO A PAGAR\n");
    }

}