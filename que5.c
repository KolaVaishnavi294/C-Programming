#include<stdio.h>
int main(){
	double t,f,c;
	scanf("%lf",&t);
	 f=(t-32)*5/9;
	 c=(t*9/5)+32;
	printf("fahrehheit to celsius:%.2lf F is equal to %.2lf C\n",t,f);
	printf("celsius to fahreinheit:%.2lf C is equal to %.2lf F\n",t,c);
}
