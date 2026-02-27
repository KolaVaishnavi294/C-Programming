#include<stdio.h>
void selection_sort(int *a,int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
		  if(a[j]<a[min]) min=j;
	}
		  	int t=a[min];
		  	a[min]=a[i];
		  	a[i]=t;
		  
		}
			}
int main()
{    int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);}
	selection_sort(arr,n);
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);}
	}
