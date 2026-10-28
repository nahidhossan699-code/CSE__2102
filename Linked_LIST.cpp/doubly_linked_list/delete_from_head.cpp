#include<iostream>
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
        this->next=NULL;
        this->prev=NULL;
    }

};
void delete_at_head(node* &head)
{
    node* temp=head;
    temp=temp->next;
    head=temp;
    head->prev=NULL;
    delete temp->prev;
};
void print_the_list_forword(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;

    }
};
void print_the_list_backword(node* tail)
{
    node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;

    }
    cout<<endl;
};
int main()
{
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* d=new node(50);
    node* tail=new node(60);

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    d->next=tail;
    tail->prev=d;
    delete_at_head(head);
    print_the_list_backword(tail);
    print_the_list_forword(head);

    return 0;
}