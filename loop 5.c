#include<stdio.h>
int main()
{
	int i,a,b;
	scanf("%d%d",&a,&b);
	for(i=b;i>=a;i--){
		if(i%2==0){
			printf("%d  ",i);
		}
	}
}
