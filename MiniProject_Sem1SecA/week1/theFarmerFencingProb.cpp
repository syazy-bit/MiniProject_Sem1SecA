/*🧮 Problem Title: The Farmer’s Fencing Problem
💡 Problem Story:
A farmer named Raju owns a rectangular piece of land.
He wants to build a fence around it and also plant crops inside the land.

To plan the fencing and crop area, he needs to calculate:

The area of the rectangle (for crops).

The perimeter of the rectangle (for fencing).

He knows the length and width of the land in meters.
Can you help Raju write a program to find both the area and perimeter of his land?

🧠 Task:
Write a program that takes two integers as input — the length and width of the rectangle —
and prints the area and perimeter.

📥 Input Format:
The first line contains two integers,
length and width — dimensions of the rectangle.

📤 Output Format:
Print two lines:

First line: "Area = <value>"

Second line: "Perimeter = <value>"*/

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
