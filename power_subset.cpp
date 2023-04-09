#include<bits/stdc++.h>
using namespace std;
void solve(string s,string temp){
    if(s.size()==0){
        cout<<temp<<endl;
        return;
    }
    solve(s.substr(1),temp);
    solve(s.substr(1),temp+s[0]);
}
int main()
{
    string s="abcdef";
    string temp="";
    solve(s,"");
    return 0;
}
//to get the result in sorted order insted of printing store the temp in a vector of string and sort it .