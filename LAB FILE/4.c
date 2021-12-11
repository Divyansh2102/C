#include<stdio.h>
#include<stdlib.h>
int push(int a[],int n,int *top){
	if(*top==n-1)
		printf("\nFULL  ");
	else{
		printf("\nEnter element   ");
		(*top)++;			
		scanf("%d",&a[*top]);
	}
	return 0;
}

void pop(int a[],int *top){
	if(*top==-1)
		printf("\nEmpty ");
	else{
		printf("\nThe poped element is  %d  ",a[*top]);
		(*top)--;
	}
}

void peek(int a[],int *top){
	if(*top==-1)
		printf("\nEmpty ");
	else{
		printf("\nThe peeked element is   %d ",a[*top]);
	}
}

int disp(int a[],int top){
	int i=0;
	if(top==-1)
		printf("\nEmpty ");
	else{
		printf("\nThe elements are   ");
		for(int i=top;i>-1;i--)
			printf("  %d  ",a[i]);
	}
	return top;
}

int main(){
	int c,n,*a,top=-1;
	printf("\nEnter the size of stack  ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nMENU\n1.PUSH\t2.POP\t3.PEEK\t4.DISPLAY\n");
	do{
		printf("\nEnter choice   ");
		scanf("%d",&c);
		switch(c){
			case 1:
				push(a,n,&top);
				break;
			case 2:
				pop(a,&top);
				break;
			case 3:
				peek(a,&top);
				break;
			case 4:
				disp(a,top);
				break;
			default:
				printf("\nEXITING.....");
				exit(0);
			}
		}while(c);
	free(a);
	return 0;
}
