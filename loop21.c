#include<stdio.h>
int main(){
	int a=0,b=1,x,y,c;
	scanf("%d%d",&x,&y);
	c=a+b;
	while(c<=y){
		if(c>=x)
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}
