#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) c++;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}