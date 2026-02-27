#include<stdio.h>
int main(){ int n;
	int arr[5]={10,20,30,40,50};
	printf("%d %d\n",arr,&arr);
	printf("%d %d %d %d %d",*arr,(arr+1),(arr+2),(arr+3),(arr+4));
}
