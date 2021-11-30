#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node *next;
		struct node *prev;
} *head,*tail;

int leng(){
	int i=0;
	struct node*temp=head;
	while(temp->next!=tail->next){
		i++;
		temp=temp->next;
	}
	return i;
}

int i_beg(){
	struct node *newnode;
	  newnode=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter data   ");
	scanf("%d",&newnode->data);
	if(head==NULL){
		head=tail=newnode;
		head->next=head;
		head->prev=head;
	}
	else{
		newnode->next=head;
		head->prev=newnode;
		newnode->prev=tail;
		tail->next=newnode;
		head=newnode;
	}
	return 0;
}

int i_end(){
	struct node *newnode,*temp;
	head=NULL;
	  newnode=(struct node *)malloc(sizeof(struct node));
	printf("\n Enter the data  ");	
	scanf("%d", &newnode->data);
	if(head==NULL){
				head=temp=newnode;
				head->next=head;
				head->prev=head;
	}
	else{
				tail->next=newnode;
				newnode->prev=tail;
				newnode->next=head;
				head->prev=newnode;
				tail=newnode;
	}
	return 0;
}
int i_pos(){
	struct node *temp,*newnode;
	temp=head;
	int j=1,pos,l;
	l=leng();
	printf("\n Enter the position ");
	scanf("%d",&pos);
	if(pos<0||pos>l)
		printf("\n Invalid position ");
	else if(pos == 1)
		i_beg();
	else{
	    newnode=(struct node *)malloc(sizeof(struct node));
	    printf("\n Enter the data  ");
		while(j<pos-1){
			j++;
			temp=temp->next;
		}
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next->prev=newnode;
		temp->next=newnode;
	}
	return 0;
}

int disp(){
	struct node*temp;
	temp=head;
	while(temp->next!=tail->next){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d\t",temp->data);
	return 0;
}

void d_beg(){
	struct node *temp;
	temp=head;
	if(temp==NULL)
		printf("\n Empty ");
	else if(head->next==head){
		head=tail=NULL;
		free(temp);
	}
	else{
		head=head->next;
		head->prev=tail;
		tail->prev=head;
		free(temp);
	}
}
		
void d_end(){
	struct node *temp;
	temp=head;
	if(temp==NULL)
		printf("\nEmpty ");
	else if(head->next==head){
		head=tail=NULL;
		free(temp);
	}
	else{
		tail=tail->prev;
		tail->next=head;
		head->prev=tail;
		free(temp);
	}
}

void d_pos(){	
	struct node *temp;
	int j=1,l,pos;
	l=leng();	
	printf("\nEnter the position you wanna delete  ");
	scanf("%d",&pos);
	if(pos>l || pos <0)
		printf("\nInvalid position ");
	else if(pos ==1)
		d_beg();
	else{
		temp=head;
		while(j<pos){
			j++;
			temp=temp->next;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		if(temp->next ==head){
			tail=temp->prev;
			free(temp);
		}
		else
			free(temp);
		}
}
	
	
int main(){
	struct node *temp;
	int c;
	printf("\n \t\t MENU!!!!\n 1.INSERT(beg) \t 2.INSERT(end) \t 3.INSERT(pos) \t 4.DELETION(beg)\t 5.DELETION(end)\t 6.DELETION(pos)\t 7.DISPLAY \t 8. EXIT");
	do{
		printf("\n Enter choice ");
		scanf("%d",&c);
		switch(c){
			case 1:
					i_beg();
					break;
			case 2:
					i_end();
					break;
			case 3:
					i_pos();
					break;
			case 4:
					d_beg();
					break;	
			case 5:
					d_end();
					break;
			case  6:
					d_pos();
					break;
			case 7:
					disp();
					break;
			default:
					printf("\n EXITING.....");
					exit(0);
		}
	}while(c);
}
					
