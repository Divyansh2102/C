/*
    Sum the numbers of 2 given array and store them
        example:-
            a[3]={1,2,3}
            b[1]={4}
            So after adding array a and b we get
            c[3]={1,2,7}
            
            a[3]={9,9,9}
            b[3]={9,9,9}
            c[4]={1,9,9,8)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"\nEnter the size of both the array  ";
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    cout<<"\nEnter the elements of array 1  ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"\nEnter the elements of array 2  ";
    for(int i=0;i<m;i++)
        cin>>b[i];
    int n1=0,n2=0,k=0;
    for(int i=n-1;i>=0;i--){
        n1+=pow(10,k)*a[i];
        k++;
    }
    k=0;
    for(int i=m-1;i>=0;i--){
        n2+=pow(10,k)*b[i];
        k++;
    }
    int res=n1+n2;
    vector<int>v;
    while(res){
        v.insert(v.begin(),res%10);
        res/=10;
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
