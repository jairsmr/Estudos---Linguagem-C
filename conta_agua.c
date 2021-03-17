#include<stdio.h>

int main()
{
int contacliente;
double formula, consumoagua;
char tipoconsumidor;

scanf("%d %lf %c",&contacliente, &consumoagua, &tipoconsumidor);

if (tipoconsumidor =='R'){
formula = 5.00 + (0.05 * consumoagua);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2lf\n",formula);
}

/*if ((tipoconsumidor =='C') == 0 && consumoagua <= 80 ){
formula = 500.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2lf\n",formula);
}
*/
if (tipoconsumidor=='C' && consumoagua > 80 ){
formula = 500.00 + ((consumoagua - 80) * 0.25);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2lf\n",formula);
}
/*
if ((tipoconsumidor=='I') == 0 && consumoagua <= 100){
formula = 800.00;
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2lf",formula);
}
*/
if (tipoconsumidor=='I' && consumoagua > 100){
formula = 800.00 + ((consumoagua - 100 )* 0.04);
printf("CONTA = %d\n",contacliente);
printf("VALOR DA CONTA = %.2lf\n",formula);
}

return 0;

}