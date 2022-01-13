//Currently this program is not working


#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void max_heapify(int a[],int n,int i){
    int largest=i;
    int l=2*i,r=(2*i)+1;
    while (l<=n && a[l]>a[largest]){
        largest=l;
    }
    while (r<=n && a[r]>a[largest]){
        largest=r;
    }
    if(largest !=i){
        swap(&a[largest],&a[i]);
        max_heapify(a,n,largest);
    }
}
void heap_sort(int a[],int n){
    for(int i=n/2;i>=1;i--)
        max_heapify(a,n,i);
    for(int i=n;i>=1;i--){
        swap(&a[1],&a[i]);
        max_heapify(a,n,1);
    }
}
int main(){
    int n;
    printf("\nEnter the size of the array  ");
    scanf("%d",&n);
    printf("\nEnter the elements  ");
    int *a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    heap_sort(a,n);
    printf("\nThe array after sorting is  ");
    for(int i=0;i<n;i++)
        printf("  %d  ",a[i]);
    free(a);
    return 0;
}