#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("Average of %.0lf and %.0lf is: %.2lf",a,b,(a+b)/2);
}