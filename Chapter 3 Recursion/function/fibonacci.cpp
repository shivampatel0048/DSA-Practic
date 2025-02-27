#include <iostream>
using namespace std;

// 1st Approach: Using Recursion
int fibonacci_recursive(int n)
{
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// 2nd Approach: Using Iterative Method
int fibonacci_iterative(int n)
{
    if (n <= 1)
        return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n = 10;

    cout << "1st Approach (Recursive): Fibonacci(" << n << ") = " << fibonacci_recursive(n) << endl;
    cout << "2nd Approach (Iterative): Fibonacci(" << n << ") = " << fibonacci_iterative(n) << endl;

    return 0;
}