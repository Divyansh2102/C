#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct queue{
	struct node *front;
	struct node *rear;
};

void c_queue(struct queue *q){
	q->rear=NULL;
	q->front=NULL;
}

struct queue *enqueue(struct queue *q,int x){	
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(q->front==0&&q->rear==0){
		q->front=q->rear=newnode;
		q->rear->next=q->front->next=NULL;
	}
	else{
		q->rear->next=newnode;
		q->rear=newnode;
		q->rear->next=NULL;
	}
	return q;
}

struct queue *dequeue(struct queue *q){
	struct node*temp;
	if(q->front==0&&q->rear==0)
		printf("\nEmpty");
	else{
		temp=q->front;
		printf("\nThe deleted element is   %d ",temp->data);
		q->front=q->front->next;
		free(temp);
	}
	return q;
}

void peek(struct queue *q){
	if(q->front==0&&q->rear==0)
		printf("\nEmpty");
	else{
		printf("\nThe front element is  %d",q->front->data);
	}
}

struct queue * disp(struct queue *q){
	struct node *temp=q->front;
	if(temp==0&&q->rear==0)
		printf("\nEmpty");
	else{
		while(temp!=q->rear){
			printf("   %d   ",temp->data);
			temp=temp->next;
		}
		printf("   %d   ",temp->data);
	}
	return q;
}

int main(){
	struct queue *q;
	c_queue(q);
	int c=1,n,x;
	printf("\nEnter the size ");
	scanf("%d",&n);
	printf("\n1.ENQUEUE	2.DEQUEUE	3.PEEK		4.DISPLAY");
	do{
		switch(c){
				case 1:
					printf("\nEnter the element  ");
					scanf("%d",&x);
					q=enqueue(q,x);
					break;
				case 2:
					q=dequeue(q);
					break;
				case 3:
					peek(q);
					break;
				case 4:
					q=disp(q);
					break;
				default:
					printf("\nExiting...");
					exit(0);
		}
		printf("\nEnter  the choice   ");
		scanf("%d",&c);
	}while(c);
	return 0;
}
