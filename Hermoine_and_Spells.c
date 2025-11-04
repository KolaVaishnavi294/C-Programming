#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c&&b>c){
		printf("%d",a+b);}
		else if(b>a&&c>a){
			printf("%d",b+c);}
			else if(a>b&&c>b) {
				printf("%d",c+a);}
}
        
    
