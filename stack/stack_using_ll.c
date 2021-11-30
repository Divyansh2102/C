//Implementation of stack using linked list
#include<stdlib.h>
#include<stdio.h>
struct st{
	int element;
	struct st * link;
}*temp,*newnode,*top=NULL;
typedef struct st s;

void push(){
	newnode=(s*)malloc(sizeof(s));
	printf("\nEnter the data ");
	scanf("%d",&newnode->element);
	newnode->link=top;
	top=newnode;
}

void pop(){
	s* temp=top;
	if(top==NULL)
		printf("\nEmpty");
	else{
		printf("The poped element is   %d  ",temp->element);
		top=top->link;
		free(temp);
	}
}

void peek(){
	//s* temp;
	if(top==NULL)
		printf("\nEmpty ");
	else{
		printf("The top element is   %d  ",top->element);
	}
}

void display(){
	if(top==NULL)
		printf("\nEmpty  ");
	else{
		temp=top;	
		printf("\nThe elements are  ");
		do{
			printf("	   %d     ",temp->element);
			temp=temp->link;
		}while(temp!=NULL);
	}
}
	
int main(){
	int c;
	top=NULL;
	printf("\nMENU\n1.Push \t 2. Pop \t 3. Peek \t 4. Display \t 5. Exit\n");
	do{
		printf("\nEnter choice  ");
		scanf("%d",&c);
		switch(c){
			case 1:
					push();
					break;
			case 2:
					pop();
					break;
			case 3:
					peek();
					break;
			case 4:
					display();
					break;
			default:
					printf("\nExiting....");
					exit(0);
		}
	}while(c);
}



	
	
	
	
