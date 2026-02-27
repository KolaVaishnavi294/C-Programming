#include<stdio.h>
int fun(a,b,c,d,e){
	return a,b,c,d,e;
	}
int main(){
	int dc,a,b,c,d,e;
	fun(34,33,56,78,91);
	if(a<35&&b<35&&c<35&&d<35&&e<35){
	printf("5");}
	else if(a<35&&b<35&&c<35&&d<35&&e>35)
	printf("4");
	else if(a<35&&b<35&&c<35&&d>35&&e>35)
	printf("3");
	else if(a<35&&b<35&&c>35&&d>35&&e>35)
	printf("2");
	else if(a<35&&b>35&&c>35&&d>35&&e>35)
	printf("1");
	else if(a<35&&b<35&&c<35&&d<35&&e<35)
	printf("0");
}
