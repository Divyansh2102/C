#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int b[],int lb,int mid,int ub){
	int i=lb,j=mid+1,k=lb;
	while(i<=mid && j<=ub){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;	
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid){
		while(j<=ub){
			b[k]=a[j];
			k++,j++;
		}
	}
	else{
		while(i<=mid){
			b[k]=a[i];
			i++,k++;
		}
	}
	for(k=lb;k<=ub;k++)
		a[k]=b[k];
}
void merge_sort(int a[],int b[],int lb,int ub){
	if(lb<ub){
		int mid=(ub+lb)/2;
		merge_sort(a,b,lb,mid);
		merge_sort(a,b,mid+1,ub);
		merge(a,b,lb,mid,ub);
	}
}
void main(){
	int n;
	printf("\nEnter the size of array  ");
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(n*sizeof(int));
	printf("\nEnter the array elements  ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	merge_sort(a,b,0,n-1);
	printf("\nThe sorted array elements are ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	free(a);
	free(b);
}