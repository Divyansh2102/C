#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
};
int leng(struct node*head){
	struct node*temp;
	int count=0;
	temp=head;
	while(temp->next!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}
int main(){
	struct node *head,*newnode,*temp;
	head=NULL;
	int c,len,pos;
	printf("\nMENU\n1.INSERTION(beg)\t2.INSERTION(end)\t3.INSERTION(pos)\t4.DELETE(beg)\t5.DELETE(end)\t6.DELETE(pos)\t7.DISPLAY\t8.EXIT \n");

	do{
	printf("\nEnter choice ");
	scanf("%d",&c);
	switch(c){
	case 1:
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data  ");
		scanf("%d",&newnode->data);
		newnode->next=newnode->prev=NULL;
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
		break;
	case 2:
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data  ");
		scanf("%d",&newnode->data);
		newnode->next=newnode->prev=NULL;
		if(head==NULL)
			head=temp=newnode;
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		break;
	case 3:
		temp=head;
		printf("\nEnter the position you wanna enter  ");
		scanf("%d",&pos);
		len=leng(head);
		while(len<pos){
			temp=temp->next;
			len++;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data  ");
		scanf("%d",&newnode->data);
		newnode->next=newnode->prev=NULL;
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
		break;	
	case 4:
		if(head==NULL){
			printf("\nEmpty  ");
			exit(0);
		}
		else{
			temp=head;
			head=head->next;
			head->prev=NULL;
		}
		break;
	case 5:
		temp=head;
		while(temp!=NULL)
			temp=temp->next;
		temp->prev->next=NULL;
		temp=temp->prev;
		break;
	case 6:
		printf("\nEnter the position from were you wanna delete  ");
		scanf("%d",&pos);
		temp=head;
		while(len<pos){
			temp=temp->next;
			len++;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		break;
	case 7:
		temp=head;
		while(temp->next!=NULL){
			printf(" %d ",temp->data);
			temp=temp->next;
		}
		printf(" %d\n",temp->data);
	  	break;
	default:
		printf("\nEXITING....");
		exit(0);
	  }
	}while(c);
	return 0;
}
