#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int jump(int a[],int n,int k){
    int st=0,end=sqrt(n),count=0;
    while(a[end]<=k && end<n){
        st=end;
        end+=sqrt(n);
        if(end>n)
            end=n-1;
    }
    for(int i=st;i<end;i++){
        if(a[i]==k)
            count++;
    }
    return count;
}
int main(){
    int n,k,flag=0,count=0;
    printf("\nEnter the size of the array ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
     for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the key you want to find ");
    scanf("%d",&k);
    count=jump(a,n,k);
    if(count==0)
        printf("\nNot present");
    else
        printf("\nThe number of time the element is present is %d",count);
    free(a);
    return 0;
    
}
