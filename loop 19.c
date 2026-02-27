#include<stdio.h>
int main(){
	int n,r,duck=0;
	scanf("%d",&n);    
	while(n>0){
		r=n%10;
		
	    if(r==0){
		duck=1;
		break ;}
		n=n/10;
			
	}
	if(duck==0)printf("NOT A DUCK NUMBER");
	else printf("DUCK NUMBER");
	
	
}
