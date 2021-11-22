#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,*queue;
void enqueue(int n){
	if((rear+1)%n==front){
		printf("\nThe queue is full ");
		exit(0);
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		printf("\nEnter the element  ");
		scanf("%d",&queue[rear]);
	} 
	else{
		rear=(rear+1)%n;
		printf("\nEnter the element  ");
		scanf("%d",&queue[rear]);
	}
}
void dequeue(int n){
	if(front==-1&&rear==-1){
		printf("\nThe queue is empty  ");
		exit(0);
	}
	else if(front==rear){
		printf("\nThe deleted element is %d",queue[front]);
		front=rear=-1;
	}
	else{
		printf("\nThe deleted element is %d",queue[front]);
		front=(front+1)%n;
	}
}
void peek(){
	if(front==-1&&rear==-1){
		printf("\nThe queue is empty  ");
		exit(0);
	}
	else
		printf("\nThe peeked element is %d ",queue[front]);
}

void display(int n){
	int i=front;
	if(front==-1&&rear==-1){
		printf("\nThe queue is empty  ");
		exit(0);
	}
	else{
		printf("\nThe queue element are   ");
		while(i!=rear){
			printf("%d  ",queue[i]);
			i=(i+1)%n;
		}
		printf(" %d",queue[i]);
	}
}		
int main(){
	int n,c;
	printf("\bEnter the size of the array  ");
	scanf("%d",&n);
	queue=(int *)malloc(n*sizeof(int));
	printf("\nMENU!!\n1.Enqueue\t2.Deque\t3.Peek\t4.Display\t5.Exit\n");
	do{
		printf("\nEnter the choice  ");
		scanf("%d",&c);
		switch(c){
			case 1:
				enqueue(n);
				break;
			case 2:
				dequeue(n);
				break;
			case 3:
				peek();
				break;
			case 4:
				display(n);
				break;
			case 5:
				printf("\nExiting....");
				exit(0);
			default:
				printf("\nInvalid choice");
			}
	}while(c);
	free(queue);
	return 0;
}

