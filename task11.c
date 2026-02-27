#include<stdio.h>
int fun(x,y,z){
	return (x+y)%z;
}
int main(){
	int res=fun(40,40,40);
	if(res==0)
	printf("1");
	else
	printf("0");
}
