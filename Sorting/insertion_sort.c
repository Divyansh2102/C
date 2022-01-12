#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int a[],int n){
    int i,j,temp;
    for(i=1;i<n;i+=1){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main(){
    int n;
    printf("\nEnter the size of the array  ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int ));
    printf("\nEnter the elements ");
    for(int i=0;i<n;i+=1)
        scanf("%d",&a[i]);
    insertion_sort(a,n);
    printf("\nThe sorted arra is ");
    for(int i=0;i<n;i+=1)
        printf(" %d ",a[i]);
}