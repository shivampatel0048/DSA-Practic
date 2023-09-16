#include <iostream>
#include <math.h>
using namespace std;

int power0(int x, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}
// time complexity is : O(n)

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int temp = power(x, n / 2);
    temp *= temp;
    if (n % 2 == 0)
    {
        return temp;
    }
    else
    {
        return temp * x;
    }
}
// time complexity is : theta(1)

int main()
{
    int x, y;
    cout << "Enter frist number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;

    cout << power(x, y);

    // cout<<pow(x,y);
    return 0;
}