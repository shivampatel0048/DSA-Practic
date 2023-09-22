#include <iostream>
using namespace std;

void diviserOfNumber0(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "\t";
        }
    }
}

// Efficient Methode
void diviserOfNumber(int n)
{
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << "\t";
        }
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    diviserOfNumber(n);
    return 0;
}