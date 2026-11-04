#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int val;
    node* next;
    node* prev;
    node(int val)
    {
        this->val=val;
        next=NULL;
        prev=NULL;
    }
    
};
void forword_traversal(node*head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
void backword_traversal(node*tail)
    {
        node* temp=tail;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->prev;
        }
    }

int main()
{
    node *head=NULL;
    node *tail=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        node * newnode=new node(x);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;

        }
    }
    forword_traversal(head);
    backword_traversal(tail);

    return 0;
}