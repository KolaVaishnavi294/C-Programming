#include<stdio.h>
float add(a,b,c,d){
	return a+b+c+d;
}
int main(){
	float res=add(1.2,1.3,1.4,1.5);
	printf("%f\n",res);
	//printf("%f\n",add(10,20,30,40));
}
