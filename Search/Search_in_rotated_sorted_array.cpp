#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int left,int right,int k){
        if(left>right)
            return -1;
        int mid=(left+right)/2;
        if(a[mid]==k)
            return mid;
        if(a[left]<=a[mid]){
            if(k<=a[mid] && k>=a[left])
                return binarySearch(a,left,mid-1,k);
            return binarySearch(a,mid+1,right,k);
        }
        if(k>=a[mid] && k<=a[right])
                return binarySearch(a,mid+1,right,k);
            return binarySearch(a,left,mid-1,k);
}
int main(){
    int n,piv,k;
    cout<<"\nEnter the size ";
    cin>>n;
    int a[n];
    cout<<"\nEnter the array elements ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            piv=i;
            break;
        }
    }
    cout<<"\nEnter the element to be searched ";
    cin>>k;
    int i=binarySearch(a,0,n,k);
    cout<<"\nThe element is at "<<i;
    cout<<"\nThe min element is at "<<piv+1<<" and the element is "<<a[piv+1];
    return 0;
}
