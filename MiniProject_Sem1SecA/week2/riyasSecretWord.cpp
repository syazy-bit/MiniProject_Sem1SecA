#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[100];
    cout << "Enter a word: ";
    cin >> word;

    int len = strlen(word);
    bool isPalindrome = true;

    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}
