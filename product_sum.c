#include<stdio.h>
int main(){
	int n,i,j,sum=0,sum1=0;
	scanf("%d",&n);
	int arr[n];
	int b[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		sum1+=b[i];
	}
	printf("%d",sum*sum1);
}
