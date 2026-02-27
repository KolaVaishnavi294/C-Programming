#include<stdio.h>
int selection_sort(int *a,int n){
    int i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]) min=j;
        }
        int swap=a[min];
        a[min]=a[i];
        a[i]=swap;
    }
    int k;
    for(k=0;k<n;k++){
        printf("%d ",a[k]);}
        printf("\n");
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
}


