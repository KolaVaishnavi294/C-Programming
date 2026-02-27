#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
    for(int j=n+1;j>i;j--)
     printf("*");
     printf("\n");
    
    }
    
}
