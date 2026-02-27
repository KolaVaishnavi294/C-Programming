#include<stdio.h>
int fun(a,b){
	return a%b;
}
int main(){
	int res=fun(50,5);
	if(res==0)
	printf("1");
	else
	printf("0");
}
