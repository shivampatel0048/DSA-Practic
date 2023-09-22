#include <iostream>
using namespace std;

// Power of Two

bool isPower2(int n)
{
    // 3rd Methode
    return (n != 0) && ((n & (n - 1)) == 0);

    // 2st Methode
    // if (n == 0)
    // {
    //     return false;
    // }

    // return ((n & (n - 1)) == 0);

    // 1st Methode

    // while (n != 1)
    // {
    //     // if (n % 2 != 0)
    //     // {
    //     //     return false;
    //     // }
    //     // n = n / 2;

    // }
    // return true;
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << isPower2(n);

    return 0;
}