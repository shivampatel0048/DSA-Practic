#include <iostream>
using namespace std;

//iterative solution
// int countDigit(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         n = n / 10;
//         ++count;
//     }
//     return count;
// }

int countDigit(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigit(n/10);
}

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;

    cout << "The number counting is : " << countDigit(n);
    return 0;
}