#include<stdio.h>
void modify(int *a){
	a[2]=200;
}
int main(){
	int arr[5]={10,20,30,40,50};
	printf("Before modifing:%d",arr[2]);
	modify(arr);
	printf("After modifing:%d",arr[2]);
}
