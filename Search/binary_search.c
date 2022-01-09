#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int beg,int end,int x){
    int mid=(beg+end)/2;
    while (end>=beg)
    {
        if(a[mid]==x)
             return mid;
         else if(a[mid]>x)
             return binary_search(a,beg,mid-1,x);
         else
             return binary_search(a,mid+1,end,x);
    }
    return -1;
}
int main(){
    int n,ele,result;
    printf("\nEnter the size of the array ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements  ");
    for(int i=0;i<n;i+=1){
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element you want to search ");
    scanf("%d",&ele);
    result=binary_search(a,0,n-1,ele);
    if(result==-1)
        printf("\nElement not found ");
    else
        printf("\nThe element found at index  %d",result+1);
}