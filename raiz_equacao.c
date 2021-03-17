#include <stdio.h>
#include<math.h>

int main()
{
    double a,b,c, delta, x1,x2;

    scanf("%lf %lf %lf", &a, &b, &c);

// operações
    delta = (b*b)- 4*(a*c);
    x1=((-b)-sqrt(delta))/(2*a);
    x2=((-b)+sqrt(delta))/(2*a);

// condições   

    if(delta==0)
    {
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
    else if(delta < 0)
    {
        printf("RAIZES IMAGINARIAS\n");   
    }
    else if(delta>0)
    {
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1); 
        printf("X2 = %.2lf\n", x2);               
    }
return 0;    
}