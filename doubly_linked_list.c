#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
Node *tail=NULL;
void insert_at_head(int val){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->prev=NULL;
	newNode->next=NULL;
	if(head==NULL&&tail==NULL){
		head=newNode;
		tail=newNode;
	}
	else{
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
}
void insert_at_tail(int val){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->prev=NULL;
	newNode->next=NULL;
	if(head==NULL&&tail==NULL){
		head=newNode;
		tail=newNode;
	}
	else{
		tail->next=newNode;
		newNode->prev=tail;
		tail=newNode;
	}
}
void display_forward(){
	if(head==NULL&&tail==NULL){
		printf("Linked list is empty\n");
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
void display_backward(){
	if(head==NULL&&tail==NULL){
		printf("Linked list is empty\n");
	}
	else{
		Node *temp=tail;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->prev;
		}
		printf("\n");
	}
}
void delete_at_head(){
	if(head==NULL&&tail==NULL){
		printf("No nodes are present\n");
	}
	else if(head==tail){
		Node *delete=head;
		head=NULL;
		tail=NULL;
		free(delete);
	}
	else{
		Node *temp=head;
		head=head->next;
		temp->next=NULL;
		free(temp);
	}
}
void delete_at_tail(){
	if(head==NULL&&tail==NULL){
		printf("No nodes are present\n");
	}
	else if(head==tail){ //list contain one node.
	 Node *delete=head;
	 	head=NULL;
		tail=NULL;
		free(delete);
	}  
	else{
		Node *temp=tail;
		tail=tail->prev;
		tail->next=NULL;
		temp->prev=NULL;
		free(temp);
	}
}
int main(){
	int ch;
	while(1){
		printf("Enter:\n1.Insert at head\n2.Insert at tail\n3.Delete at head\n4.Delete at tail\n5.display forward\n6.display backward\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch==1){
			int val;
			printf("Enter the value:");
			scanf("%d",&val);
			insert_at_head(val);
		}
		else if(ch==2){
			int val;
			printf("Enter the value:");
			scanf("%d",&val);
			insert_at_tail(val);
		}
		else if(ch==3){
			delete_at_head();
		}
		else if(ch==4){
			delete_at_tail();
		}
		else if(ch==5){
			display_forward();
		}
		else if(ch==6){
			display_backward();
		}
		else{
			printf("Thank you for testing.AEDIU!!\n");
		}
	}
}
