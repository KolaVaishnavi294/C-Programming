#include<stdio.h>
int main(){
	int a=20;
	int b=10;
	int c=30;   //p=&a-->stores the addres of a in p;
	int **p,*q,*r;  //*p-->gives the value of a;
	p=&a;
	q=&b;
	r=&c;
	printf("%d",**p+*q+*r);
}
