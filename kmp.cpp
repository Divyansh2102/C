#include<bits/stdc++.h>
using namespace std;
int flag=0;
void calLPS(string &pat,int m,vector<int> &lps){
    int len=0;
    int i=1;
    lps[0]=0;
    while(i<m){
        if(pat[i]==pat[len]){
            len+=1;
            lps[i]=len;
            i+=1;
        }
        else{
            if(len!=0){
                len=lps[pat[len-1]];
            }
            else{
                lps[i]=0;
                i+=1;
            }
        }
    }
}
void kmp(string &txt,string &pat){
    int n=txt.length();
    int m=pat.length();
    vector<int>lps(m,0);
    calLPS(pat,m,lps);
    int i=0,j=0;
    while((n-i)>=(m-j)){
        if(txt[i]==pat[j]){
            i+=1;
            j+=1;
        }
        if(j==m){
            cout<<"String found at "<<i-j<<endl;
            flag=1;
            j=lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i]){
            if(j!=0)    j=lps[j-i];
            else    i+=1;
        }
    }
}
int main()
{
    string mainS="",findS="";
    cout<<"\nEnter the main string and the string to find  ";
    cin>>mainS>>findS;
    kmp(mainS,findS);
    if(flag==0) cout<<"\nNot Found";
    return 0;
}