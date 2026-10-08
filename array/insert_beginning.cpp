#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, value;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> value;

    for(int i = n; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = value;
    n++;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}