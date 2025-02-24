#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // This is for initial spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // This is for left numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }

        // This is for right numbers
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}