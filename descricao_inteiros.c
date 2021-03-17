#include <stdio.h>

int main()
{
    int numero, dezenas, centenas, milhares;
    scanf("%d", &numero);

// condições

        int milhar = numero / 1000;
        numero = numero - milhar * 1000;

        int centena = numero/100;
        numero = numero - centena * 100;

        int dezena = numero/10;
        numero = numero - dezena *10;

        int unidade = numero /1;
        numero= numero - unidade*1;
//retorno unidades, dezenas, centenas e milhares
        dezenas = dezena *10;
        centenas = centena *100;
        milhares = milhar *1000;

    if(numero>0 && numero <=9999)
    {
        printf("(quarta ordem) %d = % unidade de milhar + %d centenas + % dezenas + % unidades = %d + %d + %d + %d", numero, milhar, centena, dezena, unidade, milhares, centenas, dezenas, unidade);
    }
}