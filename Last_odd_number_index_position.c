#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(i=n-1;i>0;i--){
        if(arr[i]%2!=0){
            max=arr[i];
            break;
        }
    }printf("%d",i);
}