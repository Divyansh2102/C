#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

int leng(struct node*tail){
	int i=0;
	struct node*temp=tail;
	while(temp->next!=tail->next){
		i++;
		temp=temp->next;
	}
	return i;
}
	
int display(struct node *tail){
	struct node *temp=tail->next;
	if(tail==NULL){
	printf("Empty");
		return 0;
	}
	else{
		while(temp->next!=tail->next){
		printf("%d   ",temp->data);
		temp=temp->next;
		}
	printf("%d   ",temp->data);
	}
	return 0;
}	
				
int main(){
	int c,pos,i=0,l;
	struct node *newnode,*temp,*tail,*prev,*nextnode;
	tail=NULL; 
	printf("\nMENU\n1.Insertion(beg)\t2.Insertion(end)\t3.Insertion(pos)\t4.Reverse\t5.Display\t6.Exit\n");
	do{
		printf("\nEnter choice  ");
		scanf("%d",&c);
		switch(c){
			case 1:
				temp=tail;
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
				}
				break;
			case 2:	
				temp=tail;
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
				break;
			case 3:
				i=0;
				if(pos<0||pos>l){
					printf("\nInvalid  ");
				}
				else if(pos==1){
					temp=tail;
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
					}
				}
				else{
					temp=tail;
					printf("\nEnter the position you wanna input  ");
					scanf("%d",&pos);
					l=leng(tail);
					while(i<pos-1){
						temp=temp->next;
						i++;
					}
					newnode->next=temp->next;
					temp->next=newnode;
				}
				break;
			case 4:
				temp=tail->next;
				nextnode=temp->next;
				if(tail==NULL)
					printf("\nEmpty");
				else{
					while(temp!=tail){
						prev=temp;
						temp=nextnode;
						nextnode=temp->next;
						temp->next=prev;
					}
					nextnode->next=tail;
					tail=nextnode;
				}
				break;
			case 5:
				case 7:
				display(tail);
				break;
			default:
				printf("\nExiting.....");
				exit(0);
		}
		printf("\nWanna continue ");
		scanf("%d",&c);
	}while(c);
	return 0;
}

						
				
			
			
