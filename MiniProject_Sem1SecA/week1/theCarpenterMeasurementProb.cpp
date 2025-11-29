#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the first Num : ";
    cin >> num1;
    cout << "Enter the Second num : ";
    cin >> num2;

    int temp1 = num1, temp2 = num2;

    while (num1 % num2 != 0)
    {
        int r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    cout << "GCD is " << num2 << endl;

    int lcm = (temp1 * temp2) / num2;
    cout << "LCM is " << lcm << endl;
}