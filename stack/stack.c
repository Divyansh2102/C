#include<stdlib.h>
#include<stdio.h>
int top=-1,*a;
void push(int n){
		if(top==n-1){
			printf("\nFULL");
			return ;
		}
		else{
			top+=1;
			printf("\nEnter the  element  ");
			scanf("%d",&a[top]);
		}
}
void pop(int n){
	if(top==-1)
		printf("\nEmpty  ");
	else{
		printf("\nThe poped element is  %d  ",a[top]);
		top--;
	}
}

void peek(){	
		if(top==-1)
			printf("\nEmpty  ");
		else{
			printf("\nThe peeked element is %d  ",a[top]);
		}
}

void display(int n){
		int i;
		if(top==-1)
			printf("\nEmpty  ");
		else{
			printf("\n The element are  ");
			for(int i=top;i>=0;i--){
				printf("  %d  ",a[i]);
			}
		}
}

int main(){
	int c,n;
	printf("\nEnter the size of stack you want  ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nMENU\n1.PUSH\t2.POP\t3.PEEK\t4.DISPLAY\t5.EXIT\n");
	do{
		printf("\nEnter choice  ");
		scanf("%d",&c);
		switch(c){	
			case 1:
				push(n);
				break;
			case 2:
				pop(n);
				break;
			case 3:
				peek();
				break;
			case 4:
				display(n);
				break;
			default:
				printf("\nExiting.....");
				exit(0);
		}
	}while(c);
}
