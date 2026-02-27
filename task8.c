#include<stdio.h>
void fun(int a){
	if(a%2==0)
	printf("Even\n");
	else
	printf("Odd");
}
int main(){
	fun(12);
	fun(11);	
}
