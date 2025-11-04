#include<stdio.h>
int main(int argc, char *argv[])
{
	int n,i,dc=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);}
		int a;
		scanf("%d",&a);
		for(int i=0;i<n;i++){
		if(a==arr[i]) dc++;}
	printf("%d",dc);
}