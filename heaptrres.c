#include<stdio.h>
void MaxHeap(int *arr,int n){
	int i;
	for(i=1;i<=n;i++){
		if(arr[i]<arr[2*i]){
			int swap=arr[i];
			arr[i]=arr[2*i];
			arr[2*i]=swap;
		}
		if(arr[i]<arr[2*i+1]){
			int swap=arr[i];
			arr[i]=arr[2*i+1];
			arr[2*i+1]=swap;
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	MaxHeap(arr,n);
	for(i=1;i<=n;i++){
		printf("%d ",arr[i]);
	}
}
