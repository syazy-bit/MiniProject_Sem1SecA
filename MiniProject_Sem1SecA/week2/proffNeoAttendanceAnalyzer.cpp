#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter total number of students ";
    cin >> n;

    int attendence[n];

    int present = 0, absent = 0;
    cout << "Enter attendence (1 for present, 0 for absent): ";
    for (int i = 0; i < n; i++)
    {
        cin >> attendence[i];
        if (attendence[i] == 1)
            present++;
        else if (attendence[i] == 0)
            absent++;
        else
            cout << "Invalid input at num " << i << endl;
    }
    cout << "Present " << present << endl;
    cout << "Abesent " << absent << endl;

    return 0;
}