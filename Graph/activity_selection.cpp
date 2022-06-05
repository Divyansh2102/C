#include<bits/stdc++.h>
using namespace std;
struct Item{
    int start,end;
};
bool cmp(Item a,Item b){
    return (a.end<b.end);
}
void activity(struct Item a[],int n){
    sort(a,a+n,cmp);
    int i=0;
    cout<<"\nFollowing activities are selected -> ";
    cout<<"("<<a[i].start<<" , "<<a[i].end<<"), ";
    for(int j=0;j<n;j++){
        if(a[j].start>=a[i].end){
            cout<<"("<<a[j].start<<" , "<<a[j].end<<"), ";
            i=j;
        }
    }
}

int main(){
    int n;
    cout<<"\nEnter the total number of activities  ";
    cin>>n;
    Item a[n];
    cout<<"\nEnter the start and end time of activities ";
    for(int i=0;i<n;i++)
        cin>>a[i].start>>a[i].end;
    activity(a,n);
    return 0;
}
