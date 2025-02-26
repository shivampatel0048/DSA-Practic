#include <iostream>
using namespace std;

// 1st Approach: Using characters
void approach1(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = n; j > i; j--)
        {
            cout << char(c + i) << " ";
        }
        cout << endl;
    }
}

// 2nd Approach: Using numbers
void approach2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = n; j > i; j--)
        {
            cout << n - i << " ";
        }
        cout << endl;
    }
}

// 3rd Approach: Using stars
void approach3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    char c = 'A';

    cout << "1st Approach: Using characters" << endl;
    approach1(n, c);

    cout << "2nd Approach: Using numbers" << endl;
    approach2(n);

    cout << "3rd Approach: Using stars" << endl;
    approach3(n);

    return 0;
}