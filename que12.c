#include<stdio.h>
int main(){
	int eng,chem,math,cp,beee;
	scanf("%d%d%d%d%d",&eng,&chem,&math,&cp,&beee);
	float total=eng+chem+math+cp+beee;
	printf("%d\n%.2f",eng+chem+math+cp+beee,total/5);
	
}
