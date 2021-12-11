#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head,*newnode,*temp;
	int c,l=0;
	head=NULL;
	do{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("\nEnter data  ");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
			if(head==NULL)
				head=temp=newnode;
			else{
				temp->next=newnode;
				temp=newnode;
			}
		printf("\nWanna continue   ");
		scanf("%d",&c);
	}while(c);
	temp=head;
	if(head==NULL)
		printf("\nEmpty");
	else{
		printf("\nThe elements are  ");
		while(temp!=NULL){
			if(l%2==0)
				printf("   %d   ",temp->data);
			l++;
			temp=temp->next;
		}
	}
}
		
		
		
