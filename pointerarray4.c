#include<stdio.h>
void print_array(int a[],int n){
	int i,j;
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
}
void bubble_sort(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		} print_array(a,n);
	}
	
}
int main(){
	int n;scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);}
		printf("Before sorting: ");
		print_array(arr,n);
	//for(i=0;i<n;i++){
	//	printf("%d ",arr[i]);
	//}
	bubble_sort(arr,n);//function cal
	printf("\nAfter sorting: ") ;
	print_array(arr,n);
	//for(i=0;i<n;i++){
	//	printf("%d ",arr[i]);
	//}
}
