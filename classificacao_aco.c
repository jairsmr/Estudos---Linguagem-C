#include<stdio.h>

int main()
{
int conteudo, dureza, resistencia;

scanf("%d",&conteudo);
scanf("%d",&dureza);
scanf("%d",&resistencia);

if (conteudo < 7 && dureza > 50 && resistencia > 80000){
printf("ACO DE GRAU = 10\n");
}

else if (conteudo < 7 && dureza > 50 && resistencia <= 80000) {
printf("ACO DE GRAU = 9\n");
}

else if (conteudo < 7 && dureza != 50 && resistencia <= 80000){
printf("ACO DE GRAU = 8\n");
}

else{
printf("ACO DE GRAU = 7\n");
}

return 0;
}
//(conteudo >= 7 && dureza <= 50 && resistencia <= 80000)