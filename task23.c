#include<stdio.h>
void num(int a){
	int i;
	for(i=1;i<=a;i++){
		if(i%2==0)
			printf("%d\n",i);}
}
int main(){
	num(12);
}
