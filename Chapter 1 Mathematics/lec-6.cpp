#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

// Euclidean Algorithm
int gcd1(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

// Optimized Algorithm
int gcd2(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd2(b, a % b);
    }
}

int main()
{
    int a, b;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;

    cout << gcd2(a, b);
    return 0;
}