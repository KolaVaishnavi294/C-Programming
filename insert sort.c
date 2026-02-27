#include<stdio.h>
int insert(int *a,int n){
	int i;
	for(i=1;i<=n-1;i++){
		int key=a[i];
		int j=i-1;
		if(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	printf("%d",insert(arr,n));}
}
