#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int records[n];

    cout << "Enter " << n << " profit/loss values (positive for profit, negative for loss): ";
    for (int i = 0; i < n; i++)
    {
        cin >> records[i];
    }
    int totalProfit = 0;
    int totalLoss = 0;

    for (int i = 0; i < n; i++)
    {
        if (records[i] > 0)
            totalProfit += records[i];
        else if (records[i] < 0)
            totalLoss += (-records[i]); // make neg val pos
    }
    int netBalance = totalProfit - totalLoss;

    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    return 0;
}