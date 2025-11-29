#include <iostream>
using namespace std;

int area(int len, int breadth)
{
    return len * breadth;
}

int perimeter(int len, int breadth)
{
    return (2 * (len + breadth));
}

int main()
{
    int len, breadth;
    cout << "Enter length : ";
    cin >> len;
    cout << "Enter breadth : ";
    cin >> breadth;

    cout << "Area = " << area(len, breadth) << endl;
    cout << "Perimeter = " << perimeter(len, breadth);
    return 0;
}