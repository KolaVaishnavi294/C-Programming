#include<stdio.h>
int swap(int *a, int *b){
	int t=*a;*a=*b;*b=t;
}int main(){
	int a=10,b=20;
	printf("before: %d %d\n",a,b);
	swap(&a,&b);
	printf("after: %d %d",a,b);
}
