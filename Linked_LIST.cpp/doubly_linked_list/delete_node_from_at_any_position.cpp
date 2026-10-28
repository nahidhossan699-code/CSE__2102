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
void insert_at_any_position(node* &head,int idx)
{
    node* newnode=new node(200);
    node* temp=head;
    int i=1;
    while(i<idx)
    {
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
};
void print_the_list_forword(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;

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
    insert_at_any_position(head,3);
    print_the_list_forword(head);


    return 0;
}