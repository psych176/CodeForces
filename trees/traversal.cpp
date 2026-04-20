#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int k;
    node* left=NULL;
    node* right=NULL;
};
void inorder(node* root) //left root right
{
     if(root==NULL)
     {
        return;
     }
     inorder(root->left);
     cout<<root->k<<" ";
     inorder(root->right);
}
void preorder(node* root) //root left right
{
    if(root==NULL)
    return;
    cout<<root->k<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root) //left right root
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->k<<" ";
}
int main()
{
    node* r=new node;
    r->k=1;
    r->left=new node;
    r->left->k=2;
    r->right=new node;
    r->right->k=3;
    r->right->left=new node;
    r->right->left->k=6;
    r->left->left=new node;
    r->left->left->k=4;
    r->left->right=new node;
    r->left->right->k=5;
    inorder(r);
    cout<<endl;
    preorder(r);
    cout<<endl;
    postorder(r);
}