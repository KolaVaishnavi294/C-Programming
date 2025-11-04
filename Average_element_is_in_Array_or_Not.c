#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for( i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg=(sum/n);
    int c=0;
    for(i=0;i<n;i++){
        if(avg==arr[i]) c++;
        
    }
    if(c>0)
    printf("True");
    else
    printf("False");
}