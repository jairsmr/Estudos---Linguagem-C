#include<stdio.h>

int main()
{
int numerodependentes, matricula;
double salariominimo, salariofunc, taxaimposto, taxaimpostosalario, impostoderenda, impostobruto, impostoliquido, salariomaximo12, salariomaximo5, calcdependentes;

scanf("%d %lf %d %lf %lf",&matricula, &salariominimo, &numerodependentes, &salariofunc, &taxaimposto);

printf("MATRICULA = %d\n", matricula);

salariomaximo12 = salariominimo * 12;
salariomaximo5 = salariominimo * 5;
calcdependentes = numerodependentes * 300.00;
taxaimpostosalario = (taxaimposto / 100) * salariofunc;


if ( salariofunc > salariomaximo12){
impostobruto = 0.2 * salariofunc;
impostobruto = 0.04 * impostobruto + impostobruto;
}

else if (salariofunc > salariomaximo5){
impostobruto = 0.08 * salariofunc;
impostobruto = 0.04 * impostobruto + impostobruto;
}

else if (salariofunc <= salariomaximo5){
impostobruto = 0;
}

impostoliquido = impostobruto - calcdependentes ;
impostoderenda = impostoliquido - taxaimpostosalario;

if (impostoderenda == 0){
printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
printf("RESULTADO = %.2f\n",impostoderenda);
printf("IMPOSTO QUITADO\n");
}

else if (impostoderenda < 0){
printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
printf("RESULTADO = %.2f\n",impostoderenda);
printf("IMPOSTO A RECEBER\n");
}

else if (impostoderenda > 0){
printf("IMPOSTO BRUTO = %.2f\n",impostobruto);
printf("IMPOSTO LIQUIDO = %.2f\n",impostoliquido);
printf("RESULTADO = %.2f\n",impostoderenda);
printf("IMPOSTO A PAGAR\n");
}

return 0;
}