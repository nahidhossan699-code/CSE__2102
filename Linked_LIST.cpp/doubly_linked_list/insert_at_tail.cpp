#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node* next;
    node* prev;

    node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

void insert_tail(node* head, int val)
{
    node* newnode = new node(val);
    node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

void print(node* head)
{
    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    insert_tail(head, 40);

    print(head);

    return 0;
}