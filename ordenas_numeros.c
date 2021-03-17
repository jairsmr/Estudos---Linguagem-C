#include <stdio.h>

int main()
{
    double primeiro, segundo, terceiro;

    scanf("%lf", &primeiro);
    scanf("%lf", &segundo);
    scanf("%lf", &terceiro);

// condições
    if(primeiro>=segundo && primeiro <=terceiro)
    printf("%.2lf, %.2lf, %.2lf\n", segundo, primeiro, terceiro);
    else if(primeiro>=terceiro && primeiro <=segundo)
    printf("%.2lf, %.2lf, %.2lf\n", terceiro, primeiro, segundo);
    else if(segundo>=primeiro && segundo <=terceiro)
    printf("%.2lf, %.2lf, %.2lf\n", primeiro, segundo, terceiro);
    else if(segundo>=terceiro && segundo <=primeiro)
    printf("%.2lf, %.2lf, %.2lf\n", terceiro, segundo, primeiro);
    else if(terceiro>=segundo && terceiro <=primeiro)
    printf("%.2lf, %.2lf, %.2lf\n", segundo, terceiro, primeiro);
    else if(terceiro>=primeiro && terceiro <=segundo)
    printf("%.2lf, %.2lf, %.2lf\n", primeiro, terceiro, segundo);  

return 0;
}