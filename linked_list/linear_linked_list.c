#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
int count(struct node*head){
	int i=1;
	struct node* temp;
	temp=head;
	while(temp !=NULL){
		i++;
		temp=temp->next;
	}
	return i;
}
void main(){
	int c,j=1,pos;
	struct node *head,*newnode,*temp,*prev,*nextnode;
	head=NULL;
	printf("\nMENU\n1.Insertion\t2.Insertion(front)\t3.Insertion(position)\t4.Deletion(front)\t5.Deletion(back)\t6.Deletion(position)\t7.Display\t8.EXIT\n\n");
	do{
		printf("\nEnter the choice ");
		scanf("%d",&c);
		switch(c){
		case 1:
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("\nEnter the data\t");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
			if(head==NULL)
				head=temp=newnode;
			else{
				temp->next=newnode;
				temp=newnode;
			}
			break;
		case 2:
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("\nEnter the data\t");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
			newnode->next=head;
			head=newnode;
			break;
		case 3:
			pos=1;
			printf("\nEnter the position  ");
			scanf("%d",&pos);
			temp=head;
			int i=count(head);
			if(pos>i){
				printf("\nInvalid positioning  ");
				exit(0);
			}
			else{
			while(i<pos){
				temp=temp->next;
				i++;
			}
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("\nEnter the data\t");
			scanf("%d",&newnode->data);
			newnode->next=temp->next;
			temp->next=newnode;
			}
			break;
		case 4:
			temp=head;
			head=head->next;
			break;
		case 5:
			temp=head;
			while(temp->next!=NULL){
				prev=temp;
				temp=temp->next;
			}
			if(temp==head)
				head=NULL;
			else
				prev->next=NULL;
			break;
		case 6:
			temp=head;
			printf("\nEnter the position  ");
			scanf("%d",&pos);
			while(i<pos-1){
				temp=temp->next;
				i++;
			}
			nextnode=temp->next;
			temp=nextnode->next;
			
		case 7:
			temp=head;
			while(temp!=NULL){
				printf("%d  ",temp->data);
				temp=temp->next;
			}
			break;
		default:
			printf("\nEXITING......");
			exit(0);
		}
	}while(c);
	free(temp),free(head),free(newnode),free(prev),free(nextnode);
} 
