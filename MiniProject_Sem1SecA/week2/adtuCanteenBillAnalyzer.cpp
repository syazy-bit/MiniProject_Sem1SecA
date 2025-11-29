#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int bill[100][100];
    int studentTotal[100] = {0};
    int dayTotal[100] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> bill[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << " total: Rs" << studentTotal[i] << endl;
    }

    int maxDay = 0;
    for (int j = 1; j < m; j++)
    {
        if (dayTotal[j] > dayTotal[maxDay])
        {
            maxDay = j;
        }
    }

    cout << "\nHighest collection on Day " << maxDay + 1 << endl;

    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++)
    {
        if (studentTotal[i] > maxSpend)
        {
            maxSpend = studentTotal[i];
        }
    }

    cout << "Highest spender: ";

    bool first = true;
    for (int i = 0; i < n; i++)
    {
        if (studentTotal[i] == maxSpend)
        {
            if (!first)
                cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }

    cout << endl;

    return 0;
}
