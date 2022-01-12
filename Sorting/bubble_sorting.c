#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int n){
    int flag=0;
    for(int i=0;i<n-1;i+=1){
        for(int j=0;j<n-1-i;j+=1){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            return;
    }
}
int main(){
    int n;
    printf("\nEnter the size of the array  ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements  ");
    for(int i=0;i<n;i+=1)
        scanf("%d",&a[i]);
    bubble_sort(a,n);
    printf("\nThe array after sorting is  ");
    for(int i=0;i<n;i+=1)
        printf("  %d  ",a[i]);
    free(a);
    return 0;
}
