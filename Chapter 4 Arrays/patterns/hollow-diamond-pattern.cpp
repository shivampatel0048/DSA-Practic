#include <iostream>
using namespace std;

// 1st Approach
void approach1(int n)
{
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
}

// 2nd Approach
void approach2(int n)
{
    // Upper half of diamond
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // Print hollow pattern
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
                cout << " * ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // Lower half of diamond
    for (int i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        // Print hollow pattern
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
                cout << " * ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;

    cout << "1st Approach:" << endl;
    approach1(n);

    cout << "2nd Approach:" << endl;
    approach2(n);

    return 0;
}