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
    struct tree*temp;
    int data;
    temp=(struct tree*)malloc(sizeof(struct tree));
    cout<<"\nEnter 1 to insert and 0 to exit  :";
    int c;
    cin>>c;
    if(c==0)    return 0;
    else{
        cout<<"\nEnter the value of node: ";cin>>data;
        temp->val = data;
        cout<<"\nEnter the left child of "<<data;
        temp->left=create();
        cout<<"\nEnter the right child of "<<data;
        temp->right=create();
    }
    return temp;
}
int depth(struct tree*root){
    if(root==NULL)  return 0;
    int leftH=depth(root->left)+1;
    int rightH=depth(root->right)+1;
    return max(leftH,rightH);
}
int main()
{
    struct tree*root=create();
    int height=depth(root);
    cout<<"\nThe depth of the tree is : "<<height;
    return 0;
}