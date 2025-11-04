#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n/365);
    printf("%d\n",(n%365)/7);
}