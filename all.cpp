// //Selection sort
// #include<bits/stdc++.h>
// using namespace std;
// void sel(int a[],int n){
//     int min;
//     for(int i=0;i<n-1;i++){
//         min=i;
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[min])
//                 min=j;
//         }
//         if(min!=i){
//             int temp=a[i];
//             a[i]=a[min];
//             a[min]=temp;
//         }
//     }
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<"  ";
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     sel(a,n);
//     return 0;
// }

// //Bubble sorting
// #include<bits/stdc++.h>
// using namespace std;
// void bub(int a[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i;j++){
//             if(a[j]>a[j+1]){
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<"  ";
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     bub(a,n);
//     return 0;
// }

// //Insertion sort
// #include<bits/stdc++.h>
// using namespace std;
// void ins(int a[],int n){
//     int temp,j,i;
//     for(i=1;i<n;i++){
//         temp=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>temp){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=temp;
//     }
//     for(i=0;i<n;i++)
//         cout<<a[i]<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     ins(a,n);
//     return 0;
// }

// //Quick sort
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int a[],int l,int h){
//     int temp=a[h];
//     a[h]=a[l];
//     a[l]=temp;
// }
// int partition(int a[],int l,int h){
//     int i=l,j=h,piv=a[l];
//     while (i<j)
//     {
//         do{
//             i++;
//         }while(a[i]<=piv);
//         do{
//             j--;
//         }while(a[j]>piv);
//         if(i<j)
//             swap(a,i,j);
//     }
//     swap(a,l,j);
//     return j;
// }
// void quick(int a[],int l,int h){
//     if(l<h){
//         int index=partition(a,l,h);
//         quick(a,l,index);
//         quick(a,index+1,h);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     quick(a,0,n-1);
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<"  ";
//     return 0;
// }


// //Count sort
// #include<bits/stdc++.h>
// using namespace std;
// int m(int a[],int n){
//     int max=-989999;
//     for(int i=0;i<n;i++){
//         if(a[i]>max)
//             max=a[i];
//     }
//     return max;
// }
// void count(int a[],int n){
//     int max=m(a,n),out[n];
//     int count[max+1]={0};
//     for(int i=0;i<n;i++)
//         count[a[i]]++;
//     for(int i=1;i<=max;i++)
//         count[i]+=count[i-1];
//     for(int i=n-1;i>=0;i--){
//         out[--count[a[i]]]=a[i];
//     }
//     for(int i=0;i<n;i++)
//         a[i]=out[i];
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     count(a,n);
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<"  ";
// }


// //Merge sort
// #include<iostream>
// using namespace std;
// void merge(int a[],int l,int mid,int h){
//     int n1=mid-l+1;
//     int n2=h-mid;
//     int le[n1],ri[n2];
//     int i,j,k;
//     for(i=0;i<n1;i++)
//         le[i]=a[i+l];
//     for(int j=0;j<n2;j++)
//         ri[j]=a[mid+j+1];
//     i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(le[i]<=ri[j]){
//             a[k]=le[i];
//             i++;
//         }
//         else{
//             a[k]=ri[j];
//             j++;
//         }
//         k++;
//     }
//     while (i<n1)
//     {
//         a[k]=le[i];
//         i++,k++;
//     }
//     while (j<n2)
//     {
//         a[k]=ri[j];
//         j++,k++;
//     }
// }
// void mergeSort(int a[],int l,int h){
//     if(l<h){
//         int mid=(l+h)/2;
//         mergeSort(a,l,mid);
//         mergeSort(a,mid+1,h);
//         merge(a,l,mid,h);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     mergeSort(a,0,n);
//     for (int i=0;i<n;i++)
//         cout<<a[i]<<" ";
//     return 0;
// }


// //BFS Traversal
// #include<bits/stdc++.h>
// using namespace std;
// class graph{
//     int v;
//     vector<vector<int>>adj;
//     public:
//         graph(int v){
//             this->v=v;
//             adj.resize(v);
//         }
//         void addEdges(int,int);
//         void bfs(int);
// };

// void graph::addEdges(int v,int w){
//     adj[v].push_back(w);
// }
// void graph::bfs(int s){
//     vector<bool>visited(v,false);
//     list<int>q;
//     visited[s]=true;
//     q.push_back(s);
//     while(!q.empty()){
//         s=q.front();
//         cout<<s<<" ";
//         q.pop_front();
//         for(auto ad:adj[s]){
//             if(!visited[ad]){
//                 visited[ad]=true;
//                 q.push_back(ad);
//             }
//         }
//     }
// }

// int main(){
//     int n,m;
//     cout<<"\nEnter the number of vertices and edges ";
//     cin>>n>>m;
//     graph g(n);
//     cout<<"\nEnter the connections ";
//     for(int i=0;i<m;i++){
//         int x,y;
//         cin>>x>>y;
//         g.addEdges(x,y);
//     }
//     cout<<"\nEnter the starting vertice ";
//     cin>>m;
//     g.bfs(m);
//     return 0;
// }



// //BFS path finding
// #include<bits/stdc++.h>
// using namespace std;
// class graph{
//     int v;
//     vector<vector<int>>adj;
//     public:
//         graph(int v){
//             this->v=v;
//             adj.resize(v);
//         }
//         void addEdges(int,int);
//         bool bfs(int,int);
// };

// void graph::addEdges(int v,int w){
//     adj[v].push_back(w);
// }
// bool graph::bfs(int s,int d){
//     vector<bool>visited(v,false);
//     list<int>q;
//     visited[s]=true;
//     q.push_back(s);
//     while(!q.empty()){
//         s=q.front();
//         //cout<<s<<" ";
//         q.pop_front();
//         for(auto ad:adj[s]){
//             if(!visited[ad]){
//                 visited[ad]=true;
//                 q.push_back(ad);
//                 if(ad==d){
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int n,m;
//     cout<<"\nEnter the number of vertices and edges ";
//     cin>>n>>m;
//     graph g(n);
//     cout<<"\nEnter the connections ";
//     for(int i=0;i<m;i++){
//         int x,y;
//         cin>>x>>y;
//         g.addEdges(x,y);
//     }
//     cout<<"\nEnter the starting vertice and destination vertice ";
//     cin>>m>>n;
//     if(g.bfs(m,n))
//         cout<<"\nPath";
//     else
//         cout<<"\nNo path";
//     return 0;
// }


// //DFS traversal
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>graph;
// void dfs(int s,vector<bool>&visited){
//     visited[s]=true;
//     cout<<s<<" ";
//     for(int i=0;i<graph[s].size();i++){
//         if(graph[s][i]==1 && !visited[i])
//             dfs(i,visited);
//     }
// }
// int main(){
//     int n,m;
//     cout<<"\nEnter the vertices and edges  ";
//     cin>>n>>m;
//     graph=vector<vector<int>>(n,vector<int>(n,0));
//     cout<<"\nEnter the connections ";
//     for(int i=0;i<m;i++){
//         int x,y;
//         cin>>x>>y;
//         graph[x][y]=1;
//         graph[y][x]=1;
//     }
//     vector<bool>visited(n,false);
//     cout<<"\nEnter the starting node ";
//     cin>>m;
//     dfs(m,visited);
// }



// //DFS path finding
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>graph;
// void dfs(int s,vector<bool>&visited){
//     visited[s]=true;
//     for(int i=0;i<graph[s].size();i++){
//         if(graph[s][i]==1 && !visited[i])
//             dfs(i,visited);
//     }
// }
// int main(){
//     int n,m;
//     cout<<"\nEnter the vertices and edges  ";
//     cin>>n>>m;
//     graph=vector<vector<int>>(n,vector<int>(n,0));
//     cout<<"\nEnter the connections ";
//     for(int i=0;i<m;i++){
//         int x,y;
//         cin>>x>>y;
//         graph[x][y]=1;
//         graph[y][x]=1;
//     }
//     vector<bool>visited(n,false);
//     cout<<"\nEnter the starting node and destination ";
//     cin>>m>>n;
//     dfs(m,visited);
//     if(visited[n]==true)
//         cout<<"\nPath";
//     else
//         cout<<"\nNo path";
//     return 0;
// }



// //Cycle in undirected graph
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>graph;
// bool cycle(int s,vector<bool>&vis,vector<bool>&res){
//     vis[s]=true;
//     res[s]=true;
//     for(int i=0;i<graph[s].size();i++){
//         if(graph[s][i]==1 && !vis[i]){
//             if(cycle(i,vis,res))
//                 return true;
//         }
//         else if(graph[s][i]==1 && res[i])
//             return true;
//     }
//     res[s]=false;
//     return false;
// }
// int main(){
//     int n,m;
//     cout<<"\nEnter the vertices and edges  ";
//     cin>>n>>m;
//     graph=vector<vector<int>>(n,vector<int>(n,0));
//     for(int i=0;i<m;i++){
//         int x,y;
//         cin>>x>>y;
//         graph[x][y]=1;
//     }
//     vector<bool>vis(n,false);
//     for(int i=0;i<n;i++){
//         vector<bool>res(n,false);
//         if(!vis[i]){
//             if(cycle(i,vis,res)){
//                 cout<<"\nCycle";
//                 return 0;
//             }
//         }
//     }
//     cout<<"\nNo cycle ";
//     return 0;
// }



// // 0/1 Knapsack
// #include<bits/stdc++.h>
// using namespace std;
// int max(int a,int b){
//     return a>b?a:b;
// }
// int frac(int p[],int w[],int n,int W){
//     if(W==0 || n==0)
//         return 0;
//     if(w[n-1]>W)
//         return frac(p,w,n-1,W);
//     else
//         return max(frac(p,w,n-1,W),p[n-1]+frac(p,w,n-1,W-w[n-1]));
    
// }
// int main(){
//     int n,W;
//     cout<<"\nEnter the number of items  ";
//     cin>>n;
//     int p[n],w[n];
//     cout<<"\nEnter the profit and wgt of items sorted acc to wgt   ";
//     for(int i=0;i<n;i++){
//         cin>>p[i]>>w[i];
//     }
//     cout<<"\nEnter the wgt of the bag  ";
//     cin>>W;
//     cout<<frac(p,w,n,W);
//     return 0;
// }



// //Fractional knapsack
// #include<bits/stdc++.h>
// using namespace std;
// struct t{
//     int p,wgt;
// };
// bool cmp(t a,t b){
//     double r1=(double)a.p/(double)a.wgt;
//     double r2=(double)b.p/(double)b.wgt;
//     return r1>r2;
// }
// double fracK(struct t a[],int n,int W){
//     sort(a,a+n,cmp);
//     double ans=0.0;
//     for(int i=0;i<n;i++){
//         if(a[i].wgt<=W){
//             ans+=a[i].p;
//             W-=a[i].wgt;
//         }
//         else{
//             ans+=a[i].p*((double)W/(double)a[i].wgt);
//             break;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n,m;
//     cout<<"\nEnter the number of items ";
//     cin>>n;
//     t a[n];
//     cout<<"\nEnter the profit and wgt of the items ";
//     for(int i=0;i<n;i++){
//         cin>>a[i].p>>a[i].wgt;
//     }
//     cout<<"\nEnter the wgt of bag ";
//     cin>>m;
//     cout<<fracK(a,n,m);
//     return 0;
// }



// //Activity selection 
// #include<bits/stdc++.h>
// using namespace std;
// struct t{
//     int st,end;
// };

// bool cmp(t a,t b){
//     return a.end<b.end;
// }
// void acti(struct t a[],int n){
//     sort(a,a+n,cmp);
//     int i=0;
//     cout<<"\nSelected activities are   ";
//     cout<<a[i].st<<"  "<<a[i].end<<"  , ";
//     for(int j=0;j<n;j++){
//         if(a[j].st>=a[i].end){
//             cout<<a[j].st<<"  "<<a[j].end<<" , ";
//             i=j;
//         }
//     }
    
// }
// int main(){
//     int n;
//     cout<<"\nEnter the number of activities  ";
//     cin>>n;
//     t a[n];
//     cout<<"\nEnter the start and end  ";
//     for(int i=0;i<n;i++)
//         cin>>a[i].st>>a[i].end;
//     acti(a,n);
//     return 0;
// }


// //Job secquencing 
// #include<bits/stdc++.h>
// using namespace std;
// struct job{
//     int id,profit,dead;
// };
// bool cmp(job a,job b){
//     return a.profit>b.profit;
// }
// void jobs(struct job a[],int n){
//     sort(a,a+n,cmp);
//     vector<bool>slot(n,false);
//     int result[n],maxp=0;
//     for(int i=0;i<n;i++){
//         for(int j=min(n,a[i].dead-1);j>=0;j--){
//             if(slot[j]==false){
//                 slot[j]=true;
//                 result[j]=i;
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(slot[i]){
//             cout<<a[result[i]].id<<"  ";
//             maxp+=a[result[i]].profit;
//         }
//     }
//     cout<<"\nMax Profit "<<maxp;
// }
// int main(){
//     int n;
//     cout<<"\nEnter the number of jobs  ";
//     cin>>n;
//     job a[n];
//     cout<<"\nEnter the id profit and deadline of the jobs   ";
//     for(int i=0;i<n;i++)
//         cin>>a[i].id>>a[i].profit>>a[i].dead;
//     jobs(a,n);
//     return 0;
// }

// //Longest Common Subsequence
// #include<bits/stdc++.h>
// using namespace std;
// int lcs(char *s1,char *s2,int m,int n,vector<vector<int>>&dp){
//     if(m==0 || n==0)
//         return 0;
//     if(s1[m-1]==s2[n-1])
//         return dp[m][n]=1+lcs(s1,s2,m-1,n-1,dp);
//     if(dp[m][n]!=-1)
//         return dp[m][n];
//     else
//         return dp[m][n]=max(lcs(s1,s2,m-1,n,dp),lcs(s1,s2,m,n-1,dp));
// }
// int main(){
//     char s1[]="ABCDEF";
//     char s2[]="BCDFGH";
//     int m=strlen(s1);
//     int n=strlen(s2);
//     vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
//     cout<<"\nLength of longest common subsequence is "<<lcs(s1,s2,m,n,dp);
// }


// //Min coins 
// #include <bits/stdc++.h>  
// using namespace std;
// int dp[1000] = { 0 };
// int minCoins(int coin[],int N, int M) 
// {  
//     for (int i = 0; i <= N; i++)  
//         dp[i] = INT_MAX; 
//     dp[0] = 0; 
//     for (int i = 1; i <= N; i++) {
//         for (int j = 0; j < M; j++) {  
//             if (coin[j] <= i) { 
//                 dp[i] = min(dp[i], 1 + dp[i - coin[j]]);  
//             }  
//         }  
//     }  
//     return dp[N];  
// }  
// int main()  
// {  
//     int tc,sum;
//     cout<<"\nEnter the total number of coins ";
//     cin>>tc;
//     int coin[tc];
//     cout<<"\nEnter the coins  ";
//     for(int i=0;i<tc;i++)
//         cin>>coin[i];
//     cout<<"\nEnter the sum ";
//     cin>>sum;
//     cout << "Minimum coins needed are " << minCoins(coin,sum, tc);  
// }  


// //Fibo number
// #include<bits/stdc++.h>
// using namespace std;
// #define max 50
// int lookup[max];
// void ini(){
//     for(int i=0;i<max;i++)
//         lookup[i]=-1;
// }
// int fibo(int n){
//     if(lookup[n]==-1){
//         if(n<=1)
//             lookup[n]=n;
//         else
//             lookup[n]=fibo(n-1)+fibo(n-2);
//     }
//     return lookup[n];
// }
// int main(){
//     int n;
//     cout<<"\nEnter the Nth number to find which number is thier ";
//     cin>>n;
//     ini();
//     cout<<fibo(n);
//     return 0;
// }

// //Longest substring without repeating char
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cout<<"\nEnter the string  ";
//     cin>>s;
//     vector<int>dict(256,-1);
//     int maxLen=0,start=-1;
//     for(int i=0;i<s.size();i++){
//         if(dict[s[i]]>start)
//             start=dict[s[i]];
//         dict[s[i]]=i;
//         maxLen=max(maxLen,i-start);
//     }
//     cout<<"\nMax length : "<<maxLen;
//     return 0;
// }



// //Prims Algo
// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int> > graph;
// typedef pair<int ,int> ipair;
// int mst(int n,vector<bool>& vis)
// {
// priority_queue<ipair,vector<ipair>,greater<ipair>>q;
// q.push(make_pair(0,0));
// int ans=0;
// while(!q.empty())
// {
//      int u=q.top().second;
//      int w=q.top().first;
//      q.pop();
//      if(vis[u])
//      {
//         continue;
//      }
//     ans=ans+w;
//     vis[u]=true;
//     for(int i=0;i<graph[u].size();i++)
//     {
//         int v,wt;
//          if(graph[u][i]>=1)
//          {
//           v=i;
//           wt=graph[u][i];
//          if(vis[v]==false)
//          {
//             q.push(make_pair(wt,v));
//          }
//          }
//     }
// }
// return ans;
// }
// int main()
// {
//    int n;
//    cout<<"enter number of vertices"<<endl;
//    cin>>n;
//    int m;
//    cout<<"enter number of edges"<<endl;
//    cin>>m;
//    graph = vector<vector<int> >(n, vector<int>(n, 0));
//    cout<<"enter connection edges"<<endl;
//     for(int i=0;i<m;i++)
//     {
//     int x,y,w;
//     cin>>x>>y>>w;
//     graph[x][y] = w;
//     graph[y][x] = w;
//     }
//     vector<bool> vis(n,false);
//     cout<<mst(n,vis)<<endl;
//     return 0;
// }


//Dijkstras Algo
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > graph;
typedef pair<int ,int> ipair;
void mst(int n,int s)
{
    int ans[n];
    for(int i=0;i<n;i++)
    {
        ans[i]=1000000;
    }
priority_queue<ipair,vector<ipair>,greater<ipair>>q;
q.push(make_pair(0,s));
ans[s]=0;
while(!q.empty())
{
     int u=q.top().second;
     q.pop();
    for(int i=0;i<graph[u].size();i++)
    {
        int v,wt;
         if(graph[u][i]>=1)
        {
          v=i;
          wt=graph[u][i];
         if(ans[v]>ans[u]+wt)
         {
             ans[v]=ans[u]+wt;
            q.push(make_pair(ans[v],v));
         }
         }
    }
}
    cout<<"\n";
  for(int i=0;i<n;i++)
    {
        cout<<s<<"-"<<i<<"-"<<ans[i]<<endl;
    }
}
int main()
{
   int n;
   cout<<"enter number of vertices"<<endl;
   cin>>n;
   int m;
   cout<<"enter number of edges"<<endl;
   cin>>m;
   graph = vector<vector<int>>(n, vector<int>(n, 0));
   cout<<"enter connection edges"<<endl;
    for(int i=0;i<m;i++)
    {
    int x,y,w;
    cin>>x>>y>>w;
    graph[x][y] = w;
    graph[y][x] = w;
    }
    mst(n,3);
    return 0;
}