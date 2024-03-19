//Implementation of a singly linked list 
#include<stdio.h>
#include<stdlib.h>
//self-referential structure
struct node{
	int data;
	struct node *next;//pointer to node
};
typedef struct node Node;
//head as a global variable
Node *head = NULL;
void  insert_at_head(int val){
	//creating a node
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL){//if there are no nodes already
		head=newNode;
	}
	else{
		newNode->next=head;
		head=newNode;
	}
}
void insert_at_tail(int val){
	//create a newnode
	Node *newNode =(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL){
		head =newNode ;
		return;
	}
	//stop at the last node
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode ;//connecting last and newNode 
}
void delete_at_head(){
	if(head==NULL){
		printf("Linked list is empty.Deletion is not possible\n");
	}
	else{
		Node *temp=head;//to be deleted node
		head=head->next;//delete the node
		free(temp);//deallocate the memory for node1
	}
}
void display(){
	if(head==NULL){
		printf("No nodes to display\n");
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
		printf("Enter\n1.Insert at head\n2.Insert at tail\n3.Display\n4.Delete at head\n5.Delete at tail\n Any other to exit\n");
		scanf("%d",&ch);
		if(ch==1){
			// implement insert at head
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d",&val);
			insert_at_head(val);//function call
		}
		else if(ch==2){
			//implement insert at tail
	     	int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d",&val);
			insert_at_tail(val);
		}
		else if(ch==3){
			//implement display
			display();
				}
		else if(ch==4){
			//implement delete at head
			delete_at_head();//void function call
		}
		else if(ch==5){
			//implement delete at tail
		}
		else{
			printf("Thank you for the testing.ADIEU!\n");
			break;
		}
	}
}
