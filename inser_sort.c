#include<stdio.h>
int bubble_sort(int *a,int n){
	int i,j,k,swap;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-2;j++){
			if(a[j]>a[j+1]){
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}	
	}
	for(k=0;k<n;k++){
		printf("%d",a[k]);
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
}
