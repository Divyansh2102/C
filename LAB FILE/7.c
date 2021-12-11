#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
}*top;
void push(int x){
	struct node * newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link=NULL;
	if(top==NULL)
		top=newnode;
	else{
		newnode->link=top;
		top=newnode;
	}
}

void pop(){
	struct node *temp=NULL;
	temp=top;
	if(top==NULL){
		printf("\nEmpty");
	}
	else{
		printf(" %d  ",top->data);
		top=top->link;
		free(temp);
	}
}

int peek(){
	if(top==NULL){
		printf("\nEmpty");
		return 0;
	}
	else
		printf("\nThe peeked element is : %d",top->data);
	return 0;
}

void display(){
	struct node *temp=top;
	if(top==NULL){
		printf("\nEmpty");
	}
	else{
		printf("\nThe elements are   ");
		while(temp!=NULL){
				printf("  %d   ",temp->data);
				temp=temp->link;
		}	
	}
}
	
int main(){
	int c,x;
	printf("\nMENU\n1.PUSH\t2.PEEK\t3.POP\t4.DISPLAY\n");
	do{
		printf("\nEnter choice  ");
		scanf("%d",&c);
		switch(c){
			case 1:
				printf("\nEnter the element to be pushed  ");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				peek();
				break;
			case 3:
				pop();
				break;
			case 4:
				display();
				break;
			default :
				printf("\nEXITING...");
				exit(0);
			}
	}while(c);
	return 0;
}
