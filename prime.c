#include<stdio.h>
int main(){
	int i,a,n,sum,count,b;
	scanf("%d%d",&a,&b);
	for(n=a;n<=b;n++){
		count=0;
		for(i=1;i<=n;i++){
			if(n%i==0)
			count++;
		}
	if(count==2){
	sum+=n;}
}
  	printf("%d ",sum);
}
