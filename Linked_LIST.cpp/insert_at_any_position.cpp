#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        node*next=next;
    }
};
void insert_at_position(node* &head,int idx,int val)
{
    node* newnode=new node(5000);
        node* temp=head;
    for(int i=0;i<idx;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

};
void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
};
int main()
{
    node* head=new node(1000);
    node* a=new node(2000);
    node* b=new node(3000);
    head->next=a;
    a->next=b;
    insert_at_position(head,1,5000);
    print(head);
    return 0;
}