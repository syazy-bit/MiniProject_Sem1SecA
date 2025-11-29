#include <iostream>
using namespace std;

int main()
{
    const int students = 5;
    const int subjects = 3;

    int marks[students][subjects];

    cout << "Enter marks of 5 students in 3 subjects (Math, Physics, Computer Science):" << endl;

    for (int i = 0; i < students; i++)
    {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < subjects; j++)
        {
            cin >> marks[i][j];
        }
    }

    int highestMath = marks[0][0];
    int highestPhysics = marks[0][1];
    int highestCS = marks[0][2];

    for (int i = 1; i < students; i++)
    {
        if (marks[i][0] > highestMath)
            highestMath = marks[i][0];

        if (marks[i][1] > highestPhysics)
            highestPhysics = marks[i][1];

        if (marks[i][2] > highestCS)
            highestCS = marks[i][2];
    }

    cout << "Highest marks in Mathematics: " << highestMath << endl;
    cout << "Highest marks in Physics: " << highestPhysics << endl;
    cout << "Highest marks in Computer Science: " << highestCS << endl;

    return 0;
}