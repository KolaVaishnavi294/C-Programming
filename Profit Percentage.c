#include<stdio.h>
int main()
{
    double cp,sp,profit,answ;
    scanf("%lf %lf",&cp,&sp);
    profit=sp-cp;
    answ=(profit/cp)*100;
    printf("%.2lf",answ);
}