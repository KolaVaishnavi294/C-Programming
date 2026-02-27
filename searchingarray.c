#include<stdio.h>
int main(){
	int n,a,i,flag=0;
	scanf("%d%d",&n,&a);  //n is the number; a is the num i want in n such nums
	int arr[n];        // n=2;a=3;arr[i]=1 2 ;  3 is not found in arr[i] so it is false;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(a==arr[i]) flag++;
	}
	if(flag>0)
	printf("flag");
	else
	printf("not flag");
}
