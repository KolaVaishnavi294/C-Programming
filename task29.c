#include<stdio.h>
int num(int n){
	int count=0;
	while(n!=0){
		int a=n%10;
		count++;
		n/=10;
	}
	return count;
}
int main(){ 
	printf("%d\n",num(123));
}
