#include<stdio.h>
void c(char ch){
	if(ch>=65&&ch<=90)
	printf("CAPITAL\n");
	else
	printf("SMALL");
}
int main(){
	c('A');
	c('a');
}
