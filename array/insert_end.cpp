#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, value;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> value;

    arr[n] = value;
    n++;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}