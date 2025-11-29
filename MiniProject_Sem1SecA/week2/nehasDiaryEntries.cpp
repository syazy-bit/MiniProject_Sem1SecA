#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int arr[n];
    cout << "Enter the times of " << n << "days : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "excersised time: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}