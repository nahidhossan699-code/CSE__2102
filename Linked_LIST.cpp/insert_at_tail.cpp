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
        this->next=next;
    }

};
void insert_at_tail(node* &head,int val)
{
    node* newnode=new node(1000);
    node*temp=head;
    temp->next->next->next=newnode;
};
void print_insert_at_tail(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
};
int main()
{
    node* head=new node(100);
    node* a=new node(200);
    node* b=new node(300);
    head->next=a;
    a->next=b;
    insert_at_tail(head,100);
    print_insert_at_tail(head);
    return 0;
}