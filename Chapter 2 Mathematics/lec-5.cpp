#include <iostream>
using namespace std;

int checkZeros(int n)
{
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    int count = 0;
    while (fact % 10 == 0)
    {
        ++count;
        fact /= 10;
    }
    return count;
}

int countTrailingZeros(int n) {
    int res = 0;
    for (int i = 5; i <= n; i=i*5) {
        res += n/i;
    }
    return res;
}

int main() // time complexity = Θ(log(n)) or O(log(n))
{
    int n;

    cout << "Enter a value : ";
    cin >> n;

    cout << "The Trailing Zeros in Factorial is : " << countTrailingZeros(n);
    return 0;
}