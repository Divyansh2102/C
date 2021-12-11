#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	struct node*prev;
};
int pal(struct node*head,struct node*tail){
	struct node*temp=head;
	while(temp!=tail){
		 if(temp->data!=tail->data)
        		return 0;
     		temp=temp->next;
     		tail=tail->prev;
		return 1;
	}
}
int main(){
	struct node*newnode,*tail,*head,*temp;
	int c=1,p;
	head=NULL;
	while(c){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data  ");
		scanf("%d",&newnode->data);
		newnode->next=newnode->prev=NULL;
		if(head==NULL)
			head=tail=temp=newnode;
		else{
			tail=newnode;
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		printf("\nWanna continue  ");
		scanf("%d",&c);
	};
	temp=head;
	while(temp!=NULL){
		printf("  %d  ",temp->data);
		temp=temp->next;
	};		
	p=pal(head,tail);
	if(p==1)
		printf("\nIts a palindrome  ");
	else
		printf("\nNot a palindrome ");	
}

