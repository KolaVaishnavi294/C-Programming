#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,answ;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    answ=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.4lf",answ);
}