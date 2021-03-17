#include<stdio.h>

int main()
{   
    int i;
    double primeiro,segundo,terceiro;

    scanf("%d", &i);
    scanf("%lf", &primeiro);
    scanf("%lf", &segundo);
    scanf("%lf", &terceiro);
    if(i==1){

    if(primeiro>=segundo && primeiro <=terceiro)
    printf("%.2lf %.2lf %.2lf\n", segundo, primeiro, terceiro);
    else if(primeiro>=terceiro && primeiro <=segundo)
    printf("%.2lf %.2lf %.2lf\n", terceiro, primeiro, segundo);
    else if(segundo>=primeiro && segundo <=terceiro)
    printf("%.2lf %.2lf %.2lf\n", primeiro, segundo, terceiro);
    else if(segundo>=terceiro && segundo <=primeiro)
    printf("%.2lf %.2lf %.2lf\n", terceiro, segundo, primeiro);
    else if(terceiro>=segundo && terceiro <=primeiro)
    printf("%.2lf %.2lf %.2lf\n", segundo, terceiro, primeiro);
    else if(terceiro>=primeiro && terceiro <=segundo)
    printf("%.2lf %.2lf %.2lf\n", primeiro, terceiro, segundo); 

}
    else if(i==2){
 // inverter sinais       
    if(primeiro>=segundo && primeiro <=terceiro)
    printf("%.2lf %.2lf %.2lf\n", terceiro, primeiro, segundo); 
    else if(primeiro>=terceiro && primeiro <=segundo)
    printf("%.2lf %.2lf %.2lf\n", segundo, primeiro, terceiro); 
    else if(segundo>=primeiro && segundo <=terceiro)
    printf("%.2lf %.2lf %.2lf\n", terceiro, segundo, primeiro); 
    else if(segundo>=terceiro && segundo <=primeiro)
    printf("%.2lf %.2lf %.2lf\n", primeiro, segundo, terceiro);  
    else if(terceiro>=segundo && terceiro <=primeiro)
    printf("%.2lf %.2lf %.2lf\n", primeiro, terceiro, segundo); 
    else if(terceiro>=primeiro && terceiro <=segundo)
    printf("%.2lf %.2lf %.2lf\n", segundo, terceiro, primeiro); 
    
    }

    else if(i==3){
//  maior no meio      
    if(primeiro>=segundo && primeiro <=terceiro)
    printf("%.2lf %.2lf %.2lf\n", primeiro, terceiro,segundo);
    else if(primeiro>=terceiro && primeiro <=segundo)
    printf("%.2lf %.2lf %.2lf\n", primeiro, segundo,  terceiro);
    else if(segundo>=primeiro && segundo <=terceiro)
    printf("%.2lf %.2lf %.2lf\n", segundo, terceiro,  primeiro);
    else if(segundo>=terceiro && segundo <=primeiro)
    printf("%.2lf %.2lf %.2lf\n", segundo, primeiro,  terceiro);
    else if(terceiro>=segundo && terceiro <=primeiro)
    printf("%.2lf %.2lf %.2lf\n", terceiro, primeiro,  segundo);
    else if(terceiro>=primeiro && terceiro <=segundo)
    printf("%.2lf %.2lf %.2lf\n",terceiro, segundo,  primeiro);
    }

}