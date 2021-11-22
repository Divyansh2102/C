#include<stdio.h>
#include<stdlib.h>
int *a,*b;
void merge(int a[],int lb,int mid,int ub){
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
void merge_sort(int a[],int lb,int ub){
	if(lb<ub){
		int mid=(ub+lb)/2;
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
void main(){
	int n;
	printf("\nEnter the size of array  ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(n*sizeof(int));
	printf("\nEnter the array elements  ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	merge_sort(a,0,n-1);
	printf("\nThe sorted array elements are ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	free(a);
	free(b);
}
