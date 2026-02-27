#include<stdio.h>
int main(){
	int n,dc=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0)
		{
		n=n/2;
		}
		else
		{
		n=3*n+1;
		}
		dc++;
			
	}printf("%d ",dc);

} 
