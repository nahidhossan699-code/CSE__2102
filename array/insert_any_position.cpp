#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, value, pos;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> pos;
    cin >> value;

    for(int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = value;
    n++;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}