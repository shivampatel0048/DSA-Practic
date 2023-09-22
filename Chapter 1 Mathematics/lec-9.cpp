#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0 || n == 1)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void primeFactors0(int n)
{
    if (checkPrime(n))
    {
        cout << n;
        return;
    }

    for (int i = 2; i <= n; ++i)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }
    }
}

// Efficient Methode
void primeFactors(int n)
{
    if (n <= 1)
    {
        return;
    }

    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1)
    {
        cout << n << " ";
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    primeFactors(n);

    return 0;
}
