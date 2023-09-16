#include <iostream>
using namespace std;

// Sum of digit using loop
int fun(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;

    // // if (n == 0)
    // //   return 0;
    // if (n < 10)
    //     return n;
    // return (fun(n / 10) + (n % 10));
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "The Sum of digits is : " << fun(n);
    return 0;
}
