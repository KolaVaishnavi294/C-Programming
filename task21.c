#include<stdio.h>
int c(char ch){
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z') return 1;
	else return 0;
}
int main(){
   //c('1');
   printf("%d\n",c('A'));
	
}
