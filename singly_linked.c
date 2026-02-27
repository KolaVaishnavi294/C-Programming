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
	if(head==NULL){
		head=newNode;
		}
		else{
			newNode->next=head;
			head=newNode;
		}
}
void Display(){
	if(head==NULL){
		printf("No nodes");
	}
	else{
		Node *temp=head;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}
int main(){
	int ch;
	while(1){
		printf("Enter:\n1.Insertion at head\n2.Insertion at tail\n3.Deletion at head\n4.Deletion at tail\n5.Display\n");
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
			printf("End");
			break;
		}
	}
}
