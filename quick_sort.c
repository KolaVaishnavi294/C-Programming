#include<stdio.h>
int partition(int *a,int l,int h){
	int pivot=a[l];
	int result[h-l+1];
	int i,k;
	for(i=l+1;i<=h;i++){
		if(a[i]<=pivot){
		result[k]=a[i];
		k++;}
	}
	int output_index=l+k;
	result[k]=a[i];
	k++;
	for(i=l+1;i<=h;i++){
		if(a[i]>pivot){
		result[k]=a[i];
		k++;}
	}
	k=0;for(i=l;i<=h;i++){
		a[i]=result[k];
		k++;
	}
	return output_index;
}
void quick_sort(int *a,int l,int h){
	if(l<=h){
		int p=partition(a,l,h);
		quick_sort(a,l,p-1);
		quick_sort(a,p+1,h);
	}
}
	
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
}
