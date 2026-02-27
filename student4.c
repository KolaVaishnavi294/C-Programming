#include<stdio.h>
struct student{
	char name[20];
	int age;
};
typedef struct student STU;
int main(){
	STU arr[3];int i;//struct student s1={"Vaishnavi",18};
	for(i=0;i<3;i++){
	printf("Enter name %d: ",i+1);
	scanf("%s",arr[i].name);
	printf("Enter Age %d: ",i+1);
	scanf("%d",&arr[i].age);}
	printf("Name\tAge\n---------------\n");
	for(i=0;i<3;i++){
	printf("%s\t%d",arr[i].name,arr[i].age);}
}
