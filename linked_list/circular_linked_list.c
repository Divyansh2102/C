#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

int leng(struct node*tail){
	int i=0;
	struct node*temp=tail->next;
	while(temp->next!=tail->next){
		i++;
		temp=temp->next;
	}
	return i;
}
	
int display(struct node *tail){
	struct node *temp;
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
	return 0;
}	
				
int main(){
	int c,pos,j=1,l;
	struct node *newnode,*temp,*tail,*prev,*nextnode;
	tail=NULL; 
	printf("\nMENU\n1.Insertion(beg)\t2.Insertion(end)\t3.Insertion(pos)\t4.Deletion(beg)\t5.Deletion(end)\t6.Deletion(pos)\t7.Display\t8.Exit\n");
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
				l=leng(tail);
				printf("\nEnter the position  ");
				scanf("%d",&pos);
				if(pos<1||pos>l){
					printf("\nInvalid  ");
				}
				else if(pos==1){
					newnode=(struct node*)malloc(sizeof(struct node));
					printf("\nEnter the data  ");
					scanf("%d",&newnode->data);
					newnode->next=NULL;
					if(tail==NULL){
						tail=newnode;
						tail->next=newnode;
					}
					else{
						tail->next=newnode->next;
						tail->next=newnode;
					}
				}
				else{
					newnode=(struct node*)malloc(sizeof(struct node));
					printf("\nEnter the data  ");
					scanf("%d",&newnode->data);
					newnode->next=0;
					temp=tail->next;
					while(j<pos-1){
						temp=temp->next;
						j++;
					}
					newnode->next=temp->next;
					temp->next=newnode;
				}
				break;
			case 4:
				temp=tail->next;
				if(tail==NULL){
					printf("\nEMPTY ");
				}
				else if(temp->next=temp){
					tail=NULL;
					free(temp);
				}
				else{
					while(temp->next != tail->next){
						tail->next=temp->next;
						free(temp);
					}
				}
				break;
			case 5:
				temp=tail->next;
				if(tail==NULL){
					printf("\nEMPTY");
				}
				else if(temp->next==temp){
					tail=NULL;
					free(temp);
				}
				else{
					while(temp->next !=tail->next){
						prev=temp;
						temp=temp->next;
					}
					prev->next=temp->next;
					tail=prev;
				}
				break;
			case 6:
				printf("\nEnter the position you wana delete from  ");
				scanf("%d",&pos);
				temp=tail->next;
				l=leng(tail);
				if(pos<1||pos>l){
					printf("\nInvalid ");
				}
				else if(pos==1){
					while(temp->next != tail->next){
						tail->next=temp->next;
						free(temp);
					}
				}
				else{
					while(j<pos-1){
						temp=temp->next;
						j++;
					}
					nextnode=temp->next;
					temp->next=nextnode->next;
					free(nextnode);
				}
				break;
			case 7:
				display(tail);
				break;
			default:
				printf("\nExiting.....");
				exit(0);
		}
	}while(c);
	return 0;
}

	
