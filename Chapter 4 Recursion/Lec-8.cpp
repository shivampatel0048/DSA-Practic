#include <iostream>
using namespace std;

// Factorial Using Recursion

// int fun(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * fun(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n : ";
//     cin >> n;

//     cout << fun(n);
//     return 0;
// }

// Fibonacci Number Using Recursion

int fun(int n)
{
    // if (n == 0)
    //     return 0;
    // if (n == 1)
    //     return 1;

    // OR
    if (n <= 1)
        return n;
    
    return fun(n - 1) + fun(n - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << fun(n);
    return 0;
}