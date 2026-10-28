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

void insert_any_position(node*& head, int pos, int val)
{
    node* newnode = new node(val);

    if (pos < 1)
    {
        delete newnode;
        return;
    }

    if (pos == 1)
    {
        newnode->next = head;

        if (head != NULL)
        {
            head->prev = newnode;
        }

        head = newnode;
        return;
    }

    node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        delete newnode;
        return;
    }

    newnode->next = temp->next;
    newnode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newnode;
    }

    temp->next = newnode;
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

    insert_any_position(head, 2, 15);

    print(head);

    return 0;
}