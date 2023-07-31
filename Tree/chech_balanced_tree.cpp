#include<bits/stdc++.h>
using namespace std;
struct tree{
    int val;
    struct tree*left;
    struct tree*right;
    tree(){val=0;left=NULL,right=NULL;}
    tree(int val){this->val=val;left=NULL,right=NULL;}
    tree(int val,tree*left,tree*right){this->val=val;this->left=left;this->right=right;}
};

struct tree*create(){
    int data,c;
    cout<<"\nEnter 1 to add node 0 to exit  : ";
    cin>>c;
    if(c==0)    return 0;
    else{
        struct tree*temp=(struct tree*)malloc(sizeof(struct tree));
        cout<<"\nEnter the data  : ";
        cin>>data;
        cout<<"\nEnter the left chlid of "<<data<<" :   ";
        temp->left=create();
        cout<<"\nEnter the right chlid of "<<data<<" :   ";
        temp->right=create();
        return temp;
    }
}

int check(struct tree*root){
    if(root==NULL)  return 0;
    int lft=check(root->left);
    int rgt=check(root->right);
    if(abs(lft-rgt)>1)  return -1;
    return max(lft,rgt)+1;
}

int main()
{
    struct tree*root=create();
    int ans=check(root);
    if(ans<=0)  cout<<"\nNot a balanced tree  ";
    else    cout<<"\nBalanced tree ";
    return 0;
}