#include<bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    vector<list<int>>adj;
    public:
        Graph(int v){
            this->v=v;
            adj.resize(v);
        }
        void addEdges(int,int);
        void bfs(int);
};

void Graph::addEdges(int v,int w){
    adj[v].push_back(w);
}
void Graph::bfs(int s){
    vector<bool>visited;
    visited.resize(v,false);
    list<int>queue;
    visited[s]=true;
    queue.push_back(s);
    while(!queue.empty()){
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();
        for(auto ad:adj[s]){
            if(!visited[ad]){
                visited[ad]=true;
                queue.push_back(ad);
            }
        }
    }
}
int main(){
    int v,w,d;
    cout<<"\nEnter the number of vertices ";
    cin>>d;
    Graph g(d);
    cout<<"\nEnter the number of vertices and edges pair ";
    cin>>d;
    cout<<"\nEnter the node and egdes ";
    for(int i=0;i<d;i++){
        cin>>v>>w;
        g.addEdges(v,w);
    }
    cout<<"\nEnter the node to start from ";
    cin>>d;
    g.bfs(d);
    return 0;
}