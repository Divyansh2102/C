#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

int main(){
	struct node *front,*rear,*newnode,*temp;
	front=rear=0;
	int c;
	printf("\nMENU\n1.Enqueue\t2.Dequeue\t3.Display");
	do{
		printf("\nEnter choice   ");
		scanf("%d",&c);
		switch(c){
			case 1:
					newnode=(struct node *)malloc(sizeof(struct node));
					printf("\nEnter element   ");
					scanf("%d",&newnode->data);
					newnode->next=NULL;
					if(front==0 && rear==0)
						front=rear=newnode;
					else{
						rear->next=newnode;
						rear=newnode;
					}
					break;
			case 2:
					temp=front;
					if(front==0 && rear==0)
						printf("\nEmpty");
					else{
						printf("\nThe deleted element is  %d",front->data);
						front=front->next;
						free(temp);	
					}
					break;
			case 3:
					temp=front;
					if(front==0 && rear==0)
						printf("\nEmpty");
					else{
						printf("\nThe elements are    ");
						while(temp!=NULL){
							printf("   %d   ",temp->data);
							temp=temp->next;
						}
					}
					break;
			default:
					printf("\nExiting....");
					exit(0);
			}
		}while(c);
	return 0;	
}
				
