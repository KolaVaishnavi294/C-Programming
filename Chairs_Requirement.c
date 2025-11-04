#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        int a=x-y;
        printf("%d",a);
    }
    else{
        printf("0");}
}