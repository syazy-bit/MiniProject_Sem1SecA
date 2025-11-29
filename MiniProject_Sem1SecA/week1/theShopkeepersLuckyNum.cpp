#include <iostream>
using namespace std;

int checkNum(int num)
{
    return num % 2;
}

int checkDivisibility(int num)
{
    return num % 5;
}

int main()
{
    int num;
    cout << "Enter your Number : ";
    cin >> num;

    if (checkNum(num) == 0)
    {
        cout << "Even num" << endl;
    }
    else
    {
        cout << "Odd num";
    }

    if (checkDivisibility(num) == 0)
    {
        cout << "Divisible by 5" << endl;
    }
    else
    {
        cout << "Not divisible by 5";
    }

    return 0;
}