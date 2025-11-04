#include<stdio.h>
int main()
{
    double cp,sp,loss,answ;
    scanf("%lf %lf",&cp,&sp);
    loss=cp-sp;
    answ=(loss/cp)*100;
    printf("%0.2lf",answ);
}