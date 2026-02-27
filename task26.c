#include<stdio.h>
int num(a){ int i,dc=0;
	for(i=1;i<=a;i++){
		if(a%i==0)
		dc++;
	}
	return dc;
}
int main(){
	printf("%d\n",num(20));
}
