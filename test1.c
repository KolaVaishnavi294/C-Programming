#include<stdio.h>
int main()
{
	int i,t;
	scanf("%d",&t);
	int n,k;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	int max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<=min) min=arr[i];
		else max=arr[i];
	}
	printf("%d\n",min);
	printf("%d\n",max);
	int d=min+max;
	int c=0,c1=0;
	for(i=1;i<n;i++){
		if(arr[i]==min) {
		c++; 
		arr[i]=arr[i+1];}
		if(arr[i]==max){
		c1++; 
		arr[i]=d;
		}
		if(arr[i]!=min&&arr[i]!=max){
			arr[i-1]=arr[i];
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
