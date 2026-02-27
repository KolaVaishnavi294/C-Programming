#include<stdio.h>
int main(){ int n;
	int arr[5]={10,20,30,40,50};
	long long b[5]={2487956,78359174,749220,53464849,01747756};
	char c[6]="Hello";
	printf("%d %d\n",*arr,arr+1,arr+2);
	printf("%d %d %d\n %d %d %d ",b,b+1,b+2,c,c+1,c+2);
}
