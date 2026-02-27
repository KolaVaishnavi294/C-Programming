#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int main(){
	int result =add(10,20);
	printf("%d\n",result*result);
	printf("%d\n",add(300,400));
	if(add(1,-1)==0) printf("Hello All");
	
}
