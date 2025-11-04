#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0,max1=0;
    for(i=0;i<n;i++){
        if(i%2==0) max+=arr[i];
        else max1+=arr[i];
    }
    printf("%d",abs(max-max1));
}