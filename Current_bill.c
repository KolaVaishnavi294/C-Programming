#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<=199){
        printf("%.2f",(a*1.20)+100);
    }
    else if(a>=200&&a<400){
        printf("%.2f",(a* 1.50)+100);
    }
    else if(a>=400&&a<600){
        printf("%.2f",(a*1.80)+(a*0.15*1.80));
    }
    else if(a>=600){
        printf("%.2f",(a*2.00)+(a*0.15*2.00));
    }
}