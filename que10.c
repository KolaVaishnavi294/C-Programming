#include<stdio.h>
int main(){
	double s,r,l,w,b,h;
	scanf("%lf%lf%lf%lf%lf%lf",&s,&r,&l,&w,&b,&h);
	printf("Area of circle:%.2lf\n Area of square:%.2lf\n Area of rectangle:%.2lf\n Area of triangle:%.2lf\n",3.14*r*r,s*s,l*w,0.5*b*h);
}
