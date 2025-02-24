#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Upper half of diamond
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        // Print hollow pattern
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
                cout << " * ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // Lower half of diamond
    for (int i = n - 2; i >= 0; i--)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        // Print hollow pattern
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
                cout << " * ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}