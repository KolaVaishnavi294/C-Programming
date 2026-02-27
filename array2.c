#include<stdio.h>
#include<math.h>
int main(){
	int n,i ;
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++){
		scanf("%d",&arr[i]);
		printf("%d ",arr[i]*arr[i]);
	}
}
