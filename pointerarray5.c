#include<stdio.h>
void square(int a[],int n){ 
        int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]*a[i]);
	}
}
	int main(){
		int arr[5]={10,20,30,40,50};
		square(arr,5);
	}

