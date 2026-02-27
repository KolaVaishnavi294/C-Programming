#include<stdio.h>
int recu(int *a,int i,int size){              
	if(i==size){
		return 0;
	}
	return a[i] + recu(a,i+1,size);
}
int main(){
	int i=0;
	int arr[5]={10,20,30,40,50};
	printf("%d", recu(arr,0,5));
}
