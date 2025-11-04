#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,flag=0;
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(a==arr[i]) 
            flag++;
        //break;}
    }
    if(flag>0)
    printf("True");
    else
    printf("False");
}