//polynomial
#include<stdio.h>
#include<stdlib.h>
struct node{
	float coeff;
	int expo;
	struct node *next;
};
typedef struct node Node;
Node *insert_term(Node *head,float c,int e){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->coeff=c;
	newNode->expo=e;
	newNode->next=NULL;
	if(head==NULL){
	head=newNode;}
	else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
	}
	return head;
}
void Display_polynomial(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		printf("(%.2f)x^%d%c",temp->coeff,temp->expo,(temp->next==NULL)?'\n':'+');
		temp=temp->next;
	}
}
Node *create_polynomial(){
	Node *head=NULL;
	int n,i;//num of terms
	printf("Enter num of tems:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		float co;
		int ex;
		printf("Enter the coefficient %d:",i);
		scanf("%f",&co);
		printf("Enter the exponent %d:",i);
		scanf("%d",&ex);
	head =insert_term(head,co,ex);
	}
	return head;
}
int main(){
	Node *poly=create_polynomial();
	Display_polynomial(poly);
	return 0;
}
