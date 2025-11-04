#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    if(a%2!=0)
    printf("NO");
    else if(a==0&&b%2!=0)
    printf("NO");
    else
     printf("YES");
}