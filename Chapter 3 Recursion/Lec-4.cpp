#include <iostream>
using namespace std;

// 1st

// int fun(int n)
// {
//     if (n == 1)
//         return 0;
//     else
//         return (1 + fun(n / 2));
// }

// int main()
// {
//     int n = 16;
//     cout << fun(n);
//     return 0;
// }

// 2nd

void fun(int n)
{
    if (n == 0)
        return;
    fun(n / 2);
    cout << (n % 2)<<" ";
}

int main()
{
    int n = 13;
    fun(n);
    return 0;
}