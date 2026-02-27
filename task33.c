#include<stdio.h>
int num(n){
	int fc=0,i;
	for(i=1;i<=n;i++){   //n=10
	if(n%i==0) fc++;}    //fc++ =4
	if(fc==2) return 1;
	else return 0;
}
int np(int x){  //x=10
	while(num(x)==0){  //num(x)==0-->fc++==0-->(4 is not prime so it is 0)0==0--.true
		x++;  //10+1=11;
	} return x;
}
int main(){
	printf("%d\n",np(10)); 
}
