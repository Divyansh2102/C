#include<stdio.h>
#include<stdlib.h>
void linear_search(int a[],int n,int ele){
    int i;
    for(i=0;i<n;i+=1){
        if(a[i]==ele){
            printf("\nThe element found at index %d",i+1);
            break;
        }
    }
    if(i==n)
        printf("\nThe element is not present in the array ");
}
void main(){
    int n,ele;
    printf("\nEnter the size of the array ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements of array  ");
    for(int i=0;i<n;i+=1){
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to find  ");
    scanf("%d",&ele);
    linear_search(a,n,ele);
    free(a);
}