#include<stdio.h>
#include<math.h>
int main()
{
    int p,t;
    double r;
    scanf("%d %lf %d",&p,&r,&t);
    double result=p*pow((1+r/100),t)-p;
    printf("%.2lf",result);
}