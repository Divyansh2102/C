#include<stdio.h>
#include<stdlib.h>
int enqueue(int a[],int n,int f,int r){
	if(r==n-1)
		printf("\nFULL");
	else if(f==-1&&r==-1){
		f=r=0;
		printf("\nEnter data  ");
		scanf("%d",&a[r]);
	}
	else{
		r++;
		printf("\nEnter data  ");
		scanf("%d",&a[r]);
	}
	return r;
}

int dequeue(int a[],int n,int f,int r){
	if(f==-1)
		printf("\nEmpty");
	else if(f==r){
		printf("\nThe deleted element is %d",a[f]);
		f=r=-1;
	}
	else{
		printf("\nThe deleted element is %d",a[f]);
		f++;
	}
	return f;
}

void display(int a[],int n,int f,int r){
	int i;
	if(f==-1)
		printf("\nEmpty");
	else{
		printf("\nThe elements are   ");
		for(i=f;i<=(r);i++)
			printf("   %d  ",a[i]);
	}
}

int main(){
	int  c,n,*a,f=-1,r=-1;
	printf("\nEnter the size  ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nMENU\n1.Enqueue\t2.Dequeue\t3.Display\n");
	do{
		printf("\nEnter choice   ");
		scanf("%d",&c);
		switch(c){
				case 1:
						r=enqueue(a,n,f,r);
						if(r==0)
							f=0;
						break;
				case 2:
						f=dequeue(a,n,f,r);
						if(f>r)
							f=r=-1;
						break;
				case 3:
						display(a,n,f,r);
						break;
				default:
						printf("\nExiting.....");
						exit(0);
		}
	}while(c);
	return 0;
}
