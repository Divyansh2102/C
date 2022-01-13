//Currently this program is not working


#include<stdio.h>
#include<stdlib.h>
int highest(int a[],int n){
    int l=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>l)
            l=a[i];
    }
    return l;
}
void count_sort(int a[],int n){
    int k=highest(a,n);
    int count[k+1],b[n];
    for(int i=0;i<n;i++)
        ++(count[a[i]]);
    for(int i=0;i<n;i++){
        for(int j=0;j<count[a[j]];j++)
            b[count[i]]=count[a[j]];
    }
    for(int i=0;i<n;i++)
        printf("  %d  ",b[i]);
        
}
int main(){
    int n;
    printf("\nEnter the size of the array  ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    printf("\nEnter the elements  ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    count_sort(a,n);
    free(a);
    return 0;
}