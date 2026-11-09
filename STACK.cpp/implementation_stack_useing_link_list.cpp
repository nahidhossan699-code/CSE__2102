#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

node* top = NULL;

void push(int value)
{
    node* newnode = new node(value);

    newnode->next = top;
    top = newnode;
}

void pop()
{
    if(top == NULL)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        node* temp = top;
        top = top->next;
        delete temp;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();

    return 0;
}
