#include<stdio.h>
int main()
{
	int i,a,b,lcm=0;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		if((a*i)%b==0){
			lcm=a*i;
			printf("%d",lcm);
			break;
		}
	}

}