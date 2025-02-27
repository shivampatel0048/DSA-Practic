#include <iostream>
using namespace std;

// 1st Approach: Using Recursion for Factorial Calculation
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int nCr_recursive(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// 2nd Approach: Using Iterative Method for Factorial Calculation
int factorial_iterative(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int nCr_iterative(int n, int r)
{
    return factorial_iterative(n) / (factorial_iterative(r) * factorial_iterative(n - r));
}

int main()
{
    int n = 8, r = 2;

    cout << "1st Approach (Recursive Factorial): nCr = " << nCr_recursive(n, r) << endl;
    cout << "2nd Approach (Iterative Factorial): nCr = " << nCr_iterative(n, r) << endl;

    return 0;
}