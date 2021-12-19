#include<stdio.h>
#include<stdlib.h>

void enqueue(int x,int *f,int *r,int n,int a[]){
	if(*f==-1&&*r==-1){
		*f=*r=0;
		a[*r]=x;
	}
	else{
		(*r)++;
		a[*r]=x;
	}
}		

void dequeue(int *f,int *r,int *a){
	if(*f==*r){
		printf("\nThe dequeued element is  %d",a[*f]);
		*f=*r=-1;
	}
	else{
		printf("\nThe dequeued element is  %d",a[*f]);
		(*f)++;
	}
} 

void peek(int *f,int a[]){
	printf("The front element is  %d  ",a[*f]);
}

void disp(int *f,int *r,int n,int a[]){
	int i;
	for(i=*f;i<(*r)+1;i++)
		printf("   %d  ",a[i]);
}
int main(){
	int r=-1,f=-1,c=1,n,*a;
	printf("\nEnter the size ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\n1.ENQUEUE	2.DEQUEUE	3.PEEK		4.DISPLAY");
	do{
		switch(c){
			case 1:
				if(r==n-1)
					printf("\nFULL");
				else{
					int x;
					printf("\nEnter the element to be inserted  ");
					scanf("%d",&x);
					enqueue(x,&f,&r,n,a);
				}	
				break;
			case 2:
				if(f==-1)
					printf("\nEmpty");
				else{
					dequeue(&f,&r,a);
				}
				break;
			case 3:
				if(f==-1)
					printf("\nEmpty");
				else{
					peek(&f,a);
				}
				break;
			case 4:
				if(f==-1)
					printf("\nEmpty");
				else{
 					disp(&f,&r,n,a);
 				}
 				break;
 			default:
 				printf("\nExiting...");
 				exit(0);
 			}
 			printf("\nEnter the choice   ");
 			scanf("%d",&c);
 	}while(c);
	return 0;
}
