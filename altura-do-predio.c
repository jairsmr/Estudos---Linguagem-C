//Programa destinado à medir altura de um prédio através da comparação entre a sombra da pessoa e sobra do prédio

#include <stdio.h>
int main(void){

    double sombraPredio, sombraPessoa, alturaPessoa, alturaPredio;

    scanf("%lf %lf %lf", &sombraPessoa, &sombraPredio, &alturaPessoa);

    alturaPredio = (sombraPessoa*alturaPessoa)/sombraPredio;

    printf("%.2lf", alturaPredio);

    return 0;

}