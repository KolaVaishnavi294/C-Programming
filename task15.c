#include<stdio.h>
void fun(float a){
	if(a>=90)
	printf("O\n");
	if(80<=a&&a<90)
	printf("A\n");
	if(70<=a&&a<80)
	printf("B\n");
	if(60<=a&&a<70)
	printf("C\n");
	if(50<=a&&a<60)
	printf("D\n");
	if(35<=a&&a<50)
	printf("E\n");
	if(a<35)
	printf("F\n");	
}
int main(){
	fun(95.6);
	fun(89.2);
	fun(78.9);
	fun(64.5);
	fun(52.7);
	fun(43.4);
	fun(26.8);	
}
