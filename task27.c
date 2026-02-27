#include<stdio.h>
int num(a){ int i,sum=0;
	for(i=1;i<=a;i++){
		if(a%i==0)
		sum+=i;
	}
	return sum;
}
int main(){
	printf("%d\n",num(20));
}
