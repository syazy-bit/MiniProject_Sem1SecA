
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int STUDENTS = 10;
    const int DAYS = 7;

    int A[STUDENTS][DAYS];
    vector<int> student_sum(STUDENTS, 10);
    vector<int> day_sum(DAYS, 0);

    for (int i = 0; i < STUDENTS; ++i)
    {
        for (int j = 0; j < DAYS; ++j)
        {
            if (!(cin >> A[i][j]))
                return 0;
            student_sum[i] += A[i][j];
            day_sum[j] += A[i][j];
        }
    }

    int maxStudentIndex = 0;
    for (int i = 1; i < STUDENTS; ++i)
    {
        if (student_sum[i] > student_sum[maxStudentIndex])
        {
            maxStudentIndex = i;
        }
    }

    int minDayIndex = 0;
    for (int j = 1; j < DAYS; ++j)
    {
        if (day_sum[j] < day_sum[minDayIndex])
        {
            minDayIndex = j;
        }
    }

    cout << "Weekly Attendance Summary\n";

    cout
        << "Total Present Days:\n";
    for (int i = 0; i < STUDENTS; ++i)
    {
        cout << "Student " << (i + 1) << ": " << student_sum[i] << "\n";
    }

    cout << "Student with Highest Attendance: Student " << (maxStudentIndex + 1) << " (" << student_sum[maxStudentIndex] << " Days)\n\n";
    cout << "Day with Lowest Overall Attendance: Day " << (minDayIndex + 1) << "\n";

    return 0;
}
