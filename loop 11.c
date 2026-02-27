#include<stdio.h>
int main()
{
	int n,r,rev=0 ;
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		//dp*=r(n>1);//ds+=r;
		rev=rev*10+r;
		n=n/10;
	}
 printf("%d ",rev);
}
