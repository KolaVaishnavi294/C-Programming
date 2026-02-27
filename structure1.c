#include<stdio.h>
struct student{
	char name[20];
	float age;
};
int main(){
	float a;
	printf("%f\n",sizeof(a));
	struct student s1;
	printf("%f\n",sizeof(s1));
}
