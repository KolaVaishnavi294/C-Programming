#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d%d",&a,&b,&x);
    int p=2*(a+b);
    int cost=p*x;
    printf("%d",cost);
}