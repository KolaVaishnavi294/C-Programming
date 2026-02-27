#include<stdio.h>
#include<math.h>
int main(){
	double p,r,t,c;
	scanf("%lf%lf%lf",&p,&r,&t);
	 c=p*(pow(1+(r/100),t)-1);
	printf("simple_intrest: %.2lf\n",(p*t*r)/100);
	printf("compound_intrest: %.2lf",c);
}
