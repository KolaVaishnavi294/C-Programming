#include<stdio.h>
struct Rectangle{
	float len,wid,area,peri;
};
typedef struct Rectangle REC;
int main(){
	REC r1;
	REC r2;
	printf("Enter len: ");
	scanf("%f",&r1.len);
	printf("Enter wid: ");
	scanf("%f",&r1.wid);
	r1.area=r1.len*r1.wid;
	r1.peri=2*(r1.len+r1.wid);
	printf("%.2f\t%.2f\n",r1.area,r1.peri);
	printf("Enter len: ");
	scanf("%f",&r2.len);
	printf("Enter wid: ");
	scanf("%f",&r2.wid);
	r2.area=r2.len*r2.wid;
	r2.peri=2*(r2.len+r2.wid);
	printf("%.2f\t%.2f",r2.area,r2.peri);
	
}
