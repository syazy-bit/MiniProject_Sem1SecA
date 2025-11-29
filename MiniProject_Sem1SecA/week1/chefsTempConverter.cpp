#include <iostream>
#include <iomanip>
using namespace std;

float celTofarh(float c)
{
    return ((c * 9.0 / 5.0) + 32);
}

int main()
{
    float c;
    cout << "Enter the temperature in celsius : ";
    cin >> c;

    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit is " << celTofarh(c) << endl;
    return 0;
}