#include<stdio.h>
void fun(int a){
	printf("%d\n",a%10);
}
int main(){
	fun(123);
	fun(1);
	fun(123694);
	fun(57384908);
}
