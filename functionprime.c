#include<stdio.h>
int num(n){
	int fc=0,i;
	for(i=1;i<=n;i++){
	if(n%i==0) fc++;}
	if(fc==2) return 1;
	else return 0;
}
int pp(int x){
	while(num(x)==0){
		x--;
	} return x;
} int np(int a){
	while(num(a)==0){
		a++;
	}return a;
}
int main(){
	printf("%d\n%d",pp(10),np(10)); 
}
