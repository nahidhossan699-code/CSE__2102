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
void insert_at_head(node* &head,int val)
{
    node*newnode=new node(2000);
    newnode->next=head;
    head=newnode;

};
void print_linked_list(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main()
{
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(1000);
    head->next=a;
    a->next=b;
    b->next=c;
    insert_at_head(head,100);
    print_linked_list(head);
    return 0;
}
