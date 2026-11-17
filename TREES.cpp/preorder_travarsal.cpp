#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*left;
    node*right;
    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder_traversal(node * root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);

};
int main()
{
    node* root=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* d=new node(50);

    root->left=a;
    root->right=b;
    a->left=c;
    b->right=d;
    preorder_traversal(root);

    return 0;
}