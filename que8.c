#include<stdio.h>
int main(){
	double a,b,c,d;
	int i,j;
	scanf("%lf%lf%lf%lf%d",&a,&b,&c,&d,&i);
	printf("%.2lf\n",a/b*c-b+a*d/3);
	j=(i++)+(++i);
	printf("j=%d\n",j);
}
