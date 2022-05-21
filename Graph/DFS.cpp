#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        map<int,bool>visited;
        map<int,list<int>>adj;
        void addEdges(int,int);
        void dfs(int);
};
void Graph::addEdges(int v,int w){
    adj[v].push_back(w);
}
void Graph::dfs(int v){
    visited[v]=true;
    cout<<v<<" ";
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++){
        if(!visited[*i])
            dfs(*i);
    }
}
int main(){
    int v,w,n;
    Graph g;
    cout<<"Enter the number of edges-direction pair ";
    cin>>n;
    cout<<"\nEnter the edeges,direstion\n";
    for(int i=0;i<n;i++){
        cin>>v>>w;
        g.addEdges(v,w);
    }
    cout<<"\nEnter the node to traverse from  ";
    cin>>n;
    g.dfs(n);
    return 0;
}