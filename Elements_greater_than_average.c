#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int avg=0,sum=0,dc=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=(sum/n);
    for(int i=0;i<n;i++){
        if(arr[i]>=avg) dc++;
    }
    printf("%d",dc);
}