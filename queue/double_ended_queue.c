#include<stdio.h>
#include<stdlib.h>
#define max 5
int f=-1,r=-1,dequeue[max];
void enqueue_front(){
	if((f==0 && r==max-1)||(f=r+1)){
		printf("\nThe queue is full ");
		exit(0);
	}
	else if(f==-1 &&r==-1){
		f=r=0;
		printf("\nEnter the element ");
		scanf("%d",dequeue[f]);
	}
	else if(f==0){
		f=max-1;
		printf("\nEnter the element ");
		scanf("%d",dequeue[f]);
	}
	else{
		f--;
		printf("\nEnter the element ");
		scanf("%d",dequeue[f]);
	}
}

void enqueue_rear(){
	if((f==0 && r==max-1)||(f=r+1)){
		printf("\nThe queue is full ");
		exit(0);
	}
	else if(f==-1 &&r==-1){
		f=r=0;
		printf("\nEnter the element ");
		scanf("%d",dequeue[r]);
	}
	else if(r=max-1){
		printf("\nEnter the element ");
		scanf("%d",dequeue[r]);
	}
	else{
		r++;
		printf("\nEnter the element ");
		scanf("%d",dequeue[r]);
	}
}

void dequeue_front(){
	if(f==-1 &&r==-1){
		printf("\nThe queue is empty ");
		exit(0);
	}
	else if(f==r){
		printf("The dequed element from the front is %d ",dequeue[f]);
		f=r-1;
	}
	else if(f==max-1){
		printf("The dequed element from the front is %d ",dequeue[f]);
		f=0;
	}
	else{
		printf("The dequed element from the front is %d ",dequeue[f]);
		f++;
	}
}

void dequeue_rear(){
	if(f==-1 &&r==-1){
		printf("\nThe queue is empty ");
		exit(0);
	}
	else if(f==r){
		printf("The dequed element from the front is %d ",dequeue[f]);
		f=r-1;
	}
	else if(r==0){
		printf("The dequed element from the front is %d ",dequeue[f]);
		r=max-1;
	}
	else{
		printf("The dequed element from the raer is %d ",dequeue[f]);
		r--;
	}
}

void getfront(){
	if(f==-1 &&r==-1){
		printf("\nThe queue is empty ");
		exit(0);
	}
	else
		printf("\nThe front element is %d",dequeue[f]);
}
void getrear(){
	if(f==-1 &&r==-1){
		printf("\nThe queue is empty ");
		exit(0);
	}
	else
		printf("\nThe rear element is %d",dequeue[r]);
}
int main(){
	int c;
	printf("\nMENU!!\n1.enqueue_front\t2.enqueue_rear\t3.dequeue_front\t4.dequeue_rear\t5.Getfront\t6.Getrear\t7.Exit\n");
	do{
		printf("\nEnter the choice  ");
		scanf("%d",&c);
		switch(c){
			case 1:
				enqueue_front();
				break;
			case 2:
				enqueue_rear();
				break;
			case 3:
				dequeue_front();
				break;
			case 4:
				dequeue_rear();
				break;
			case 5:
				getfront();
				break;
			case 6:
				getrear();
				break;
			case 7:
				printf("\nExiting....");
				exit(0);
			default:
				printf("\nInvalid choice");
			}
	}while(c);
	free(dequeue);
	return 0;
}
