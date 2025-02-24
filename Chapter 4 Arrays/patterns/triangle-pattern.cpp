#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }

        cout << endl;
    }

    cout << "-------------------" << endl;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    cout << "-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << "-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << "-------------------" << endl;

    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    cout << "-------------------" << endl;

    char ch2 = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch2 << " ";
            ch2++;
        }

        cout << endl;
    }

    cout << "-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = i + 1; j > 0; j--)
        {
            cout << char(ch + j - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}