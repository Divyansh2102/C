#include<stdio.h>
#include<stdlib.h>
int largest(int a[],int n){
    int l=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>l)
            l=a[i];
    }
    return l;
}
void radix_sort(int a[],int n){
    int bucket[n][n],bucket_count[n];
    int i,j,k,remainder,nop=0,divisor=1,large,pass;
    large=largest(a,n);
    while (large>0)
    {
        nop++;
        large/=n;
    }
    for(pass=0;pass<nop;pass++){
        for(i=0;i<n;i++)
            bucket_count[i]=0;
        for(i=0;i<n;i++){
            remainder=(a[i]/divisor)%n;
            bucket[remainder][bucket_count[remainder]]=a[i];
            bucket_count[remainder]+=1;
        }
        i=0;
        for(k=0;k<n;k++){
            for(j=0;j<bucket_count[k];j++){
                a[i]=bucket[k][j];
                i++;
            }
        }
        divisor*=n;
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
    radix_sort(a,n);
    printf("\nThe array after sorting is  ");
     for(int i=0;i<n;i++)
        printf("  %d  ",a[i]);
    free(a);
    return 0;
}