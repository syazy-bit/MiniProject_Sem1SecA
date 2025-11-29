#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the total nums of reading: ";
    cin >> n;

    int positive = 0, negative = 0, zero = 0;
    int value;

    cout << "Enter " << n << "temperature readings  :";
    for (int i = 0; i < n; i++)
    {
        cin >> value;

        if (value > 0)
            positive++;
        else if (value < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive " << positive << endl;
    cout << "Negative " << negative << endl;
    cout << "Zero " << zero << endl;

    return 0;
}