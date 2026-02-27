#include<stdio.h>
struct student{
	char name[20];
	int age;
};
int main(){
	struct student s1;//struct student s1={"Vaishnavi",18};
	printf("Enter name: ");
	scanf("%[^\n]s",s1.name);
	printf("Enter Age: ");
	scanf("%d",&s1.age);
	printf("Name\tAge\n---------------\n");
	printf("%s\t%d",s1.name,s1.age);
}
