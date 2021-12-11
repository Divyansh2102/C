#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

int main(){
	struct node *tail,*temp,*newnode;
	tail=NULL;
	int c;
	do{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data  ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(tail==NULL){
			tail=newnode;
			tail->next=newnode;
		}
		else{
			newnode->next=tail->next;
			tail->next=newnode;
			tail=newnode;
		}
		printf("\nWanna continue  ");
		scanf("%d",&c);	
	}while(c);
	if(tail==NULL)
		printf("Empty");
	else{
		temp=tail->next;
		while(temp->next!=tail->next){
			printf("%d   ",temp->data);
			temp=temp->next;
		}
		printf("%d   ",temp->data);
	}
}
	
