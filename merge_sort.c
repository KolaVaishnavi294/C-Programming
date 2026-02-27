#include<stdio.h>
void print_array(int *a,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
//sub-routine -->merging process
void merge(int *a,int l,int m,int h){
	int i=l;
	int j=m+1;
	int k=0;
	int result[h-l+1];
	while(i<=m&&j<=h){
		if(a[i]<=a[j]){
			result[k]=a[i];
			i++;
			k++;}
			else{
				result[k]=a[j];
				j++;
				k++;}	
	}
	while(i<=m){
	 result[k]=a[i];
		i++; k++;}
	while(j<=h){
		result[k]=a[j];
		j++;
		k++;}
    k=0;
    for(i=l;i<=h;i++){
    	a[i]=result[k];
		k++;}
}
//main function of merge sort
void merge_sort(int *a,int l,int h){
	if(l<h){
		int m = (l+h)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,m,h);
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);	}
		printf("Before merging : ");
		print_array(arr,n);
		merge_sort(arr,0,n-1);
		printf("After sorting : ");
	    print_array(arr,n);
}
