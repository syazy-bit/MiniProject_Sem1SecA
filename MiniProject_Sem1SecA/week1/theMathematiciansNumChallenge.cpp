#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " Even Number." << endl;
    else
        cout << num << " Odd Number." << endl;

    if (num <= 1)
    {
        cout << "Not Prime" << endl;
    }
    else
    {
        int i;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                cout << "Not Prime" << endl;
                break;
            }
        }

        if (i > num / 2)
        {
            cout << " Prime" << endl;
        }
    }

    return 0;
}