#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(((n-k)*y+(k*x))==((n-k)*x+(k*x))){
        printf("%d",((n-k)*x+(k*x)));}
    else if(((n-k)*x+(k*x))<((n-k)*y+(k*x))){
        printf("%d",((n-k)*x+(k*x)));}
    else if(((n-k)*x+(k*x))>((n-k)*y+(k*x))){
        printf("%d",((n-k)*y+(k*x)));}
}