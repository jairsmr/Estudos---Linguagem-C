#include <stdio.h>

int main()
{
    double a,b,c,trapezio;

    scanf("%lf %lf %lf", &a, &b, &c);

// condições
    if((b-c)<a&&a<(b+c)){
        if((a-c)<b&&b<(a+c)){
            if((a-b)<c&&c<(a+b)){
                printf("Perimetro = %.1lf\n", a+b+c);
            }
        }
    } 
    else  
    {
        trapezio = ((a+b)*c)/2;
        printf("Area = %.1lf\n", trapezio);
    }
}