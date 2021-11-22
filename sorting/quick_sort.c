#include<stdio.h>
#include<stdlib.h>
int *a;
void swap(int *c,int *d){
	int temp=*c;
	*c=*d;
	*d=temp;
}
int partition(int a[],int lb,int ub){
	int piviot= a[lb];
	int i=lb,j=ub;
	while(i<j){
		while(a[i]<=piviot)
			i++;
		while(a[j]>piviot)
			j--;
		if(i<j)
			swap(&a[i],&a[j]);
	}
	swap(&a[lb],&a[j]);
	return j;
}
void quicksort(int a[],int lb,int ub){
	if(lb<ub){
		int loc=partition(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
}	
void main(){
	 int n;
	 printf("\nEnter the size of array  ");
	 scanf("%d",&n);
	 a=(int *)malloc(n*sizeof(int));
	 printf("\nEnter the array elements ");
	 for(int i=0;i<n;i++)
	 	scanf("%d",&a[i]);
	 quicksort(a,0,n-1);
	 printf("\nThe sorted array is ");
	  for(int i=0;i<n;i++)
	 	printf("%d ",a[i]);
	 free(a);
}

