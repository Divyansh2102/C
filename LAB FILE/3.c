#include<stdio.h>
#include<stdlib.h>
int rev(int  a[],int n){
	int temp=0,end=n-1;
	for(int i=0;i<n/2;i++,end--){
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
	}
	return 0;
}
int disp(int a[],int s,int n){
	if(s>=n)
		return 0;
	printf("%d  ",a[s]);
	disp(a,s+1,n);
}
		
int main(){
	int *a,n;
	printf("\nEnter the size of array  ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("\nEnter the elements  ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	rev(a,n);
	disp(a,0,n);
	return 0;
}
