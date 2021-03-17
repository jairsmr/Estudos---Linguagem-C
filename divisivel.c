#include <stdio.h>

int main()
{
int num,resto,resto2;

scanf ("%d", &num);

resto = num % 3 ;
resto2 = num % 5;
if(resto == 0 && resto2 == 0){

printf ("O NUMERO E DIVISIVEL\n");

}

else

{

printf ("O NUMERO NAO E DIVISIVEL\n");

}

return 0;

}
