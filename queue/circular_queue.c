#include<stdio.h>
#include<stdlib.h>

void enqueue(int *f,int *r,int n,int a[],int x){
	if((((*r)+1)%n)==*f)
		printf("\nFull");
	else if(*r==-1&&*f==-1){
		*f=*r=0;
		a[*r]=x;
	}
	else{
		*r=((*r)+1)%n;
		a[*r]=x;
	}
}

void dequeue(int *f,int *r,int n,int a[]){
	if(*f==-1&&*r==-1)
		printf("\nEmpty");
	else if(*f==*r){
		printf("\nThe deleted element is %d",a[*f]);
		*f=*r=-1;
	}
	else{
		printf("\nThe deleted element is %d",a[*f]);
		*f=((*f)+1)%n;
	}
}	
void peek(int *f,int *r,int n,int a[]){
	if(*f==-1&&*r==-1)
		printf("\nEmpty");
	else
		printf("\nThe front element is  %d ",a[*f]);
}

void disp(int *f,int *r,int n,int a[]){
	int i=*f;
	if(*f==-1&&*r==-1)
		printf("\nEmpty");
	else{
		while(i!=*r){
			printf("  %d  ",a[i]);
			i=(i+1)%n;
		}
	}
}

int main(){
	int f=-1,r=-1,n,*a,c=1,x;
	printf("'\nEnter the size  ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\n1.ENQUEUE	2.DEQUEUE	3.PEEK		4.DISPLAY");
	do{
		switch(c){
			case 1:
				printf("\nEnter the element you wanna insert  ");
				scanf("%d",&x);
				enqueue(&f,&r,n,a,x);
				break;
			case 2:
				dequeue(&f,&r,n,a);
				break;
			case 3:
				peek(&f,&r,n,a);
				break;
			case 4:
				disp(&f,&r,n,a);
				break;
			default:
				printf("\nExiting....");
				exit(0);
			}
			printf("\nEnter choice ");
			scanf("%d",&c);
	}while(c);
	return 0;
}
