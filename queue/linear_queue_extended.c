#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void enqueue(int n,int *a){
	if(f==(n-1)){
		printf("\nFULL");
		return ;
	}
	else if(f==-1&&r==-1){
		f=r=0;
		printf("\nEnter element  ");
		scanf("%d",&a[r]);
	}
	else{
		r++;
		printf("\nEnter element  ");
		scanf("%d",&a[r]);
	}
}

void dequeue(int *a){
	if(f==-1&&r==-1){
		printf("\nEMPTY ");
		return ;
	}
	else if(f==r){
		printf("\nThe deleted element is %d",a[f]);
		f=r=-1;
	}
	else{
		printf("\nThe deleted element is %d",a[f]);
		f++;
	}
}

void peek(int *a){
	if(f==-1&&r==-1){
		printf("\nEMPTY ");
		return ;
	}
	else{
		printf("\nThe front element is %d",a[f]);
	}
}

void display(int *a){
	if(f==-1&&r==-1){
		printf("\nEMPTY ");
		return ;
	}
	else{
		printf("\nThe elements are  :");
		for(int i=f;i<r+1;i++)
			printf(" %d  ",a[i]);
	}
}	
	
void main(){
	int c,n;
	int *a=(int *)malloc(sizeof(int));
	printf("\nEnter the size of queue  ");
	scanf("%d",&n);
	printf("\nMENU\n1.INSERTION\t2.DELETE\t3.PEEK\t\t4.DISPLAY\t5.EXIT\n");
	do{
		printf("\nEnter the choice  ");
		scanf("%d",&c);
		switch(c){
			case 1:
				enqueue(n,a);
				break;
			case 2:
				dequeue(a);
				break;
			case 3:
				peek(a);
				break;
			case 4:
				display(a);
				break;
			default:
				printf("\nEXITING....");
				exit(0);
		}
	}while(c);
}
				
	
