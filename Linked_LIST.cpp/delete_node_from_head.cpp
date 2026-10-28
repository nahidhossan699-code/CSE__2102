
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

void delete_head(node* &head)
{
    if (head == NULL)
        return;

    node* temp = head;
    head = head->next;
    delete temp;
}

int main()
{
    node* head = new node(10);
    node *a= new node(20);
    node *b= new node(30);
    head->next=a;
    a->next=b;

    delete_head(head);

    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<endl;
        temp = temp->next;
    }

    return 0;
}
