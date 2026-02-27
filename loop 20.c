#include<stdio.h>
int main(){
	int n,r,lucky=0;
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		if(r==4||r==7){
		lucky=1; 
		break;}
		n=n/10;
	}
	if(lucky==0)printf(" not LUCKY");
	else printf("  lucky");
}
