#include<stdio.h>
struct employe{
	char name[20];
	char organi[30];
	int year;
	int salary;
};
typedef struct employe emp;
int main(){
     emp arr[6];
	 int i;
	 for(i=0;i<6;i++){
	 	printf("Enter name %d: ",i+1);
	 	scanf(" %[^\n]s",arr[i].name);
	 	printf("Enter organisation %d: ",i+1);
	 	scanf(" %[^\n]s",arr[i].organi);
	 	printf("Enter year %d: ",i+1);
	 	scanf("%d",&arr[i].year);
	 	printf("Enter salary %d: ",i+1);
	 	scanf("%d",&arr[i].salary);
	 }
	 printf("Name\tOrganisation\tYear\tsalary---------------\n");
	 for(i=0;i<6;i++){
	 	printf("%s\t%s\t%d\t%d\n",arr[i].name,arr[i].organi,arr[i].year,arr[i].salary);
	 }
}
	 
