#include <iostream>
using namespace std;

int main()
{
    int n;
    float mark, total = 0, average;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter marks of student " << i << ": ";
        cin >> mark;
        total += mark;
    }

    average = total / n;

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}