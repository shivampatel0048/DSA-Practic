#include <iostream>
using namespace std;

// 1st

// void fun(int n)
// {
//     if (n == 0)
//         return;
//     cout << n << endl;
//     fun(n - 1);
//     cout << n << endl;
// }

// int main()
// {
//     int n = 3;
//     fun(n);
//     return 0;
// }

// 2nd
void fun(int n)
{
    if (n == 0)
        return;
    fun(n - 1);
    cout << n << endl;
    fun(n - 1);
}

int main()
{
    int n = 3;
    fun(n);
    return 0;
}