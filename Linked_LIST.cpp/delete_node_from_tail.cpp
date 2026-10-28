
#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void delete_tail(node* &head)
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

int main()
{
    node* head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    head->next=a;
    a->next=b;

    delete_tail(head);

    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
