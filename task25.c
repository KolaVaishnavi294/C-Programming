#include<stdio.h>
void num(int a,int b,int c){
	int i;
	for(i=b;i<=c;i++){
		printf("%d x %d = %d\n",a,i,i*a);
	}
}int main(){
	num(5,12,18);
}
