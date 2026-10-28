
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

void delete_at_position(node* &head, int pos)
{
    if (head == NULL || pos < 0)
        return;

    if (pos == 0)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node* temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        if (temp->next == NULL)
            return;

        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    node* del = temp->next;
    temp->next = del->next;
    delete del;
}

int main()
{
    node* head = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);

    head->next=b;
    b->next=c;
    c->next=d;
    

    delete_at_position(head, 2);

    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<endl;
        temp = temp->next;
    }

    return 0;
}
