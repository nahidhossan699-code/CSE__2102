#include <iostream>
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // ================= INSERT AT BEGINNING =================
    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    for(int i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = value;
    n++;

    cout << "After insertion at beginning: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";


    // ================= INSERT AT END =================
    cout << "\nEnter value to insert at end: ";
    cin >> value;

    a[n] = value;
    n++;

    cout << "After insertion at end: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";


    // ================= INSERT AT ANY POSITION =================
    int pos;

    cout << "\nEnter position to insert: ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    // Position starts from 1
    for(int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;
    n++;

    cout << "After insertion at position: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";


    // ================= DELETE FROM BEGINNING =================
    for(int i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    cout << "\nAfter deletion from beginning: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";


    // ================= DELETE FROM END =================
    n--;

    cout << "\nAfter deletion from end: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";


    // ================= DELETE FROM ANY POSITION =================
    cout << "\nEnter position to delete: ";
    cin >> pos;

    for(int i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    cout << "After deletion at position: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}