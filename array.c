#include<stdio.h>
int recu(int *a,int i,int size){              
		//printf("%d  %d %d %d %d",a[i],a[i+1],a[i+2],a[i+3],a[i+4]);
	if(i==size){
		return 1;
	}
	return a[i] * recu(a,i+1,size);
}
int main(){
	int i=0;
	int arr[5]={10,20,30,40,50};
//	printf("%d\n", recu(arr,5));
	printf("%d", recu(arr,i,5));
}
