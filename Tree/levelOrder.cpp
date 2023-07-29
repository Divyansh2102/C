#include<bits/stdc++.h>
using namespace std;
struct treeNode{
    treeNode*left;
    treeNode*right;
    int val;
    treeNode(){val=0,left=NULL;right=NULL;}
    treeNode(int val){this->val=val;left=NULL;right=NULL;}
    treeNode(int val,treeNode*left,treeNode*right){this->val=val;this->left=left;this->right=right;}
};
struct treeNode*create(){
    struct treeNode*temp;
    int data;
    temp=(struct treeNode*)malloc(sizeof(struct treeNode));
    cout<<"\nEnter 0 to exit and 1 to add new node  ";
    int c;
    cin>>c;
    if(c==0)    return 0;
    else{
        cout<<"\nEnter the data  ";
        cin>>data;
        temp->val=data;
        cout<<"\nEnter left child of  "<<data;
        temp->left=create();
        cout<<"\nEnter right child of  "<<data;
        temp->right=create();
    }
    return temp;
}
vector<vector<int>> levelOrder(treeNode*root){
    vector<vector<int>>ans;
    if(root==NULL)  return ans;
    queue<treeNode*>temp;
    temp.push(root);
    while(!temp.empty()){
        vector<int>level;
        int s=temp.size();
        for(int i=0;i<s;i++){
            treeNode*front=temp.front();
            temp.pop();
            if(front->left) temp.push(front->left);
            if(front->right)    temp.push(front->right);
            level.emplace_back(front->val);
        }
        ans.emplace_back(level);
    }
    return ans;
}
int main()
{
    struct treeNode*root;
    root=create();
    vector<vector<int>>ans=levelOrder(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<"  ";
        cout<<endl;
    }
    return 0;
}
