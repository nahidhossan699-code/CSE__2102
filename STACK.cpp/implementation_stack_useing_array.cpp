
#include <iostream>
using namespace std;

int stack[100];
int top = -1;

void push(int value)
{
    if(top == 99)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if(top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        top--;
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
