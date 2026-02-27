 //implementation of singly linkrd list
#include<stdio.h>
#include<stdlib.h>
//self referential structure
struct node{
	int data;
	struct node *next;//pointer to node
};
typedef struct node Node; //alias name
//taking head as a global variable
Node *head=NULL;
void insert_at_head(int val){
	//creating a node
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL){ //if there are no nodes
		head=newNode;}
		else{
			newNode->next=head;
			head=newNode;
		}
}
void insert_at_tail(int val){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
		return;
	}
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;//connecting last and newNode
}
void delete_at_head(){
		if(head==NULL)
		printf("Linked list is empty so u cannot delete");
		else{
			Node *temp=head;//optional
			head=head->next;//deleting
			free(temp);//optional
		}
}
void delete_at_tail(){
	if(head==NULL){
		printf("Linked list is empty.No deletion possible");
	}
      else if(head->next==NULL){//Node *temp=head; while(temp->next->next!=NULL){ temp=temp->next;}Node *prag=temp->next;temp->next=NULL;free(prag);
	  Node *prag=head;
	   head=NULL;
	  free(prag);}
	  else{
	  	Node *temp=head;
	  	while(temp->next->next!=NULL){
	  		temp=temp->next;
		  }
		  Node *delNode=temp->next;
		  temp->next=NULL;
		  free(delNode);
	  }
}
void insert_at_position(int val,int k){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	Node *temp=head;
	int i;
	for(i=0;i<k-1;i++){
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
}
void Display(){
	if(head==NULL){
		printf("No nodes to display");
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
	//infinite loop
	while(1){
		printf("Enter\n1.Insert at head\n2.Insert at tail\n3.Display\n4.Delete at head\n5.Delete at tail\n6.Insertion at position\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch==1){
			//implement insert at head
			int val;
			printf("Enter a value for the node to be inserted:");
			scanf("%d",&val);
			insert_at_head(val); //function call
		}
		else if(ch==2){
			//implement insert at tail
			int val;
			printf("Enter a value for the node to be inserted:");
			scanf("%d",&val);
			insert_at_tail(val);
		}
		else if(ch==3){
			//implement display
			Display();
		}
		else if(ch==4){
			//delete at head
			delete_at_head();
		}
		else if(ch==5){
			//delete at tail
			delete_at_tail();
		}
		else if(ch==6){
			int val,k;
			scanf("%d %d",&val,&k);
			insert_at_position(val,k);
		}
		else{
			printf("Thank u for the testing.ADIEU!!\n");
			break;
		}
	}
}

