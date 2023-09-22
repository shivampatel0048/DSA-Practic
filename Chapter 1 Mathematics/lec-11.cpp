#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// void printprime(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << "\n";
//         }
//     }
// }

// Simple Sieve of Eratosthenes Methode
void sieve0(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << "\n";
        }
    }
}

// More Optimised Sieve of Eratosthenes Methode

void sieve1(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j = j + i) // there j = i*i Only
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << "\n";
        }
    }
}

// Shorter Implementation Sieve of Eratosthenes Methode

void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << "\n";
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
} //time complexity is : O(log(logn))

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    sieve(n);
    return 0;
}