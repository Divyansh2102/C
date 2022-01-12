#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int a[],int lb,int ub){
    int pivot= a[lb];
    int start=lb,end=ub;
    while (start<end)
    {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
            swap(&a[start],&a[end]);
    }
    swap(&a[lb],&a[end]);
    return end;
}

void quick_sort(int a[],int lb,int ub){
    if(lb<ub){
        int loc=partition(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }
}
void main(){
    int n;
    printf("\nEnter the size of the array  ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements  ");
    for(int i=0;i<n;i+=1)
        scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    printf("\nThe array after sorting is  ");
    for(int i=0;i<n;i+=1)
        printf("  %d  ",a[i]);
    free(a);

}