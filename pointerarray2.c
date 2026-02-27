#include<stdio.h>
int main(){
	//int n;
	int a[5]={10,20,30,40,50};
	//int i;
	//for(i=0;i<n;i++){
	//	scanf("%d",&a[i]);
	//}
	int *ptr;
	for(ptr=a;ptr<a+5;ptr++){
		printf("%d ",*ptr);
	}
	for(ptr=a+4;ptr>=a;ptr--){
		printf("%d ",*ptr);
	}
}
