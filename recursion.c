#include<stdio.h>
int linear_search(int *a,int i,int size,int key){
	if(key==a[i]) {
	return i ;}
//	return -1;
	linear_search(a,i+1,size,key);
}
int main(){
	int n,i=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int b;
	scanf("%d",&b);
	int res=linear_search(arr,i,n,b);
	printf("%d",res);
}
