#include<bits/stdc++.h>
using namespace std;
void toi(int n,char A,char B,char C){
    if(n==1){
        cout<<"Move from "<<A<<" to "<<B<<endl;
        return;
    }
    toi(n-1,A,C,B);
    cout<<"Move from "<<A<<" to "<<B<<endl;
    toi(n-1,C,B,A);
}
int main()
{
    toi(8,'A','B','C');
    return 0;
}