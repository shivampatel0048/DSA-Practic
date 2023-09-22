#include <iostream>
using namespace std;

// Count set bit

int main()
{
    int n = 5;
    int res = 0;
    while (n > 0)
    {
        // 1st Methode
        //  if (n % 2 != 0)
        //      res++;
        //  n = n / 2;

        // 2st Methode
        // if ((n & 1) == 1)
        //     res++;
        // n = n >> 1;

        // 3rd Methode
        // res = res + (n & 1);
        // n = n >> 1;

        // time complexity => Theta (Total Bit in n)

        // Brian Kerningam's Algorithm
        n = n & (n - 1);
        res++;

        // time complexity => Theta (Set Bit Count)
    }
    cout << res;

    return 0;
}