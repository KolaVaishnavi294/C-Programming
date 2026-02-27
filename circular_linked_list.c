#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void insert_at_head(int val){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
		Node *temp=head;
		if(head==NULL){
		head=newNode;
		newNode->next=head;}
		else if(head->next==head){
			newNode->next=head;
			head->next=newNode;
			head=newNode;}
			else{
			while(temp->next!=head){
				temp=temp->next;}
				newNode->next=head;
				temp->next=newNode;
				head=newNode;}
}
void Display(){
	if(head==NULL){
		printf("No nodes are present");}
	Node *temp=head;
	while(1){
		printf("%d ",temp->data);
		temp=temp->next;
		if(temp==head) break;
	}
	printf("\n");
}
int main(){
	int ch;
	while(1){
	printf("Enter:\n1.Insertion at head\n2.Insertion at end\n3.Deletion at head\n4.Deletion at end\n5.Display\nAny other");
	   scanf("%d",&ch);
	   if(ch==1){
	   	int val;
	   	printf("Enter a value:");
	   	scanf("%d",&val);
	   	insert_at_head(val);
	   }
	   else if(ch==2){
	   	
	   }
	   else if(ch==3){
	   	
	   }
	   else if(ch==4){
	   	
	   }
	   else if(ch==5){
	   	Display();
	   }
	   else{
	   	printf("End");}
 }	
}
