#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 1; i <= n; i++) // outher loop
    {
        for (int j = 1; j <= n; j++) // inner loop
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    cout << "-------------------" << endl;

    int m = 4;
    int initial = 1;
    for (int i = 1; i <= m; i++) // outher loop
    {
        for (int j = 1; j <= m; j++) // inner loop
        {
            if (initial < 10)
            {
                cout << "0" << initial << " ";
            }
            else
            {
                cout << initial << " ";
            }
            initial++;
        }
        cout << endl;
    }
    return 0;
}