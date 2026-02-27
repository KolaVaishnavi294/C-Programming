#include<stdio.h>
void fun(int a){
	if(a>34)
	printf("Pass\n");
	else
	printf("Fail\n");
}
int main(){
	fun(56);
	fun(25);
	fun(34);
	fun(88);
}
