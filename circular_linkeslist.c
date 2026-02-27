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
		head->next = head;
		}
		else{
		Node *temp=head;
			while(temp->next!=head){
				temp=temp->next;}
				temp->next=newNode;
				newNode->next=head;
				head=newNode;}
}
void Delete_at_head(){
	if(head==NULL){
		head=newNode;
		head->next = head;
		}
		else{
		Node *temp=head;
			while(temp->next!=head){
				temp=temp->next;}
				temp->next=newNode;
				newNode->next=head;}
}
void Display(){
	if(head==NULL){
		printf("NO nodes are present");
	}
	Node *temp=head;
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	} while(temp!=head);
	printf("\n");
}
void Display_n_nodes(){
	int n,i;
	printf("Enter value of n:");
	scanf("%d",&n);
	Node *temp=head;
	if(head==NULL){
		printf("linked list is empty");
		return;
	}
	for(i=0;i<n;i++){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main(){
	int ch;
	while(1){
	printf("Enter:\n1.Insertion at head\n2.Insertion at end\n3.deletion at head\n4.deletion at tail\n5.Display_n_nodes\n6.Display\nAny other");
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
	   	Delete_at_head();
	   }
	   else if(ch==4){
	   	
	   }
	   else if(ch==5){
	   	Display_n_nodes();
	   }
	    else if(ch==6){
	   	Display();
		}
	   	else {
		   printf("End");
		   break;
		   }
	}
}

