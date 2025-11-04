#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<=10000){
        printf("%.2f",a+(0.8*a)+(0.2*a));
    }
    else if(a<=20000){
        printf("%.2f",a+(0.9*a)+(0.25*a));
    }
    else if(a>20000){
        printf("%.2f",a+(0.95*a)+(0.3*a));
    }
}