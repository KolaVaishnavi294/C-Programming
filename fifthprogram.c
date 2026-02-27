#include<stdio.h>
int main()
{
	int c,s;
	scanf("%d%d",&c,&s);
	if(c>s)
	{
		printf("loss");
		int a=c-s;
		printf("\n%d",a);
			}
	else
	{
		printf("profit");
		int b=c-s;
		printf("\n%d",b);
	}
}

