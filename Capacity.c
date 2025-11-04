#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d %d %d",&t,&s,&b);
    int a=2*t*s*b*512;
    printf("%d KB",a/1024);
}