#include<stdio.h>
#include<stdlib.h>
void selection_sort(int a[],int n){
    int i,j,min;
    for(i=0;i<n-1;i+=1){
        min=i;
        for(j=i+1;j<n;j+=1){
            if(a[j]<a[min]){
                min=j;
                /*int temp=a[min];
                a[min]=a[j];
                a[j]=temp;*/
            }
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
int main(){
    int n;
    printf("\nEnter the size of the array ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("\nEnetr the elements  ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    selection_sort(a,n);
    printf("\nThe sorted array is  ");
    for(int i=0;i<n;i++)
        printf(" %d ",a[i]);
}