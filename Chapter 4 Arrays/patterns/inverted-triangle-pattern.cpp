#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char c = 'A';

    // for (int i = 0; i < n; i++)
    // {
    //     c= c+i;
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << n - i<< " ";
    //     }
    //     cout << endl;
    // }

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

    return 0;
}